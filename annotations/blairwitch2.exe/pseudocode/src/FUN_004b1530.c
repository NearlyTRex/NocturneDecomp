// Name: FUN_004b1530
// Address: 004b1530
// Address Range: [[004b1530, 004b1be2]]
// Convention: unknown
// Signature: void FUN_004b1530(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1530(int param_1,float param_2,int param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_10dc [972];
  uint *puVar7;
  uint uVar8;
  float local_1a0;
  float local_19c;
  uint uStack_198;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint uStack_f4;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d0;
  float fStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  float fStack_94;
  float fStack_88;
  float fStack_7c;
  uint uStack_78;
  float fStack_70;
  uint uStack_6c;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_34;
  float local_30;
  int local_28;
  float local_24;
  int local_20;
  uint local_18;
  float local_14;
  
  bVar6 = 0;
  if ((param_3 == 0) && (iVar3 = FUN_005035c0(param_1 + 0x2b4), *(int *)(iVar3 + 0x24) == 2)) {
    param_3 = 1;
  }
  if ((*(int *)(param_1 + 0x24378) == 0) || (*(int *)(param_1 + 0x10a64) == 2)) {
    if ((*(int *)(param_1 + 0x25640) == 0) || (param_3 != 0)) {
      *(uint *)(param_1 + 0x25664) = 0;
    }
    else if (*(int *)(param_1 + 0x25658) == 0) {
      local_24 = 1e+30;
      local_28 = 0;
      local_20 = 0;
      for (iVar3 = 0; iVar3 < *(int *)(0x01E661B8 + 0x14d164); iVar3 = iVar3 + 1) {
        iVar1 = *(int *)(0x01E661B8 + local_20 + 0x14d168);
        local_1a0 = (float)FUN_004b11a0(param_1,iVar1,iVar1 == *(int *)(param_1 + 0x25664));
        if ((0.0 <= local_1a0) && (local_1a0 < local_24)) {
          local_28 = iVar1;
          local_24 = local_1a0;
        }
        local_20 = local_20 + 4;
        local_14 = local_1a0;
      }
      *(int *)(param_1 + 0x25664) = local_28;
    }
    if (*(int *)(param_1 + 0x25658) == 2) {
      if (*(int *)(param_1 + 0x25664) == 0) {
        *(uint *)(param_1 + 0x25674) = 0;
        *(uint *)(param_1 + 0x25670) = *(uint *)(param_1 + 0x25674);
        *(uint *)(param_1 + 0x2566c) = *(uint *)(param_1 + 0x25670);
        *(uint *)(param_1 + 0x25668) = *(uint *)(param_1 + 0x2566c);
      }
      fVar2 = param_2 / (_DAT_005f7340 * (float)_DAT_005d7183) + *(float *)(param_1 + 0x2567c);
    }
    else if (*(int *)(param_1 + 0x25664) == 0) {
      if (0.0 < *(float *)(param_1 + 0x25678)) goto LAB_004b15cd;
      fVar2 = *(float *)(param_1 + 0x2567c) - param_2 / _DAT_005f7340;
    }
    else {
      FUN_005b7f5f(&stack0xfffffe64,10,&DAT_005f22b0);
      iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x25664) + 0x2b0) + 0x5c))
                        (*(int *)(param_1 + 0x25664),&stack0xfffffe64);
      if (iVar3 < 1) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x25664) + 0x2b0) + 0x24))
                  (*(int *)(param_1 + 0x25664));
        pfVar4 = (float *)&stack0xfffffef4;
        pfVar5 = &stack0xfffffedc;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar5 = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
          pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
        }
        fStack_58 = fStack_124 + fStack_118;
        fStack_54 = fStack_120 + fStack_114;
        fStack_50 = fStack_11c + fStack_110;
        fStack_ac = fStack_124 + fStack_118;
        *(uint *)((int)&stack0xffffff58 + (uint)bVar6 * -8) =
             *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xffffff5c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        fStack_4c = fStack_ac * _DAT_005d717f;
        fStack_48 = fStack_a8 * _DAT_005d717f;
        fStack_44 = fStack_a4 * _DAT_005d717f;
        fStack_7c = fStack_ac * _DAT_005d717f;
        (&stack0xffffff88)[(uint)bVar6 * 0xfffffffe] =
             *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8);
        *(uint *)(&stack0xffffff8c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (&stack0xffffff90 != &stack0xffffff84) {
          fStack_70 = fStack_7c;
          uStack_6c = uStack_78;
        }
      }
      else if (&stack0xffffff90 != &stack0xfffffe64) {
        fStack_70 = local_19c;
        uStack_6c = uStack_198;
      }
      FUN_00408d70(*(uint *)(param_1 + 0x25664),&stack0xffffff90);
      puVar7 = &stack0xffffff30;
      uStack_d0 = uStack_a0;
      *(uint *)((int)&stack0xffffff34 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff64 + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffff38 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff68 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_00408de0(param_1,puVar7);
      fStack_64 = fStack_94;
      (&stack0xffffffa0)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffff70 + (uint)bVar6 * -8);
      uVar8 = _DAT_01cb0690;
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff74 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_005469a0(param_1 + 0x2b4,uVar8);
      fVar2 = fStack_64;
      fStack_e8 = fStack_c4;
      *(uint *)((int)&stack0xffffff1c + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff40 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffff20 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff44 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      fStack_b8 = fVar2 - fStack_e8;
      fStack_b4 = fStack_60 - fStack_e4;
      fStack_b0 = fStack_5c - fStack_e0;
      fStack_88 = fVar2 - fStack_e8;
      *(uint *)((int)&stack0xffffff7c + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffff4c + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffff80 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffff50 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_005838f0(&stack0xffffff78);
      fVar2 = param_2 / _DAT_005f7340;
      uStack_dc = uStack_f4;
      *(uint *)((int)&stack0xffffff28 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffff10 + (uint)bVar6 * 0xfffffffe * 4);
      *(uint *)(&stack0xffffff2c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff14 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)(param_1 + 0x25668) = uStack_dc;
      fVar2 = fVar2 + *(float *)(param_1 + 0x2567c);
      *(uint *)(param_1 + 0x2566c) = uStack_d8;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x10a94) * _DAT_005d716b * (float)_DAT_005d7173 * param_2 +
            *(float *)(param_1 + 0x25668);
    local_18 = 0x3fc90fdb;
    *(float *)(param_1 + 0x25668) = fVar2;
    if (fVar2 < _DAT_005d717b) {
      *(uint *)(param_1 + 0x25668) = 0xbfc90fdb;
    }
    if (1.5707964 < *(float *)(param_1 + 0x25668)) {
      *(uint *)(param_1 + 0x25668) = 0x3fc90fdb;
    }
    fVar2 = param_2 / _DAT_005f7340 + *(float *)(param_1 + 0x2567c);
    *(uint *)(param_1 + 0x2566c) = 0;
  }
  *(float *)(param_1 + 0x2567c) = fVar2;
