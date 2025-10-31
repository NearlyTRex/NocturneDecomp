// Name: core_bugs.cpp_FUN_004279f0
// Address: 004279f0
// Address Range: [[004279f0, 00427a10]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004279f0()

#include "nocturne.h"

void core_bugs_cpp_FUN_004279f0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000004 - *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000004[1] - in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000004[2] - in_stack_00000008[2];
  return;
}


// Assembly code:
// 004279f0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bugs.cpp_FUN_004279f0
//   XREF to: Stack[0x4] (READ)
// 004279f4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004279f8: FLD float ptr [EDX]
// 004279fa: FSUBR float ptr [EAX]
// 004279fc: FSTP float ptr [EAX]
// 004279fe: FLD float ptr [EDX + 0x4]
// 00427a01: FSUBR float ptr [EAX + 0x4]
// 00427a04: FSTP float ptr [EAX + 0x4]
// 00427a07: FLD float ptr [EDX + 0x8]
// 00427a0a: FSUBR float ptr [EAX + 0x8]
// 00427a0d: FSTP float ptr [EAX + 0x8]
// 00427a10: RET
