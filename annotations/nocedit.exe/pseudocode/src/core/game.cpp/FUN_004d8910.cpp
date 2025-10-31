// Name: core_game.cpp_FUN_004d8910
// Address: 004d8910
// Address Range: [[004d8910, 004d89cf]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004d8910()
// Globals:
//   TerminatedCString s_s_s_0062b28d
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CBitFont* g_ThemeFont
//   undefined4 DAT_02d831c4
//   undefined4 DAT_02d831c8
//   undefined4 DAT_02d831cc
// Function calls:
//   core_menu.cpp_LocalizeMainGameControls_FUN_005134e0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80

#include "nocturne.h"

/* Signature: undefined1 core_game.cpp_FUN_004d8910(undefined4 param_1, undefined4 param_2) */

void core_game_cpp_FUN_004d8910(void)

{
  undefined4 uVar1;
  BADSPACEBASE *in_ESP;
  char acStack_108 [248];
  
  uVar1 = core_menu_cpp_LocalizeMainGameControls_FUN_005134e0();
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffef4,"%s = %s",uVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_108,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (DAT_02d831c8 <= g_WindowHeight + DAT_02d831cc * -4) {
    return;
  }
  DAT_02d831c8 = DAT_02d831cc * 6;
  DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  return;
}


// Assembly code:
// 004d8910: PUSH EBX
//   Label: core_game.cpp_FUN_004d8910
// 004d8911: PUSH ESI
// 004d8912: PUSH EDI
// 004d8913: PUSH EBP
// 004d8914: SUB ESP,0x100
// 004d891a: MOV EDX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x8] (READ)
// 004d8921: PUSH EDX
// 004d8922: MOV ECX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 004d8929: PUSH ECX
// 004d892a: CALL core_menu.cpp_LocalizeMainGameControls_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d892f: ADD ESP,0x4
// 004d8932: PUSH EAX
// 004d8933: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d8938: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x110] (DATA)
// 004d893c: PUSH EAX
// 004d893d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d8942: ADD ESP,0x10
// 004d8945: PUSH -0x1
// 004d8947: PUSH 0x7
// 004d8949: MOV EBX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d894f: PUSH EBX
// 004d8950: MOV ESI,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d8956: PUSH ESI
// 004d8957: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x110] (DATA)
// 004d895b: PUSH EAX
// 004d895c: MOV EDI,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d8962: PUSH EDI
// 004d8963: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d8968: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d896d: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8973: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d8979: ADD EBP,EAX
// 004d897b: SHL EAX,0x2
// 004d897e: ADD ESP,0x18
// 004d8981: SUB EDX,EAX
// 004d8983: MOV dword ptr [0x02d831c8],EBP
//   XREF to: 02d831c8 (WRITE)
// 004d8989: CMP EDX,EBP
// 004d898b: JL 0x004d8998
//   XREF to: 004d8998 (CONDITIONAL_JUMP)
// 004d898d: ADD ESP,0x100
// 004d8993: POP EBP
// 004d8994: POP EDI
// 004d8995: POP ESI
// 004d8996: POP EBX
// 004d8997: RET
// 004d8998: MOV EDX,dword ptr [0x02d831cc]
//   Label: LAB_004d8998
//   XREF to: 02d831cc (READ)
// 004d899e: LEA EAX,[EDX*0x4 + 0x0]
// 004d89a5: SUB EAX,EDX
// 004d89a7: ADD EAX,EAX
// 004d89a9: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d89ae: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004d89b3: MOV EDX,EAX
// 004d89b5: MOV ECX,0x3
// 004d89ba: SAR EDX,0x1f
// 004d89bd: IDIV ECX
// 004d89bf: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d89c5: ADD ESP,0x100
// 004d89cb: POP EBP
// 004d89cc: POP EDI
// 004d89cd: POP ESI
// 004d89ce: POP EBX
// 004d89cf: RET
