// Name: engine_2d.c_drawTextCentered_FUN_00402350
// Address: 00402350
// Address Range: [[00402350, 00402389]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCentered_FUN_00402350(char * text, int left_x, int right_x, int y_pos)
// Cross-references:
//   engine_2d.c_drawTextCenteredFormatted_FUN_004023c0 (004023c0) at 0040241a [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredReordered_FUN_00402390 (00402390) at 004023a6 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getStringWidth_FUN_004018a0

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCentered_FUN_00402350(char *text,int left_x,int right_x,int y_pos)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawText_FUN_00401fd0(text,(((left_x + right_x) - iVar1) + 2) / 2,unaff_ESI);
  return;
}


// Assembly code:
// 00402350: PUSH EBX
//   Label: engine_2d.c_drawTextCentered_FUN_00402350
// 00402351: PUSH ESI
// 00402352: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 00402356: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0040235a: PUSH EDX
// 0040235b: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040235f: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00402363: PUSH ESI
// 00402364: ADD EBX,ECX
// 00402366: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 0040236b: LEA EDX,[EBX + 0x1]
// 0040236e: SUB EDX,EAX
// 00402370: INC EDX
// 00402371: MOV EAX,EDX
// 00402373: SAR EDX,0x1f
// 00402376: SUB EAX,EDX
// 00402378: SAR EAX,0x1
// 0040237a: ADD ESP,0x4
// 0040237d: PUSH EAX
// 0040237e: PUSH ESI
// 0040237f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00402384: ADD ESP,0xc
// 00402387: POP ESI
// 00402388: POP EBX
// 00402389: RET
