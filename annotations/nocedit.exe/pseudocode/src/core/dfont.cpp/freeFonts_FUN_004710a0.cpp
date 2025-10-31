// Name: core_dfont.cpp_freeFonts_FUN_004710a0
// Address: 004710a0
// Address Range: [[004710a0, 004712f6]]
// Convention: __cdecl
// Signature: void core_dfont.cpp_freeFonts_FUN_004710a0(void)
// Cross-references:
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 00508809 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dfont_cpp_0061eb7e
//   TerminatedCString s_core_dfont_cpp_0061eb90
//   TerminatedCString s_core_dfont_cpp_0061eba2
//   TerminatedCString s_core_dfont_cpp_0061ebb4
//   TerminatedCString s_core_dfont_cpp_0061ebc6
//   TerminatedCString s_core_dfont_cpp_0061ebd8
//   TerminatedCString s_core_dfont_cpp_0061ebea
//   TerminatedCString s_core_dfont_cpp_0061ebfc
//   TerminatedCString s_core_dfont_cpp_0061ec0e
//   TerminatedCString s_core_dfont_cpp_0061ec20
//   char* g_CurrentDebugFilename = 0067d200
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
//   int g_CurrentDebugLine
//   int g_MessageCount
// Function calls:
//   engine_font.cpp_CBitFont_dtor_FUN_004cceb0
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void __cdecl core_dfont_cpp_freeFonts_FUN_004710a0(void)

