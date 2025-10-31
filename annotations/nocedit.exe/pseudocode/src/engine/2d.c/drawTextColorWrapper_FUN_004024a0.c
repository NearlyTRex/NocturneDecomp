// Name: engine_2d.c_drawTextColorWrapper_FUN_004024a0
// Address: 004024a0
// Address Range: [[004024a0, 004024b9]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextColorWrapper_FUN_004024a0(char * text, int x_pos, int y_pos)
// Function calls:
//   engine_2d.c_drawTextColor_FUN_00402430

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextColorWrapper_FUN_004024a0(char *text,int x_pos,int y_pos)

{
  engine_2d_c_drawTextColor_FUN_00402430((char *)y_pos,(int)text,x_pos);
  return;
}


// Assembly code:
// 004024a0: PUSH EBX
//   Label: engine_2d.c_drawTextColorWrapper_FUN_004024a0
// 004024a1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004024a5: PUSH EDX
// 004024a6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004024aa: PUSH ECX
// 004024ab: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004024af: PUSH EBX
// 004024b0: CALL engine_2d.c_drawTextColor_FUN_00402430
//   XREF to: 00402430 (UNCONDITIONAL_CALL)
// 004024b5: ADD ESP,0xc
// 004024b8: POP EBX
// 004024b9: RET
