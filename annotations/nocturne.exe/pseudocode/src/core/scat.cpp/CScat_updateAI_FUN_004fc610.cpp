// Name: core_scat.cpp_CScat_updateAI_FUN_004fc610
// Address: 004fc610
// Address Range: [[004fc610, 004fca4a]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateAI_FUN_004fc610(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_updateAI_FUN_004fc610(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fStack_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  byte auStack_6c [12];
  float local_60;
  float local_5c;
  float local_58;
  byte auStack_54 [4];
  float fStack_50;
  float fStack_44;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  float fStack_24;
  float local_20;
  float local_1c;
  float fStack_18;
  
  local_20 = 0.25;
  local_1c = 0.7853982;
  iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  if (*(int *)(param_1 + 0x1fa38) == 0) {
    return;
  }
  memset(param_1 + 0xbc94,0,0x2c);
  iVar5 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  local_3c = *(float *)(param_1 + 0x20) - *(float *)(iVar5 + 0x20);
  local_38 = *(float *)(param_1 + 0x24) - *(float *)(iVar5 + 0x24);
  local_34 = *(float *)(param_1 + 0x28) - *(float *)(iVar5 + 0x28);
  iVar5 = 0;
  if ((((*(int *)(param_1 + 0x1fa38) == 2) || (*(int *)(param_1 + 0x1fa38) == 3)) &&
      (*(int *)(param_1 + 0x1f8d0) != 0)) && (0 < *(int *)(*(int *)(param_1 + 0x1f8d0) + 0x560))) {
    local_30 = 0x461c3f9a;
    iVar2 = core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(param_1,&local_30);
    if ((iVar2 != 0) && (local_30 < 0x41f00000)) {
      iVar5 = 1;
      iVar4 = iVar2;
    }
  }
  if (iVar5 != *(int *)(param_1 + 0x1fa3c)) {
    *(uint *)(param_1 + 0xbcac) = 1;
  }
  local_60 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
  local_5c = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
  local_58 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
  if (&local_3c != &local_60) {
    local_3c = local_60;
    local_38 = local_5c;
    local_34 = local_58;
  }
  local_7c = SQRT(local_34 * local_34 + local_3c * local_3c + local_38 * local_38);
  if (*(int *)(param_1 + 0x1fa38) == 3) {
    local_7c = 0.0;
  }
  if (*(int *)(param_1 + 0x1fa50) == 0) goto LAB_004fc893;
  local_2c = 0;
  if (*(int *)(*(int *)(param_1 + 0x1fa50) + 0x2d8) == 8) {
    if (local_7c < (float)_DAT_0058deee) {
      iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
      if ((*(int *)(iVar5 + 0x24) == 7) && (*(int *)(param_1 + 0x1fa3c) != 0)) {
        *(uint *)(param_1 + 0xbca0) = 1;
      }
LAB_004fc7c4:
      if (local_2c == 0) goto LAB_004fc893;
    }
  }
  else if (local_7c < (float)_DAT_0058dede) {
    if ((*(int *)(param_1 + 0x1fa3c) != 0) && (iVar5 != 0)) {
      if (((float)_DAT_0058dee6 < *(float *)(param_1 + 0x2a88)) &&
         (*(int *)(param_1 + 0x1fa64) != 0)) {
        *(uint *)(param_1 + 0xbca0) = 1;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00424e90(param_1,iVar4 + 0x20);
    }
    *(uint *)(param_1 + 0xbc9c) = 0;
    *(uint *)(param_1 + 0xbc94) = 0;
    goto LAB_004fc7c4;
  }
  iVar5 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xbc))(iVar4);
  if (iVar5 == 0) {
    iVar5 = core_path_cpp_getPathMap_FUN_004f1e00(iVar4 + 0x20);
  }
  iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                    (iVar5,param_1 + 0x20,auStack_54,*(uint *)(param_1 + 0x6c));
  if (iVar5 != 0) {
    fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (fStack_50 - *(float *)(param_1 + 0x34));
    fVar1 = fStack_18 * (float)_DAT_0058def6 * (float)_DAT_0058defe;
    fStack_24 = -local_20;
    *(float *)(param_1 + 0xbcb8) = fVar1;
    if (fVar1 < fStack_24) {
      *(float *)(param_1 + 0xbcb8) = fStack_24;
    }
    if (local_20 < *(float *)(param_1 + 0xbcb8)) {
      *(float *)(param_1 + 0xbcb8) = local_20;
    }
    if ((float)_DAT_0058df06 <= local_7c) {
      *(uint *)(param_1 + 0xbc9c) = 1;
    }
    *(uint *)(param_1 + 0xbc94) = 1;
  }
LAB_004fc893:
  local_78 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
  local_74 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
  local_70 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
  if (&local_3c != &local_78) {
    local_3c = local_78;
    local_38 = local_74;
    local_34 = local_70;
  }
  pfVar3 = (float *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                              (auStack_6c,&local_3c);
  if (&local_3c != pfVar3) {
    local_3c = *pfVar3;
    local_38 = pfVar3[1];
    local_34 = pfVar3[2];
  }
  fStack_44 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               (local_38 - *(float *)(param_1 + 0x34));
  if (local_1c < fStack_44) {
    fStack_44 = local_1c;
  }
  if (fStack_44 < -local_1c) {
    fStack_44 = -local_1c;
  }
  fStack_80 = fStack_44 - *(float *)(param_1 + 0x1fa44);
  if (param_2 * (float)_DAT_0058df0e < fStack_80) {
    fStack_80 = param_2 * (float)_DAT_0058df0e;
  }
  if (fStack_80 < param_2 * (float)_DAT_0058df16) {
    fStack_80 = param_2 * (float)_DAT_0058df16;
  }
  *(float *)(param_1 + 0x1fa44) = *(float *)(param_1 + 0x1fa44) + fStack_80;
  return;
}
