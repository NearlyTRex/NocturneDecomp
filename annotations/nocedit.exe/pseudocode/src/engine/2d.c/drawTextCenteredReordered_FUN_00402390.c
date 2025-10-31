// Name: engine_2d.c_drawTextCenteredReordered_FUN_00402390
// Address: 00402390
// Address Range: [[00402390, 004023b0]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredReordered_FUN_00402390(char * text, int left_x, int right_x, int y_pos)
// Function calls:
//   engine_2d.c_drawTextCentered_FUN_00402350

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredReordered_FUN_00402390(char *text,int left_x,int right_x,int y_pos)

{
  engine_2d_c_drawTextCentered_FUN_00402350((char *)y_pos,(int)text,left_x,right_x);
  return;
}


// Assembly code:
// 00402390: PUSH EBX
//   Label: engine_2d.c_drawTextCenteredReordered_FUN_00402390
// 00402391: PUSH ESI
// 00402392: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00402396: PUSH EDX
// 00402397: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040239b: PUSH ECX
// 0040239c: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004023a0: PUSH EBX
// 004023a1: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004023a5: PUSH ESI
// 004023a6: CALL engine_2d.c_drawTextCentered_FUN_00402350
//   XREF to: 00402350 (UNCONDITIONAL_CALL)
// 004023ab: ADD ESP,0x10
// 004023ae: POP ESI
// 004023af: POP EBX
// 004023b0: RET
