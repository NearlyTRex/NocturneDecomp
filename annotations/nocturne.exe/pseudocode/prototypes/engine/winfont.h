#pragma once

// Function prototypes for engine/winfont.cpp
// Generated from Ghidra function signatures

// Original: engine_winfont.cpp_CWinFont_ctor_FUN_00557f50
// Address: 00557f50
CWinFont * __cdecl CWinFont::ctor(CWinFont *this_ptr,char *font_name,int font_height,int y_offset1,int y_offset2);

// Original: engine_winfont.cpp_CWinFont_dtor_FUN_00558000
// Address: 00558000
CWinFont * CWinFont::dtor(CWinFont *param_1,byte param_2);

// Original: engine_winfont.cpp_CWinFont_drawText_FUN_00558060
// Address: 00558060
undefined4 CWinFont::drawText(CWinFont *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6);

// Original: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005580b0
// Address: 005580b0
void __cdecl CWinFont::setColorAndDrawText(CWinFont *this_ptr,HDC device_context,char *text_string,int x,int y,int foreground_color,int background_color);

// Original: engine_winfont.cpp_CWinFont_createTextBackground_FUN_005584d0
// Address: 005584d0
int __cdecl CWinFont::createTextBackground(CWinFont *this_ptr,int width,int height);

// Original: engine_winfont.cpp_CWinFont_reset_FUN_005586a0
// Address: 005586a0
void __cdecl CWinFont::reset(CWinFont *this_ptr);

// Original: engine_winfont.cpp_CWinFont_getStringWidth_FUN_00558710
// Address: 00558710
undefined4 CWinFont::getStringWidth(CWinFont *param_1,LPCSTR param_2);

// Original: engine_winfont.cpp_CWinFont_getStringHeight_FUN_00558770
// Address: 00558770
int CWinFont::getStringHeight(CWinFont *param_1,LPCSTR param_2);

// Original: engine_winfont.cpp_CWinFont_getLineSpacing_FUN_005587e0
// Address: 005587e0
undefined4 CWinFont::getLineSpacing(void);
