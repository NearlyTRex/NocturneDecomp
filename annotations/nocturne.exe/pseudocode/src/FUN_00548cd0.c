// Name: FUN_00548cd0
// Address: 00548cd0
// Address Range: [[00548cd0, 00548d1b]]
// Convention: unknown
// Signature: void FUN_00548cd0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00548cd0(void)

{
  byte *in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  uint *in_stack_00000010;
  uint *in_stack_00000014;
  
  if (in_stack_00000008 != (uint *)0x0) {
    *in_stack_00000008 = (uint)*in_stack_00000004;
  }
  if (in_stack_0000000c != (uint *)0x0) {
    *in_stack_0000000c = (uint)in_stack_00000004[1];
  }
  if (in_stack_00000010 != (uint *)0x0) {
    *in_stack_00000010 = (uint)in_stack_00000004[2];
  }
  if (in_stack_00000014 == (uint *)0x0) {
    return;
  }
  *in_stack_00000014 = (uint)in_stack_00000004[3];
  return;
}
