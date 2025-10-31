// Name: core_actor.cpp_FUN_00410380
// Address: 00410380
// Address Range: [[00410380, 004103a4]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_00410380()

#include "nocturne.h"

float core_actor_cpp_FUN_00410380(void)

{
  float *in_stack_00000004;
  
  return SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
              *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1])
  ;
}


// Assembly code:
// 00410380: SUB ESP,0x4
//   Label: core_actor.cpp_FUN_00410380
// 00410383: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00410387: FLD float ptr [EAX + 0x4]
// 0041038a: FMUL ST0
// 0041038c: FLD float ptr [EAX]
// 0041038e: FMUL ST0
// 00410390: FADDP
// 00410392: FLD float ptr [EAX + 0x8]
// 00410395: FMUL ST0
// 00410397: FADDP
// 00410399: FSQRT
// 0041039b: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 0041039e: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004103a1: ADD ESP,0x4
// 004103a4: RET
