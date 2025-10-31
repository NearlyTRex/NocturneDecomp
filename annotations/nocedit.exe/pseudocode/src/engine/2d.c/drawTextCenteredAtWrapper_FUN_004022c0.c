// Name: engine_2d.c_drawTextCenteredAtWrapper_FUN_004022c0
// Address: 004022c0
// Address Range: [[004022c0, 004022d9]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredAtWrapper_FUN_004022c0(char * text, int center_x, int y_pos)
// Function calls:
//   engine_2d.c_drawTextCenteredAt_FUN_00402280

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredAtWrapper_FUN_004022c0(char *text,int center_x,int y_pos)

{
  engine_2d_c_drawTextCenteredAt_FUN_00402280((char *)y_pos,(int)text,center_x);
  return;
}


// Assembly code:
// 004022c0: PUSH EBX
//   Label: engine_2d.c_drawTextCenteredAtWrapper_FUN_004022c0
// 004022c1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004022c5: PUSH EDX
// 004022c6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004022ca: PUSH ECX
// 004022cb: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004022cf: PUSH EBX
// 004022d0: CALL engine_2d.c_drawTextCenteredAt_FUN_00402280
//   XREF to: 00402280 (UNCONDITIONAL_CALL)
// 004022d5: ADD ESP,0xc
// 004022d8: POP EBX
// 004022d9: RET
