// Name: FUN_00550580
// Address: 00550580
// Address Range: [[00550580, 00550d97]]
// Convention: unknown
// Signature: void FUN_00550580(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00550580(int param_1,int param_2)

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
  if (*(int *)(0x01CCF390 + 0x228) != 0) {
    local_18 = FUN_005b2420();
  }
  if ((param_2 != 0) && (iVar4 = FUN_00555fe0(), iVar4 != 0)) {
    return;
  }
  if (param_2 == 0) {
    _DAT_01fe55bc = param_2;
    _DAT_01fe55d0 = param_2;
    FUN_005518e0(param_1,0x1ccc3e4);
    FUN_00550260();
  }
  FUN_0044d2f0();
  if (*(int *)(param_1 + 0x16166c) != 0) {
    FUN_00555740();
    *(uint *)(param_1 + 0x16166c) = 0;
  }
  FUN_0044ceb0(0x1fe37ec,1);
  if ((_DAT_0202636c != 0) || (*(int *)(0x01CCF390 + 0x24) != 0)) {
    iVar4 = 0;
    _DAT_0202636c = 0;
    FUN_00451d90();
    if (0 < _DAT_01fe4e38) {
      iVar6 = 0;
      do {
        if (*(int *)(*(int *)(&DAT_01fe4e3c + iVar6) + 0x1cb4) != 0) {
          FUN_00451a30(0x1fe37ec,*(int *)(&DAT_01fe4e3c + iVar6));
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar4 < _DAT_01fe4e38);
    }
    local_2c = 0;
    if (0 < _DAT_01fe55bc) {
      local_24 = 0;
      do {
        iVar4 = *(int *)(local_24 + 0x1fe55c0);
        if ((*(int *)(iVar4 + 0x1cb4) != 0) && (*(int *)(iVar4 + 0x1cd0) != 0)) {
          iVar6 = 0;
          FUN_004516c0(0x1fe37ec,iVar4);
          iVar4 = local_24;
          if (0 < *(int *)(param_1 + 0x15acc8)) {
            do {
              FUN_00555460();
              FUN_004516c0(0x1fe37ec,*(uint *)(iVar4 + 0x1fe55c0));
              iVar6 = iVar6 + 1;
              FUN_00555590();
            } while (iVar6 < *(int *)(param_1 + 0x15acc8));
          }
        }
        local_24 = local_24 + 4;
        local_2c = local_2c + 1;
      } while (local_2c < _DAT_01fe55bc);
    }
    local_3c = 0;
    if (0 < _DAT_01fe55d0) {
      local_28 = 0;
      do {
        iVar4 = 0;
        FUN_00452550();
        if (0 < *(int *)(param_1 + 0x15acc8)) {
          do {
            FUN_00555460();
            FUN_00452550();
            iVar4 = iVar4 + 1;
            FUN_00555590();
          } while (iVar4 < *(int *)(param_1 + 0x15acc8));
        }
        local_28 = local_28 + 4;
        local_3c = local_3c + 1;
      } while (local_3c < _DAT_01fe55d0);
    }
    local_30 = 0;
    _DAT_01fe5a88 = 0;
    if (0 < _DAT_01fe5764) {
      iVar4 = 0;
      do {
        uVar1 = *(uint *)(iVar4 + 0x1fe5768);
        if (*(int *)(iVar4 + 0x1fe58f8) == 0) {
          FUN_00452550();
          *(uint *)(&DAT_01fe5a8c + _DAT_01fe5a88 * 4) = uVar1;
          _DAT_01fe5a88 = _DAT_01fe5a88 + 1;
        }
        else {
          FUN_00555460();
          FUN_00452550();
          FUN_00555590();
        }
        local_30 = local_30 + 1;
        iVar4 = iVar4 + 4;
      } while (local_30 < _DAT_01fe5764);
    }
    _DAT_01fe5764 = 0;
    if (0.0 < *(float *)(param_1 + 0x14d160)) {
      FUN_00451bc0();
    }
  }
  if (*(int *)(0x01CCF390 + 0x228) != 0) {
    local_4c = FUN_005b2420();
  }
  FUN_00451e20();
  if (*(int *)(0x01CCF390 + 0x228) != 0) {
    local_48 = FUN_005b2420();
  }
  iVar4 = 0;
  if (0 < _DAT_01fe4e38) {
    do {
      iVar4 = iVar4 + 1;
      FUN_00462d20();
    } while (iVar4 < _DAT_01fe4e38);
  }
  FUN_005545a0(param_1,0xc);
  FUN_00551480();
  FUN_00454430();
  FUN_004e5c50();
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x15acc8)) {
    do {
      FUN_00555460();
      FUN_004e5c50();
      iVar4 = iVar4 + 1;
      FUN_00555590();
    } while (iVar4 < *(int *)(param_1 + 0x15acc8));
  }
  if (*0x02C8AFB0 != 0) {
    FUN_005a9f10(0x02C8AFB0,0);
  }
  FUN_005516c0();
  if (*(int *)(param_1 + 0x15acb8) != 0) {
    FUN_0059f3e0(0x02C8AE68,0);
  }
  iVar4 = 0;
  FUN_004b5100();
  if (0 < *(int *)(param_1 + 0x15acc8)) {
    do {
      FUN_00555460();
      FUN_004b5100();
      iVar4 = iVar4 + 1;
      FUN_00555590();
    } while (iVar4 < *(int *)(param_1 + 0x15acc8));
  }
  FUN_005ae890();
  local_34 = 0;
  if (0 < _DAT_01fe55bc) {
    local_44 = 0;
    do {
      local_20 = *(int *)(local_44 + 0x1fe55c0);
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
        FUN_00454430();
        FUN_00463820();
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x15acc8)) {
          do {
            FUN_00555460();
            FUN_00463820();
            iVar4 = iVar4 + 1;
            FUN_00555590();
          } while (iVar4 < *(int *)(param_1 + 0x15acc8));
        }
      }
      local_34 = local_34 + 1;
      local_44 = local_44 + 4;
    } while (local_34 < _DAT_01fe55bc);
  }
  FUN_0044d700();
  FUN_004e5cd0();
  FUN_004b54a0();
  if (*0x02C8AFB0 == 0) {
    FUN_005a9f10(0x02C8AFB0,0);
  }
  iVar6 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x14d164)) {
    do {
      iVar3 = FUN_0040c600(*(uint *)(iVar4 + 0x14d168),_DAT_01cd0dfc);
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x154) + 0x18))();
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x14d164));
  }
  FUN_0044d8c0(0x1fe37ec,0);
  local_38 = 0;
  if (0 < _DAT_01fe55bc) {
    local_40 = 0;
    do {
      local_1c = *(int *)(local_40 + 0x1fe55c0);
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
        FUN_00454430();
        iVar4 = 0;
        FUN_00463850();
        if (0 < *(int *)(param_1 + 0x15acc8)) {
          do {
            FUN_00555460();
            FUN_00463850();
            iVar4 = iVar4 + 1;
            FUN_00555590();
          } while (iVar4 < *(int *)(param_1 + 0x15acc8));
        }
      }
      local_38 = local_38 + 1;
      local_40 = local_40 + 4;
    } while (local_38 < _DAT_01fe55bc);
  }
  if ((*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) != 0) && (*(int *)(0x01D2C900 + 0x1008) == 0)) {
    FUN_004faaf0();
  }
  FUN_0044d610(0x1fe37ec,0);
  if (*(int *)(0x01CCF390 + 0x228) != 0) {
    iVar4 = FUN_005b2420();
    local_14 = local_4c - local_18;
    dVar2 = 1.0 / (double)*(float *)(0x01CCF390 + 0x294);
    FUN_00445430(PTR_DAT_00611100,"@comp: %3.2f/%3.2f actren : %3.2f\n" + 1,
                 (double)local_14 * _DAT_005f0906 * _DAT_005f090e * _DAT_005f0916 * dVar2,
                 (double)(local_48 - local_18) * _DAT_005f0906 * _DAT_005f090e * _DAT_005f0916 *
                 dVar2,(double)(iVar4 - local_48) * _DAT_005f0906 * _DAT_005f090e * _DAT_005f0916 *
                       dVar2);
  }
  if (*(int *)(0x01CCF390 + 0x204) != 0) {
    FUN_0055b4f0();
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
  if (_DAT_02026348 != 0) {
    FUN_0057dc40();
    _DAT_02026348 = 0;
    return;
  }
  return;
}
