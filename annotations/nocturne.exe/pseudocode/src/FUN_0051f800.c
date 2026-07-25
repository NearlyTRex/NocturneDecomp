// Name: FUN_0051f800
// Address: 0051f800
// Address Range: [[0051f800, 0051f832]]
// Convention: unknown
// Signature: float FUN_0051f800(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float FUN_0051f800(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  return (in_stack_00000004[2] - in_stack_00000008[2]) *
         (in_stack_00000004[2] - in_stack_00000008[2]) +
         (in_stack_00000004[1] - in_stack_00000008[1]) *
         (in_stack_00000004[1] - in_stack_00000008[1]) +
         (*in_stack_00000004 - *in_stack_00000008) * (*in_stack_00000004 - *in_stack_00000008);
}
