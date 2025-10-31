// Name: engine_2d.c_drawTextCenteredAtColorWrapper_FUN_00402630
// Address: 00402630
// Address Range: [[00402630, 00402649]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredAtColorWrapper_FUN_00402630(char * text, int center_x, int y_pos)
// Function calls:
//   engine_2d.c_drawTextCenteredAtColor_FUN_004025f0

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredAtColorWrapper_FUN_00402630(char *text,int center_x,int y_pos)

{
  engine_2d_c_drawTextCenteredAtColor_FUN_004025f0((char *)y_pos,(int)text,center_x);
  return;
}


// Assembly code:
// 00402630: PUSH EBX
//   Label: engine_2d.c_drawTextCenteredAtColorWrapper_FUN_00402630
// 00402631: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00402635: PUSH EDX
// 00402636: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040263a: PUSH ECX
// 0040263b: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0040263f: PUSH EBX
// 00402640: CALL engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
//   XREF to: 004025f0 (UNCONDITIONAL_CALL)
// 00402645: ADD ESP,0xc
// 00402648: POP EBX
// 00402649: RET
