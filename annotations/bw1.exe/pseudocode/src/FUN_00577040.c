// Name: FUN_00577040
// Address: 00577040
// Address Range: [[00577040, 005770c3]]
// Convention: unknown
// Signature: void FUN_00577040(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00577040(int param_1)

{
  double dVar1;
  int iVar2;
  uint local_18;
  uint local_14;
  
  FUN_00575d20();
  local_18 = 0x40000000 + (float)_DAT_005f4628;
  dVar1 = _DAT_005f4620;
  if (param_1 != 0) {
    local_18 = 0x40000000;
    dVar1 = _DAT_005f4630;
  }
  local_14 = 0x40000000 + (float)dVar1;
  iVar2 = 0x2c78ff4;
  do {
    FUN_00570460(iVar2,local_14,local_18);
    iVar2 = iVar2 + 0x1b0;
  } while (iVar2 != 0x2c7fbf4);
  FUN_00573e70();
  return;
}
