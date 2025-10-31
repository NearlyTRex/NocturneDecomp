// Name: engine_2d.c_drawTextRightAligned_FUN_004021c0
// Address: 004021c0
// Address Range: [[004021c0, 004021eb]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextRightAligned_FUN_004021c0(char * text, int y_pos, int right_x)
// Cross-references:
//   engine_2d.c_drawTextRightAlignedFormatted_FUN_00402210 (00402210) at 00402261 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextRightAlignedWrapper_FUN_004021f0 (004021f0) at 00402200 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getStringWidth_FUN_004018a0

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextRightAligned_FUN_004021c0(char *text,int y_pos,int right_x)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawText_FUN_00401fd0((char *)y_pos,(right_x - iVar1) + 2,unaff_EBX);
  return;
}


// Assembly code:
// 004021c0: PUSH EBX
//   Label: engine_2d.c_drawTextRightAligned_FUN_004021c0
// 004021c1: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004021c5: PUSH EDX
// 004021c6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004021ca: PUSH ECX
// 004021cb: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 004021d0: ADD ESP,0x4
// 004021d3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004021d7: SUB EDX,EAX
// 004021d9: LEA EAX,[EDX + 0x2]
// 004021dc: PUSH EAX
// 004021dd: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004021e1: PUSH EBX
// 004021e2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004021e7: ADD ESP,0xc
// 004021ea: POP EBX
// 004021eb: RET
