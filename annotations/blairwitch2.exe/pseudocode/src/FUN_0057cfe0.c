// Name: FUN_0057cfe0
// Address: 0057cfe0
// Address Range: [[0057cfe0, 0057d0be]]
// Convention: unknown
// Signature: int FUN_0057cfe0(int param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

int FUN_0057cfe0(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int local_18;
  
  bVar6 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0x10)) {
      return -1;
    }
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10);
    if ((int)uVar1 < (int)param_3) {
      param_3 = uVar1;
    }
    local_18 = 0;
    while( true ) {
      if ((int)param_3 < 1) {
        return local_18;
      }
      if (((*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x1c)) ||
          (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x10))) &&
         (iVar2 = FUN_0057d280(param_1), iVar2 == 0)) break;
      uVar1 = (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24)) - *(int *)(param_1 + 0x10);
      if ((int)param_3 < (int)uVar1) {
        uVar1 = param_3;
      }
      param_3 = param_3 - uVar1;
      puVar4 = (uint *)
               ((*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10)) - *(int *)(param_1 + 0x1c));
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
      param_2 = (uint *)((int)param_2 + uVar1);
      local_18 = local_18 + uVar1;
      *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar1;
    }
  }
  return -2;
}
