// Name: FUN_004484a0
// Address: 004484a0
// Address Range: [[004484a0, 004484bd]]
// Convention: unknown
// Signature: void FUN_004484a0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_004484a0(void)

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
