#pragma once

// Function prototypes for engine/light.cpp
// Generated from Ghidra function signatures

// Original: engine_light.cpp_setAmbientLightLevel_FUN_004c69d0
// Address: 004c69d0
void __cdecl setAmbientLightLevel(int param_1);

// Original: engine_light.cpp_setDirectionalLightVector_FUN_004c6a10
// Address: 004c6a10
void __cdecl setDirectionalLightVector(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: engine_light.cpp_calculatePhongLighting_FUN_004c6a70
// Address: 004c6a70
int __cdecl calculatePhongLighting(int param_1,int param_2,int param_3);

// Original: engine_light.cpp_calculateLighting_FUN_004c6cc0
// Address: 004c6cc0
int __cdecl calculateLighting(int param_1,int param_2,int param_3);

// Original: engine_light.cpp_calculateAndStoreVertexLight_FUN_004c6d90
// Address: 004c6d90
void calculateAndStoreVertexLight(int param_1,undefined4 *param_2);
