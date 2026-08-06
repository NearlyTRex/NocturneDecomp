#pragma once

// Function prototypes for engine/texture.cpp
// Generated from Ghidra function signatures

// Original: engine_texture.cpp_CTextureCache_FUN_00544de0
// Address: 00544de0
CTextureCache * __cdecl CTextureCache(CTextureCache *this_ptr,int max_texture_count);

// Original: engine_texture.cpp_CTextureCache_free_FUN_00544e30
// Address: 00544e30
int __cdecl CTextureCache::free(CTextureCache *this_ptr);

// Original: engine_texture.cpp_CTextureCache_FUN_00544e50
// Address: 00544e50
void __cdecl CTextureCache(CTextureCache *this_ptr);

// Original: engine_texture.cpp_CTextureCache_freeTextures_FUN_00544e60
// Address: 00544e60
void __cdecl CTextureCache::freeTextures(CTextureCache *this_ptr);

// Original: engine_texture.cpp_CTextureCache_loadTexture_FUN_00544ef0
// Address: 00544ef0
int __cdecl CTextureCache::loadTexture(CTextureCache *cache,char *texture_name);

// Original: engine_texture.cpp_CTextureCache_findTexture_FUN_00545390
// Address: 00545390
int __cdecl CTextureCache::findTexture(CTextureCache *this_ptr,int hint_index,char *texture_name);

// Original: engine_texture.cpp_CTextureCache_setupTexture_FUN_00545410
// Address: 00545410
void __cdecl CTextureCache::setupTexture(CTextureCache *cache,int texture_index);

// Original: engine_texture.cpp_CTextureCache_FUN_00545700
// Address: 00545700
void __cdecl CTextureCache(CTextureCache *this_ptr);

// Original: engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00545810
// Address: 00545810
int __cdecl CTextureCache::getTextureCacheStats(CTextureCache *this_ptr,char *output_buffer);

// Original: engine_texture.cpp_FUN_005458a0
// Address: 005458a0
void __cdecl FUN_005458a0(void);

// Original: engine_texture.cpp_FUN_005458d0
// Address: 005458d0
void __cdecl FUN_005458d0(void);

// Original: engine_texture.cpp_ensureTextureLoaded_FUN_00545920
// Address: 00545920
SMRGLHeaderExtended * __cdecl ensureTextureLoaded(SMRGLTextureBasic *texture);

// Original: engine_texture.cpp_loadTextureAndGetData_FUN_005459d0
// Address: 005459d0
SMRGLHeaderExtended * __cdecl loadTextureAndGetData(SMRGLTextureBasic *texture_info);

// Original: engine_texture.cpp_FUN_005459f0
// Address: 005459f0
void __cdecl FUN_005459f0(void);

// Original: engine_texture.cpp_updateTextureWithPalette_FUN_00545a10
// Address: 00545a10
void __cdecl updateTextureWithPalette(SMRGLTextureBasic *texture);

// Original: engine_texture.cpp_loadAndUpdateTexture_FUN_00545a40
// Address: 00545a40
void __cdecl loadAndUpdateTexture(SMRGLTextureBasic *texture,SRGBColorPalette *palette);

// Original: engine_texture.cpp_getTextureCacheStats_FUN_00545a80
// Address: 00545a80
void __cdecl getTextureCacheStats(char *output_buffer);

// Original: engine_texture.cpp_renderTextureAtlas_FUN_00545aa0
// Address: 00545aa0
void __cdecl renderTextureAtlas(void);

// Original: engine_texture.cpp_getCurrentTexture_FUN_00545ad0
// Address: 00545ad0
SMRGLTextureBasic * __cdecl getCurrentTexture(void);
