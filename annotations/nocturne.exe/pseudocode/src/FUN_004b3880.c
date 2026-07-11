// Name: FUN_004b3880
// Address: 004b3880
// Address Range: [[004b3880, 004b3dd3]]
// Convention: unknown
// Signature: void FUN_004b3880(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3880(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float local_8c;
  float local_88;
  byte local_84 [4];
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  byte local_60 [16];
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  byte local_3c [12];
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = false;
  local_1c = 0.25;
  local_20 = 0.7853982;
  iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  FUN_00563cc0(param_1 + 0xbc94,0,0x2c);
  if (*(int *)(param_1 + 0x1fa38) != 0) {
    iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    local_48 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
    local_44 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
    local_40 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
    local_30 = SQRT(local_40 * local_40 + local_48 * local_48 + local_44 * local_44);
    if (((*(int *)(param_1 + 0x1fa38) == 3) || (local_30 < _DAT_005855bd)) &&
       ((*(int *)(param_1 + 0x1fa38) == 2 || (*(int *)(param_1 + 0x1fa38) == 3)))) {
      local_88 = 9999.9;
      iVar4 = FUN_004b5d00(param_1,&local_88);
      if ((iVar4 == 0) || ((float)_DAT_005855c5 <= local_88)) {
        if (*(int *)(param_1 + 0x1fa3c) != 0) {
          *(uint *)(param_1 + 0xbcac) = 1;
        }
      }
      else {
        bVar2 = true;
        iVar6 = iVar4;
      }
    }
    local_78 = *(float *)(iVar6 + 0x20) - *(float *)(param_1 + 0x20);
    local_74 = *(float *)(iVar6 + 0x24) - *(float *)(param_1 + 0x24);
    local_70 = *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 0x28);
    if (&local_48 != &local_78) {
      local_48 = local_78;
      local_44 = local_74;
      local_40 = local_70;
    }
    fVar1 = SQRT(local_40 * local_40 + local_48 * local_48 + local_44 * local_44);
    local_18 = fVar1;
    if ((float)_DAT_005855cd <= fVar1) {
      iVar4 = 0;
      if (!bVar2) {
        iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xbc))(iVar4);
      }
      if (iVar4 == 0) {
        iVar4 = FUN_004f1e00(iVar6 + 0x20);
      }
      iVar4 = FUN_004f1600(iVar4,param_1 + 0x20,local_84,*(uint *)(param_1 + 0x6c));
      if (iVar4 != 0) {
        local_14 = (float)FUN_0040df00(local_80 - *(float *)(param_1 + 0x34));
        fVar3 = local_14 * (float)_DAT_005855d5 * (float)_DAT_005855dd;
        local_24 = -local_1c;
        *(float *)(param_1 + 0xbcb8) = fVar3;
        if (fVar3 < local_24) {
          *(float *)(param_1 + 0xbcb8) = local_24;
        }
        if (local_1c < *(float *)(param_1 + 0xbcb8)) {
          *(float *)(param_1 + 0xbcb8) = local_1c;
        }
        if (((float)_DAT_005855e5 <= fVar1) || (bVar2)) {
          *(uint *)(param_1 + 0xbc9c) = 1;
          *(uint *)(param_1 + 0xbc94) = 1;
        }
        else {
          *(uint *)(param_1 + 0xbc94) = 1;
        }
      }
    }
    else {
      if (bVar2) {
        if (*(int *)(param_1 + 0x1fa3c) == 0) {
          *(uint *)(param_1 + 0xbcac) = 1;
        }
        else {
          iVar4 = FUN_004e1660(param_1 + 0x150);
          if ((*(int *)(iVar4 + 0x24) != 2) && (*(int *)(iVar4 + 0x24) != 1)) {
            *(uint *)(param_1 + 0xbca0) = 1;
          }
        }
      }
      else {
        iVar4 = FUN_004e1660(param_1 + 0x150);
        if ((*(int *)(iVar4 + 0x24) == 10) && (*(int *)(param_1 + 0x1fa3c) != 0)) {
          *(uint *)(param_1 + 0xbcac) = 1;
        }
      }
      if (bVar2) {
        iVar4 = FUN_0054e4a0(local_60,&local_48);
        local_14 = (float)FUN_0040df00(*(float *)(iVar4 + 4) - *(float *)(param_1 + 0x34));
        fVar1 = local_14 * (float)_DAT_005855d5 * (float)_DAT_005855dd;
        local_28 = -local_1c;
        *(float *)(param_1 + 0xbcb8) = fVar1;
        if (fVar1 < local_28) {
          *(float *)(param_1 + 0xbcb8) = local_28;
        }
        if (local_1c < *(float *)(param_1 + 0xbcb8)) {
          *(float *)(param_1 + 0xbcb8) = local_1c;
        }
        if ((((float)_DAT_005855ed < *(float *)(param_1 + 0xbcb8)) &&
            ((double)*(float *)(param_1 + 0xbcb8) < _DAT_005855f5)) &&
           (*(int *)(param_1 + 0xbca0) != 0)) {
          *(uint *)(param_1 + 0xbcb8) = 0;
        }
      }
    }
    local_6c = *(float *)(iVar6 + 0x20) - *(float *)(param_1 + 0x20);
    local_68 = *(float *)(iVar6 + 0x24) - *(float *)(param_1 + 0x24);
    local_64 = *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 0x28);
    if (&local_48 != &local_6c) {
      local_48 = local_6c;
      local_44 = local_68;
      local_40 = local_64;
    }
    pfVar5 = (float *)FUN_0054e4a0(local_3c,&local_48);
    if (&local_48 != pfVar5) {
      local_48 = *pfVar5;
      local_44 = pfVar5[1];
      local_40 = pfVar5[2];
    }
    local_50 = (float)FUN_0040df00(local_44 - *(float *)(param_1 + 0x34));
    if (local_20 < local_50) {
      local_50 = local_20;
    }
    if (local_50 < -local_20) {
      local_50 = -local_20;
    }
    local_8c = local_50 - *(float *)(param_1 + 0x1fa48);
    if (param_2 * (float)_DAT_005855fd < local_8c) {
      local_8c = param_2 * (float)_DAT_005855fd;
    }
    if (local_8c < param_2 * (float)_DAT_00585605) {
      local_8c = param_2 * (float)_DAT_00585605;
    }
    *(float *)(param_1 + 0x1fa48) = *(float *)(param_1 + 0x1fa48) + local_8c;
  }
  return;
}
