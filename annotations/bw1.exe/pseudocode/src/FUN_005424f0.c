// Name: FUN_005424f0
// Address: 005424f0
// Address Range: [[005424f0, 00542b89]]
// Convention: unknown
// Signature: void FUN_005424f0(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005424f0(int param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_10e0 [971];
  float local_1a4;
  float local_1a0;
  float fStack_19c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint uStack_ec;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  float fStack_74;
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_3c;
  float local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  bVar7 = 0;
  *(uint *)(param_1 + 0x1ffd4) = 0;
  if ((param_3 == 0) && (iVar2 = FUN_00524770(param_1 + 0x158), *(int *)(iVar2 + 0x24) == 2)) {
    param_3 = 1;
  }
  fVar3 = *(float *)(param_1 + 0x1ffc4);
  local_24 = *(float *)(param_1 + 0x1ffc8);
  if ((*(int *)(param_1 + 0x1fae4) == 0) || (*(int *)(param_1 + 0xc1d4) == 2)) {
    if ((*(int *)(param_1 + 0x1ffac) == 0) || (param_3 != 0)) {
      *(uint *)(param_1 + 0x1ffd0) = 0;
    }
    else if (*(int *)(param_1 + 0xc1e4) == 0) {
      local_20 = param_3;
      local_1c = 1e+30;
      iVar5 = 0;
      for (iVar2 = 0; iVar2 < *(int *)(0x01E82168 + 0x14d164); iVar2 = iVar2 + 1) {
        iVar1 = *(int *)(iVar5 + 0x14d168 + 0x01E82168);
        local_1a4 = (float)FUN_00542b90(param_1,iVar1,iVar1 == *(int *)(param_1 + 0x1ffd0));
        if ((0.0 <= local_1a4) && (local_1a4 < local_1c)) {
          local_20 = iVar1;
          local_1c = local_1a4;
        }
        iVar5 = iVar5 + 4;
        local_18 = local_1a4;
      }
      *(int *)(param_1 + 0x1ffd0) = local_20;
    }
    if (*(int *)(param_1 + 0xc1e4) == 0) {
      if (*(int *)(param_1 + 0x1ffd0) != 0) {
        FUN_005c0357(&stack0xfffffe60,10,&DAT_005fb430);
        iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1ffd0) + 0x154) + 0x54))
                          (*(int *)(param_1 + 0x1ffd0),&stack0xfffffe60);
        if (iVar2 < 1) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x1ffd0) + 0x154) + 0x1c))
                    (*(int *)(param_1 + 0x1ffd0));
          pfVar4 = (float *)&stack0xfffffed8;
          pfVar6 = &stack0xfffffef0;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar6 = *pfVar4;
            pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          fStack_50 = fStack_110 + fStack_104;
          fStack_4c = fStack_10c + fStack_100;
          fStack_48 = fStack_108 + fStack_fc;
          fStack_98 = fStack_110 + fStack_104;
          *(uint *)((int)&stack0xffffff6c + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xffffffb4 + (uint)bVar7 * -8);
          *(uint *)((int)&stack0xffffff70 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xffffffb8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          fStack_e0 = fStack_98 * _DAT_005ededb;
          fStack_dc = fStack_94 * _DAT_005ededb;
          fStack_d8 = fStack_90 * _DAT_005ededb;
          fStack_d4 = fStack_98 * _DAT_005ededb;
          (&stack0xffffff30)[(uint)bVar7 * 0xfffffffe] =
               (float)*(uint *)((int)&stack0xffffff24 + (uint)bVar7 * -8);
          *(uint *)(&stack0xffffff34 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xffffff28 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          if (&stack0xffffff50 != &stack0xffffff2c) {
            fStack_b0 = fStack_d4;
            fStack_ac = fStack_d0;
          }
        }
        else if (&stack0xffffff50 != &stack0xfffffe60) {
          fStack_b0 = local_1a0;
          fStack_ac = fStack_19c;
        }
        FUN_00408b40(*(uint *)(param_1 + 0x1ffd0),&stack0xffffff50);
        uStack_ec = uStack_80;
        *(uint *)((int)&stack0xffffff18 + (uint)bVar7 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff84 + (uint)bVar7 * -8);
        *(uint *)(&stack0xffffff1c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        FUN_00408bb0(param_1,&stack0xffffff14);
        fStack_8c = fStack_f8;
        *(uint *)((int)&stack0xffffff78 + (uint)bVar7 * -8) =
             *(uint *)((int)&stack0xffffff0c + (uint)bVar7 * 0xfffffffe * 4);
        *(uint *)((int)&stack0xffffff7c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff10 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        FUN_00569040(param_1 + 0x158,_DAT_01e7e02c);
        fVar3 = fStack_8c;
        fStack_bc = fStack_68;
        *(uint *)((int)&stack0xffffff48 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff9c + (uint)bVar7 * -8);
        *(uint *)((int)&stack0xffffff4c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffffa0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        fStack_c8 = fVar3 - fStack_bc;
        fStack_c4 = fStack_88 - fStack_b8;
        fStack_c0 = fStack_84 - fStack_b4;
        fStack_a4 = fVar3 - fStack_bc;
        *(uint *)((int)&stack0xffffff60 + (uint)bVar7 * 0xfffffffe * 4) =
             *(uint *)((int)&stack0xffffff3c + (uint)bVar7 * -8);
        *(uint *)(&stack0xffffff64 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)((int)&stack0xffffff40 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        FUN_005a7520(&stack0xffffff5c);
        fStack_5c = fStack_74;
        *(uint *)((int)&stack0xffffffa8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff90 + (uint)bVar7 * -8);
        *(uint *)(&stack0xffffffac + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff94 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        local_24 = fStack_58;
        fVar3 = fStack_5c;
      }
    }
    else if (*(int *)(param_1 + 0x1ffd0) == 0) {
      *(uint *)(param_1 + 0x1ffc8) = 0;
      *(uint *)(param_1 + 0x1ffc4) = *(uint *)(param_1 + 0x1ffc8);
      local_24 = *(float *)(param_1 + 0x1ffc4);
      fVar3 = local_24;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0xc204) * _DAT_005edec7 * (float)_DAT_005edecf * param_2 + fVar3;
    local_34 = 0x3fc90fdb;
    if (fVar3 < _DAT_005eded7) {
      fVar3 = -1.5707964;
    }
    if (1.5707964 < fVar3) {
      fVar3 = 1.5707964;
    }
    local_24 = 0.0;
  }
  local_2c = (float)FUN_0040cd60(local_24 - *(float *)(param_1 + 0x1ffc8),fVar3);
  local_18 = local_2c;
  local_18 = (float)FUN_0040cd60(fVar3 - *(float *)(param_1 + 0x1ffc4));
  local_28 = param_2 * _DAT_005edec7 * (float)_DAT_005ededf;
  local_38 = -local_28;
  if (local_2c < local_38) {
    local_2c = local_38;
  }
  if (local_28 < local_2c) {
    local_2c = local_28;
  }
  local_3c = -local_28;
  local_30 = local_18;
  if (local_18 < local_3c) {
    local_30 = local_3c;
  }
  if (local_28 < local_30) {
    local_30 = local_28;
  }
  *(float *)(param_1 + 0x1ffc4) = *(float *)(param_1 + 0x1ffc4) + local_30;
  *(float *)(param_1 + 0x1ffc8) = *(float *)(param_1 + 0x1ffc8) + local_2c;
  if ((*(int *)(param_1 + 0x1ffd0) != 0) && (param_3 == 0)) {
    local_18 = (float)FUN_0040cd60(*(float *)(param_1 + 0x1ffc8) - local_24);
    if (((float)_DAT_005edee7 <= ABS(local_18)) &&
       (fVar3 = (float)FUN_0040cd60(*(float *)(param_1 + 0x1ffc8) - local_24),
       (float)_DAT_005edee7 <= ABS(fVar3))) {
      return;
    }
    *(uint *)(param_1 + 0x1ffd4) = 1;
    return;
  }
  return;
}
