// Name: core_game.cpp_FUN_004d8890
// Address: 004d8890
// Address Range: [[004d8890, 004d890f]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004d8890()
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CBitFont* g_ThemeFont
//   undefined4 DAT_02d831c4
//   undefined4 DAT_02d831c8
//   undefined4 DAT_02d831cc
// Function calls:
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80

#include "nocturne.h"

void core_game_cpp_FUN_004d8890(void)

{
  char *in_stack_00000004;
  
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,in_stack_00000004,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (DAT_02d831c8 <= g_WindowHeight + DAT_02d831cc * -4) {
    return;
  }
  DAT_02d831c8 = DAT_02d831cc * 6;
  DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  return;
}


// Assembly code:
// 004d8890: PUSH EBX
//   Label: core_game.cpp_FUN_004d8890
// 004d8891: PUSH ESI
// 004d8892: PUSH EDI
// 004d8893: PUSH -0x1
// 004d8895: PUSH 0x7
// 004d8897: MOV EDX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d889d: PUSH EDX
// 004d889e: MOV ECX,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d88a4: PUSH ECX
// 004d88a5: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004d88a9: PUSH EBX
// 004d88aa: MOV ESI,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d88b0: PUSH ESI
// 004d88b1: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d88b6: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d88bb: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d88c1: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d88c7: ADD EDI,EAX
// 004d88c9: SHL EAX,0x2
// 004d88cc: ADD ESP,0x18
// 004d88cf: SUB EDX,EAX
// 004d88d1: MOV dword ptr [0x02d831c8],EDI
//   XREF to: 02d831c8 (WRITE)
// 004d88d7: CMP EDX,EDI
// 004d88d9: JL 0x004d88df
//   XREF to: 004d88df (CONDITIONAL_JUMP)
// 004d88db: POP EDI
// 004d88dc: POP ESI
// 004d88dd: POP EBX
// 004d88de: RET
// 004d88df: MOV EDX,dword ptr [0x02d831cc]
//   Label: LAB_004d88df
//   XREF to: 02d831cc (READ)
// 004d88e5: LEA EAX,[EDX*0x4 + 0x0]
// 004d88ec: SUB EAX,EDX
// 004d88ee: ADD EAX,EAX
// 004d88f0: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d88f5: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004d88fa: MOV EDX,EAX
// 004d88fc: MOV ECX,0x3
// 004d8901: SAR EDX,0x1f
// 004d8904: IDIV ECX
// 004d8906: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d890c: POP EDI
// 004d890d: POP ESI
// 004d890e: POP EBX
// 004d890f: RET
