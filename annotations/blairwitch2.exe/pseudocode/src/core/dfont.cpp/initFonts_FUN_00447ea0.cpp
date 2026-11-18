// Name: core_dfont.cpp_initFonts_FUN_00447ea0
// Address: 00447ea0
// Address Range: [[00447ea0, 00448635]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_initFonts_FUN_00447ea0(void)

#include "nocturne.h"

void __cdecl core_dfont_cpp_initFonts_FUN_00447ea0(void)

{
  CBitFont *pCVar1;
  CBitFont *pCVar2;
  CWinFont *pCVar3;
  CWinFont *pCVar4;
  
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  g_MediumFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\dfont.cpp";
    g_INT_01d046a4 = 0x41;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Medium font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
            (g_MediumFont,"nocfont.raw",0x136,0x1ae,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004a88d0(g_MediumFont);
  pCVar2 = g_MediumFont;
  g_MediumFont->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(g_MediumFont,1,0xc0,0xdf);
  pCVar2 = g_MediumFont;
  g_MediumFont->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  g_TinyFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\dfont.cpp";
    g_INT_01d046a4 = 0x51;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Tiny font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
            (g_TinyFont,"nocsmall.raw",0xf8,0x158,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004a88d0(g_TinyFont);
  pCVar2 = g_TinyFont;
  g_TinyFont->char_widths[0x20] = 5;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,2,0x20,0x7e);
  pCVar2 = g_TinyFont;
  g_TinyFont->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  g_ThemeFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\dfont.cpp";
    g_INT_01d046a4 = 0x60;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Theme font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
            (g_ThemeFont,"menufont.raw",0xfa,0x23f,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004a88d0(g_ThemeFont);
  pCVar2 = g_ThemeFont;
  g_ThemeFont->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(g_ThemeFont,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(g_ThemeFont,1,0xe0,0xff);
  pCVar2 = g_ThemeFont;
  g_ThemeFont->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  g_SmallEditorFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\dfont.cpp";
    g_INT_01d046a4 = 0x71;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Debug font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
            (g_SmallEditorFont,"fnte_pfd.RAW",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004a88d0(g_SmallEditorFont);
  pCVar2 = g_SmallEditorFont;
  g_SmallEditorFont->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,3,0x20,0x7e);
  pCVar2 = g_SmallEditorFont;
  g_SmallEditorFont->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  g_EditorFont = g_SmallEditorFont;
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  g_CBitFont_PTR_01511cc8 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\dfont.cpp";
    g_INT_01d046a4 = 0x84;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Console font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
            (g_CBitFont_PTR_01511cc8,"fnte_f.RAW",0x94,0xec,0xff);
  pCVar2 = g_CBitFont_PTR_01511cc8;
  g_CBitFont_PTR_01511cc8->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,3,0x20,0x7e);
  pCVar2 = g_CBitFont_PTR_01511cc8;
  g_CBitFont_PTR_01511cc8->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  g_EditorFont = g_SmallEditorFont;
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  g_MicroFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\dfont.cpp";
    g_INT_01d046a4 = 0x96;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Micro font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0(g_MicroFont,"micro.raw",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004a88d0(g_MicroFont);
  pCVar2 = g_MicroFont;
  g_MicroFont->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,1,0x20,0x7e);
  pCVar2 = g_MicroFont;
  g_MicroFont->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  g_CBitFont_PTR_01511cd0 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\dfont.cpp";
    g_INT_01d046a4 = 0xa5;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Hand font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
            (g_CBitFont_PTR_01511cd0,"dochand.raw",0x100,0x100,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004a88d0(g_CBitFont_PTR_01511cd0);
  pCVar2 = g_CBitFont_PTR_01511cd0;
  g_CBitFont_PTR_01511cd0->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(g_CBitFont_PTR_01511cd0,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(g_CBitFont_PTR_01511cd0,1,0xe0,0xff);
  pCVar2 = g_CBitFont_PTR_01511cd0;
  g_CBitFont_PTR_01511cd0->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  if (g_UseOSFonts == 0) {
    return;
  }
  pCVar3 = operator_new(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0058df90(pCVar3,g_OSFontName,0xe,2,2);
  }
  g_CWinFont_PTR_01511cd4 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\dfont.cpp";
    g_INT_01d046a4 = 0xb7;
    core_main_c_displayErrorAndQuit_FUN_004e4500("initFonts - Can't allocate gMediumOSFont");
  }
  pCVar4 = g_CWinFont_PTR_01511cd4;
  pCVar2 = g_MediumFont;
  g_MediumFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = operator_new(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0058df90(pCVar3,g_OSFontName,0x12,0,0);
  }
  g_CWinFont_PTR_01511cdc = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\dfont.cpp";
    g_INT_01d046a4 = 0xbd;
    core_main_c_displayErrorAndQuit_FUN_004e4500("initFonts - Can't allocate gThemeOSFont");
  }
  pCVar4 = g_CWinFont_PTR_01511cdc;
  pCVar2 = g_ThemeFont;
  g_ThemeFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = operator_new(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0058df90(pCVar3,g_OSFontName,0xc,0,0);
  }
  g_CWinFont_PTR_01511cd8 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\dfont.cpp";
    g_INT_01d046a4 = 0xc3;
    core_main_c_displayErrorAndQuit_FUN_004e4500("initFonts - Can't allocate gTinyOSFont");
  }
  pCVar4 = g_CWinFont_PTR_01511cd8;
  pCVar2 = g_TinyFont;
  g_TinyFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = operator_new(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0058df90(pCVar3,g_OSFontName,10,0,0);
  }
  g_CWinFont_PTR_01511ce0 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\dfont.cpp";
    g_INT_01d046a4 = 0xc9;
    core_main_c_displayErrorAndQuit_FUN_004e4500("initFonts - Can't allocate gDebugOSFont");
  }
  pCVar4 = g_CWinFont_PTR_01511ce0;
  pCVar2 = g_SmallEditorFont;
  g_SmallEditorFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  return;
}
