// Name: core_dfont.cpp_initFonts_FUN_0045e000
// Address: 0045e000
// Address Range: [[0045e000, 0045e795]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_initFonts_FUN_0045e000(void)

#include "nocturne.h"

void __cdecl core_dfont_cpp_initFonts_FUN_0045e000(void)

{
  CBitFont *pCVar1;
  CBitFont *pCVar2;
  CWinFont *pCVar3;
  CWinFont *pCVar4;
  
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004c0b40(pCVar1);
  }
  g_MediumFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dfont.cpp";
    g_INT_01d1d404 = 0x41;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Medium font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0
            (g_MediumFont,"nocfont.raw",0x136,0x1ae,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004c18b0(g_MediumFont);
  pCVar2 = g_MediumFont;
  g_MediumFont->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(g_MediumFont,1,0xc0,0xdf);
  pCVar2 = g_MediumFont;
  g_MediumFont->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004c45d0(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004c0b40(pCVar1);
  }
  g_TinyFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dfont.cpp";
    g_INT_01d1d404 = 0x51;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Tiny font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0
            (g_TinyFont,"nocsmall.raw",0xf8,0x158,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004c18b0(g_TinyFont);
  pCVar2 = g_TinyFont;
  g_TinyFont->char_widths[0x20] = 5;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(pCVar2,2,0x20,0x7e);
  pCVar2 = g_TinyFont;
  g_TinyFont->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004c45d0(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004c0b40(pCVar1);
  }
  g_ThemeFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dfont.cpp";
    g_INT_01d1d404 = 0x60;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Theme font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0
            (g_ThemeFont,"menufont.raw",0xfa,0x23f,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004c18b0(g_ThemeFont);
  pCVar2 = g_ThemeFont;
  g_ThemeFont->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(g_ThemeFont,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(g_ThemeFont,1,0xe0,0xff);
  pCVar2 = g_ThemeFont;
  g_ThemeFont->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004c45d0(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004c0b40(pCVar1);
  }
  g_SmallEditorFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dfont.cpp";
    g_INT_01d1d404 = 0x71;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Debug font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0
            (g_SmallEditorFont,"fnte_pfd.RAW",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004c18b0(g_SmallEditorFont);
  pCVar2 = g_SmallEditorFont;
  g_SmallEditorFont->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(pCVar2,3,0x20,0x7e);
  pCVar2 = g_SmallEditorFont;
  g_SmallEditorFont->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004c45d0(pCVar2,1);
  g_CBitFont_PTR_01c3eb50 = g_SmallEditorFont;
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004c0b40(pCVar1);
  }
  g_CBitFont_PTR_0152d24c = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dfont.cpp";
    g_INT_01d1d404 = 0x84;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Console font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0
            (g_CBitFont_PTR_0152d24c,"fnte_f.RAW",0x94,0xec,0xff);
  pCVar2 = g_CBitFont_PTR_0152d24c;
  g_CBitFont_PTR_0152d24c->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(pCVar2,3,0x20,0x7e);
  pCVar2 = g_CBitFont_PTR_0152d24c;
  g_CBitFont_PTR_0152d24c->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004c45d0(pCVar2,1);
  g_CBitFont_PTR_01c3eb50 = g_SmallEditorFont;
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004c0b40(pCVar1);
  }
  g_MicroFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dfont.cpp";
    g_INT_01d1d404 = 0x96;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Micro font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0(g_MicroFont,"micro.raw",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004c18b0(g_MicroFont);
  pCVar2 = g_MicroFont;
  g_MicroFont->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(pCVar2,1,0x20,0x7e);
  pCVar2 = g_MicroFont;
  g_MicroFont->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004c45d0(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004c0b40(pCVar1);
  }
  g_CBitFont_PTR_0152d254 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dfont.cpp";
    g_INT_01d1d404 = 0xa5;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Hand font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0
            (g_CBitFont_PTR_0152d254,"dochand.raw",0x100,0x100,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004c18b0(g_CBitFont_PTR_0152d254);
  pCVar2 = g_CBitFont_PTR_0152d254;
  g_CBitFont_PTR_0152d254->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(g_CBitFont_PTR_0152d254,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(g_CBitFont_PTR_0152d254,1,0xe0,0xff);
  pCVar2 = g_CBitFont_PTR_0152d254;
  g_CBitFont_PTR_0152d254->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004c45d0(pCVar2,1);
  if (g_UseOSFonts == 0) {
    return;
  }
  pCVar3 = operator_new(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_005b1ad0(pCVar3,g_OSFontName,0xe,2,2);
  }
  g_CWinFont_PTR_0152d258 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dfont.cpp";
    g_INT_01d1d404 = 0xb7;
    core_main_c_displayErrorAndQuit_FUN_005030e0("initFonts - Can't allocate gMediumOSFont");
  }
  pCVar4 = g_CWinFont_PTR_0152d258;
  pCVar2 = g_MediumFont;
  g_MediumFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = operator_new(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_005b1ad0(pCVar3,g_OSFontName,0x12,0,0);
  }
  g_CWinFont_PTR_0152d260 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dfont.cpp";
    g_INT_01d1d404 = 0xbd;
    core_main_c_displayErrorAndQuit_FUN_005030e0("initFonts - Can't allocate gThemeOSFont");
  }
  pCVar4 = g_CWinFont_PTR_0152d260;
  pCVar2 = g_ThemeFont;
  g_ThemeFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = operator_new(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_005b1ad0(pCVar3,g_OSFontName,0xc,0,0);
  }
  g_CWinFont_PTR_0152d25c = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dfont.cpp";
    g_INT_01d1d404 = 0xc3;
    core_main_c_displayErrorAndQuit_FUN_005030e0("initFonts - Can't allocate gTinyOSFont");
  }
  pCVar4 = g_CWinFont_PTR_0152d25c;
  pCVar2 = g_TinyFont;
  g_TinyFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = operator_new(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_005b1ad0(pCVar3,g_OSFontName,10,0,0);
  }
  g_CWinFont_PTR_0152d264 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dfont.cpp";
    g_INT_01d1d404 = 0xc9;
    core_main_c_displayErrorAndQuit_FUN_005030e0("initFonts - Can't allocate gDebugOSFont");
  }
  pCVar4 = g_CWinFont_PTR_0152d264;
  pCVar2 = g_SmallEditorFont;
  g_SmallEditorFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  return;
}
