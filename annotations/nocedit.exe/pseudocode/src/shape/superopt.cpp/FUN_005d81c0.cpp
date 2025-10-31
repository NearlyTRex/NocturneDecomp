// Name: shape_superopt.cpp_FUN_005d81c0
// Address: 005d81c0
// Address Range: [[005d81c0, 005d81fa]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d81c0()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d81c0(void)

{
  double dVar1;
  double *in_stack_00000004;
  
  dVar1 = 1.0 / SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
                     *in_stack_00000004 * *in_stack_00000004 +
                     in_stack_00000004[1] * in_stack_00000004[1]);
  *in_stack_00000004 = *in_stack_00000004 * dVar1;
  in_stack_00000004[1] = in_stack_00000004[1] * dVar1;
  in_stack_00000004[2] = in_stack_00000004[2] * dVar1;
  return;
}


// Assembly code:
// 005d81c0: SUB ESP,0x8
//   Label: shape_superopt.cpp_FUN_005d81c0
// 005d81c3: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d81c7: FLD double ptr [EDX + 0x8]
// 005d81ca: FMUL ST0
// 005d81cc: FLD double ptr [EDX]
// 005d81ce: FMUL ST0
// 005d81d0: FADDP
// 005d81d2: FLD double ptr [EDX + 0x10]
// 005d81d5: FMUL ST0
// 005d81d7: FADDP
// 005d81d9: FSQRT
// 005d81db: FLD double ptr [EDX]
// 005d81dd: FLD1
// 005d81df: FDIVRP ST2,ST0
// 005d81e1: FMUL ST1
// 005d81e3: FLD double ptr [EDX + 0x8]
// 005d81e6: FMUL ST2
// 005d81e8: FLD double ptr [EDX + 0x10]
// 005d81eb: FMULP ST3
// 005d81ed: FXCH
// 005d81ef: FSTP double ptr [EDX]
// 005d81f1: FSTP double ptr [EDX + 0x8]
// 005d81f4: FSTP double ptr [EDX + 0x10]
// 005d81f7: ADD ESP,0x8
// 005d81fa: RET
