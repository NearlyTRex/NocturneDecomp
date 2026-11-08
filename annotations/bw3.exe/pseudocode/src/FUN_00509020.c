// Name: FUN_00509020
// Address: 00509020
// Address Range: [[00509020, 00509115]]
// Convention: unknown
// Signature: void FUN_00509020(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00509020(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  FUN_0042b0e0(param_1);
  iVar1 = FUN_005a3260(param_1 + 0x24a8,"priest.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x27a0) = 2;
  }
  uVar2 = FUN_0054eac0(param_1 + 0x158);
  _DAT_01dd6a3c = FUN_00548090(uVar2,"Bip01 L Hand",0);
  _DAT_01dd6a40 = FUN_00548090(uVar2,"Bip01 R Hand",0);
  uVar2 = _DAT_01dd6a3c;
  *(uint *)(param_1 + 0x2620) = _DAT_01dd6a40;
  *(uint *)(param_1 + 0x25a8) = uVar2;
  if (*(int *)(param_1 + 0x27a8) != 0) {
    *(uint *)(param_1 + 0xfc) = 1;
  }
  fVar3 = (float10)*(int *)(param_1 + 0x206bc) * (float10)_DAT_005cb558 * (float10)_DAT_005cb560;
  FUN_005a3120();
  if ((int)ROUND(fVar3) == 0x10000) {
    return;
  }
  *(uint *)(param_1 + 0xf8) = 0;
  *(uint *)(param_1 + 0x206b8) = 0xfffffffe;
  *(uint *)(param_1 + 0x206c0) = 0;
  *(uint *)(param_1 + 0xfc) = 1;
  *(int *)(param_1 + 0x206b4) = (int)ROUND(fVar3);
  return;
}
