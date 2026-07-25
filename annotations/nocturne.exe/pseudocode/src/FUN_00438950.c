// Name: FUN_00438950
// Address: 00438950
// Address Range: [[00438950, 00438972]]
// Convention: unknown
// Signature: void FUN_00438950(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00438950(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  *in_stack_00000004 = *in_stack_0000000c * *in_stack_00000008;
  in_stack_00000004[1] = in_stack_0000000c[1] * *in_stack_00000008;
  in_stack_00000004[2] = in_stack_0000000c[2] * *in_stack_00000008;
  return;
}
