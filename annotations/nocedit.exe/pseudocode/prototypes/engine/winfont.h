#pragma once

// Function prototypes for engine/winfont.cpp
// Generated from Ghidra function signatures

// Original: engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0
// Address: 005f22e0
CWinFont * __cdecl CWinFont::ctor(CWinFont *this_ptr,char *font_name,int font_height,int font_width);

// Original: engine_winfont.cpp_CWinFont_dtor_FUN_005f2390
// Address: 005f2390
CWinFont * __cdecl CWinFont::dtor(CWinFont *this_ptr,uint flags);

// Original: engine_winfont.cpp_CWinFont_drawText_FUN_005f23f0
// Address: 005f23f0
int __cdecl CWinFont::drawText(CWinFont *this_ptr,int x_position,int y_position,char *text_string,int text_color, int draw_flags);

// Original: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440
// Address: 005f2440
void __cdecl CWinFont::setColorAndDrawText(CWinFont *this_ptr,HDC device_context,int x_position,int y_position,char *text_string, int foreground_color,int background_color);

// Original: engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
// Address: 005f2860
int __cdecl CWinFont::createTextBackground(CWinFont *this_ptr,int width,int height);

// Original: engine_winfont.cpp_CWinFont_reset_FUN_005f2a30
// Address: 005f2a30
void __cdecl CWinFont::reset(CWinFont *this_ptr);

// Original: engine_winfont.cpp_CWinFont_getStringWidth_FUN_005f2aa0
// Address: 005f2aa0
int __cdecl CWinFont::getStringWidth(CWinFont *this_ptr,char *text_string);

// Original: engine_winfont.cpp_CWinFont_getStringHeight_FUN_005f2b00
// Address: 005f2b00
int __cdecl CWinFont::getStringHeight(CWinFont *this_ptr,char *text_string);

// Original: engine_winfont.cpp_CWinFont_getLineSpacing_FUN_005f2b70
// Address: 005f2b70
int __cdecl CWinFont::getLineSpacing(void);
