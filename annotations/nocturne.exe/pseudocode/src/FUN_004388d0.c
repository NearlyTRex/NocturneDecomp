// Name: FUN_004388d0
// Address: 004388d0
// Address Range: [[004388d0, 004388fc]]
// Convention: unknown
// Signature: int FUN_004388d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int FUN_004388d0(void)

{
  float *in_stack_00000004;
  
  return ((int)(in_stack_00000004[2] * in_stack_00000004[2] +
               *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1]
               ) >> 1) + _DAT_01c7070c;
}
