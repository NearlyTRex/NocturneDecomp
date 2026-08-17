// Name: core_dfont.cpp_initFonts_FUN_0044c560
// Address: 0044c560
// Address Range: [[0044c560, 0044cbff]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_initFonts_FUN_0044c560(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfont_cpp_initFonts_FUN_0044c560(void)

{
  CBitFont *pCVar1;
  CBitFont *pCVar2;
  CWinFont *pCVar3;
  CWinFont *pCVar4;
  
  pCVar1 = operator_new(0x3198);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_0048fe10(pCVar1);
  }
  g_CBitFont_PTR_014b98f8 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 65;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Medium font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40
            (g_CBitFont_PTR_014b98f8,"nocfont.raw",0x136,0x1ae,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_00490460(g_CBitFont_PTR_014b98f8);
  pCVar2 = g_CBitFont_PTR_014b98f8;
  g_CBitFont_PTR_014b98f8->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(g_CBitFont_PTR_014b98f8,1,0xc0,0xdf);
  pCVar2 = g_CBitFont_PTR_014b98f8;
  g_CBitFont_PTR_014b98f8->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(pCVar2,1);
  pCVar1 = operator_new(0x3198);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_0048fe10(pCVar1);
  }
  g_CBitFont_PTR_014b98fc = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 81;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Tiny font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40
            (g_CBitFont_PTR_014b98fc,"nocsmall.raw",0xf8,0x158,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_00490460(g_CBitFont_PTR_014b98fc);
  pCVar2 = g_CBitFont_PTR_014b98fc;
  g_CBitFont_PTR_014b98fc->char_widths[0x20] = 5;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(pCVar2,2,0x20,0x7e);
  pCVar2 = g_CBitFont_PTR_014b98fc;
  g_CBitFont_PTR_014b98fc->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(pCVar2,1);
  pCVar1 = operator_new(0x3198);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_0048fe10(pCVar1);
  }
  g_CBitFont_PTR_014b9900 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 96;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Theme font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40
            (g_CBitFont_PTR_014b9900,"menufont.raw",0xfa,0x23f,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_00490460(g_CBitFont_PTR_014b9900);
  pCVar2 = g_CBitFont_PTR_014b9900;
  g_CBitFont_PTR_014b9900->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(g_CBitFont_PTR_014b9900,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(g_CBitFont_PTR_014b9900,1,0xe0,0xff);
  pCVar2 = g_CBitFont_PTR_014b9900;
  g_CBitFont_PTR_014b9900->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(pCVar2,1);
  pCVar1 = operator_new(0x3198);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_0048fe10(pCVar1);
  }
  g_CBitFont_PTR_014b9904 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 113;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Debug font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40
            (g_CBitFont_PTR_014b9904,"fnte_pfd.RAW",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_00490460(g_CBitFont_PTR_014b9904);
  pCVar2 = g_CBitFont_PTR_014b9904;
  g_CBitFont_PTR_014b9904->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(pCVar2,3,0x20,0x7e);
  pCVar2 = g_CBitFont_PTR_014b9904;
  g_CBitFont_PTR_014b9904->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(pCVar2,1);
  _DAT_01bcd070 = g_CBitFont_PTR_014b9904;
  pCVar1 = operator_new(0x3198);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_0048fe10(pCVar1);
  }
  g_CBitFont_PTR_014b9908 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 132;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Console font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40
            (g_CBitFont_PTR_014b9908,"fnte_f.RAW",0x94,0xec,0xff);
  pCVar2 = g_CBitFont_PTR_014b9908;
  g_CBitFont_PTR_014b9908->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(pCVar2,3,0x20,0x7e);
  pCVar2 = g_CBitFont_PTR_014b9908;
  g_CBitFont_PTR_014b9908->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(pCVar2,1);
  _DAT_01bcd070 = g_CBitFont_PTR_014b9904;
  pCVar1 = operator_new(0x3198);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_0048fe10(pCVar1);
  }
  g_CBitFont_PTR_014b990c = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 150;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Micro font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40
            (g_CBitFont_PTR_014b990c,"micro.raw",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_00490460(g_CBitFont_PTR_014b990c);
  pCVar2 = g_CBitFont_PTR_014b990c;
  g_CBitFont_PTR_014b990c->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(pCVar2,1,0x20,0x7e);
  pCVar2 = g_CBitFont_PTR_014b990c;
  g_CBitFont_PTR_014b990c->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(pCVar2,1);
  if (_DAT_01d16810 == 0) {
    return;
  }
  pCVar3 = operator_new(0x13c);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_00557f50(pCVar3,&DAT_005bdf50,0xe,2,2);
  }
  _DAT_014b9910 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 166;
    core_main_c_displayErrorAndQuit_FUN_004c8440("initFonts - Can't allocate gMediumOSFont");
  }
  pCVar4 = _DAT_014b9910;
  pCVar2 = g_CBitFont_PTR_014b98f8;
  g_CBitFont_PTR_014b98f8->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = operator_new(0x13c);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_00557f50(pCVar3,&DAT_005bdf50,0x12,0,0);
  }
  _DAT_014b9918 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 172;
    core_main_c_displayErrorAndQuit_FUN_004c8440("initFonts - Can't allocate gThemeOSFont");
  }
  pCVar4 = _DAT_014b9918;
  pCVar2 = g_CBitFont_PTR_014b9900;
  g_CBitFont_PTR_014b9900->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = operator_new(0x13c);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_00557f50(pCVar3,&DAT_005bdf50,0xc,0,0);
  }
  _DAT_014b9914 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 178;
    core_main_c_displayErrorAndQuit_FUN_004c8440("initFonts - Can't allocate gTinyOSFont");
  }
  pCVar4 = _DAT_014b9914;
  pCVar2 = g_CBitFont_PTR_014b98fc;
  g_CBitFont_PTR_014b98fc->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = operator_new(0x13c);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_00557f50(pCVar3,&DAT_005bdf50,10,0,0);
  }
  _DAT_014b991c = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 184;
    core_main_c_displayErrorAndQuit_FUN_004c8440("initFonts - Can't allocate gDebugOSFont");
  }
  pCVar4 = _DAT_014b991c;
  pCVar2 = g_CBitFont_PTR_014b9904;
  g_CBitFont_PTR_014b9904->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  return;
}
