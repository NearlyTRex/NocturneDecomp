// Name: FUN_004edc80
// Address: 004edc80
// Address Range: [[004edc80, 004edc91]]
// Convention: unknown
// Signature: void FUN_004edc80(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_004edc80(void)

{
  uint *in_stack_00000004;
  uint in_stack_00000008;
  byte in_stack_0000000c;
  
  *in_stack_00000004 = in_stack_00000008;
  *(byte *)(in_stack_00000004 + 1) = in_stack_0000000c;
  return;
}
