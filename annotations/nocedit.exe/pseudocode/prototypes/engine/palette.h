#pragma once

// Function prototypes for engine/palette.cpp
// Generated from Ghidra function signatures

// Original: engine_palette.cpp_CFont_ctor_FUN_00544eb0
// Address: 00544eb0
CFont * __cdecl CFont::ctor(CFont *this_ptr);

// Original: engine_palette.cpp_CFont_dtor_FUN_00544ec0
// Address: 00544ec0
CFont * __cdecl CFont::dtor(CFont *this_ptr);

// Original: engine_palette.cpp_CFont_drawText_FUN_00544ed0
// Address: 00544ed0
void __cdecl CFont::drawText(CFont *this_ptr,int param1,int param2,int param3,int param4,int param5);

// Original: engine_palette.cpp_CFont_getLineSpacing_FUN_00544f00
// Address: 00544f00
int __cdecl CFont::getLineSpacing(void);

// Original: engine_palette.cpp_CPaletteManager_ctor_FUN_00544f10
// Address: 00544f10
CPaletteManager * __cdecl CPaletteManager::ctor(CPaletteManager *this_ptr);

// Original: engine_palette.cpp_CPaletteManager_dtor_FUN_00544f80
// Address: 00544f80
CPaletteManager * __cdecl CPaletteManager::dtor(CPaletteManager *this_ptr);

// Original: engine_palette.cpp_CPaletteManager_FUN_00544fb0
// Address: 00544fb0
void __cdecl CPaletteManager(CPaletteManager *this_ptr);

// Original: engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fbe
// Address: 00544fbe
void __cdecl CPaletteManager::addTexture(CPaletteManager *this_ptr,char *filename);

// Original: engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0
// Address: 00544fc0
void __cdecl CPaletteManager::addTexture(void);

// Original: engine_palette.cpp_CPaletteManager_FUN_00545060
// Address: 00545060
SMRGLHeaderExtended * __cdecl CPaletteManager(CPaletteManager *this_ptr,SMRGLHeaderExtended *unk);

// Original: engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180
// Address: 00545180
int __cdecl CPaletteManager::createOutputPalette(void);
