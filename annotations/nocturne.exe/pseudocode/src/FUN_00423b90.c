// Name: FUN_00423b90
// Address: 00423b90
// Address Range: [[00423b90, 00423bae]]
// Convention: unknown
// Signature: void FUN_00423b90(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00423b90(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008 * *in_stack_00000004;
  in_stack_00000004[1] = *in_stack_00000008 * in_stack_00000004[1];
  in_stack_00000004[2] = *in_stack_00000008 * in_stack_00000004[2];
  return;
}
