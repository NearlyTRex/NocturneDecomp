#pragma once

// Function prototypes for engine/texture.cpp
// Generated from Ghidra function signatures

// Original: engine_texture.cpp_CTextureCache_loadTexture_FUN_00544ef0
// Address: 00544ef0
void __cdecl CTextureCache::loadTexture(undefined4 *param_1,char *param_2);

// Original: engine_texture.cpp_CTextureCache_findTexture_FUN_00545390
// Address: 00545390
int __cdecl CTextureCache::findTexture(int param_1,int param_2,undefined4 param_3);

// Original: engine_texture.cpp_CTextureCache_setupTexture_FUN_00545410
// Address: 00545410
void CTextureCache::setupTexture(int param_1,int param_2);

// Original: engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00545810
// Address: 00545810
void __cdecl CTextureCache::getTextureCacheStats(int *param_1,undefined4 param_2);

// Original: engine_texture.cpp_ensureTextureLoaded_FUN_00545920
// Address: 00545920
int __cdecl ensureTextureLoaded(int param_1);

// Original: engine_texture.cpp_loadTextureAndGetData_FUN_005459d0
// Address: 005459d0
int loadTextureAndGetData(int param_1);

// Original: engine_texture.cpp_loadAndUpdateTexture_FUN_00545a40
// Address: 00545a40
void __cdecl loadAndUpdateTexture(undefined4 param_1,undefined4 param_2);

// Original: engine_texture.cpp_getTextureCacheStats_FUN_00545a80
// Address: 00545a80
void __cdecl getTextureCacheStats(undefined4 param_1);

// Original: engine_texture.cpp_getCurrentTexture_FUN_00545ad0
// Address: 00545ad0
undefined1 * __cdecl getCurrentTexture(void);
