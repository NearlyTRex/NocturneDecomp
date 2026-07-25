// Name: FUN_00423c20
// Address: 00423c20
// Address Range: [[00423c20, 00423c86]]
// Convention: unknown
// Signature: void FUN_00423c20(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00423c20(void)

{
  float fVar1;
  float *in_stack_00000004;
  
  fVar1 = SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
               *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1]
              );
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    *in_stack_00000004 = *in_stack_00000004 * fVar1;
    in_stack_00000004[1] = in_stack_00000004[1] * fVar1;
    in_stack_00000004[2] = in_stack_00000004[2] * fVar1;
    return;
  }
  in_stack_00000004[2] = 0.0;
  in_stack_00000004[1] = in_stack_00000004[2];
  *in_stack_00000004 = in_stack_00000004[1];
  return;
}
