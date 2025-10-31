// Name: core_cloth.cpp_FUN_0043e2f0
// Address: 0043e2f0
// Address Range: [[0043e2f0, 0043e310]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e2f0()

#include "nocturne.h"

void core_cloth_cpp_FUN_0043e2f0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008 + *in_stack_00000004;
  in_stack_00000004[1] = in_stack_00000008[1] + in_stack_00000004[1];
  in_stack_00000004[2] = in_stack_00000008[2] + in_stack_00000004[2];
  return;
}


// Assembly code:
// 0043e2f0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_cloth.cpp_FUN_0043e2f0
//   XREF to: Stack[0x4] (READ)
// 0043e2f4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0043e2f8: FLD float ptr [EDX]
// 0043e2fa: FADD float ptr [EAX]
// 0043e2fc: FSTP float ptr [EAX]
// 0043e2fe: FLD float ptr [EDX + 0x4]
// 0043e301: FADD float ptr [EAX + 0x4]
// 0043e304: FSTP float ptr [EAX + 0x4]
// 0043e307: FLD float ptr [EDX + 0x8]
// 0043e30a: FADD float ptr [EAX + 0x8]
// 0043e30d: FSTP float ptr [EAX + 0x8]
// 0043e310: RET
