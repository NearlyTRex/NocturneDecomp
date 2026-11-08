// Name: FUN_005301d0
// Address: 005301d0
// Address Range: [[005301d0, 00530403]]
// Convention: unknown
// Signature: void FUN_005301d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005301d0(int param_1)

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
  _DAT_0200a3a4 = 0;
  if (((*(int *)(0x01CB6900 + 0x244) == 0) &&
      (iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x255f0) != 0)) {
    _DAT_0200a3a4 = *(int *)(iVar1 + 0x255f8);
  }
  local_14 = *(int *)(param_1 + 0x15f6f8) + -1;
  if (-1 < local_14) {
    local_18 = local_14 * 4 + param_1;
    do {
      iVar1 = *(int *)(local_18 + 0x15f6fc);
      if (*(int *)(iVar1 + 0xf8) == 0) {
        *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xfb;
      }
      else {
        (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x24))(iVar1);
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
        FUN_00530980(param_1,iVar1 + 0x20,iVar1 + 0x30,&uStack_30,&uStack_24,iVar1 + 0x3c);
        iVar4 = *(int *)(iVar1 + 0x108);
        iVar2 = *(int *)(iVar1 + 0x10c);
        iVar3 = *(int *)(iVar1 + 0x110);
        if (iVar1 == _DAT_0200a3a4) {
          iVar4 = (iVar4 * 3) / 2;
          iVar2 = (iVar2 * 3) / 2;
          iVar3 = (iVar3 * 3) / 2;
        }
        FUN_005344c0(0x01E661B8,iVar4,iVar2,iVar3);
        FUN_0046b8e0(DAT_0060b280,0xffff);
        iVar4 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x18))(iVar1);
        if (iVar4 == 0) {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) & 0xfb;
        }
        else {
          *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 4;
        }
        FUN_0046b920(DAT_0060b280,1);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x15acc8)) {
          do {
            FUN_005341b0(param_1,iVar4,0);
            iVar2 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x18))(iVar1);
            if (iVar2 != 0) {
              *(byte *)(iVar1 + 0x144) = *(byte *)(iVar1 + 0x144) | 4;
            }
            FUN_0046b920(DAT_0060b280,1);
            iVar4 = iVar4 + 1;
            FUN_005342e0(param_1);
          } while (iVar4 < *(int *)(param_1 + 0x15acc8));
        }
        FUN_005344c0(param_1,0x10000,0x10000,0x10000);
      }
      local_18 = local_18 + -4;
      local_14 = local_14 + -1;
    } while (-1 < local_14);
  }
  return;
}
