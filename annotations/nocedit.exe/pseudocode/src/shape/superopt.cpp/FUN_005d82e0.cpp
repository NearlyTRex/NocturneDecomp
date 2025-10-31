// Name: shape_superopt.cpp_FUN_005d82e0
// Address: 005d82e0
// Address Range: [[005d82e0, 005d830c]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d82e0()

#include "nocturne.h"

double shape_superopt_cpp_FUN_005d82e0(void)

{
  double *in_stack_00000004;
  double *in_stack_00000008;
  
  return in_stack_00000004[2] * in_stack_00000008[2] +
         *in_stack_00000004 * *in_stack_00000008 + in_stack_00000004[1] * in_stack_00000008[1];
}


// Assembly code:
// 005d82e0: SUB ESP,0x8
//   Label: shape_superopt.cpp_FUN_005d82e0
// 005d82e3: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d82e7: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d82eb: FLD double ptr [EDX + 0x8]
// 005d82ee: FMUL double ptr [EAX + 0x8]
// 005d82f1: FLD double ptr [EDX]
// 005d82f3: FMUL double ptr [EAX]
// 005d82f5: FADDP
// 005d82f7: FLD double ptr [EDX + 0x10]
// 005d82fa: FMUL double ptr [EAX + 0x10]
// 005d82fd: FADDP
// 005d82ff: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005d8302: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005d8305: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005d8309: ADD ESP,0x8
// 005d830c: RET
