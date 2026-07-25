// Name: FUN_00438900
// Address: 00438900
// Address Range: [[00438900, 0043894e]]
// Convention: unknown
// Signature: void FUN_00438900(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00438900(void)

{
  float fVar1;
  float *in_stack_00000004;
  
  fVar1 = (float)(_DAT_01c70710 -
                 ((int)(in_stack_00000004[2] * in_stack_00000004[2] +
                       *in_stack_00000004 * *in_stack_00000004 +
                       in_stack_00000004[1] * in_stack_00000004[1]) >> 1));
  *in_stack_00000004 = *in_stack_00000004 * fVar1;
  in_stack_00000004[1] = in_stack_00000004[1] * fVar1;
  in_stack_00000004[2] = in_stack_00000004[2] * fVar1;
  return;
}
