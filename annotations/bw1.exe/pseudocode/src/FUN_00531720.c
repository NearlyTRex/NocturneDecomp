// Name: FUN_00531720
// Address: 00531720
// Address Range: [[00531720, 005317bb]]
// Convention: unknown
// Signature: void FUN_00531720(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00531720(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_0042c510(param_1);
  iVar1 = FUN_005c04e0(param_1 + 0x24a8,"priest.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x27a0) = 2;
  }
  uVar2 = FUN_00569f30(param_1 + 0x158);
  _DAT_01d81364 = FUN_005634f0(uVar2,"Bip01 L Hand",0);
  _DAT_01d81368 = FUN_005634f0(uVar2,"Bip01 R Hand",0);
  uVar2 = _DAT_01d81364;
  *(uint *)(param_1 + 0x2620) = _DAT_01d81368;
  *(uint *)(param_1 + 0x25a8) = uVar2;
  if (*(int *)(param_1 + 0x27a8) == 0) {
    return;
  }
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
