// Name: core_dfont.cpp_initFonts_FUN_004709a0
// Address: 004709a0
// Address Range: [[004709a0, 00471097]]
// Convention: __cdecl
// Signature: void core_dfont.cpp_initFonts_FUN_004709a0(void)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507c1d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dfont_cpp_0061e866
//   TerminatedCString s_core_dfont_cpp_0061e878
//   TerminatedCString s_Medium_font_object_not_a_0061e88a
//   TerminatedCString s_nocfont_raw_0061e8ac
//   TerminatedCString s_core_dfont_cpp_0061e8b8
//   TerminatedCString s_core_dfont_cpp_0061e8ca
//   TerminatedCString s_Tiny_font_object_not_all_0061e8dc
//   TerminatedCString s_nocsmall_raw_0061e8fc
//   TerminatedCString s_core_dfont_cpp_0061e909
//   TerminatedCString s_core_dfont_cpp_0061e91b
//   TerminatedCString s_Theme_font_object_not_al_0061e92d
//   TerminatedCString s_menufont_raw_0061e94e
//   TerminatedCString s_core_dfont_cpp_0061e95b
//   TerminatedCString s_core_dfont_cpp_0061e96d
//   string s_Debug_font_object_not_allocated!_0061e97f
//   TerminatedCString s_fnte_pfd_RAW_0061e9a0
//   TerminatedCString s_core_dfont_cpp_0061e9ad
//   TerminatedCString s_core_dfont_cpp_0061e9bf
//   TerminatedCString s_Console_font_object_not__0061e9d1
//   TerminatedCString s_fnte_f_RAW_0061e9f4
//   TerminatedCString s_core_dfont_cpp_0061e9ff
//   TerminatedCString s_core_dfont_cpp_0061ea11
//   TerminatedCString s_Micro_font_object_not_al_0061ea23
//   TerminatedCString s_micro_raw_0061ea44
//   TerminatedCString s_core_dfont_cpp_0061ea4e
//   TerminatedCString s_core_dfont_cpp_0061ea60
//   TerminatedCString s_initFonts_Can_t_allocate_0061ea72
//   TerminatedCString s_core_dfont_cpp_0061ea9b
//   TerminatedCString s_core_dfont_cpp_0061eaad
//   TerminatedCString s_initFonts_Can_t_allocate_0061eabf
//   TerminatedCString s_core_dfont_cpp_0061eae7
//   TerminatedCString s_core_dfont_cpp_0061eaf9
//   TerminatedCString s_initFonts_Can_t_allocate_0061eb0b
//   TerminatedCString s_core_dfont_cpp_0061eb32
//   TerminatedCString s_core_dfont_cpp_0061eb44
//   TerminatedCString s_initFonts_Can_t_allocate_0061eb56
//   char[128] g_OSFontName
//   CBitFont* g_MediumFont
//   CBitFont* g_TinyFont
//   CBitFont* g_ThemeFont
//   CBitFont* g_SmallEditorFont
//   CBitFont* g_ConsoleFont
//   CBitFont* g_MicroFont
//   CWinFont* g_MediumWinFont
//   CWinFont* g_TinyWinFont
//   CWinFont* g_ThemeWinFont
//   CWinFont* g_DebugWinFont
//   CBitFont* g_EditorFont
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_MessageCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_font.cpp_CBitFont_ctor_FUN_004cce90
//   engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
//   engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
//   engine_font.cpp_CBitFont_setFontReady_FUN_004d0290
//   engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540
//   engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void __cdecl core_dfont_cpp_initFonts_FUN_004709a0(void)

