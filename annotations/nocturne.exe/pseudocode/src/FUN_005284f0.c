// Name: FUN_005284f0
// Address: 005284f0
// Address Range: [[005284f0, 005284fe]]
// Convention: unknown
// Signature: undefined4 FUN_005284f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005284f0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00528480();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = _DAT_02dc8320;
  }
  return uVar2;
}
