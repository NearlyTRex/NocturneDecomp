// Name: FUN_00553600
// Address: 00553600
// Address Range: [[00553600, 0055361c]]
// Convention: unknown
// Signature: int FUN_00553600(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int FUN_00553600(void)

{
  int iVar1;
  uint in_stack_00000004;
  
  iVar1 = 0;
  if (in_stack_00000004 != 0) {
    for (; 1 < in_stack_00000004; in_stack_00000004 = in_stack_00000004 >> 1) {
      iVar1 = iVar1 + 1;
    }
    return iVar1;
  }
  return 0x20;
}
