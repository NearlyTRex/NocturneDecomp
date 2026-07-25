// Name: FUN_00533e70
// Address: 00533e70
// Address Range: [[00533e70, 00533ea9]]
// Convention: unknown
// Signature: float FUN_00533e70(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float FUN_00533e70(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  
  return *in_stack_00000014 * in_stack_00000004[3] +
         *in_stack_00000010 * in_stack_00000004[2] +
         *in_stack_00000008 * *in_stack_00000004 + *in_stack_0000000c * in_stack_00000004[1];
}
