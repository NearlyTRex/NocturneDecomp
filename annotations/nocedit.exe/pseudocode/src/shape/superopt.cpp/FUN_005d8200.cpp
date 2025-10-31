// Name: shape_superopt.cpp_FUN_005d8200
// Address: 005d8200
// Address Range: [[005d8200, 005d8228]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8200()

#include "nocturne.h"

double shape_superopt_cpp_FUN_005d8200(void)

{
  double *in_stack_00000004;
  
  return SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
              *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1])
  ;
}


// Assembly code:
// 005d8200: SUB ESP,0x8
//   Label: shape_superopt.cpp_FUN_005d8200
// 005d8203: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d8207: FLD double ptr [EAX + 0x8]
// 005d820a: FMUL ST0
// 005d820c: FLD double ptr [EAX]
// 005d820e: FMUL ST0
// 005d8210: FADDP
// 005d8212: FLD double ptr [EAX + 0x10]
// 005d8215: FMUL ST0
// 005d8217: FADDP
// 005d8219: FSQRT
// 005d821b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005d821e: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005d8221: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005d8225: ADD ESP,0x8
// 005d8228: RET
