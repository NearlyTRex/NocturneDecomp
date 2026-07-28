#pragma once

// Function prototypes for engine/palette.cpp
// Generated from Ghidra function signatures

// Original: engine_palette.cpp_CFont_ctor_FUN_004eefb0
// Address: 004eefb0
CFont * __cdecl CFont::ctor(CFont *this_ptr);

// Original: engine_palette.cpp_CFont_dtor_FUN_004eefc0
// Address: 004eefc0
CFont * __cdecl CFont::dtor(CFont *this_ptr,uint flags);

// Original: engine_palette.cpp_CFont_drawText_FUN_004eefd0
// Address: 004eefd0
int __cdecl CFont::drawText(CFont *this_ptr,char *text,int x,int y,int foreground_color,int background_color);

// Original: engine_palette.cpp_CFont_getLineSpacing_FUN_004ef000
// Address: 004ef000
undefined4 CFont::getLineSpacing(void);
