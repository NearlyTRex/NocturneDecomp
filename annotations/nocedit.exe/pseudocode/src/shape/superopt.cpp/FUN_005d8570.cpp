// Name: shape_superopt.cpp_FUN_005d8570
// Address: 005d8570
// Address Range: [[005d8570, 005d8590]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8570()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8570(void)

{
  double *in_stack_00000004;
  double *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008 + *in_stack_00000004;
  in_stack_00000004[1] = in_stack_00000008[1] + in_stack_00000004[1];
  in_stack_00000004[2] = in_stack_00000008[2] + in_stack_00000004[2];
  return;
}


// Assembly code:
// 005d8570: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d8570
//   XREF to: Stack[0x4] (READ)
// 005d8574: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d8578: FLD double ptr [EDX]
// 005d857a: FADD double ptr [EAX]
// 005d857c: FSTP double ptr [EAX]
// 005d857e: FLD double ptr [EDX + 0x8]
// 005d8581: FADD double ptr [EAX + 0x8]
// 005d8584: FSTP double ptr [EAX + 0x8]
// 005d8587: FLD double ptr [EDX + 0x10]
// 005d858a: FADD double ptr [EAX + 0x10]
// 005d858d: FSTP double ptr [EAX + 0x10]
// 005d8590: RET
