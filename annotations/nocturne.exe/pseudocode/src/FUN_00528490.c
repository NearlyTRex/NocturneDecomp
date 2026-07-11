// Name: FUN_00528490
// Address: 00528490
// Address Range: [[00528490, 0052849e]]
// Convention: unknown
// Signature: undefined4 FUN_00528490(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00528490(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00528480();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = _DAT_02dc831c;
  }
  return uVar2;
}
