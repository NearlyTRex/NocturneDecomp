// Name: shape_superopt.cpp_FUN_005d8630
// Address: 005d8630
// Address Range: [[005d8630, 005d866c]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8630()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d8630(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  uint *unaff_ESI;
  double *pdVar2;
  double *in_stack_00000004;
  double in_stack_00000008;
  double local_20;
  double local_18;
  double local_10;
  
  local_18 = in_stack_00000004[1] * in_stack_00000008;
  local_10 = in_stack_00000004[2] * in_stack_00000008;
  local_20 = *in_stack_00000004 * in_stack_00000008;
  pdVar2 = &local_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
