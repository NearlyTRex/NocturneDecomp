#pragma once

// Function prototypes for core/dskybox.cpp
// Generated from Ghidra function signatures

// Original: core_dskybox.cpp_staticInit_FUN_00490040
// Address: 00490040
void staticInit(void);

// Original: core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070
// Address: 00490070
SMRGLTextureBasic * initializeSkyboxTexture(SMRGLTextureBasic * texture);

// Original: core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0
// Address: 004900b0
void generateSkyDomeVertex(float * light_color, int u_coord, int v_coord, float * uv_offset);

// Original: core_dskybox.cpp_renderSkyDome_FUN_004901f0
// Address: 004901f0
void renderSkyDome(SMRGLTextureBasic * sky_texture, char * texture_name, float brightness_factor);
