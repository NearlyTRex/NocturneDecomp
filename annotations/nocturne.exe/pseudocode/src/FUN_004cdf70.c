// Name: FUN_004cdf70
// Address: 004cdf70
// Address Range: [[004cdf70, 004cdf9b]]
// Convention: unknown
// Signature: int FUN_004cdf70(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int FUN_004cdf70(void)

{
  float10 fVar1;
  int *in_stack_00000004;
  
  fVar1 = (float10)round
                             (SQRT((float10)in_stack_00000004[2] * (float10)in_stack_00000004[2] +
                                   (float10)in_stack_00000004[1] * (float10)in_stack_00000004[1] +
                                   (float10)*in_stack_00000004 * (float10)*in_stack_00000004));
  return (int)ROUND(fVar1);
}
