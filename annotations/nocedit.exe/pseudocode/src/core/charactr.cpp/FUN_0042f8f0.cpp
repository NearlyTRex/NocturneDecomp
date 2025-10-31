// Name: core_charactr.cpp_FUN_0042f8f0
// Address: 0042f8f0
// Address Range: [[0042f8f0, 0042f912]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_FUN_0042f8f0()

#include "nocturne.h"

void core_charactr_cpp_FUN_0042f8f0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  *in_stack_00000008 = *in_stack_00000004 / *in_stack_0000000c;
  in_stack_00000008[1] = in_stack_00000004[1] / *in_stack_0000000c;
  in_stack_00000008[2] = in_stack_00000004[2] / *in_stack_0000000c;
  return;
}


// Assembly code:
// 0042f8f0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_FUN_0042f8f0
//   XREF to: Stack[0x4] (READ)
// 0042f8f4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0042f8f8: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0042f8fc: FLD float ptr [EDX]
// 0042f8fe: FDIV float ptr [ECX]
// 0042f900: FSTP float ptr [EAX]
// 0042f902: FLD float ptr [EDX + 0x4]
// 0042f905: FDIV float ptr [ECX]
// 0042f907: FSTP float ptr [EAX + 0x4]
// 0042f90a: FLD float ptr [EDX + 0x8]
// 0042f90d: FDIV float ptr [ECX]
// 0042f90f: FSTP float ptr [EAX + 0x8]
// 0042f912: RET
