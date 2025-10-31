// Name: core_bodypart.cpp_FUN_0041b590
// Address: 0041b590
// Address Range: [[0041b590, 0041b5b5]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041b590()

#include "nocturne.h"

float * core_bodypart_cpp_FUN_0041b590(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  *in_stack_00000008 = in_stack_00000004[3] - *in_stack_00000004;
  in_stack_00000008[1] = in_stack_00000004[4] - in_stack_00000004[1];
  in_stack_00000008[2] = in_stack_00000004[5] - in_stack_00000004[2];
  return in_stack_00000008;
}


// Assembly code:
// 0041b590: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_FUN_0041b590
//   XREF to: Stack[0x4] (READ)
// 0041b594: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0041b598: LEA EAX,[ECX + 0xc]
// 0041b59b: FLD float ptr [EAX]
// 0041b59d: FSUB float ptr [ECX]
// 0041b59f: FSTP float ptr [EDX]
// 0041b5a1: FLD float ptr [EAX + 0x4]
// 0041b5a4: FSUB float ptr [ECX + 0x4]
// 0041b5a7: FSTP float ptr [EDX + 0x4]
// 0041b5aa: FLD float ptr [EAX + 0x8]
// 0041b5ad: FSUB float ptr [ECX + 0x8]
// 0041b5b0: MOV EAX,EDX
// 0041b5b2: FSTP float ptr [EDX + 0x8]
// 0041b5b5: RET
