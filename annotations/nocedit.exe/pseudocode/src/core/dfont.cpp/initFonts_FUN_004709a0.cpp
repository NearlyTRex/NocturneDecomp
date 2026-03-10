// Name: core_dfont.cpp_initFonts_FUN_004709a0
// Address: 004709a0
// Address Range: [[004709a0, 00471097]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_initFonts_FUN_004709a0(void)

#include "nocturne.h"

void __cdecl core_dfont_cpp_initFonts_FUN_004709a0(void)

{
  CBitFont *pCVar1;
  CBitFont *pCVar2;
  CWinFont *pCVar3;
  CWinFont *pCVar4;
  
  pCVar1 = (CBitFont *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3198,"..\\core\\dfont.cpp",0x3f);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004cce90(pCVar1);
  }
  g_MediumFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0x41;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Medium font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
            (g_MediumFont,"nocfont.raw",0x136,0x1ae,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004cd540(g_MediumFont);
  pCVar2 = g_MediumFont;
  g_MediumFont->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(g_MediumFont,1,0xc0,0xdf);
  pCVar2 = g_MediumFont;
  g_MediumFont->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(pCVar2,1);
  pCVar1 = (CBitFont *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3198,"..\\core\\dfont.cpp",0x4f);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004cce90(pCVar1);
  }
  g_TinyFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0x51;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Tiny font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
            (g_TinyFont,"nocsmall.raw",0xf8,0x158,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004cd540(g_TinyFont);
  pCVar2 = g_TinyFont;
  g_TinyFont->char_widths[0x20] = 5;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(pCVar2,2,0x20,0x7e);
  pCVar2 = g_TinyFont;
  g_TinyFont->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(pCVar2,1);
  pCVar1 = (CBitFont *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3198,"..\\core\\dfont.cpp",0x5e);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004cce90(pCVar1);
  }
  g_ThemeFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0x60;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Theme font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
            (g_ThemeFont,"menufont.raw",0xfa,0x23f,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004cd540(g_ThemeFont);
  pCVar2 = g_ThemeFont;
  g_ThemeFont->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(g_ThemeFont,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(g_ThemeFont,1,0xe0,0xff);
  pCVar2 = g_ThemeFont;
  g_ThemeFont->shadow_offset_x = 2;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(pCVar2,1);
  pCVar1 = (CBitFont *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3198,"..\\core\\dfont.cpp",0x6f);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004cce90(pCVar1);
  }
  g_SmallEditorFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0x71;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Debug font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
            (g_SmallEditorFont,"fnte_pfd.RAW",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004cd540(g_SmallEditorFont);
  pCVar2 = g_SmallEditorFont;
  g_SmallEditorFont->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(pCVar2,3,0x20,0x7e);
  pCVar2 = g_SmallEditorFont;
  g_SmallEditorFont->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(pCVar2,1);
  g_EditorFont = g_SmallEditorFont;
  pCVar1 = (CBitFont *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3198,"..\\core\\dfont.cpp",0x82);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004cce90(pCVar1);
  }
  g_ConsoleFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0x84;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Console font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
            (g_ConsoleFont,"fnte_f.RAW",0x94,0xec,0xff);
  pCVar2 = g_ConsoleFont;
  g_ConsoleFont->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(pCVar2,3,0x20,0x7e);
  pCVar2 = g_ConsoleFont;
  g_ConsoleFont->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(pCVar2,1);
  g_EditorFont = g_SmallEditorFont;
  pCVar1 = (CBitFont *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3198,"..\\core\\dfont.cpp",0x94);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004cce90(pCVar1);
  }
  g_MicroFont = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0x96;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Micro font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0(g_MicroFont,"micro.raw",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004cd540(g_MicroFont);
  pCVar2 = g_MicroFont;
  g_MicroFont->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(pCVar2,1,0x20,0x7e);
  pCVar2 = g_MicroFont;
  g_MicroFont->shadow_offset_x = 1;
  pCVar2->shadow_offset_y = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(pCVar2,1);
  if (g_MessageCount == 0) {
    return;
  }
  pCVar3 = (CWinFont *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x13c,"..\\core\\dfont.cpp",0xa4);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(pCVar3,g_OSFontName,0xe,2,2);
  }
  g_MediumWinFont = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0xa6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("initFonts - Can't allocate gMediumOSFont");
  }
  pCVar4 = g_MediumWinFont;
  pCVar2 = g_MediumFont;
  g_MediumFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = (CWinFont *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x13c,"..\\core\\dfont.cpp",0xaa);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(pCVar3,g_OSFontName,0x12,0,0);
  }
  g_ThemeWinFont = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0xac;
    core_main_c_displayErrorAndQuit_FUN_00506f10("initFonts - Can't allocate gThemeOSFont");
  }
  pCVar4 = g_ThemeWinFont;
  pCVar2 = g_ThemeFont;
  g_ThemeFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = (CWinFont *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x13c,"..\\core\\dfont.cpp",0xb0);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(pCVar3,g_OSFontName,0xc,0,0);
  }
  g_TinyWinFont = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0xb2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("initFonts - Can't allocate gTinyOSFont");
  }
  pCVar4 = g_TinyWinFont;
  pCVar2 = g_TinyFont;
  g_TinyFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  pCVar3 = (CWinFont *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x13c,"..\\core\\dfont.cpp",0xb6);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(pCVar3,g_OSFontName,10,0,0);
  }
  g_DebugWinFont = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0xb8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("initFonts - Can't allocate gDebugOSFont");
  }
  pCVar4 = g_DebugWinFont;
  pCVar2 = g_SmallEditorFont;
  g_SmallEditorFont->win_font_enabled = 1;
  pCVar2->win_font_helper = pCVar4;
  return;
}
