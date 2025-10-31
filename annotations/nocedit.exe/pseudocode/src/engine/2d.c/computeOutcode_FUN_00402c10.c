// Name: engine_2d.c_computeOutcode_FUN_00402c10
// Address: 00402c10
// Address Range: [[00402c10, 00402c41]]
// Convention: __cdecl
// Signature: byte engine_2d.c_computeOutcode_FUN_00402c10(int x, int y, int x_min, int y_min, int x_max, int y_max)
// Cross-references:
//   engine_2d.c_clipAndDrawLine_FUN_00402ca0 (00402ca0) at 00402cc5 [UNCONDITIONAL_CALL]

#include "nocturne.h"

byte __cdecl
engine_2d_c_computeOutcode_FUN_00402c10(int x,int y,int x_min,int y_min,int x_max,int y_max)

{
  byte bVar1;
  
  bVar1 = y_max < y;
  if (y < y_min) {
    bVar1 = bVar1 | 2;
  }
  if (x_max < x) {
    bVar1 = bVar1 | 4;
  }
  if (x < x_min) {
    bVar1 = bVar1 | 8;
  }
  return bVar1;
}


// Assembly code:
// 00402c10: PUSH EBX
//   Label: engine_2d.c_computeOutcode_FUN_00402c10
// 00402c11: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00402c15: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00402c19: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 00402c1d: XOR EAX,EAX
// 00402c1f: CMP EDX,EBX
// 00402c21: JLE 0x00402c28
//   XREF to: 00402c28 (CONDITIONAL_JUMP)
// 00402c23: MOV EAX,0x1
// 00402c28: CMP EDX,dword ptr [ESP + 0x14]
//   Label: LAB_00402c28
//   XREF to: Stack[0x10] (READ)
// 00402c2c: JGE 0x00402c30
//   XREF to: 00402c30 (CONDITIONAL_JUMP)
// 00402c2e: OR AL,0x2
// 00402c30: CMP ECX,dword ptr [ESP + 0x18]
//   Label: LAB_00402c30
//   XREF to: Stack[0x14] (READ)
// 00402c34: JLE 0x00402c38
//   XREF to: 00402c38 (CONDITIONAL_JUMP)
// 00402c36: OR AL,0x4
// 00402c38: CMP ECX,dword ptr [ESP + 0x10]
//   Label: LAB_00402c38
//   XREF to: Stack[0xc] (READ)
// 00402c3c: JGE 0x00402c40
//   XREF to: 00402c40 (CONDITIONAL_JUMP)
// 00402c3e: OR AL,0x8
// 00402c40: POP EBX
//   Label: LAB_00402c40
// 00402c41: RET
