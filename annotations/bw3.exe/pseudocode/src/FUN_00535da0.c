// Name: FUN_00535da0
// Address: 00535da0
// Address Range: [[00535da0, 005365b7]]
// Convention: unknown
// Signature: void FUN_00535da0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00535da0(int param_1,int param_2)

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
  if (*(int *)(0x01D2130C + 0x230) != 0) {
    local_18 = FUN_005806a0();
  }
  if ((param_2 != 0) && (iVar4 = FUN_0053b9a0(), iVar4 != 0)) {
    return;
  }
  if (param_2 == 0) {
    _DAT_0203ad1c = param_2;
    _DAT_0203ad30 = param_2;
    FUN_00537270(param_1,0x1d1e360);
    FUN_00535a80();
  }
  FUN_00449430();
  if (*(int *)(param_1 + 0x16166c) != 0) {
    FUN_0053b0d0();
    *(uint *)(param_1 + 0x16166c) = 0;
  }
  FUN_00448ff0(0x2038f4c,1);
  if ((_DAT_0207bad4 != 0) || (*(int *)(0x01D2130C + 0x24) != 0)) {
    iVar4 = 0;
    _DAT_0207bad4 = 0;
    FUN_0044ded0();
    if (0 < _DAT_0203a598) {
      iVar6 = 0;
      do {
        if (*(int *)(*(int *)(&DAT_0203a59c + iVar6) + 0x1cb4) != 0) {
          FUN_0044db70(0x2038f4c,*(int *)(&DAT_0203a59c + iVar6));
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar4 < _DAT_0203a598);
    }
    local_2c = 0;
    if (0 < _DAT_0203ad1c) {
      local_24 = 0;
      do {
        iVar4 = *(int *)(local_24 + 0x203ad20);
        if ((*(int *)(iVar4 + 0x1cb4) != 0) && (*(int *)(iVar4 + 0x1cd0) != 0)) {
          iVar6 = 0;
          FUN_0044d800(0x2038f4c,iVar4);
          iVar4 = local_24;
          if (0 < *(int *)(param_1 + 0x15acc8)) {
            do {
              FUN_0053adf0();
              FUN_0044d800(0x2038f4c,*(uint *)(iVar4 + 0x203ad20));
              iVar6 = iVar6 + 1;
              FUN_0053af20();
            } while (iVar6 < *(int *)(param_1 + 0x15acc8));
          }
        }
        local_24 = local_24 + 4;
        local_2c = local_2c + 1;
      } while (local_2c < _DAT_0203ad1c);
    }
    local_3c = 0;
    if (0 < _DAT_0203ad30) {
      local_28 = 0;
      do {
        iVar4 = 0;
        FUN_0044e690();
        if (0 < *(int *)(param_1 + 0x15acc8)) {
          do {
            FUN_0053adf0();
            FUN_0044e690();
            iVar4 = iVar4 + 1;
            FUN_0053af20();
          } while (iVar4 < *(int *)(param_1 + 0x15acc8));
        }
        local_28 = local_28 + 4;
        local_3c = local_3c + 1;
      } while (local_3c < _DAT_0203ad30);
    }
    local_30 = 0;
    _DAT_0203b1e8 = 0;
    if (0 < _DAT_0203aec4) {
      iVar4 = 0;
      do {
        uVar1 = *(uint *)(iVar4 + 0x203aec8);
        if (*(int *)(iVar4 + 0x203b058) == 0) {
          FUN_0044e690();
          *(uint *)(&DAT_0203b1ec + _DAT_0203b1e8 * 4) = uVar1;
          _DAT_0203b1e8 = _DAT_0203b1e8 + 1;
        }
        else {
          FUN_0053adf0();
          FUN_0044e690();
          FUN_0053af20();
        }
        local_30 = local_30 + 1;
        iVar4 = iVar4 + 4;
      } while (local_30 < _DAT_0203aec4);
    }
    _DAT_0203aec4 = 0;
    if (0.0 < *(float *)(param_1 + 0x14d160)) {
      FUN_0044dd00();
    }
  }
  if (*(int *)(0x01D2130C + 0x230) != 0) {
    local_4c = FUN_005806a0();
  }
  FUN_0044df60();
  if (*(int *)(0x01D2130C + 0x230) != 0) {
    local_48 = FUN_005806a0();
  }
  iVar4 = 0;
  if (0 < _DAT_0203a598) {
    do {
      iVar4 = iVar4 + 1;
      FUN_0045ca30();
    } while (iVar4 < _DAT_0203a598);
  }
  FUN_00539f30(param_1,0xc);
  FUN_00536c90();
  FUN_00450580();
  FUN_004ce5b0();
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x15acc8)) {
    do {
      FUN_0053adf0();
      FUN_004ce5b0();
      iVar4 = iVar4 + 1;
      FUN_0053af20();
    } while (iVar4 < *(int *)(param_1 + 0x15acc8));
  }
  if (*0x02CFD950 != 0) {
    FUN_00577760(0x02CFD950,0);
  }
  FUN_00536f90();
  if (*(int *)(param_1 + 0x15acb8) != 0) {
    FUN_005723d0(0x02CFD8B8,0);
  }
  iVar4 = 0;
  FUN_004a1ad0();
  if (0 < *(int *)(param_1 + 0x15acc8)) {
    do {
      FUN_0053adf0();
      FUN_004a1ad0();
      iVar4 = iVar4 + 1;
      FUN_0053af20();
    } while (iVar4 < *(int *)(param_1 + 0x15acc8));
  }
  FUN_0057c890();
  local_34 = 0;
  if (0 < _DAT_0203ad1c) {
    local_44 = 0;
    do {
      local_20 = *(int *)(local_44 + 0x203ad20);
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
        FUN_00450580();
        FUN_0045d530();
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x15acc8)) {
          do {
            FUN_0053adf0();
            FUN_0045d530();
            iVar4 = iVar4 + 1;
            FUN_0053af20();
          } while (iVar4 < *(int *)(param_1 + 0x15acc8));
        }
      }
      local_34 = local_34 + 1;
      local_44 = local_44 + 4;
    } while (local_34 < _DAT_0203ad1c);
  }
  FUN_00449840();
  FUN_004ce630();
  FUN_004a1e90();
  if (*0x02CFD950 == 0) {
    FUN_00577760(0x02CFD950,0);
  }
  iVar6 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x14d164)) {
    do {
      iVar3 = FUN_0040c840(*(uint *)(iVar4 + 0x14d168),_DAT_01d22e04);
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x154) + 0x18))();
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x14d164));
  }
  FUN_00449a00(0x2038f4c,0);
  local_38 = 0;
  if (0 < _DAT_0203ad1c) {
    local_40 = 0;
    do {
      local_1c = *(int *)(local_40 + 0x203ad20);
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
        FUN_00450580();
        iVar4 = 0;
        FUN_0045d560();
        if (0 < *(int *)(param_1 + 0x15acc8)) {
          do {
            FUN_0053adf0();
            FUN_0045d560();
            iVar4 = iVar4 + 1;
            FUN_0053af20();
          } while (iVar4 < *(int *)(param_1 + 0x15acc8));
        }
      }
      local_38 = local_38 + 1;
      local_40 = local_40 + 4;
    } while (local_38 < _DAT_0203ad1c);
  }
  if ((*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) != 0) && (*(int *)(0x01D81080 + 0x1008) == 0)) {
    FUN_004dd770();
  }
  FUN_00449750(0x2038f4c,0);
  if (*(int *)(0x01D2130C + 0x230) != 0) {
    iVar4 = FUN_005806a0();
    local_14 = local_4c - local_18;
    dVar2 = 1.0 / (double)*(float *)(0x01D2130C + 0x314);
    FUN_00441ff0(PTR_DAT_005f1690,"@comp: %3.2f/%3.2f actren : %3.2f\n" + 1,
                 (double)local_14 * _DAT_005d059f * _DAT_005d05a7 * _DAT_005d05af * dVar2,
                 (double)(local_48 - local_18) * _DAT_005d059f * _DAT_005d05a7 * _DAT_005d05af *
                 dVar2,(double)(iVar4 - local_48) * _DAT_005d059f * _DAT_005d05a7 * _DAT_005d05af *
                       dVar2);
  }
  if (*(int *)(0x01D2130C + 0x20c) != 0) {
    FUN_00540eb0();
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
  if (_DAT_0207baa8 != 0) {
    FUN_00560d70();
    _DAT_0207baa8 = 0;
    return;
  }
  return;
}
