// Name: FUN_00510510
// Address: 00510510
// Address Range: [[00510510, 005105ab]]
// Convention: unknown
// Signature: void FUN_00510510(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00510510(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_00422930(param_1);
  iVar1 = FUN_005b8130(param_1 + 0x2514,"priest.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x280c) = 2;
  }
  uVar2 = FUN_00547890(param_1 + 0x2b4);
  _DAT_01d653fc = FUN_00540e80(uVar2,"Bip01 L Hand",0);
  _DAT_01d65400 = FUN_00540e80(uVar2,"Bip01 R Hand",0);
  uVar2 = _DAT_01d653fc;
  *(uint *)(param_1 + 0x2690) = _DAT_01d65400;
  *(uint *)(param_1 + 0x2618) = uVar2;
  if (*(int *)(param_1 + 0x2814) == 0) {
    return;
  }
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