LAB_004b15cd:
  if (1.0 < *(float *)(param_1 + 0x2567c)) {
    *(uint *)(param_1 + 0x2567c) = 0x3f800000;
  }
  if (*(float *)(param_1 + 0x2567c) < 0.0) {
    *(uint *)(param_1 + 0x25670) = 0;
    *(uint *)(param_1 + 0x25674) = 0;
    *(uint *)(param_1 + 0x2567c) = 0;
  }
  if (0.0 < *(float *)(param_1 + 0x2567c)) {
    local_30 = (float)FUN_0040d0c0(*(float *)(param_1 + 0x2566c) - *(float *)(param_1 + 0x25674));
    local_14 = local_30;
    local_34 = (float)FUN_0040d0c0(*(float *)(param_1 + 0x25668) - *(float *)(param_1 + 0x25670));
    fVar2 = param_2 * _DAT_005d716b * (float)_DAT_005d718b;
    if (local_30 < -fVar2) {
      local_30 = -fVar2;
    }
    if (fVar2 < local_30) {
      local_30 = fVar2;
    }
    if (local_34 < -fVar2) {
      local_34 = -fVar2;
    }
    if (fVar2 < local_34) {
      local_34 = fVar2;
    }
    *(float *)(param_1 + 0x25670) = *(float *)(param_1 + 0x25670) + local_34;
    *(float *)(param_1 + 0x25674) = *(float *)(param_1 + 0x25674) + local_30;
    return;
  }
  *(uint *)(param_1 + 0x25670) = *(uint *)(param_1 + 0x25668);
  *(uint *)(param_1 + 0x25674) = *(uint *)(param_1 + 0x2566c);
  return;
}
