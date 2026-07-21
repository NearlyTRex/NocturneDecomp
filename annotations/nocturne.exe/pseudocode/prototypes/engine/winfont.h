#pragma once

// Function prototypes for engine/winfont.cpp
// Generated from Ghidra function signatures

// Original: engine_winfont.cpp_CWinFont_ctor_FUN_00557f50
// Address: 00557f50
undefined4 * __cdecl CWinFont::ctor(undefined4 param_1,LPCSTR param_2,int param_3,undefined4 param_4,undefined4 param_5);

// Original: engine_winfont.cpp_CWinFont_dtor_FUN_00558000
// Address: 00558000
undefined4 * CWinFont::dtor(undefined4 *param_1,byte param_2);

// Original: engine_winfont.cpp_CWinFont_drawText_FUN_00558060
// Address: 00558060
undefined4 CWinFont::drawText(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005580b0
// Address: 005580b0
void __cdecl CWinFont::setColorAndDrawText(int *param_1,undefined4 param_2,LPCSTR param_3,int param_4,int param_5,int param_6,int param_7);

// Original: engine_winfont.cpp_CWinFont_createTextBackground_FUN_005584d0
// Address: 005584d0
bool __cdecl CWinFont::createTextBackground(int param_1,int param_2,int param_3);

// Original: engine_winfont.cpp_CWinFont_reset_FUN_005586a0
// Address: 005586a0
void __cdecl CWinFont::reset(int param_1);

// Original: engine_winfont.cpp_CWinFont_getStringWidth_FUN_00558710
// Address: 00558710
undefined4 CWinFont::getStringWidth(int param_1,LPCSTR param_2);

// Original: engine_winfont.cpp_CWinFont_getStringHeight_FUN_00558770
// Address: 00558770
int CWinFont::getStringHeight(int param_1,LPCSTR param_2);

// Original: engine_winfont.cpp_CWinFont_getLineSpacing_FUN_005587e0
// Address: 005587e0
undefined4 CWinFont::getLineSpacing(void);