{
  CBitFont *pCVar1;
  
  g_CurrentDebugLine = 199;
  g_CurrentDebugFilename = "..\\core\\dfont.cpp";
  if (g_MediumFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004cceb0(g_MediumFont);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  g_CurrentDebugFilename = "..\\core\\dfont.cpp";
  g_CurrentDebugLine = 0xc9;
  g_MediumFont = (CBitFont *)0x0;
  if (g_TinyFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004cceb0(g_TinyFont);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  g_CurrentDebugFilename = "..\\core\\dfont.cpp";
  g_CurrentDebugLine = 0xcb;
  g_TinyFont = (CBitFont *)0x0;
  if (g_ThemeFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004cceb0(g_ThemeFont);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  g_CurrentDebugFilename = "..\\core\\dfont.cpp";
  g_CurrentDebugLine = 0xcd;
  g_ThemeFont = (CBitFont *)0x0;
  if (g_SmallEditorFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004cceb0(g_SmallEditorFont);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  g_CurrentDebugFilename = "..\\core\\dfont.cpp";
  g_CurrentDebugLine = 0xcf;
  g_SmallEditorFont = (CBitFont *)0x0;
  if (g_ConsoleFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004cceb0(g_ConsoleFont);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  g_EditorFont = (CBitFont *)0x0;
  g_CurrentDebugFilename = "..\\core\\dfont.cpp";
  g_CurrentDebugLine = 0xd2;
  g_ConsoleFont = (CBitFont *)0x0;
  if (g_MicroFont != (CBitFont *)0x0) {
    pCVar1 = engine_font_cpp_CBitFont_dtor_FUN_004cceb0(g_MicroFont);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  g_MicroFont = (CBitFont *)0x0;
  if (g_MessageCount != 0) {
    g_CurrentDebugLine = 0xd5;
    g_CurrentDebugFilename = "..\\core\\dfont.cpp";
    if (g_MediumWinFont != (CWinFont *)0x0) {
      (*((g_MediumWinFont->base_font).vtable)->ctor)(&g_MediumWinFont->base_font);
    }
    g_CurrentDebugFilename = "..\\core\\dfont.cpp";
    g_CurrentDebugLine = 0xd7;
    g_MediumWinFont = (CWinFont *)0x0;
    if (g_TinyWinFont != (CWinFont *)0x0) {
      (*((g_TinyWinFont->base_font).vtable)->ctor)(&g_TinyWinFont->base_font);
    }
    g_CurrentDebugFilename = "..\\core\\dfont.cpp";
    g_CurrentDebugLine = 0xd9;
    g_TinyWinFont = (CWinFont *)0x0;
    if (g_ThemeWinFont != (CWinFont *)0x0) {
      (*((g_ThemeWinFont->base_font).vtable)->ctor)(&g_ThemeWinFont->base_font);
    }
    g_CurrentDebugFilename = "..\\core\\dfont.cpp";
    g_CurrentDebugLine = 0xdb;
    g_ThemeWinFont = (CWinFont *)0x0;
    if (g_DebugWinFont != (CWinFont *)0x0) {
      (*((g_DebugWinFont->base_font).vtable)->ctor)(&g_DebugWinFont->base_font);
    }
    g_DebugWinFont = (CWinFont *)0x0;
  }
  return;
}


// Assembly code:
// 004710a0: PUSH EBX
//   Label: core_dfont.cpp_freeFonts_FUN_004710a0
// 004710a1: PUSH ESI
// 004710a2: PUSH EDI
// 004710a3: PUSH EBP
// 004710a4: MOV ECX,0xc7
// 004710a9: MOV EDX,0x61eb7e
//   XREF to: 0061eb7e (PARAM)
// 004710ae: MOV EBX,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 004710b4: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 004710ba: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 004710c0: TEST EBX,EBX
// 004710c2: JNZ 0x004712cf
//   XREF to: 004712cf (CONDITIONAL_JUMP)
// 004710c8: MOV EBP,0x61eb90
//   Label: LAB_004710c8
//   XREF to: 0061eb90 (DATA)
// 004710cd: MOV EAX,0xc9
// 004710d2: MOV EDX,dword ptr [0x020a571c]
//   XREF to: 020a571c (READ)
// 004710d8: XOR EDI,EDI
// 004710da: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 004710e0: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 004710e5: MOV dword ptr [0x020a5718],EDI
//   XREF to: 020a5718 (WRITE)
// 004710eb: TEST EDX,EDX
// 004710ed: JZ 0x00471102
//   XREF to: 00471102 (CONDITIONAL_JUMP)
// 004710ef: PUSH EDI
// 004710f0: PUSH EDX
// 004710f1: CALL engine_font.cpp_CBitFont_dtor_FUN_004cceb0
//   XREF to: 004cceb0 (UNCONDITIONAL_CALL)
// 004710f6: ADD ESP,0x8
// 004710f9: PUSH EAX
// 004710fa: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004710ff: ADD ESP,0x4
// 00471102: MOV ESI,0x61eba2
//   Label: LAB_00471102
//   XREF to: 0061eba2 (DATA)
// 00471107: MOV EDI,0xcb
// 0047110c: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 00471112: XOR EBX,EBX
// 00471114: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 0047111a: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 00471120: MOV dword ptr [0x020a571c],EBX
//   XREF to: 020a571c (WRITE)
// 00471126: TEST EBP,EBP
// 00471128: JZ 0x0047113d
//   XREF to: 0047113d (CONDITIONAL_JUMP)
// 0047112a: PUSH EBX
// 0047112b: PUSH EBP
// 0047112c: CALL engine_font.cpp_CBitFont_dtor_FUN_004cceb0
//   XREF to: 004cceb0 (UNCONDITIONAL_CALL)
// 00471131: ADD ESP,0x8
// 00471134: PUSH EAX
// 00471135: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0047113a: ADD ESP,0x4
// 0047113d: MOV ECX,0x61ebb4
//   Label: LAB_0047113d
//   XREF to: 0061ebb4 (PARAM)
// 00471142: MOV EBX,0xcd
// 00471147: MOV ESI,dword ptr [0x020a5724]
//   XREF to: 020a5724 (READ)
// 0047114d: XOR EDX,EDX
// 0047114f: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 00471155: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 0047115b: MOV dword ptr [0x020a5720],EDX
//   XREF to: 020a5720 (WRITE)
// 00471161: TEST ESI,ESI
// 00471163: JZ 0x00471178
//   XREF to: 00471178 (CONDITIONAL_JUMP)
// 00471165: PUSH EDX
// 00471166: PUSH ESI
// 00471167: CALL engine_font.cpp_CBitFont_dtor_FUN_004cceb0
//   XREF to: 004cceb0 (UNCONDITIONAL_CALL)
// 0047116c: ADD ESP,0x8
// 0047116f: PUSH EAX
// 00471170: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00471175: ADD ESP,0x4
// 00471178: MOV EAX,0x61ebc6
//   Label: LAB_00471178
//   XREF to: 0061ebc6 (PARAM)
// 0047117d: MOV EDX,0xcf
// 00471182: MOV ECX,dword ptr [0x020a5728]
//   XREF to: 020a5728 (READ)
// 00471188: XOR EBP,EBP
// 0047118a: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 0047118f: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 00471195: MOV dword ptr [0x020a5724],EBP
//   XREF to: 020a5724 (WRITE)
// 0047119b: TEST ECX,ECX
// 0047119d: JZ 0x004711b2
//   XREF to: 004711b2 (CONDITIONAL_JUMP)
// 0047119f: PUSH EBP
// 004711a0: PUSH ECX
// 004711a1: CALL engine_font.cpp_CBitFont_dtor_FUN_004cceb0
//   XREF to: 004cceb0 (UNCONDITIONAL_CALL)
// 004711a6: ADD ESP,0x8
// 004711a9: PUSH EAX
// 004711aa: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004711af: ADD ESP,0x4
// 004711b2: MOV EBP,0x61ebd8
//   Label: LAB_004711b2
//   XREF to: 0061ebd8 (DATA)
// 004711b7: MOV EAX,0xd2
// 004711bc: XOR ESI,ESI
// 004711be: MOV EDX,dword ptr [0x020a572c]
//   XREF to: 020a572c (READ)
// 004711c4: MOV dword ptr [0x02cf1cd0],ESI
//   XREF to: 02cf1cd0 (WRITE)
// 004711ca: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 004711d0: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 004711d5: MOV dword ptr [0x020a5728],ESI
//   XREF to: 020a5728 (WRITE)
// 004711db: TEST EDX,EDX
// 004711dd: JZ 0x004711f2
//   XREF to: 004711f2 (CONDITIONAL_JUMP)
// 004711df: PUSH ESI
// 004711e0: PUSH EDX
// 004711e1: CALL engine_font.cpp_CBitFont_dtor_FUN_004cceb0
//   XREF to: 004cceb0 (UNCONDITIONAL_CALL)
// 004711e6: ADD ESP,0x8
// 004711e9: PUSH EAX
// 004711ea: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004711ef: ADD ESP,0x4
// 004711f2: XOR EBX,EBX
//   Label: LAB_004711f2
// 004711f4: MOV ESI,dword ptr [0x02fa8cd0]
//   XREF to: 02fa8cd0 (READ)
// 004711fa: MOV dword ptr [0x020a572c],EBX
//   XREF to: 020a572c (WRITE)
// 00471200: TEST ESI,ESI
// 00471202: JZ 0x004712ca
//   XREF to: 004712ca (CONDITIONAL_JUMP)
// 00471208: MOV EBP,0xd5
// 0047120d: MOV EDI,0x61ebea
//   XREF to: 0061ebea (DATA)
// 00471212: MOV EAX,[0x020a5730]
//   XREF to: 020a5730 (READ)
// 00471217: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 0047121d: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 00471223: TEST EAX,EAX
// 00471225: JNZ 0x004712e8
//   XREF to: 004712e8 (CONDITIONAL_JUMP)
// 0047122b: MOV ECX,0x61ebfc
//   Label: LAB_0047122b
//   XREF to: 0061ebfc (DATA)
// 00471230: MOV EBX,0xd7
// 00471235: MOV ESI,dword ptr [0x020a5734]
//   XREF to: 020a5734 (READ)
// 0047123b: XOR EDX,EDX
// 0047123d: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 00471243: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 00471249: MOV dword ptr [0x020a5730],EDX
//   XREF to: 020a5730 (WRITE)
// 0047124f: TEST ESI,ESI
// 00471251: JZ 0x0047125d
//   XREF to: 0047125d (CONDITIONAL_JUMP)
// 00471253: PUSH 0x2
// 00471255: MOV EDX,dword ptr [ESI]
// 00471257: PUSH ESI
// 00471258: CALL dword ptr [EDX]
// 0047125a: ADD ESP,0x8
// 0047125d: MOV EBP,0x61ec0e
//   Label: LAB_0047125d
//   XREF to: 0061ec0e (DATA)
// 00471262: MOV EAX,0xd9
// 00471267: MOV EDX,dword ptr [0x020a5738]
//   XREF to: 020a5738 (READ)
// 0047126d: XOR EDI,EDI
// 0047126f: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 00471275: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 0047127a: MOV dword ptr [0x020a5734],EDI
//   XREF to: 020a5734 (WRITE)
// 00471280: TEST EDX,EDX
// 00471282: JZ 0x00471290
//   XREF to: 00471290 (CONDITIONAL_JUMP)
// 00471284: PUSH 0x2
// 00471286: MOV EAX,EDX
// 00471288: PUSH EAX
// 00471289: MOV EDX,dword ptr [EDX]
// 0047128b: CALL dword ptr [EDX]
// 0047128d: ADD ESP,0x8
// 00471290: MOV EBX,0x61ec20
//   Label: LAB_00471290
//   XREF to: 0061ec20 (DATA)
// 00471295: MOV ESI,0xdb
// 0047129a: MOV EDI,dword ptr [0x020a573c]
//   XREF to: 020a573c (READ)
// 004712a0: XOR ECX,ECX
// 004712a2: MOV dword ptr [0x0067d20c],EBX
//   XREF to: 0067d20c (WRITE)
// 004712a8: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 004712ae: MOV dword ptr [0x020a5738],ECX
//   XREF to: 020a5738 (WRITE)
// 004712b4: TEST EDI,EDI
// 004712b6: JZ 0x004712c2
//   XREF to: 004712c2 (CONDITIONAL_JUMP)
// 004712b8: PUSH 0x2
// 004712ba: MOV EDX,dword ptr [EDI]
// 004712bc: PUSH EDI
// 004712bd: CALL dword ptr [EDX]
// 004712bf: ADD ESP,0x8
// 004712c2: XOR EBP,EBP
//   Label: LAB_004712c2
// 004712c4: MOV dword ptr [0x020a573c],EBP
//   XREF to: 020a573c (WRITE)
// 004712ca: POP EBP
//   Label: LAB_004712ca
// 004712cb: POP EDI
// 004712cc: POP ESI
// 004712cd: POP EBX
// 004712ce: RET
// 004712cf: PUSH 0x0
//   Label: LAB_004712cf
// 004712d1: PUSH EBX
// 004712d2: CALL engine_font.cpp_CBitFont_dtor_FUN_004cceb0
//   XREF to: 004cceb0 (UNCONDITIONAL_CALL)
// 004712d7: ADD ESP,0x8
// 004712da: PUSH EAX
// 004712db: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004712e0: ADD ESP,0x4
// 004712e3: JMP 0x004710c8
//   XREF to: 004710c8 (UNCONDITIONAL_JUMP)
// 004712e8: PUSH 0x2
//   Label: LAB_004712e8
// 004712ea: MOV EDX,dword ptr [EAX]
// 004712ec: PUSH EAX
// 004712ed: CALL dword ptr [EDX]
// 004712ef: ADD ESP,0x8
// 004712f2: JMP 0x0047122b
//   XREF to: 0047122b (UNCONDITIONAL_JUMP)
