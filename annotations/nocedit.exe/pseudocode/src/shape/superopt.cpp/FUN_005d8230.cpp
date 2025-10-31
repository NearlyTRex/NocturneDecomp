// Name: shape_superopt.cpp_FUN_005d8230
// Address: 005d8230
// Address Range: [[005d8230, 005d826e]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8230()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8230(void)

{
  double *in_stack_00000004;
  double in_stack_00000008;
  
  in_stack_00000008 =
       in_stack_00000008 /
       SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
            *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1]);
  *in_stack_00000004 = *in_stack_00000004 * in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000004[1] * in_stack_00000008;
  in_stack_00000004[2] = in_stack_00000004[2] * in_stack_00000008;
  return;
}


// Assembly code:
// 005d8230: SUB ESP,0x8
//   Label: shape_superopt.cpp_FUN_005d8230
// 005d8233: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d8237: FLD double ptr [EDX + 0x8]
// 005d823a: FMUL ST0
// 005d823c: FLD double ptr [EDX]
// 005d823e: FMUL ST0
// 005d8240: FADDP
// 005d8242: FLD double ptr [EDX + 0x10]
// 005d8245: FMUL ST0
// 005d8247: FADDP
// 005d8249: FSQRT
// 005d824b: FLD double ptr [EDX]
// 005d824d: FXCH
// 005d824f: FDIVR double ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d8253: FXCH
// 005d8255: FMUL ST1
// 005d8257: FLD double ptr [EDX + 0x8]
// 005d825a: FMUL ST2
// 005d825c: FLD double ptr [EDX + 0x10]
// 005d825f: FMULP ST3
// 005d8261: FXCH
// 005d8263: FSTP double ptr [EDX]
// 005d8265: FSTP double ptr [EDX + 0x8]
// 005d8268: FSTP double ptr [EDX + 0x10]
// 005d826b: ADD ESP,0x8
// 005d826e: RET
