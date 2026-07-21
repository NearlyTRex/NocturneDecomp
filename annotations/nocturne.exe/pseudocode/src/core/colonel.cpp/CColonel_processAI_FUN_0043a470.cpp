// Name: core_colonel.cpp_CColonel_processAI_FUN_0043a470
// Address: 0043a470
// Address Range: [[0043a470, 0043a973]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_processAI_FUN_0043a470(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_colonel_cpp_CColonel_processAI_FUN_0043a470(int param_1,float param_2)

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
  byte local_6c [12];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  byte local_3c [12];
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = false;
  local_1c = 0.25;
  local_20 = 0.7853982;
  iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  memset(param_1 + 0xbc94,0,0x2c);
  if (*(int *)(param_1 + 0x1fa38) != 0) {
    iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    local_54 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
    local_50 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
    local_4c = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
    local_2c = SQRT(local_4c * local_4c + local_54 * local_54 + local_50 * local_50);
    if ((((*(int *)(param_1 + 0x1fa38) == 3) || (local_2c < _DAT_0057b174)) &&
        ((*(int *)(param_1 + 0x1fa38) == 2 || (*(int *)(param_1 + 0x1fa38) == 3)))) &&
       ((iVar4 = core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(param_1,&local_88), iVar4 != 0 &&
        (local_88 < (float)_DAT_0057b17c)))) {
      bVar2 = true;
      iVar6 = iVar4;
    }
    local_60 = *(float *)(iVar6 + 0x20) - *(float *)(param_1 + 0x20);
    local_5c = *(float *)(iVar6 + 0x24) - *(float *)(param_1 + 0x24);
    local_58 = *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 0x28);
    if (&local_54 != &local_60) {
      local_54 = local_60;
      local_50 = local_5c;
      local_4c = local_58;
    }
    fVar1 = SQRT(local_4c * local_4c + local_54 * local_54 + local_50 * local_50);
    local_30 = fVar1;
    if ((float)_DAT_0057b184 <= fVar1) {
      iVar4 = 0;
      if (!bVar2) {
        iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xbc))(iVar4);
      }
      if (iVar4 == 0) {
        iVar4 = core_path_cpp_getPathMap_FUN_004f1e00(iVar6 + 0x20);
      }
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                        (iVar4,param_1 + 0x20,local_84,*(uint *)(param_1 + 0x6c));
      if (iVar4 != 0) {
        local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                    (local_80 - *(float *)(param_1 + 0x34));
        fVar3 = local_14 * (float)_DAT_0057b18c * (float)_DAT_0057b194;
        local_28 = -local_1c;
        *(float *)(param_1 + 0xbcb8) = fVar3;
        if (fVar3 < local_28) {
          *(float *)(param_1 + 0xbcb8) = local_28;
        }
        if (local_1c < *(float *)(param_1 + 0xbcb8)) {
          *(float *)(param_1 + 0xbcb8) = local_1c;
        }
        if (((float)_DAT_0057b19c <= fVar1) || (bVar2)) {
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
          iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
          if ((*(int *)(iVar4 + 0x24) != 2) && (*(int *)(iVar4 + 0x24) != 1)) {
            *(uint *)(param_1 + 0xbca0) = 1;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
      }
      if (bVar2) {
        iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_3c,&local_54)
        ;
        local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                    (*(float *)(iVar4 + 4) - *(float *)(param_1 + 0x34));
        fVar1 = local_14 * (float)_DAT_0057b18c * (float)_DAT_0057b194;
        local_18 = -local_1c;
        *(float *)(param_1 + 0xbcb8) = fVar1;
        if (fVar1 < local_18) {
          *(float *)(param_1 + 0xbcb8) = local_18;
        }
        if (local_1c < *(float *)(param_1 + 0xbcb8)) {
          *(float *)(param_1 + 0xbcb8) = local_1c;
        }
        if ((((float)_DAT_0057b1a4 < *(float *)(param_1 + 0xbcb8)) &&
            ((double)*(float *)(param_1 + 0xbcb8) < _DAT_0057b1ac)) &&
           (*(int *)(param_1 + 0xbca0) != 0)) {
          *(uint *)(param_1 + 0xbcb8) = 0;
        }
      }
    }
    local_78 = *(float *)(iVar6 + 0x20) - *(float *)(param_1 + 0x20);
    local_74 = *(float *)(iVar6 + 0x24) - *(float *)(param_1 + 0x24);
    local_70 = *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 0x28);
    if (&local_54 != &local_78) {
      local_54 = local_78;
      local_50 = local_74;
      local_4c = local_70;
    }
    pfVar5 = (float *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                (local_6c,&local_54);
    if (&local_54 != pfVar5) {
      local_54 = *pfVar5;
      local_50 = pfVar5[1];
      local_4c = pfVar5[2];
    }
    local_44 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                (local_50 - *(float *)(param_1 + 0x34));
    if (local_20 < local_44) {
      local_44 = local_20;
    }
    if (local_44 < -local_20) {
      local_44 = -local_20;
    }
    local_8c = local_44 - *(float *)(param_1 + 0x1fa48);
    if (param_2 * (float)_DAT_0057b1b4 < local_8c) {
      local_8c = param_2 * (float)_DAT_0057b1b4;
    }
    if (local_8c < param_2 * (float)_DAT_0057b1bc) {
      local_8c = param_2 * (float)_DAT_0057b1bc;
    }
    *(float *)(param_1 + 0x1fa48) = *(float *)(param_1 + 0x1fa48) + local_8c;
  }
  return;
}
