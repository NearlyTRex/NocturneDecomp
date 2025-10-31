// Name: shape_design.c_FUN_00466210
// Address: 00466210
// Address Range: [[00466210, 00466244]]
// Convention: unknown
// Signature: undefined shape_design.c_FUN_00466210()
// Function calls:
//   shape_design.c_FUN_004661d0

#include "nocturne.h"

undefined4 shape_design_c_FUN_00466210(void)

{
  undefined4 uVar1;
  
  uVar1 = shape_design_c_FUN_004661d0();
  return uVar1;
}


// Assembly code:
// 00466210: PUSH EBX
//   Label: shape_design.c_FUN_00466210
// 00466211: PUSH ESI
// 00466212: PUSH EDI
// 00466213: PUSH EBP
// 00466214: MOV EBP,ESP
// 00466216: SUB ESP,0xc
// 0046621c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046621f: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00466222: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00466225: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00466228: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046622b: PUSH EAX
// 0046622c: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046622f: PUSH EAX
// 00466230: CALL shape_design.c_FUN_004661d0
//   XREF to: 004661d0 (UNCONDITIONAL_CALL)
// 00466235: ADD ESP,0x8
// 00466238: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046623b: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046623e: MOV ESP,EBP
// 00466240: POP EBP
// 00466241: POP EDI
// 00466242: POP ESI
// 00466243: POP EBX
// 00466244: RET
