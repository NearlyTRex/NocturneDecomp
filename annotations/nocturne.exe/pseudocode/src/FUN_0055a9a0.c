// Name: FUN_0055a9a0
// Address: 0055a9a0
// Address Range: [[0055a9a0, 0055a9f4]]
// Convention: unknown
// Signature: float * FUN_0055a9a0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float * FUN_0055a9a0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  *in_stack_00000008 =
       in_stack_0000000c[2] * in_stack_00000004[2] +
       *in_stack_0000000c * *in_stack_00000004 + in_stack_0000000c[1] * in_stack_00000004[1];
  in_stack_00000008[1] =
       in_stack_0000000c[2] * in_stack_00000004[6] +
       *in_stack_0000000c * in_stack_00000004[4] + in_stack_0000000c[1] * in_stack_00000004[5];
  in_stack_00000008[2] =
       in_stack_0000000c[2] * in_stack_00000004[10] +
       *in_stack_0000000c * in_stack_00000004[8] + in_stack_0000000c[1] * in_stack_00000004[9];
  return in_stack_00000008;
}
