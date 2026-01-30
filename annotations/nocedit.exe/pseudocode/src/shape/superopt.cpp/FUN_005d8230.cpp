// Name: shape_superopt.cpp_FUN_005d8230
// Address: 005d8230
// Address Range: [[005d8230, 005d826e]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_FUN_005d8230(void)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_FUN_005d8230(void)

{
  double dVar1;
  double *in_stack_00000004;
  double in_stack_00000008;
  
  dVar1 = in_stack_00000008 /
          SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
               *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1]
              );
  *in_stack_00000004 = *in_stack_00000004 * dVar1;
  in_stack_00000004[1] = in_stack_00000004[1] * dVar1;
  in_stack_00000004[2] = in_stack_00000004[2] * dVar1;
  return;
}