{
  CBitFont *pCVar1;
  CWinFont *pCVar2;
  undefined4 uStack000000a0;
  
  pCVar1 = (CBitFont *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3198,"..\\core\\dfont.cpp",0x3f);
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_ctor_FUN_004cce90(pCVar1);
  }
  g_MediumFont = pCVar1;
  if (pCVar1 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0x41;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Medium font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
            (g_MediumFont,"nocfont.raw",0x136,0x1ae,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004cd540(g_MediumFont);
  pCVar1 = g_MediumFont;
  g_MediumFont->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230(pCVar1,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230(g_MediumFont,1,0xc0,0xdf);
  pCVar1 = g_MediumFont;
  g_MediumFont->font_type = 2;
  pCVar1->font_enabled = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(pCVar1,1);
  pCVar1 = (CBitFont *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3198,"..\\core\\dfont.cpp",0x4f);
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_ctor_FUN_004cce90(pCVar1);
  }
  g_TinyFont = pCVar1;
  if (pCVar1 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0x51;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Tiny font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
            (g_TinyFont,"nocsmall.raw",0xf8,0x158,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004cd540(g_TinyFont);
  pCVar1 = g_TinyFont;
  g_TinyFont->char_widths[0x20] = 5;
  engine_font_cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230(pCVar1,2,0x20,0x7e);
  pCVar1 = g_TinyFont;
  g_TinyFont->font_type = 2;
  pCVar1->font_enabled = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(pCVar1,1);
  pCVar1 = (CBitFont *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3198,"..\\core\\dfont.cpp",0x5e);
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_ctor_FUN_004cce90(pCVar1);
  }
  g_ThemeFont = pCVar1;
  if (pCVar1 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0x60;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Theme font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
            (g_ThemeFont,"menufont.raw",0xfa,0x23f,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004cd540(g_ThemeFont);
  pCVar1 = g_ThemeFont;
  g_ThemeFont->char_widths[0x20] = 8;
  engine_font_cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230(pCVar1,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230(g_ThemeFont,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230(g_ThemeFont,1,0xe0,0xff);
  pCVar1 = g_ThemeFont;
  g_ThemeFont->font_type = 2;
  pCVar1->font_enabled = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(pCVar1,1);
  pCVar1 = (CBitFont *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3198,"..\\core\\dfont.cpp",0x6f);
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_ctor_FUN_004cce90(pCVar1);
  }
  g_SmallEditorFont = pCVar1;
  if (pCVar1 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0x71;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Debug font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
            (g_SmallEditorFont,"fnte_pfd.RAW",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004cd540(g_SmallEditorFont);
  pCVar1 = g_SmallEditorFont;
  g_SmallEditorFont->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230(pCVar1,3,0x20,0x7e);
  pCVar1 = g_SmallEditorFont;
  g_SmallEditorFont->font_type = 1;
  pCVar1->font_enabled = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(pCVar1,1);
  g_EditorFont = g_SmallEditorFont;
  pCVar1 = (CBitFont *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3198,"..\\core\\dfont.cpp",0x82);
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_ctor_FUN_004cce90(pCVar1);
  }
  g_ConsoleFont = pCVar1;
  if (pCVar1 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0x84;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Console font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
            (g_ConsoleFont,"fnte_f.RAW",0x94,0xec,0xff);
  pCVar1 = g_ConsoleFont;
  g_ConsoleFont->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230(pCVar1,3,0x20,0x7e);
  pCVar1 = g_ConsoleFont;
  g_ConsoleFont->font_type = 1;
  pCVar1->font_enabled = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(pCVar1,1);
  g_EditorFont = g_SmallEditorFont;
  pCVar1 = (CBitFont *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3198,"..\\core\\dfont.cpp",0x94);
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_ctor_FUN_004cce90(pCVar1);
  }
  g_MicroFont = pCVar1;
  if (pCVar1 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0x96;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Micro font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0(g_MicroFont,"micro.raw",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004cd540(g_MicroFont);
  pCVar1 = g_MicroFont;
  g_MicroFont->char_widths[0x20] = 4;
  engine_font_cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230(pCVar1,1,0x20,0x7e);
  pCVar1 = g_MicroFont;
  g_MicroFont->font_type = 1;
  pCVar1->font_enabled = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(pCVar1,1);
  if (g_MessageCount == 0) {
    return;
  }
  pCVar2 = (CWinFont *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x13c,"..\\core\\dfont.cpp",0xa4);
  if (pCVar2 != (CWinFont *)0x0) {
    pCVar2 = engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(pCVar2,g_OSFontName,0xe,2);
  }
  g_MediumWinFont = pCVar2;
  if (pCVar2 == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0xa6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("initFonts - Can't allocate gMediumOSFont");
  }
  pCVar2 = g_MediumWinFont;
  pCVar1 = g_MediumFont;
  g_MediumFont->win_font_enabled = 1;
  pCVar1->win_font_helper = pCVar2;
  pCVar2 = (CWinFont *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x13c,"..\\core\\dfont.cpp",0xaa);
  if (pCVar2 != (CWinFont *)0x0) {
    pCVar2 = engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(pCVar2,g_OSFontName,0x12,0);
  }
  g_ThemeWinFont = pCVar2;
  if (pCVar2 == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0xac;
    core_main_c_displayErrorAndQuit_FUN_00506f10("initFonts - Can't allocate gThemeOSFont");
  }
  pCVar2 = g_ThemeWinFont;
  pCVar1 = g_ThemeFont;
  g_ThemeFont->win_font_enabled = 1;
  pCVar1->win_font_helper = pCVar2;
  pCVar2 = (CWinFont *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x13c,"..\\core\\dfont.cpp",0xb0);
  if (pCVar2 != (CWinFont *)0x0) {
    pCVar2 = engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(pCVar2,g_OSFontName,0xc,0);
  }
  g_TinyWinFont = pCVar2;
  if (pCVar2 == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0xb2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("initFonts - Can't allocate gTinyOSFont");
  }
  pCVar2 = g_TinyWinFont;
  pCVar1 = g_TinyFont;
  g_TinyFont->win_font_enabled = 1;
  pCVar1->win_font_helper = pCVar2;
  pCVar2 = (CWinFont *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x13c,"..\\core\\dfont.cpp",0xb6);
  if (pCVar2 != (CWinFont *)0x0) {
    uStack000000a0 = 0;
    pCVar2 = engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(pCVar2,g_OSFontName,10,0);
  }
  g_DebugWinFont = pCVar2;
  if (pCVar2 == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\core\\dfont.cpp";
    g_CurrentLineNumber = 0xb8;
    uStack000000a0 = 0x471075;
    core_main_c_displayErrorAndQuit_FUN_00506f10("initFonts - Can't allocate gDebugOSFont");
  }
  pCVar2 = g_DebugWinFont;
  pCVar1 = g_SmallEditorFont;
  g_SmallEditorFont->win_font_enabled = 1;
  pCVar1->win_font_helper = pCVar2;
  return;
}


// Assembly code:
// 004709a0: PUSH EBX
//   Label: core_dfont.cpp_initFonts_FUN_004709a0
// 004709a1: PUSH ESI
// 004709a2: PUSH EDI
// 004709a3: PUSH EBP
// 004709a4: PUSH 0x3f
// 004709a6: PUSH 0x61e866
//   XREF to: 0061e866 (DATA)
// 004709ab: PUSH 0x3198
// 004709b0: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004709b5: ADD ESP,0xc
// 004709b8: TEST EAX,EAX
// 004709ba: JNZ 0x00470de9
//   XREF to: 00470de9 (CONDITIONAL_JUMP)
// 004709c0: MOV [0x020a5718],EAX
//   Label: LAB_004709c0
//   XREF to: 020a5718 (WRITE)
// 004709c5: TEST EAX,EAX
// 004709c7: JZ 0x00470df7
//   XREF to: 00470df7 (CONDITIONAL_JUMP)
// 004709cd: PUSH 0x0
//   Label: LAB_004709cd
// 004709cf: PUSH 0x1ae
// 004709d4: PUSH 0x136
// 004709d9: PUSH 0x61e8ac
//   XREF to: 0061e8ac (DATA)
// 004709de: MOV EBX,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 004709e4: PUSH EBX
// 004709e5: CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
//   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)
// 004709ea: ADD ESP,0x14
// 004709ed: MOV ESI,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 004709f3: PUSH ESI
// 004709f4: CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540
//   XREF to: 004cd540 (UNCONDITIONAL_CALL)
// 004709f9: ADD ESP,0x4
// 004709fc: PUSH 0x7e
// 004709fe: PUSH 0x20
// 00470a00: PUSH 0x3
// 00470a02: MOV EAX,[0x020a5718]
//   XREF to: 020a5718 (READ)
// 00470a07: PUSH EAX
// 00470a08: MOV dword ptr [EAX + 0x25e8],0x8
// 00470a12: CALL engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
//   XREF to: 004d0230 (UNCONDITIONAL_CALL)
// 00470a17: ADD ESP,0x10
// 00470a1a: PUSH 0xdf
// 00470a1f: PUSH 0xc0
// 00470a24: PUSH 0x1
// 00470a26: MOV EDI,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 00470a2c: PUSH EDI
// 00470a2d: CALL engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
//   XREF to: 004d0230 (UNCONDITIONAL_CALL)
// 00470a32: ADD ESP,0x10
// 00470a35: MOV EAX,[0x020a5718]
//   XREF to: 020a5718 (READ)
// 00470a3a: PUSH 0x1
// 00470a3c: MOV dword ptr [EAX + 0x317c],0x2
// 00470a46: PUSH EAX
// 00470a47: MOV dword ptr [EAX + 0x3180],0x1
// 00470a51: CALL engine_font.cpp_CBitFont_setFontReady_FUN_004d0290
//   XREF to: 004d0290 (UNCONDITIONAL_CALL)
// 00470a56: ADD ESP,0x8
// 00470a59: PUSH 0x4f
// 00470a5b: PUSH 0x61e8b8
//   XREF to: 0061e8b8 (DATA)
// 00470a60: PUSH 0x3198
// 00470a65: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00470a6a: ADD ESP,0xc
// 00470a6d: TEST EAX,EAX
// 00470a6f: JZ 0x00470a7a
//   XREF to: 00470a7a (CONDITIONAL_JUMP)
// 00470a71: PUSH EAX
// 00470a72: CALL engine_font.cpp_CBitFont_ctor_FUN_004cce90
//   XREF to: 004cce90 (UNCONDITIONAL_CALL)
// 00470a77: ADD ESP,0x4
// 00470a7a: MOV [0x020a571c],EAX
//   Label: LAB_00470a7a
//   XREF to: 020a571c (WRITE)
// 00470a7f: TEST EAX,EAX
// 00470a81: JZ 0x00470e1f
//   XREF to: 00470e1f (CONDITIONAL_JUMP)
// 00470a87: PUSH 0x0
//   Label: LAB_00470a87
// 00470a89: PUSH 0x158
// 00470a8e: PUSH 0xf8
// 00470a93: PUSH 0x61e8fc
//   XREF to: 0061e8fc (DATA)
// 00470a98: MOV EDX,dword ptr [0x020a571c]
//   XREF to: 020a571c (READ)
// 00470a9e: PUSH EDX
// 00470a9f: CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
//   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)
// 00470aa4: ADD ESP,0x14
// 00470aa7: MOV ECX,dword ptr [0x020a571c]
//   XREF to: 020a571c (READ)
// 00470aad: PUSH ECX
// 00470aae: CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540
//   XREF to: 004cd540 (UNCONDITIONAL_CALL)
// 00470ab3: ADD ESP,0x4
// 00470ab6: PUSH 0x7e
// 00470ab8: PUSH 0x20
// 00470aba: PUSH 0x2
// 00470abc: MOV EAX,[0x020a571c]
//   XREF to: 020a571c (READ)
// 00470ac1: PUSH EAX
// 00470ac2: MOV dword ptr [EAX + 0x25e8],0x5
// 00470acc: CALL engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
//   XREF to: 004d0230 (UNCONDITIONAL_CALL)
// 00470ad1: ADD ESP,0x10
// 00470ad4: MOV EAX,[0x020a571c]
//   XREF to: 020a571c (READ)
// 00470ad9: PUSH 0x1
// 00470adb: MOV dword ptr [EAX + 0x317c],0x2
// 00470ae5: PUSH EAX
// 00470ae6: MOV dword ptr [EAX + 0x3180],0x1
// 00470af0: CALL engine_font.cpp_CBitFont_setFontReady_FUN_004d0290
//   XREF to: 004d0290 (UNCONDITIONAL_CALL)
// 00470af5: ADD ESP,0x8
// 00470af8: PUSH 0x5e
// 00470afa: PUSH 0x61e909
//   XREF to: 0061e909 (DATA)
// 00470aff: PUSH 0x3198
// 00470b04: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00470b09: ADD ESP,0xc
// 00470b0c: TEST EAX,EAX
// 00470b0e: JZ 0x00470b19
//   XREF to: 00470b19 (CONDITIONAL_JUMP)
// 00470b10: PUSH EAX
// 00470b11: CALL engine_font.cpp_CBitFont_ctor_FUN_004cce90
//   XREF to: 004cce90 (UNCONDITIONAL_CALL)
// 00470b16: ADD ESP,0x4
// 00470b19: MOV [0x020a5720],EAX
//   Label: LAB_00470b19
//   XREF to: 020a5720 (WRITE)
// 00470b1e: TEST EAX,EAX
// 00470b20: JZ 0x00470e46
//   XREF to: 00470e46 (CONDITIONAL_JUMP)
// 00470b26: PUSH 0x0
//   Label: LAB_00470b26
// 00470b28: PUSH 0x23f
// 00470b2d: PUSH 0xfa
// 00470b32: PUSH 0x61e94e
//   XREF to: 0061e94e (DATA)
// 00470b37: MOV EDI,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 00470b3d: PUSH EDI
// 00470b3e: CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
//   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)
// 00470b43: ADD ESP,0x14
// 00470b46: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 00470b4c: PUSH EBP
// 00470b4d: CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540
//   XREF to: 004cd540 (UNCONDITIONAL_CALL)
// 00470b52: ADD ESP,0x4
// 00470b55: PUSH 0x7e
// 00470b57: PUSH 0x20
// 00470b59: PUSH 0x3
// 00470b5b: MOV EAX,[0x020a5720]
//   XREF to: 020a5720 (READ)
// 00470b60: PUSH EAX
// 00470b61: MOV dword ptr [EAX + 0x25e8],0x8
// 00470b6b: CALL engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
//   XREF to: 004d0230 (UNCONDITIONAL_CALL)
// 00470b70: ADD ESP,0x10
// 00470b73: PUSH 0xdf
// 00470b78: PUSH 0xc0
// 00470b7d: PUSH 0x0
// 00470b7f: MOV EAX,[0x020a5720]
//   XREF to: 020a5720 (READ)
// 00470b84: PUSH EAX
// 00470b85: CALL engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
//   XREF to: 004d0230 (UNCONDITIONAL_CALL)
// 00470b8a: ADD ESP,0x10
// 00470b8d: PUSH 0xff
// 00470b92: PUSH 0xe0
// 00470b97: PUSH 0x1
// 00470b99: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 00470b9f: PUSH EDX
// 00470ba0: CALL engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
//   XREF to: 004d0230 (UNCONDITIONAL_CALL)
// 00470ba5: ADD ESP,0x10
// 00470ba8: MOV EAX,[0x020a5720]
//   XREF to: 020a5720 (READ)
// 00470bad: PUSH 0x1
// 00470baf: MOV dword ptr [EAX + 0x317c],0x2
// 00470bb9: PUSH EAX
// 00470bba: MOV dword ptr [EAX + 0x3180],0x1
// 00470bc4: CALL engine_font.cpp_CBitFont_setFontReady_FUN_004d0290
//   XREF to: 004d0290 (UNCONDITIONAL_CALL)
// 00470bc9: ADD ESP,0x8
// 00470bcc: PUSH 0x6f
// 00470bce: PUSH 0x61e95b
//   XREF to: 0061e95b (DATA)
// 00470bd3: PUSH 0x3198
// 00470bd8: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00470bdd: ADD ESP,0xc
// 00470be0: TEST EAX,EAX
// 00470be2: JZ 0x00470bed
//   XREF to: 00470bed (CONDITIONAL_JUMP)
// 00470be4: PUSH EAX
// 00470be5: CALL engine_font.cpp_CBitFont_ctor_FUN_004cce90
//   XREF to: 004cce90 (UNCONDITIONAL_CALL)
// 00470bea: ADD ESP,0x4
// 00470bed: MOV [0x020a5724],EAX
//   Label: LAB_00470bed
//   XREF to: 020a5724 (WRITE)
// 00470bf2: TEST EAX,EAX
// 00470bf4: JZ 0x00470e6e
//   XREF to: 00470e6e (CONDITIONAL_JUMP)
// 00470bfa: PUSH 0x0
//   Label: LAB_00470bfa
// 00470bfc: PUSH 0xec
// 00470c01: PUSH 0x94
// 00470c06: PUSH 0x61e9a0
//   XREF to: 0061e9a0 (DATA)
// 00470c0b: MOV ESI,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 00470c11: PUSH ESI
// 00470c12: CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
//   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)
// 00470c17: ADD ESP,0x14
// 00470c1a: MOV EDI,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 00470c20: PUSH EDI
// 00470c21: CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540
//   XREF to: 004cd540 (UNCONDITIONAL_CALL)
// 00470c26: ADD ESP,0x4
// 00470c29: PUSH 0x7e
// 00470c2b: PUSH 0x20
// 00470c2d: PUSH 0x3
// 00470c2f: MOV EAX,[0x020a5724]
//   XREF to: 020a5724 (READ)
// 00470c34: PUSH EAX
// 00470c35: MOV dword ptr [EAX + 0x25e8],0x4
// 00470c3f: CALL engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
//   XREF to: 004d0230 (UNCONDITIONAL_CALL)
// 00470c44: ADD ESP,0x10
// 00470c47: MOV EAX,[0x020a5724]
//   XREF to: 020a5724 (READ)
// 00470c4c: PUSH 0x1
// 00470c4e: MOV dword ptr [EAX + 0x317c],0x1
// 00470c58: PUSH EAX
// 00470c59: MOV dword ptr [EAX + 0x3180],0x1
// 00470c63: CALL engine_font.cpp_CBitFont_setFontReady_FUN_004d0290
//   XREF to: 004d0290 (UNCONDITIONAL_CALL)
// 00470c68: ADD ESP,0x8
// 00470c6b: PUSH 0x82
// 00470c70: PUSH 0x61e9ad
//   XREF to: 0061e9ad (DATA)
// 00470c75: MOV EAX,[0x020a5724]
//   XREF to: 020a5724 (READ)
// 00470c7a: PUSH 0x3198
// 00470c7f: MOV [0x02cf1cd0],EAX
//   XREF to: 02cf1cd0 (WRITE)
// 00470c84: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00470c89: ADD ESP,0xc
// 00470c8c: TEST EAX,EAX
// 00470c8e: JZ 0x00470c99
//   XREF to: 00470c99 (CONDITIONAL_JUMP)
// 00470c90: PUSH EAX
// 00470c91: CALL engine_font.cpp_CBitFont_ctor_FUN_004cce90
//   XREF to: 004cce90 (UNCONDITIONAL_CALL)
// 00470c96: ADD ESP,0x4
// 00470c99: MOV [0x020a5728],EAX
//   Label: LAB_00470c99
//   XREF to: 020a5728 (WRITE)
// 00470c9e: TEST EAX,EAX
// 00470ca0: JZ 0x00470e96
//   XREF to: 00470e96 (CONDITIONAL_JUMP)
// 00470ca6: PUSH 0xff
//   Label: LAB_00470ca6
// 00470cab: PUSH 0xec
// 00470cb0: PUSH 0x94
// 00470cb5: PUSH 0x61e9f4
//   XREF to: 0061e9f4 (DATA)
// 00470cba: MOV EDX,dword ptr [0x020a5728]
//   XREF to: 020a5728 (READ)
// 00470cc0: PUSH EDX
// 00470cc1: CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
//   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)
// 00470cc6: ADD ESP,0x14
// 00470cc9: PUSH 0x7e
// 00470ccb: PUSH 0x20
// 00470ccd: PUSH 0x3
// 00470ccf: MOV EAX,[0x020a5728]
//   XREF to: 020a5728 (READ)
// 00470cd4: PUSH EAX
// 00470cd5: MOV dword ptr [EAX + 0x25e8],0x4
// 00470cdf: CALL engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
//   XREF to: 004d0230 (UNCONDITIONAL_CALL)
// 00470ce4: ADD ESP,0x10
// 00470ce7: MOV EAX,[0x020a5728]
//   XREF to: 020a5728 (READ)
// 00470cec: PUSH 0x1
// 00470cee: MOV dword ptr [EAX + 0x317c],0x1
// 00470cf8: PUSH EAX
// 00470cf9: MOV dword ptr [EAX + 0x3180],0x1
// 00470d03: CALL engine_font.cpp_CBitFont_setFontReady_FUN_004d0290
//   XREF to: 004d0290 (UNCONDITIONAL_CALL)
// 00470d08: ADD ESP,0x8
// 00470d0b: PUSH 0x94
// 00470d10: PUSH 0x61e9ff
//   XREF to: 0061e9ff (DATA)
// 00470d15: MOV EAX,[0x020a5724]
//   XREF to: 020a5724 (READ)
// 00470d1a: PUSH 0x3198
// 00470d1f: MOV [0x02cf1cd0],EAX
//   XREF to: 02cf1cd0 (WRITE)
// 00470d24: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00470d29: ADD ESP,0xc
// 00470d2c: TEST EAX,EAX
// 00470d2e: JZ 0x00470d39
//   XREF to: 00470d39 (CONDITIONAL_JUMP)
// 00470d30: PUSH EAX
// 00470d31: CALL engine_font.cpp_CBitFont_ctor_FUN_004cce90
//   XREF to: 004cce90 (UNCONDITIONAL_CALL)
// 00470d36: ADD ESP,0x4
// 00470d39: MOV [0x020a572c],EAX
//   Label: LAB_00470d39
//   XREF to: 020a572c (WRITE)
// 00470d3e: TEST EAX,EAX
// 00470d40: JNZ 0x00470d65
//   XREF to: 00470d65 (CONDITIONAL_JUMP)
// 00470d42: MOV ECX,0x61ea11
//   XREF to: 0061ea11 (PARAM)
// 00470d47: MOV EBX,0x96
// 00470d4c: PUSH 0x61ea23
//   XREF to: 0061ea23 (DATA)
// 00470d51: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00470d57: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00470d5d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00470d62: ADD ESP,0x4
// 00470d65: PUSH 0x0
//   Label: LAB_00470d65
// 00470d67: PUSH 0xec
// 00470d6c: PUSH 0x94
// 00470d71: PUSH 0x61ea44
//   XREF to: 0061ea44 (DATA)
// 00470d76: MOV ESI,dword ptr [0x020a572c]
//   XREF to: 020a572c (READ)
// 00470d7c: PUSH ESI
// 00470d7d: CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
//   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)
// 00470d82: ADD ESP,0x14
// 00470d85: MOV EDI,dword ptr [0x020a572c]
//   XREF to: 020a572c (READ)
// 00470d8b: PUSH EDI
// 00470d8c: CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540
//   XREF to: 004cd540 (UNCONDITIONAL_CALL)
// 00470d91: ADD ESP,0x4
// 00470d94: PUSH 0x7e
// 00470d96: PUSH 0x20
// 00470d98: PUSH 0x1
// 00470d9a: MOV EAX,[0x020a572c]
//   XREF to: 020a572c (READ)
// 00470d9f: PUSH EAX
// 00470da0: MOV dword ptr [EAX + 0x25e8],0x4
// 00470daa: CALL engine_font.cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230
//   XREF to: 004d0230 (UNCONDITIONAL_CALL)
// 00470daf: ADD ESP,0x10
// 00470db2: MOV EAX,[0x020a572c]
//   XREF to: 020a572c (READ)
// 00470db7: PUSH 0x1
// 00470db9: MOV dword ptr [EAX + 0x317c],0x1
// 00470dc3: PUSH EAX
// 00470dc4: MOV dword ptr [EAX + 0x3180],0x1
// 00470dce: CALL engine_font.cpp_CBitFont_setFontReady_FUN_004d0290
//   XREF to: 004d0290 (UNCONDITIONAL_CALL)
// 00470dd3: MOV EBP,dword ptr [0x02fa8cd0]
//   XREF to: 02fa8cd0 (READ)
// 00470dd9: ADD ESP,0x8
// 00470ddc: TEST EBP,EBP
// 00470dde: JNZ 0x00470ebd
//   XREF to: 00470ebd (CONDITIONAL_JUMP)
// 00470de4: POP EBP
// 00470de5: POP EDI
// 00470de6: POP ESI
// 00470de7: POP EBX
// 00470de8: RET
// 00470de9: PUSH EAX
//   Label: LAB_00470de9
// 00470dea: CALL engine_font.cpp_CBitFont_ctor_FUN_004cce90
//   XREF to: 004cce90 (UNCONDITIONAL_CALL)
// 00470def: ADD ESP,0x4
// 00470df2: JMP 0x004709c0
//   XREF to: 004709c0 (UNCONDITIONAL_JUMP)
// 00470df7: MOV EDX,0x61e878
//   Label: LAB_00470df7
//   XREF to: 0061e878 (PARAM)
// 00470dfc: MOV ECX,0x41
// 00470e01: PUSH 0x61e88a
//   XREF to: 0061e88a (DATA)
// 00470e06: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00470e0c: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00470e12: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00470e17: ADD ESP,0x4
// 00470e1a: JMP 0x004709cd
//   XREF to: 004709cd (UNCONDITIONAL_JUMP)
// 00470e1f: MOV EBP,0x61e8ca
//   Label: LAB_00470e1f
//   XREF to: 0061e8ca (DATA)
// 00470e24: MOV EAX,0x51
// 00470e29: PUSH 0x61e8dc
//   XREF to: 0061e8dc (DATA)
// 00470e2e: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00470e34: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00470e39: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00470e3e: ADD ESP,0x4
// 00470e41: JMP 0x00470a87
//   XREF to: 00470a87 (UNCONDITIONAL_JUMP)
// 00470e46: MOV EBX,0x61e91b
//   Label: LAB_00470e46
//   XREF to: 0061e91b (PARAM)
// 00470e4b: MOV ESI,0x60
// 00470e50: PUSH 0x61e92d
//   XREF to: 0061e92d (DATA)
// 00470e55: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00470e5b: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00470e61: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00470e66: ADD ESP,0x4
// 00470e69: JMP 0x00470b26
//   XREF to: 00470b26 (UNCONDITIONAL_JUMP)
// 00470e6e: MOV ECX,0x61e96d
//   Label: LAB_00470e6e
//   XREF to: 0061e96d (PARAM)
// 00470e73: MOV EBX,0x71
// 00470e78: PUSH 0x61e97f
//   XREF to: 0061e97f (DATA)
// 00470e7d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00470e83: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00470e89: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00470e8e: ADD ESP,0x4
// 00470e91: JMP 0x00470bfa
//   XREF to: 00470bfa (UNCONDITIONAL_JUMP)
// 00470e96: MOV EBP,0x61e9bf
//   Label: LAB_00470e96
//   XREF to: 0061e9bf (DATA)
// 00470e9b: MOV EAX,0x84
// 00470ea0: PUSH 0x61e9d1
//   XREF to: 0061e9d1 (DATA)
// 00470ea5: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00470eab: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00470eb0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00470eb5: ADD ESP,0x4
// 00470eb8: JMP 0x00470ca6
//   XREF to: 00470ca6 (UNCONDITIONAL_JUMP)
// 00470ebd: PUSH 0xa4
//   Label: LAB_00470ebd
// 00470ec2: PUSH 0x61ea4e
//   XREF to: 0061ea4e (DATA)
// 00470ec7: PUSH 0x13c
// 00470ecc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00470ed1: ADD ESP,0xc
// 00470ed4: TEST EAX,EAX
// 00470ed6: JZ 0x00470eec
//   XREF to: 00470eec (CONDITIONAL_JUMP)
// 00470ed8: PUSH 0x2
// 00470eda: PUSH 0x2
// 00470edc: PUSH 0xe
// 00470ede: PUSH 0x680a70
//   XREF to: 00680a70 (DATA)
// 00470ee3: PUSH EAX
// 00470ee4: CALL engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0
//   XREF to: 005f22e0 (UNCONDITIONAL_CALL)
// 00470ee9: ADD ESP,0x14
// 00470eec: MOV [0x020a5730],EAX
//   Label: LAB_00470eec
//   XREF to: 020a5730 (WRITE)
// 00470ef1: TEST EAX,EAX
// 00470ef3: JNZ 0x00470f17
//   XREF to: 00470f17 (CONDITIONAL_JUMP)
// 00470ef5: MOV EAX,0x61ea60
//   XREF to: 0061ea60 (PARAM)
// 00470efa: MOV EDX,0xa6
// 00470eff: PUSH 0x61ea72
//   XREF to: 0061ea72 (DATA)
// 00470f04: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00470f09: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00470f0f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00470f14: ADD ESP,0x4
// 00470f17: PUSH 0xaa
//   Label: LAB_00470f17
// 00470f1c: MOV EAX,[0x020a5718]
//   XREF to: 020a5718 (READ)
// 00470f21: PUSH 0x61ea9b
//   XREF to: 0061ea9b (DATA)
// 00470f26: MOV EDX,dword ptr [0x020a5730]
//   XREF to: 020a5730 (READ)
// 00470f2c: MOV dword ptr [EAX + 0x3190],0x1
// 00470f36: PUSH 0x13c
// 00470f3b: MOV dword ptr [EAX + 0x3194],EDX
// 00470f41: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00470f46: ADD ESP,0xc
// 00470f49: TEST EAX,EAX
// 00470f4b: JZ 0x00470f61
//   XREF to: 00470f61 (CONDITIONAL_JUMP)
// 00470f4d: PUSH 0x0
// 00470f4f: PUSH 0x0
// 00470f51: PUSH 0x12
// 00470f53: PUSH 0x680a70
//   XREF to: 00680a70 (DATA)
// 00470f58: PUSH EAX
// 00470f59: CALL engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0
//   XREF to: 005f22e0 (UNCONDITIONAL_CALL)
// 00470f5e: ADD ESP,0x14
// 00470f61: MOV [0x020a5738],EAX
//   Label: LAB_00470f61
//   XREF to: 020a5738 (WRITE)
// 00470f66: TEST EAX,EAX
// 00470f68: JNZ 0x00470f8d
//   XREF to: 00470f8d (CONDITIONAL_JUMP)
// 00470f6a: MOV ECX,0x61eaad
//   XREF to: 0061eaad (PARAM)
// 00470f6f: MOV EBX,0xac
// 00470f74: PUSH 0x61eabf
//   XREF to: 0061eabf (DATA)
// 00470f79: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00470f7f: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00470f85: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00470f8a: ADD ESP,0x4
// 00470f8d: PUSH 0xb0
//   Label: LAB_00470f8d
// 00470f92: MOV EAX,[0x020a5720]
//   XREF to: 020a5720 (READ)
// 00470f97: PUSH 0x61eae7
//   XREF to: 0061eae7 (DATA)
// 00470f9c: MOV EDX,dword ptr [0x020a5738]
//   XREF to: 020a5738 (READ)
// 00470fa2: MOV dword ptr [EAX + 0x3190],0x1
// 00470fac: PUSH 0x13c
// 00470fb1: MOV dword ptr [EAX + 0x3194],EDX
// 00470fb7: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00470fbc: ADD ESP,0xc
// 00470fbf: TEST EAX,EAX
// 00470fc1: JZ 0x00470fd7
//   XREF to: 00470fd7 (CONDITIONAL_JUMP)
// 00470fc3: PUSH 0x0
// 00470fc5: PUSH 0x0
// 00470fc7: PUSH 0xc
// 00470fc9: PUSH 0x680a70
//   XREF to: 00680a70 (DATA)
// 00470fce: PUSH EAX
// 00470fcf: CALL engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0
//   XREF to: 005f22e0 (UNCONDITIONAL_CALL)
// 00470fd4: ADD ESP,0x14
// 00470fd7: MOV [0x020a5734],EAX
//   Label: LAB_00470fd7
//   XREF to: 020a5734 (WRITE)
// 00470fdc: TEST EAX,EAX
// 00470fde: JNZ 0x00471003
//   XREF to: 00471003 (CONDITIONAL_JUMP)
// 00470fe0: MOV ESI,0x61eaf9
//   XREF to: 0061eaf9 (DATA)
// 00470fe5: MOV EDI,0xb2
// 00470fea: PUSH 0x61eb0b
//   XREF to: 0061eb0b (DATA)
// 00470fef: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00470ff5: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00470ffb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00471000: ADD ESP,0x4
// 00471003: PUSH 0xb6
//   Label: LAB_00471003
// 00471008: MOV EAX,[0x020a571c]
//   XREF to: 020a571c (READ)
// 0047100d: PUSH 0x61eb32
//   XREF to: 0061eb32 (DATA)
// 00471012: MOV EDX,dword ptr [0x020a5734]
//   XREF to: 020a5734 (READ)
// 00471018: MOV dword ptr [EAX + 0x3190],0x1
// 00471022: PUSH 0x13c
// 00471027: MOV dword ptr [EAX + 0x3194],EDX
// 0047102d: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00471032: ADD ESP,0xc
// 00471035: TEST EAX,EAX
// 00471037: JZ 0x0047104d
//   XREF to: 0047104d (CONDITIONAL_JUMP)
// 00471039: PUSH 0x0
// 0047103b: PUSH 0x0
// 0047103d: PUSH 0xa
// 0047103f: PUSH 0x680a70
//   XREF to: 00680a70 (DATA)
// 00471044: PUSH EAX
// 00471045: CALL engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0
//   XREF to: 005f22e0 (UNCONDITIONAL_CALL)
// 0047104a: ADD ESP,0x14
// 0047104d: MOV [0x020a573c],EAX
//   Label: LAB_0047104d
//   XREF to: 020a573c (WRITE)
// 00471052: TEST EAX,EAX
// 00471054: JNZ 0x00471078
//   XREF to: 00471078 (CONDITIONAL_JUMP)
// 00471056: MOV EBP,0x61eb44
//   XREF to: 0061eb44 (DATA)
// 0047105b: MOV EAX,0xb8
// 00471060: PUSH 0x61eb56
//   XREF to: 0061eb56 (DATA)
// 00471065: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0047106b: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00471070: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00471075: ADD ESP,0x4
// 00471078: MOV EAX,[0x020a5724]
//   Label: LAB_00471078
//   XREF to: 020a5724 (READ)
// 0047107d: MOV EDX,dword ptr [0x020a573c]
//   XREF to: 020a573c (READ)
// 00471083: MOV dword ptr [EAX + 0x3190],0x1
// 0047108d: MOV dword ptr [EAX + 0x3194],EDX
// 00471093: POP EBP
// 00471094: POP EDI
// 00471095: POP ESI
// 00471096: POP EBX
// 00471097: RET
