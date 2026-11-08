// Name: FUN_0052f2a0
// Address: 0052f2a0
// Address Range: [[0052f2a0, 0052fac8]]
// Convention: unknown
// Signature: void FUN_0052f2a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052f2a0(int param_1,int param_2)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  byte bVar7;
  int aiStackY_106c [1010];
  uint local_84;
  uint local_78;
  uint local_6c;
  uint local_60;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  if (*(int *)(0x01CB6900 + 0x228) != 0) {
    local_18 = FUN_0058e9e0();
  }
  if ((param_2 != 0) && (iVar4 = FUN_00534b80(), iVar4 != 0)) {
    return;
  }
  if (param_2 == 0) {
    _DAT_01fc9608 = param_2;
    _DAT_01fc961c = param_2;
    FUN_00530630(param_1,0x1cb3950);
    FUN_0052ef80();
  }
  FUN_0043bc30();
  if (*(int *)(param_1 + 0x161668) != 0) {
    FUN_00534490();
    *(uint *)(param_1 + 0x161668) = 0;
  }
  FUN_0043b7f0(0x1fc7838,1);
  if ((_DAT_0200a3b8 != 0) || (*(int *)(0x01CB6900 + 0x24) != 0)) {
    iVar4 = 0;
    _DAT_0200a3b8 = 0;
    FUN_004406d0();
    if (0 < _DAT_01fc8e84) {
      iVar6 = 0;
      do {
        if (*(int *)(*(int *)(&DAT_01fc8e88 + iVar6) + 0x1cb4) != 0) {
          FUN_00440370(0x1fc7838,*(int *)(&DAT_01fc8e88 + iVar6));
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar4 < _DAT_01fc8e84);
    }
    local_2c = 0;
    if (0 < _DAT_01fc9608) {
      local_24 = 0;
      do {
        iVar4 = *(int *)(local_24 + 0x1fc960c);
        if ((*(int *)(iVar4 + 0x1cb4) != 0) && (*(int *)(iVar4 + 0x1cd0) != 0)) {
          iVar6 = 0;
          FUN_00440000(0x1fc7838,iVar4);
          iVar4 = local_24;
          if (0 < *(int *)(param_1 + 0x15acc8)) {
            do {
              FUN_005341b0();
              FUN_00440000(0x1fc7838,*(uint *)(iVar4 + 0x1fc960c));
              iVar6 = iVar6 + 1;
              FUN_005342e0();
            } while (iVar6 < *(int *)(param_1 + 0x15acc8));
          }
        }
        local_24 = local_24 + 4;
        local_2c = local_2c + 1;
      } while (local_2c < _DAT_01fc9608);
    }
    local_3c = 0;
    if (0 < _DAT_01fc961c) {
      local_28 = 0;
      do {
        iVar4 = 0;
        FUN_00440e90();
        if (0 < *(int *)(param_1 + 0x15acc8)) {
          do {
            FUN_005341b0();
            FUN_00440e90();
            iVar4 = iVar4 + 1;
            FUN_005342e0();
          } while (iVar4 < *(int *)(param_1 + 0x15acc8));
        }
        local_28 = local_28 + 4;
        local_3c = local_3c + 1;
      } while (local_3c < _DAT_01fc961c);
    }
    local_30 = 0;
    _DAT_01fc9ad4 = 0;
    if (0 < _DAT_01fc97b0) {
      iVar4 = 0;
      do {
        uVar1 = *(uint *)(iVar4 + 0x1fc97b4);
        if (*(int *)(iVar4 + 0x1fc9944) == 0) {
          FUN_00440e90();
          *(uint *)(&DAT_01fc9ad8 + _DAT_01fc9ad4 * 4) = uVar1;
          _DAT_01fc9ad4 = _DAT_01fc9ad4 + 1;
        }
        else {
          FUN_005341b0();
          FUN_00440e90();
          FUN_005342e0();
        }
        local_30 = local_30 + 1;
        iVar4 = iVar4 + 4;
      } while (local_30 < _DAT_01fc97b0);
    }
    _DAT_01fc97b0 = 0;
    if (0.0 < *(float *)(param_1 + 0x14d160)) {
      FUN_00440500();
    }
  }
  if (*(int *)(0x01CB6900 + 0x228) != 0) {
    local_4c = FUN_0058e9e0();
  }
  FUN_00440760();
  if (*(int *)(0x01CB6900 + 0x228) != 0) {
    local_48 = FUN_0058e9e0();
  }
  iVar4 = 0;
  if (0 < _DAT_01fc8e84) {
    do {
      iVar4 = iVar4 + 1;
      FUN_0044a520();
    } while (iVar4 < _DAT_01fc8e84);
  }
  FUN_005332f0(param_1,0xc);
  FUN_005301d0();
  FUN_00442d80();
  FUN_004c9440();
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x15acc8)) {
    do {
      FUN_005341b0();
      FUN_004c9440();
      iVar4 = iVar4 + 1;
      FUN_005342e0();
    } while (iVar4 < *(int *)(param_1 + 0x15acc8));
  }
  if (*0x02653790 != 0) {
    FUN_005862e0(0x02653790,0);
  }
  FUN_00530410();
  if (*(int *)(param_1 + 0x15acb8) != 0) {
    FUN_0057b860(0x0265364C,0);
  }
  iVar4 = 0;
  FUN_0049c780();
  if (0 < *(int *)(param_1 + 0x15acc8)) {
    do {
      FUN_005341b0();
      FUN_0049c780();
      iVar4 = iVar4 + 1;
      FUN_005342e0();
    } while (iVar4 < *(int *)(param_1 + 0x15acc8));
  }
  FUN_0058ad40();
  local_34 = 0;
  if (0 < _DAT_01fc9608) {
    local_44 = 0;
    do {
      local_20 = *(int *)(local_44 + 0x1fc960c);
      if (*(int *)(local_20 + 0x1cb4) != 0) {
        puVar5 = (uint *)(local_20 + 8 + (uint)bVar7 * -8);
        local_84 = *(uint *)(local_20 + 4);
        *(uint *)(&stack0xffffff80 + (uint)bVar7 * -8) = *puVar5;
        *(uint *)(&stack0xffffff84 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             puVar5[(uint)bVar7 * -2 + 1];
        local_60 = local_84;
        *(uint *)(&stack0xffffffa4 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff80 + (uint)bVar7 * -8);
        *(uint *)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff84 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        FUN_00442d80();
        FUN_0044b020();
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x15acc8)) {
          do {
            FUN_005341b0();
            FUN_0044b020();
            iVar4 = iVar4 + 1;
            FUN_005342e0();
          } while (iVar4 < *(int *)(param_1 + 0x15acc8));
        }
      }
      local_34 = local_34 + 1;
      local_44 = local_44 + 4;
    } while (local_34 < _DAT_01fc9608);
  }
  FUN_0043c040();
  FUN_004c94c0();
  FUN_0049cb50();
  if (*0x02653790 == 0) {
    FUN_005862e0(0x02653790,0);
  }
  iVar6 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x14d164)) {
    do {
      iVar3 = FUN_0040c8f0(*(uint *)(iVar4 + 0x14d168),_DAT_01cb8280);
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x20))();
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x14d164));
  }
  FUN_0043c200(0x1fc7838,0);
  local_38 = 0;
  if (0 < _DAT_01fc9608) {
    local_40 = 0;
    do {
      local_1c = *(int *)(local_40 + 0x1fc960c);
      if (*(int *)(local_1c + 0x1cb4) != 0) {
        puVar5 = (uint *)(local_1c + 8 + (uint)bVar7 * -8);
        local_6c = *(uint *)(local_1c + 4);
        *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8) = *puVar5;
        *(uint *)(&stack0xffffff9c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             puVar5[(uint)bVar7 * -2 + 1];
        local_78 = local_6c;
        *(uint *)(&stack0xffffff8c + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8);
        *(uint *)(&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff9c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        FUN_00442d80();
        FUN_0044b050();
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x15acc8)) {
          do {
            FUN_005341b0();
            FUN_0044b050();
            iVar4 = iVar4 + 1;
            FUN_005342e0();
          } while (iVar4 < *(int *)(param_1 + 0x15acc8));
        }
      }
      local_38 = local_38 + 1;
      local_40 = local_40 + 4;
    } while (local_38 < _DAT_01fc9608);
  }
  FUN_004bb620();
  if ((*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) != 0) && (*(int *)(0x01D182F0 + 0x1008) == 0)) {
    FUN_004dd670();
  }
  FUN_0043bf50(0x1fc7838,0);
  iVar4 = local_48;
  if (*(int *)(0x01CB6900 + 0x228) != 0) {
    iVar6 = FUN_0058e9e0();
    local_14 = local_4c - local_18;
    dVar2 = 1.0 / (double)*(float *)(0x01CB6900 + 0x284);
    FUN_00436710(PTR_DAT_00609ed0,"@comp: %3.2f/%3.2f actren : %3.2f\n" + 1,
                 (double)local_14 * _DAT_005e58e2 * _DAT_005e58ea * _DAT_005e58f2 * dVar2,
                 (double)(iVar4 - local_18) * _DAT_005e58e2 * _DAT_005e58ea * _DAT_005e58f2 * dVar2,
                 (double)(iVar6 - iVar4) * _DAT_005e58e2 * _DAT_005e58ea * _DAT_005e58f2 * dVar2);
  }
  if (*(int *)(0x01CB6900 + 0x204) != 0) {
    FUN_00539d60();
  }
  iVar6 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x14d164)) {
    do {
      iVar3 = *(int *)(iVar4 + 0x14d168);
      if ((uint *)(iVar3 + 300) != (uint *)(iVar3 + 0x20)) {
        *(uint *)(iVar3 + 300) = *(uint *)(iVar3 + 0x20);
        *(uint *)(iVar3 + 0x130) = *(uint *)(iVar3 + 0x24);
        *(uint *)(iVar3 + 0x134) = *(uint *)(iVar3 + 0x28);
      }
      if ((uint *)(iVar3 + 0x138) != (uint *)(iVar3 + 0x30)) {
        *(uint *)(iVar3 + 0x138) = *(uint *)(iVar3 + 0x30);
        *(uint *)(iVar3 + 0x13c) = *(uint *)(iVar3 + 0x34);
        *(uint *)(iVar3 + 0x140) = *(uint *)(iVar3 + 0x38);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x14d164));
  }
  if (_DAT_0200a394 != 0) {
    FUN_0055b1f0();
    _DAT_0200a394 = 0;
    return;
  }
  return;
}
