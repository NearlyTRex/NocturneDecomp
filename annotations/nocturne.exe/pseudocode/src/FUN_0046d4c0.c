// Name: FUN_0046d4c0
// Address: 0046d4c0
// Address Range: [[0046d4c0, 0046d4dd]]
// Convention: unknown
// Signature: void FUN_0046d4c0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0046d4c0(void)

{
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  
  if (in_stack_00000004 == in_stack_00000008) {
    return;
  }
  *in_stack_00000004 = *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000008[2];
  return;
}
