// Name: shape_superopt.cpp_FUN_005d8200
// Address: 005d8200
// Address Range: [[005d8200, 005d8228]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_FUN_005d8200(void)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_FUN_005d8200(void)

{
  double *in_stack_00000004;
  int local_8;
  
  local_8 = SUB84(SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
                       *in_stack_00000004 * *in_stack_00000004 +
                       in_stack_00000004[1] * in_stack_00000004[1]),0);
  return local_8;
}
