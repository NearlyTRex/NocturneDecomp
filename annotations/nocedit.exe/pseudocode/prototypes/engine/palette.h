#pragma once

// Function prototypes for engine/palette.cpp
// Generated from Ghidra function signatures

// Original: engine_palette.cpp_CFont_ctor_FUN_00544eb0
// Address: 00544eb0
CFont * __cdecl CFont::ctor(CFont *this_ptr);

// Original: engine_palette.cpp_CFont_dtor_FUN_00544ec0
// Address: 00544ec0
CFont * __cdecl CFont::dtor(CFont *this_ptr,uint flags);

// Original: engine_palette.cpp_CFont_drawText_FUN_00544ed0
// Address: 00544ed0
int __cdecl CFont::drawText(CFont *this_ptr,char *text,int x,int y,int foreground_color,int background_color);

// Original: engine_palette.cpp_CFont_getLineSpacing_FUN_00544f00
// Address: 00544f00
int __cdecl CFont::getLineSpacing(CFont *this_ptr);

// Original: engine_palette.cpp_CPaletteManager_ctor_FUN_00544f10
// Address: 00544f10
CPaletteManager * __cdecl CPaletteManager::ctor(CPaletteManager *this_ptr,int max_texture_count,int max_pixel_count);

// Original: engine_palette.cpp_CPaletteManager_dtor_FUN_00544f80
// Address: 00544f80
CPaletteManager * __cdecl CPaletteManager::dtor(CPaletteManager *this_ptr,uint flags);

// Original: engine_palette.cpp_CPaletteManager_reset_FUN_00544fb0
// Address: 00544fb0
void __cdecl CPaletteManager::reset(CPaletteManager *this_ptr);

// Original: engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0
// Address: 00544fc0
void __cdecl CPaletteManager::addTexture(CPaletteManager *this_ptr,char *filename);

// Original: engine_palette.cpp_CPaletteManager_scanTextures_FUN_00545060
// Address: 00545060
void __cdecl CPaletteManager::scanTextures(CPaletteManager *this_ptr,SMRGLHeaderExtended *mrgl_data);

// Original: engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180
// Address: 00545180
int __cdecl CPaletteManager::createOutputPalette(CPaletteManager *this_ptr,char *output_filename,int num_palette_entries);
