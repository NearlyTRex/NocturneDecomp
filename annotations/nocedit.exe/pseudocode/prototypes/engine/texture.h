#pragma once

// Function prototypes for engine/texture.cpp
// Generated from Ghidra function signatures

// Original: engine_texture.cpp_CTextureCache_ctor_FUN_005dcab0
// Address: 005dcab0
CTextureCache * __cdecl CTextureCache::ctor(CTextureCache *this_ptr,int max_texture_count);

// Original: engine_texture.cpp_CTextureCache_free_FUN_005dcb00
// Address: 005dcb00
int __cdecl CTextureCache::free(CTextureCache *this_ptr);

// Original: engine_texture.cpp_CTextureCache_reset_FUN_005dcb20
// Address: 005dcb20
void __cdecl CTextureCache::reset(CTextureCache *this_ptr);

// Original: engine_texture.cpp_CTextureCache_freeTextures_FUN_005dcb30
// Address: 005dcb30
void __cdecl CTextureCache::freeTextures(CTextureCache *this_ptr);

// Original: engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00
// Address: 005dcc00
void __cdecl CTextureCache::loadTexture(CTextureCache *cache,char *texture_name);

// Original: engine_texture.cpp_CTextureCache_findTexture_FUN_005dd180
// Address: 005dd180
int __cdecl CTextureCache::findTexture(CTextureCache *this_ptr,int hint_index,char *texture_name);

// Original: engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200
// Address: 005dd200
void __cdecl CTextureCache::setupTexture(CTextureCache *cache,int texture_index);

// Original: engine_texture.cpp_CTextureCache_getTextureCount_FUN_005dd570
// Address: 005dd570
int __cdecl CTextureCache::getTextureCount(CTextureCache *this_ptr);

// Original: engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580
// Address: 005dd580
void __cdecl CTextureCache::renderAllTextures(CTextureCache *this_ptr);

// Original: engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_005dd690
// Address: 005dd690
int __cdecl CTextureCache::getTextureCacheStats(CTextureCache *this_ptr,char *output_buffer);

// Original: engine_texture.cpp_initTextureCache_FUN_005dd760
// Address: 005dd760
CTextureCache * __cdecl initTextureCache(void);

// Original: engine_texture.cpp_freeTextureCache_FUN_005dd7a0
// Address: 005dd7a0
void __cdecl freeTextureCache(void);

// Original: engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
// Address: 005dd800
SMRGLHeaderExtended * __cdecl ensureTextureLoaded(SMRGLTextureBasic *texture);

// Original: engine_texture.cpp_loadTextureAndGetData_FUN_005dd8c0
// Address: 005dd8c0
SMRGLHeaderExtended * __cdecl loadTextureAndGetData(SMRGLTextureBasic *texture_info);

// Original: engine_texture.cpp_clearTextureCache_FUN_005dd8e0
// Address: 005dd8e0
void __cdecl clearTextureCache(void);

// Original: engine_texture.cpp_doNothing_FUN_005dd8f0
// Address: 005dd8f0
void __cdecl doNothing(void);

// Original: engine_texture.cpp_updateTextureWithPalette_FUN_005dd900
// Address: 005dd900
void __cdecl updateTextureWithPalette(SMRGLTextureBasic *texture_to_load,SMRGLTextureBasic *texture_to_update);

// Original: engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930
// Address: 005dd930
void __cdecl loadAndUpdateTexture(SMRGLTextureBasic *tex_to_load,SMRGLTextureBasic *tex_to_update,SRGBColorPalette *palette_data);

// Original: engine_texture.cpp_enableTextureFiltering_FUN_005dd960
// Address: 005dd960
void __cdecl enableTextureFiltering(int enabled);

// Original: engine_texture.cpp_getTextureCacheStats_FUN_005dd970
// Address: 005dd970
void __cdecl getTextureCacheStats(char *output_buffer);

// Original: engine_texture.cpp_renderTextureAtlas_FUN_005dd990
// Address: 005dd990
void __cdecl renderTextureAtlas(void);

// Original: engine_texture.cpp_getCurrentTexture_FUN_005dd9c0
// Address: 005dd9c0
SMRGLTextureBasic * __cdecl getCurrentTexture(void);
