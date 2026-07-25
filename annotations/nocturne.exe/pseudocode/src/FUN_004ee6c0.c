// Name: FUN_004ee6c0
// Address: 004ee6c0
// Address Range: [[004ee6c0, 004ee713]]
// Convention: unknown
// Signature: undefined4 FUN_004ee6c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_004ee6c0(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  
  if ((_DAT_01bd1d94 & in_stack_00000008) != 0) {
    if (*(int *)(in_stack_00000004 + 0x25c) == 0) {
      if (in_stack_0000000c == 0) {
        *(uint *)(in_stack_00000004 + 0x25c) = 1;
      }
      else {
        *(uint *)(in_stack_00000004 + 0x25c) = 2;
      }
    }
    _DAT_01bd1d94 = _DAT_01bd1d94 & (in_stack_00000008 ^ 0xff);
    return 1;
  }
  return 0;
}
