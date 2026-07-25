// Name: FUN_00423c90
// Address: 00423c90
// Address Range: [[00423c90, 00423cbc]]
// Convention: unknown
// Signature: void FUN_00423c90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00423c90(void)

{
  float *in_stack_00000004;
  int *in_stack_00000008;
  
  *in_stack_00000004 = (float)*in_stack_00000008 * _DAT_0059ae98;
  in_stack_00000004[1] = (float)in_stack_00000008[1] * _DAT_0059ae98;
  in_stack_00000004[2] = (float)in_stack_00000008[2] * _DAT_0059ae98;
  return;
}
