
SKSEPluginLoad(const LoadInterface * a_skse) {
	
	auto *plugin  = PluginDeclaration::GetSingleton();
	auto version = plugin->GetVersion();
	Init(a_skse);
	return(true);
}

SKSEPluginInfo(
	.Version = REL::Version{ 2, 0, 0, 0 },
	.Name = "ValidLightFix",
	.Author = "BingusEx(Arial)",
	.StructCompatibility = SKSE::StructCompatibility::Independent,
	.RuntimeCompatibility = SKSE::VersionIndependence::AddressLibrary
);


