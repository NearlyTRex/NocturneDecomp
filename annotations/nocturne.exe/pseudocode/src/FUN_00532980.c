// Name: FUN_00532980
// Address: 00532980
// Address Range: [[00532980, 00532992]]
// Convention: unknown
// Signature: undefined4 FUN_00532980(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_00532980(void)

{
  uint uVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9dc4)();
  return uVar1;
}
