// Name: FUN_0053afa0
// Address: 0053afa0
// Address Range: [[0053afa0, 0053b0b3]]
// Convention: unknown
// Signature: void FUN_0053afa0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053afa0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_48 [6];
  uint local_30 [6];
  int local_18;
  int local_14;
  
  bVar5 = 0;
  *(uint *)(param_1 + 0x15acc8) = 0;
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x14d164)) {
    local_18 = param_1;
    do {
      iVar1 = FUN_0040c840(*(uint *)(local_18 + 0x14d168),_DAT_01d22e04);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x218) != 0)) {
        FUN_004087f0(iVar1);
        (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1,0);
        puVar3 = local_30;
        puVar4 = local_48;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        iVar2 = FUN_0041daf0(local_48);
        if (iVar2 != 0) {
          *(int *)(param_1 + 0x15accc + *(int *)(param_1 + 0x15acc8) * 4) = iVar1;
          iVar1 = *(int *)(param_1 + 0x15acc8) + 1;
          *(int *)(param_1 + 0x15acc8) = iVar1;
          if (99 < iVar1) {
            _DAT_01d71de0 = "..\\core\\set.cpp";
            _DAT_01d71de4 = 0x12ea;
            FUN_004e4330("CDemonSet::buildMirrorList - Too many mirrors");
          }
        }
        thunk_FUN_004e5ef0(DAT_005f2afc);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(param_1 + 0x14d164));
  }
  return;
}
