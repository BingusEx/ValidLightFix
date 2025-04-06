
namespace {



	//This is wholesale taken form community shaders. These hooks were removed an old commit due them beeing deemed unececairy
	//returning false for all also fixes perf but appears to remove lighting for inventory items

	struct ValidLight1 {
		static bool thunk(RE::BSShaderProperty* a_property, RE::BSLight* a_light) {
			//return false;
			return func(a_property, a_light) && ((!netimmerse_cast<RE::BSLightingShaderProperty*>(a_property)) || (a_light->portalStrict || !a_light->portalGraph || skyrim_cast<RE::BSShadowLight*>(a_light)));
		}
		static inline REL::Relocation<decltype(thunk)> func;
	};

	struct ValidLight2 {
		static bool thunk(RE::BSShaderProperty* a_property, RE::BSLight* a_light) {
			//return false;
			return func(a_property, a_light) && ((!netimmerse_cast<RE::BSLightingShaderProperty*>(a_property)) || (a_light->portalStrict || !a_light->portalGraph || skyrim_cast<RE::BSShadowLight*>(a_light)));
		}
		static inline REL::Relocation<decltype(thunk)> func;
	};

	struct ValidLight3 {
		static bool thunk(RE::BSShaderProperty* a_property, RE::BSLight* a_light) {
			//return false;
			return func(a_property, a_light) && ((!netimmerse_cast<RE::BSLightingShaderProperty*>(a_property)) || (a_light->portalStrict || !a_light->portalGraph || skyrim_cast<RE::BSShadowLight*>(a_light)));
		}
		static inline REL::Relocation<decltype(thunk)> func;
	};

	void Install() {
		::stl::write_thunk_call<ValidLight1>(REL::RelocationID(100994, 107781).address() + 0x92);
		::stl::write_thunk_call<ValidLight2>(REL::RelocationID(100997, 107784).address() + REL::Relocate(0x139, 0x12A));
		::stl::write_thunk_call<ValidLight3>(REL::RelocationID(101296, 108283).address() + REL::Relocate(0xB7, 0x7E));
	}
}

SKSEPluginLoad(const LoadInterface * a_skse) {
	Init(a_skse);
	Install();
	return(true);
}

SKSEPluginInfo(
	.Version = REL::Version{ 1, 0, 0, 0 },
	.Name = "ValidLightFix",
	.Author = "BingusEx(Arial)",
	.StructCompatibility = SKSE::StructCompatibility::Independent,
	.RuntimeCompatibility = SKSE::VersionIndependence::AddressLibrary
);


