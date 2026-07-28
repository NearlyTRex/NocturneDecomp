#pragma once

// Function prototypes for core/dskybox.cpp
// Generated from Ghidra function signatures

// Original: core_dskybox.cpp_staticInit_FUN_004633d0
// Address: 004633d0
void __cdecl staticInit(void);

// Original: core_dskybox.cpp_initializeSkyboxTexture_FUN_00463400
// Address: 00463400
SMRGLSkyTexture * __cdecl initializeSkyboxTexture(SMRGLSkyTexture *texture);

// Original: core_dskybox.cpp_generateSkyDomeVertex_FUN_00463440
// Address: 00463440
void __cdecl generateSkyDomeVertex(SMRGLSkyTexture *sky_texture,int u_coord,int v_coord,int vertex_index);

// Original: core_dskybox.cpp_renderSkyDome_FUN_00463580
// Address: 00463580
void __cdecl renderSkyDome(SMRGLSkyTexture *sky_texture,char *texture_name,int brightness_factor);
