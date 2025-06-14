# Valid Light Fix

Reimplements 3 removed hooks from community shaders as a standalone plugin.
These modify the behavior related to which lights are considered valid when the game sorts lights sources. 

In some scenarios it appears that these sorting functions become a bottleneck, drastically lowering fps.
