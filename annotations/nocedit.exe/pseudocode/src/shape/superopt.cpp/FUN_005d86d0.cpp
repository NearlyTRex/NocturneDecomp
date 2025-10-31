// Name: shape_superopt.cpp_FUN_005d86d0
// Address: 005d86d0
// Address Range: [[005d86d0, 005d8706]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d86d0()

#include "nocturne.h"

double shape_superopt_cpp_FUN_005d86d0(void)

{
  double *in_stack_00000004;
  double *in_stack_00000008;
  
  return SQRT((in_stack_00000008[2] - in_stack_00000004[2]) *
              (in_stack_00000008[2] - in_stack_00000004[2]) +
              (in_stack_00000008[1] - in_stack_00000004[1]) *
              (in_stack_00000008[1] - in_stack_00000004[1]) +
              (*in_stack_00000008 - *in_stack_00000004) * (*in_stack_00000008 - *in_stack_00000004))
  ;
}


// Assembly code:
// 005d86d0: SUB ESP,0x20
//   Label: shape_superopt.cpp_FUN_005d86d0
// 005d86d3: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005d86d7: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005d86db: FLD double ptr [EAX]
// 005d86dd: FSUB double ptr [EDX]
// 005d86df: FMUL ST0
// 005d86e1: FLD double ptr [EAX + 0x8]
// 005d86e4: FSUB double ptr [EDX + 0x8]
// 005d86e7: FMUL ST0
// 005d86e9: FLD double ptr [EAX + 0x10]
// 005d86ec: FXCH
// 005d86ee: FADDP ST2,ST0
// 005d86f0: FSUB double ptr [EDX + 0x10]
// 005d86f3: FMUL ST0
// 005d86f5: FADDP
// 005d86f7: FSQRT
// 005d86f9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005d86fc: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005d86ff: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 005d8703: ADD ESP,0x20
// 005d8706: RET
