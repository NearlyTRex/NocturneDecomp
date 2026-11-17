// Name: core_dfont.cpp_initFonts_FUN_00459f50
// Address: 00459f50
// Address Range: [[00459f50, 0045a8cf]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_initFonts_FUN_00459f50(void)

#include "nocturne.h"

void __cdecl core_dfont_cpp_initFonts_FUN_00459f50(void)

{
  CBitFont *pCVar1;
  CBitFont *pCVar2;
  CWinFont *pCVar3;
  CWinFont *pCVar4;
  
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  g_MediumFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dfont.cpp";
    g_INT_01d71de4 = 0x43;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Medium font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (g_MediumFont,"nocfont.raw",0x136,0x1ae,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(g_MediumFont);
  pCVar2 = g_MediumFont;
  g_MediumFont->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(g_MediumFont,1,0xc0,0xdf);
  pCVar2 = g_MediumFont;
  g_MediumFont->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  g_TinyFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dfont.cpp";
    g_INT_01d71de4 = 0x53;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Tiny font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (g_TinyFont,"nocsmall.raw",0xf8,0x158,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(g_TinyFont);
  pCVar2 = g_TinyFont;
  g_TinyFont->char_widths[0x20] = 5;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,2,0x20,0x7e);
  pCVar2 = g_TinyFont;
  g_TinyFont->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  g_CBitFont_PTR_01549aa8 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dfont.cpp";
    g_INT_01d71de4 = 0x62;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Theme font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (g_CBitFont_PTR_01549aa8,"menufont.raw",0xfa,0x23f,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(g_CBitFont_PTR_01549aa8);
  pCVar2 = g_CBitFont_PTR_01549aa8;
  g_CBitFont_PTR_01549aa8->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(g_CBitFont_PTR_01549aa8,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(g_CBitFont_PTR_01549aa8,1,0xe0,0xff);
  pCVar2 = g_CBitFont_PTR_01549aa8;
  g_CBitFont_PTR_01549aa8->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  g_CBitFont_PTR_01549aac = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dfont.cpp";
    g_INT_01d71de4 = 0x73;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Menu font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (g_CBitFont_PTR_01549aac,"BW3_font.raw",0xfa,0x23f,2);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(g_CBitFont_PTR_01549aac);
  pCVar2 = g_CBitFont_PTR_01549aac;
  g_CBitFont_PTR_01549aac->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(g_CBitFont_PTR_01549aac,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(g_CBitFont_PTR_01549aac,1,0xe0,0xff);
  pCVar2 = g_CBitFont_PTR_01549aac;
  g_CBitFont_PTR_01549aac->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  g_CBitFont_PTR_01549ab0 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dfont.cpp";
    g_INT_01d71de4 = 0x84;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Small menu font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (g_CBitFont_PTR_01549ab0,"BW3_font2.raw",0xfa,0x23f,2);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(g_CBitFont_PTR_01549ab0);
  pCVar2 = g_CBitFont_PTR_01549ab0;
  g_CBitFont_PTR_01549ab0->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(g_CBitFont_PTR_01549ab0,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(g_CBitFont_PTR_01549ab0,1,0xe0,0xff);
  pCVar2 = g_CBitFont_PTR_01549ab0;
  g_CBitFont_PTR_01549ab0->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  g_SmallEditorFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dfont.cpp";
    g_INT_01d71de4 = 0x95;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Debug font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (g_SmallEditorFont,"fnte_pfd.RAW",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(g_SmallEditorFont);
  pCVar2 = g_SmallEditorFont;
  g_SmallEditorFont->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  pCVar2 = g_SmallEditorFont;
  g_SmallEditorFont->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  g_CBitFont_PTR_01c5b0e0 = g_SmallEditorFont;
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  g_CBitFont_PTR_01549ab8 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dfont.cpp";
    g_INT_01d71de4 = 0xa8;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Console font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (g_CBitFont_PTR_01549ab8,"fnte_f.RAW",0x94,0xec,0xff);
  pCVar2 = g_CBitFont_PTR_01549ab8;
  g_CBitFont_PTR_01549ab8->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  pCVar2 = g_CBitFont_PTR_01549ab8;
  g_CBitFont_PTR_01549ab8->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  g_CBitFont_PTR_01c5b0e0 = g_SmallEditorFont;
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  g_MicroFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dfont.cpp";
    g_INT_01d71de4 = 0xba;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Micro font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0(g_MicroFont,"micro.raw",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(g_MicroFont);
  pCVar2 = g_MicroFont;
  g_MicroFont->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,1,0x20,0x7e);
  pCVar2 = g_MicroFont;
  g_MicroFont->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  pCVar1 = operator_new(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  g_CBitFont_PTR_01549ac0 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dfont.cpp";
    g_INT_01d71de4 = 0xc9;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Hand font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (g_CBitFont_PTR_01549ac0,"dochand.raw",0x100,0x100,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(g_CBitFont_PTR_01549ac0);
  pCVar2 = g_CBitFont_PTR_01549ac0;
  g_CBitFont_PTR_01549ac0->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(g_CBitFont_PTR_01549ac0,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(g_CBitFont_PTR_01549ac0,1,0xe0,0xff);
  pCVar2 = g_CBitFont_PTR_01549ac0;
  g_CBitFont_PTR_01549ac0->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  if (g_UseOSFonts == 0) {
    return;
  }
  pCVar3 = operator_new(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0057fd50(pCVar3,g_OSFontName,0xe,2,2);
  }
  g_CWinFont_PTR_01549ac4 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dfont.cpp";
    g_INT_01d71de4 = 0xdb;
    core_main_c_displayErrorAndQuit_FUN_004e4330("initFonts - Can't allocate gMediumOSFont");
  }
  pCVar4 = g_CWinFont_PTR_01549ac4;
  pCVar2 = g_MediumFont;
  g_MediumFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = operator_new(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0057fd50(pCVar3,g_OSFontName,0x12,0,0);
  }
  g_CWinFont_PTR_01549acc = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dfont.cpp";
    g_INT_01d71de4 = 0xe1;
    core_main_c_displayErrorAndQuit_FUN_004e4330("initFonts - Can't allocate gThemeOSFont");
  }
  pCVar4 = g_CWinFont_PTR_01549acc;
  pCVar2 = g_CBitFont_PTR_01549aa8;
  g_CBitFont_PTR_01549aa8->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = operator_new(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0057fd50(pCVar3,g_OSFontName,0xc,0,0);
  }
  g_CWinFont_PTR_01549ac8 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dfont.cpp";
    g_INT_01d71de4 = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_004e4330("initFonts - Can't allocate gTinyOSFont");
  }
  pCVar4 = g_CWinFont_PTR_01549ac8;
  pCVar2 = g_TinyFont;
  g_TinyFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = operator_new(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0057fd50(pCVar3,g_OSFontName,10,0,0);
  }
  g_CWinFont_PTR_01549ad0 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dfont.cpp";
    g_INT_01d71de4 = 0xed;
    core_main_c_displayErrorAndQuit_FUN_004e4330("initFonts - Can't allocate gDebugOSFont");
  }
  pCVar4 = g_CWinFont_PTR_01549ad0;
  pCVar2 = g_SmallEditorFont;
  g_SmallEditorFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  return;
}
