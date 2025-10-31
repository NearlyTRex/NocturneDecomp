// Name: core_bugs.cpp_FUN_004279d0
// Address: 004279d0
// Address Range: [[004279d0, 004279ee]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004279d0()

#include "nocturne.h"

void core_bugs_cpp_FUN_004279d0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008 * *in_stack_00000004;
  in_stack_00000004[1] = *in_stack_00000008 * in_stack_00000004[1];
  in_stack_00000004[2] = *in_stack_00000008 * in_stack_00000004[2];
  return;
}


// Assembly code:
// 004279d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bugs.cpp_FUN_004279d0
//   XREF to: Stack[0x4] (READ)
// 004279d4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004279d8: FLD float ptr [EDX]
// 004279da: FMUL float ptr [EAX]
// 004279dc: FSTP float ptr [EAX]
// 004279de: FLD float ptr [EDX]
// 004279e0: FMUL float ptr [EAX + 0x4]
// 004279e3: FSTP float ptr [EAX + 0x4]
// 004279e6: FLD float ptr [EDX]
// 004279e8: FMUL float ptr [EAX + 0x8]
// 004279eb: FSTP float ptr [EAX + 0x8]
// 004279ee: RET
