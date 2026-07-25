// Name: FUN_004edf80
// Address: 004edf80
// Address Range: [[004edf80, 004edf94]]
// Convention: unknown
// Signature: void FUN_004edf80(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_004edf80(void)

{
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  *(ushort *)(in_stack_00000004 + 1) = *(ushort *)(in_stack_00000008 + 1);
  return;
}
