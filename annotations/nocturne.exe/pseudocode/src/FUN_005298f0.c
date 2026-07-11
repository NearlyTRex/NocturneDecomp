// Name: FUN_005298f0
// Address: 005298f0
// Address Range: [[005298f0, 00529973]]
// Convention: unknown
// Signature: void FUN_005298f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005298f0(int param_1)

{
  double dVar1;
  int iVar2;
  uint local_18;
  uint local_14;
  
  FUN_00528800();
  local_18 = 0x40000000 + (float)_DAT_00593b76;
  dVar1 = _DAT_00593b6e;
  if (param_1 != 0) {
    local_18 = 0x40000000;
    dVar1 = _DAT_00593b7e;
  }
  local_14 = 0x40000000 + (float)dVar1;
  iVar2 = 0x2dc1edc;
  do {
    FUN_00523ea0(iVar2,local_14,local_18);
    iVar2 = iVar2 + 0x168;
  } while (iVar2 != 0x2dc78dc);
  FUN_00528890();
  return;
}
