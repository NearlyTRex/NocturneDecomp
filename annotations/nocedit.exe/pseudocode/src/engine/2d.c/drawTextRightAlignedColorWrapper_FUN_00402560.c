// Name: engine_2d.c_drawTextRightAlignedColorWrapper_FUN_00402560
// Address: 00402560
// Address Range: [[00402560, 00402579]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextRightAlignedColorWrapper_FUN_00402560(char * text, int y_pos, int right_x)
// Function calls:
//   engine_2d.c_drawTextRightAlignedColor_FUN_00402530

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextRightAlignedColorWrapper_FUN_00402560(char *text,int y_pos,int right_x)

{
  engine_2d_c_drawTextRightAlignedColor_FUN_00402530((char *)right_x,(int)text,y_pos);
  return;
}


// Assembly code:
// 00402560: PUSH EBX
//   Label: engine_2d.c_drawTextRightAlignedColorWrapper_FUN_00402560
// 00402561: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00402565: PUSH EDX
// 00402566: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040256a: PUSH ECX
// 0040256b: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0040256f: PUSH EBX
// 00402570: CALL engine_2d.c_drawTextRightAlignedColor_FUN_00402530
//   XREF to: 00402530 (UNCONDITIONAL_CALL)
// 00402575: ADD ESP,0xc
// 00402578: POP EBX
// 00402579: RET
