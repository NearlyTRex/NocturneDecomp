#pragma once

// Function prototypes for engine/light.cpp
// Generated from Ghidra function signatures

// Original: engine_light.cpp_setAmbientLightLevel_FUN_004c69d0
// Address: 004c69d0
void __cdecl setAmbientLightLevel(int light_level);

// Original: engine_light.cpp_FUN_004c6a00
// Address: 004c6a00
undefined4 FUN_004c6a00(void);

// Original: engine_light.cpp_setDirectionalLightVector_FUN_004c6a10
// Address: 004c6a10
void __cdecl setDirectionalLightVector(int dir_x,int dir_y,int dir_z);

// Original: engine_light.cpp_FUN_004c6a40
// Address: 004c6a40
void FUN_004c6a40(void);

// Original: engine_light.cpp_setLightingMultipliers_FUN_004c6a50
// Address: 004c6a50
void __cdecl setLightingMultipliers(int diffuse_multiplier,int specular_multiplier);

// Original: engine_light.cpp_calculatePhongLighting_FUN_004c6a70
// Address: 004c6a70
int __cdecl calculatePhongLighting(int world_x,int world_y,int world_z);

// Original: engine_light.cpp_calculateLighting_FUN_004c6cc0
// Address: 004c6cc0
int __cdecl calculateLighting(int normal_x,int normal_y,int normal_z);

// Original: engine_light.cpp_FUN_004c6d70
// Address: 004c6d70
void FUN_004c6d70(void);

// Original: engine_light.cpp_calculateAndStoreVertexLight_FUN_004c6d90
// Address: 004c6d90
void __cdecl calculateAndStoreVertexLight(int vertex_index,CVector3i *vertex_position);
