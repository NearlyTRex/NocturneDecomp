// Name: shape_design.c_FUN_004661d0
// Address: 004661d0
// Address Range: [[004661d0, 00466200]]
// Convention: unknown
// Signature: undefined shape_design.c_FUN_004661d0()
// Cross-references:
//   shape_design.c_FUN_00466210 (00466210) at 00466230 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int shape_design_c_FUN_004661d0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  return *(int *)(in_stack_00000008 + 4) - *(int *)(in_stack_00000004 + 4);
}


// Assembly code:
// 004661d0: PUSH EBX
//   Label: shape_design.c_FUN_004661d0
// 004661d1: PUSH ESI
// 004661d2: PUSH EDI
// 004661d3: PUSH EBP
// 004661d4: MOV EBP,ESP
// 004661d6: SUB ESP,0xc
// 004661dc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004661df: MOV EAX,dword ptr [EAX + 0x4]
// 004661e2: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004661e5: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004661e8: MOV EAX,dword ptr [EAX + 0x4]
// 004661eb: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004661ee: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004661f1: SUB EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004661f4: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004661f7: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004661fa: MOV ESP,EBP
// 004661fc: POP EBP
// 004661fd: POP EDI
// 004661fe: POP ESI
// 004661ff: POP EBX
// 00466200: RET
