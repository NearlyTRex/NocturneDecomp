// Name: engine_2d.c_drawTextRightAlignedWrapper_FUN_004021f0
// Address: 004021f0
// Address Range: [[004021f0, 00402209]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextRightAlignedWrapper_FUN_004021f0(char * text, int y_pos, int right_x)
// Function calls:
//   engine_2d.c_drawTextRightAligned_FUN_004021c0

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextRightAlignedWrapper_FUN_004021f0(char *text,int y_pos,int right_x)

{
  engine_2d_c_drawTextRightAligned_FUN_004021c0((char *)right_x,(int)text,y_pos);
  return;
}


// Assembly code:
// 004021f0: PUSH EBX
//   Label: engine_2d.c_drawTextRightAlignedWrapper_FUN_004021f0
// 004021f1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004021f5: PUSH EDX
// 004021f6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004021fa: PUSH ECX
// 004021fb: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004021ff: PUSH EBX
// 00402200: CALL engine_2d.c_drawTextRightAligned_FUN_004021c0
//   XREF to: 004021c0 (UNCONDITIONAL_CALL)
// 00402205: ADD ESP,0xc
// 00402208: POP EBX
// 00402209: RET
