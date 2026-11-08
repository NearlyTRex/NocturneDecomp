// Name: FUN_00570c80
// Address: 00570c80
// Address Range: [[00570c80, 00571456]]
// Convention: unknown
// Signature: void FUN_00570c80(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00570c80(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float afStackY_10c4 [1009];
  float local_dc;
  float local_d8;
  float local_d4;
  byte auStack_d0 [4];
  float fStack_cc;
  float fStack_c0;
  uint uStack_b8;
  float afStack_b4 [5];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  float local_38;
  float local_34;
  int local_30;
  float fStack_2c;
  int local_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float fStack_14;
  
  bVar6 = 0;
  local_30 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_28 = 0;
  local_24 = 0.25;
  local_34 = 0.7853982;
  FUN_005b77c0(param_1 + 0x10a68,0,0x34);
  if (*(int *)(param_1 + 0x25638) != 0) {
    iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_88 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
    local_84 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
    local_80 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
    local_dc = local_88;
    (&stack0xffffff28)[(uint)bVar6 * 0xfffffffe] = afStack_b4[(uint)bVar6 * -2 + 0xc];
    *(float *)(auStack_d0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -4) =
         afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    local_1c = SQRT(local_d4 * local_d4 + local_dc * local_dc + local_d8 * local_d8);
    if (*(int *)(param_1 + 0x25638) == 3) {
      local_1c = 0.0;
    }
    iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_38 = 20.0;
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x154))(iVar3);
    if (iVar3 != 0) {
      local_38 = 30.0;
    }
    if ((local_1c < local_38) &&
       ((*(int *)(param_1 + 0x25638) == 2 || (*(int *)(param_1 + 0x25638) == 3)))) {
      fStack_4c = 9999.9;
      iVar3 = FUN_004d00c0(param_1,afStack_b4 + 0x1a);
      if ((iVar3 == 0) || (local_38 <= fStack_4c)) {
        if (*(int *)(param_1 + 0x25640) != 0) {
          *(uint *)(param_1 + 0x10a80) = 1;
        }
      }
      else {
        local_30 = iVar3;
        local_28 = 1;
      }
    }
    fStack_58 = *(float *)(local_30 + 0x20) - *(float *)(param_1 + 0x20);
    fStack_54 = *(float *)(local_30 + 0x24) - *(float *)(param_1 + 0x24);
    fStack_50 = *(float *)(local_30 + 0x28) - *(float *)(param_1 + 0x28);
    fStack_a0 = fStack_58;
    afStack_b4[(uint)bVar6 * -2 + 6] = afStack_b4[(uint)bVar6 * -2 + 0x18];
    afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
    if (&stack0xffffff24 != afStack_b4 + 5) {
      local_dc = fStack_a0;
      local_d8 = fStack_9c;
      local_d4 = fStack_98;
    }
    fVar1 = SQRT(local_d4 * local_d4 + local_dc * local_dc + local_d8 * local_d8);
    *(uint *)(param_1 + 0x2578) = 0;
    fStack_20 = fVar1;
    if ((float)_DAT_005ec31b <= fVar1) {
      iVar3 = 0;
      if (local_28 == 0) {
        iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xcc))(iVar3);
        iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        iVar5 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x154))(iVar5);
        if ((iVar5 == 0) && (uVar4 = FUN_0042abe0(param_1,param_2), uVar4 != 0)) {
          if (uVar4 < 2) {
            *(uint *)(param_1 + 0x10a68) = 1;
          }
          else if (uVar4 == 2) {
            *(uint *)(param_1 + 0x10a70) = 1;
            *(uint *)(param_1 + 0x10a68) = 1;
          }
        }
      }
      else {
        *(uint *)(param_1 + 0x303c) = 0;
      }
      if (iVar3 == 0) {
        iVar3 = FUN_00513ea0(local_30 + 0x20);
      }
      iVar3 = FUN_00513650(iVar3,param_1 + 0x20,auStack_d0,*(uint *)(param_1 + 0x6c));
      if (iVar3 != 0) {
        fStack_14 = (float)FUN_0040d0c0(fStack_cc - *(float *)(param_1 + 0x34));
        fVar2 = fStack_14 * _DAT_005ec323 * (float)_DAT_005ec32b;
        fStack_3c = -local_24;
        *(float *)(param_1 + 0x10a90) = fVar2;
        if (fVar2 < fStack_3c) {
          *(float *)(param_1 + 0x10a90) = fStack_3c;
        }
        if (local_24 < *(float *)(param_1 + 0x10a90)) {
          *(float *)(param_1 + 0x10a90) = local_24;
        }
        if (((float)_DAT_005ec333 <= fVar1) || (local_28 == 1)) {
          *(uint *)(param_1 + 0x10a70) = 1;
          *(uint *)(param_1 + 0x10a68) = 1;
        }
        else {
          *(uint *)(param_1 + 0x10a68) = 1;
        }
      }
    }
    else {
      if (local_28 == 1) {
        if (*(int *)(param_1 + 0x25640) == 0) {
          *(uint *)(param_1 + 0x10a80) = 1;
        }
        else {
          iVar3 = FUN_005035c0(param_1 + 0x2b4);
          if ((*(int *)(iVar3 + 0x24) != 2) && (*(int *)(iVar3 + 0x24) != 1)) {
            *(uint *)(param_1 + 0x10a74) = 1;
          }
        }
        *(uint *)(param_1 + 0x303c) = 0;
      }
      else {
        iVar3 = FUN_005035c0(param_1 + 0x2b4);
        if ((*(int *)(iVar3 + 0x24) == 10) && (*(int *)(param_1 + 0x25640) != 0)) {
          *(uint *)(param_1 + 0x10a80) = 1;
        }
        iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x154))(iVar3);
        if ((iVar3 == 0) && (uVar4 = FUN_0042abe0(param_1,param_2), uVar4 != 0)) {
          if (uVar4 < 2) {
            *(uint *)(param_1 + 0x10a68) = 1;
          }
          else if (uVar4 == 2) {
            *(uint *)(param_1 + 0x10a70) = 1;
            *(uint *)(param_1 + 0x10a68) = 1;
          }
        }
      }
      if (local_28 == 1) {
        FUN_005838f0(&stack0xffffff24);
        uStack_64 = uStack_b8;
        afStack_b4[(uint)bVar6 * -2 + 0x15] = afStack_b4[(uint)bVar6 * -2];
        afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
             afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        fStack_14 = (float)FUN_0040d0c0(fStack_60 - *(float *)(param_1 + 0x34));
        fVar1 = fStack_14 * _DAT_005ec323 * (float)_DAT_005ec32b;
        fStack_48 = -local_24;
        *(float *)(param_1 + 0x10a90) = fVar1;
        if (fVar1 < fStack_48) {
          *(float *)(param_1 + 0x10a90) = fStack_48;
        }
        if (local_24 < *(float *)(param_1 + 0x10a90)) {
          *(float *)(param_1 + 0x10a90) = local_24;
        }
        if ((((float)_DAT_005ec33b < *(float *)(param_1 + 0x10a90)) &&
            ((double)*(float *)(param_1 + 0x10a90) < _DAT_005ec343)) &&
           (*(int *)(param_1 + 0x10a74) != 0)) {
          *(uint *)(param_1 + 0x10a90) = 0;
        }
      }
    }
    if (*(float *)(param_1 + 0x2578) <= 0.0) {
      if (*(float *)(param_1 + 0x2578) < 0.0) {
        *(uint *)(param_1 + 0x2578) = 0;
        *(float *)(param_1 + 0x10a90) = -local_24;
      }
    }
    else {
      *(uint *)(param_1 + 0x2578) = 0;
      *(float *)(param_1 + 0x10a90) = local_24;
    }
    fStack_7c = *(float *)(local_30 + 0x20) - *(float *)(param_1 + 0x20);
    fStack_78 = *(float *)(local_30 + 0x24) - *(float *)(param_1 + 0x24);
    fStack_74 = *(float *)(local_30 + 0x28) - *(float *)(param_1 + 0x28);
    fStack_94 = fStack_7c;
    afStack_b4[(uint)bVar6 * -2 + 9] = afStack_b4[(uint)bVar6 * -2 + 0xf];
    afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
    if (&stack0xffffff24 != afStack_b4 + 8) {
      local_dc = fStack_94;
      local_d8 = fStack_90;
      local_d4 = fStack_8c;
    }
    FUN_005838f0(&stack0xffffff24);
    fStack_70 = afStack_b4[2];
    afStack_b4[(uint)bVar6 * -2 + 0x12] = afStack_b4[(uint)bVar6 * -2 + 3];
    afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
         afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    if (&stack0xffffff24 != afStack_b4 + 0x11) {
      local_dc = fStack_70;
      local_d8 = fStack_6c;
      local_d4 = fStack_68;
    }
    fStack_c0 = (float)FUN_0040d0c0(local_d8 - *(float *)(param_1 + 0x34));
    if (local_34 < fStack_c0) {
      fStack_c0 = local_34;
    }
    if (fStack_c0 < -local_34) {
      fStack_c0 = -local_34;
    }
    fStack_2c = fStack_c0 - *(float *)(param_1 + 0x9acb0);
    if (param_2 * _DAT_005ec34b < fStack_2c) {
      fStack_2c = param_2 * _DAT_005ec34b;
    }
    if (fStack_2c < param_2 * _DAT_005ec34f) {
      fStack_2c = param_2 * _DAT_005ec34f;
    }
    *(float *)(param_1 + 0x9acb0) = *(float *)(param_1 + 0x9acb0) + fStack_2c;
  }
  return;
}
