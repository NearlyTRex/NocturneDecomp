#pragma once

// Function prototypes for engine/light.cpp
// Generated from Ghidra function signatures

// Original: engine_light.cpp_doNothing_FUN_00505480
// Address: 00505480
void doNothing(void);

// Original: engine_light.cpp_setAmbientLightLevel_FUN_00505490
// Address: 00505490
void setAmbientLightLevel(int light_level);

// Original: engine_light.cpp_getAmbientLightLevel_FUN_005054c0
// Address: 005054c0
int getAmbientLightLevel(void);

// Original: engine_light.cpp_setDirectionalLightVector_FUN_005054d0
// Address: 005054d0
void setDirectionalLightVector(int dir_x, int dir_y, int dir_z);

// Original: engine_light.cpp_setSpecularEnabled_FUN_00505500
// Address: 00505500
void setSpecularEnabled(int enabled);

// Original: engine_light.cpp_setLightingMultipliers_FUN_00505510
// Address: 00505510
void setLightingMultipliers(int diffuse_multiplier, int specular_multiplier);

// Original: engine_light.cpp_calculatePhongLighting_FUN_00505530
// Address: 00505530
int calculatePhongLighting(int world_x, int world_y, int world_z);

// Original: engine_light.cpp_calculateLighting_FUN_00505780
// Address: 00505780
int calculateLighting(int normal_x, int normal_y, int normal_z);

// Original: engine_light.cpp_calculateVertexLighting_FUN_00505830
// Address: 00505830
int calculateVertexLighting(int unused_param, CVector3i * vertex_position);

// Original: engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850
// Address: 00505850
void calculateAndStoreVertexLight(int vertex_index, CVector3i * vertex_position);
