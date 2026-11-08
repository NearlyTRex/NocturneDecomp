// Name: FUN_00575990
// Address: 00575990
// Address Range: [[00575990, 0057599e]]
// Convention: unknown
// Signature: undefined4 FUN_00575990(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00575990(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00575980();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = _DAT_02c8103c;
  }
  return uVar2;
}
