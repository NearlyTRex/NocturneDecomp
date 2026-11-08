// Name: FUN_00551480
// Address: 00551480
// Address Range: [[00551480, 005516b3]]
// Convention: unknown
// Signature: void FUN_00551480(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551480(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint local_60 [6];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  _DAT_02026358 = 0;
  if (((*(int *)(0x01CCF390 + 0x244) == 0) &&
      (iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x1ff60) != 0)) {
    _DAT_02026358 = *(int *)(iVar1 + 0x1ff68);
  }
  local_14 = *(int *)(param_1 + 0x15f6fc) + -1;
  if (-1 < local_14) {
    local_18 = local_14 * 4 + param_1;
    do {
      iVar1 = *(int *)(local_18 + 0x15f700);
      if (*(int *)(iVar1 + 0xf8) == 0) {
        *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xfb;
      }
      else {
        (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1);
        puVar5 = local_60;
        puVar6 = &local_48;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        if (&uStack_30 != &local_48) {
          uStack_30 = local_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
        }
        if (&uStack_24 != &uStack_3c) {
          uStack_24 = uStack_3c;
          uStack_20 = uStack_38;
          uStack_1c = uStack_34;
        }
        FUN_00551c30(param_1,iVar1 + 0x20,iVar1 + 0x30,&uStack_30,&uStack_24,iVar1 + 0x3c);
        iVar4 = *(int *)(iVar1 + 0x108);
        iVar2 = *(int *)(iVar1 + 0x10c);
        iVar3 = *(int *)(iVar1 + 0x110);
        if (iVar1 == _DAT_02026358) {
          iVar4 = (iVar4 * 3) / 2;
          iVar2 = (iVar2 * 3) / 2;
          iVar3 = (iVar3 * 3) / 2;
        }
        FUN_00555770(0x01E82168,iVar4,iVar2,iVar3);
        FUN_00483de0(DAT_00612560,0xffff);
        iVar4 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10))(iVar1);
        if (iVar4 == 0) {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xfb;
        }
        else {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 4;
        }
        FUN_00483e20(DAT_00612560,1);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x15acc8)) {
          do {
            FUN_00555460(param_1,iVar4,0);
            iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10))(iVar1);
            if (iVar2 != 0) {
              *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 4;
            }
            FUN_00483e20(DAT_00612560,1);
            iVar4 = iVar4 + 1;
            FUN_00555590(param_1);
          } while (iVar4 < *(int *)(param_1 + 0x15acc8));
        }
        FUN_00555770(param_1,0x10000,0x10000,0x10000);
      }
      local_18 = local_18 + -4;
      local_14 = local_14 + -1;
    } while (-1 < local_14);
  }
  return;
}
