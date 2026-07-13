// Name: FUN_0056ff82
// Address: 0056ff82
// Address Range: [[0056ff82, 00570006]]
// Convention: unknown
// Signature: int FUN_0056ff82(int param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

int FUN_0056ff82(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  do {
    if ((int)param_3 < 1) {
      return local_14;
    }
    uVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14);
    if ((int)uVar1 < 1) {
      iVar2 = (**(code **)(*(int *)(param_1 + 0x28) + 0x10))(param_1);
      if (iVar2 == -1) {
        return local_14;
      }
      uVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14);
    }
    if ((int)param_3 < (int)uVar1) {
      uVar1 = param_3;
    }
    puVar4 = *(uint **)(param_1 + 0x14);
    puVar5 = param_2;
    for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    param_3 = param_3 - uVar1;
    param_2 = (uint *)((int)param_2 + uVar1);
    local_14 = local_14 + uVar1;
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar1;
  } while( true );
}
