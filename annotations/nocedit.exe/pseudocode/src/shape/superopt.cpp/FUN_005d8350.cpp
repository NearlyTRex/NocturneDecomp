// Name: shape_superopt.cpp_FUN_005d8350
// Address: 005d8350
// Address Range: [[005d8350, 005d8383]]
// Convention: unknown
// Signature: void shape_superopt_cpp_FUN_005d8350(void)

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8350(void)

{
  double dVar1;
  double dVar2;
  double *unaff_ESI;
  double *in_stack_00000004;
  double *in_stack_00000008;
  
  dVar1 = in_stack_00000004[1];
  dVar2 = in_stack_00000008[1];
  *unaff_ESI = *in_stack_00000004 - *in_stack_00000008;
  unaff_ESI[1] = dVar1 - dVar2;
  return;
}
