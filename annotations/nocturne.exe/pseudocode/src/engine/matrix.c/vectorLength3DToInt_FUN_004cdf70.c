// Name: engine_matrix.c_vectorLength3DToInt_FUN_004cdf70
// Address: 004cdf70
// Address Range: [[004cdf70, 004cdf9b]]
// Convention: unknown
// Signature: int engine_matrix_c_vectorLength3DToInt_FUN_004cdf70(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int engine_matrix_c_vectorLength3DToInt_FUN_004cdf70(void)

{
  double dVar1;
  int *in_stack_00000004;
  
  dVar1 = round
                    (SQRT((double)in_stack_00000004[2] * (double)in_stack_00000004[2] +
                          (double)in_stack_00000004[1] * (double)in_stack_00000004[1] +
                          (double)*in_stack_00000004 * (double)*in_stack_00000004));
  return (int)ROUND(dVar1);
}
