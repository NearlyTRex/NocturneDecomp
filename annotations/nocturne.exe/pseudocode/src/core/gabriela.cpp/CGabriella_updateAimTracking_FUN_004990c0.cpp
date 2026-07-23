// Name: core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004990c0
// Address: 004990c0
// Address Range: [[004990c0, 004996ae]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004990c0(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004990c0(int param_1,float param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float local_134;
  float fStack_130;
  float fStack_12c;
  byte auStack_bc [24];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  byte auStack_80 [12];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  byte auStack_68 [12];
  uint uStack_5c;
  uint uStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint local_3c;
  float local_30;
  int local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  if ((param_3 == 0) &&
     (iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150),
     *(int *)(iVar4 + 0x24) == 2)) {
    param_3 = 1;
  }
  if ((*(int *)(param_1 + 0x1f59c) == 0) || (*(int *)(param_1 + 0xbc90) == 2)) {
    if ((*(int *)(param_1 + 0x1fa3c) == 0) || (param_3 != 0)) {
      *(uint *)(param_1 + 0x1fa60) = 0;
    }
    else if (*(int *)(param_1 + 0x1fa54) == 0) {
      iVar4 = 0;
      local_24 = 1e+30;
      local_28 = 0;
      for (local_20 = 0; local_20 < *(int *)(0x01E57284 + 0x14cd6c); local_20 = local_20 + 1) {
        iVar1 = *(int *)(iVar4 + 0x14cd70 + 0x01E57284);
        local_18 = (float)FUN_00498de0(param_1,iVar1,iVar1 == *(int *)(param_1 + 0x1fa60));
        if ((0.0 <= local_18) && (local_18 < local_24)) {
          local_28 = iVar1;
          local_24 = local_18;
        }
        iVar4 = iVar4 + 4;
      }
      *(int *)(param_1 + 0x1fa60) = local_28;
    }
    if (*(int *)(param_1 + 0x1fa54) == 2) {
      if (*(int *)(param_1 + 0x1fa60) == 0) {
        *(uint *)(param_1 + 0x1fa70) = 0;
        *(uint *)(param_1 + 0x1fa6c) = *(uint *)(param_1 + 0x1fa70);
        *(uint *)(param_1 + 0x1fa68) = *(uint *)(param_1 + 0x1fa6c);
        *(uint *)(param_1 + 0x1fa64) = *(uint *)(param_1 + 0x1fa68);
      }
      fVar2 = param_2 / (0.3f * (float)0.5) + *(float *)(param_1 + 0x1fa78);
    }
    else if (*(int *)(param_1 + 0x1fa60) == 0) {
      if (0.0 < *(float *)(param_1 + 0x1fa74)) goto LAB_0049915d;
      fVar2 = *(float *)(param_1 + 0x1fa78) - param_2 / 0.3f;
    }
    else {
      __arrinit(&local_134,10,&DAT_005993b0);
      iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa60) + 0x14c) + 0x4c))
                        (*(int *)(param_1 + 0x1fa60),&local_134);
      if (iVar4 < 1) {
        pfVar6 = (float *)(**(code **)(*(int *)(*(int *)(param_1 + 0x1fa60) + 0x14c) + 0x14))
                                    (*(int *)(param_1 + 0x1fa60),auStack_bc);
        fStack_a4 = *pfVar6 + pfVar6[3];
        fStack_a0 = pfVar6[1] + pfVar6[4];
        fStack_8c = fStack_a4 * 0.5f;
        fStack_9c = pfVar6[2] + pfVar6[5];
        fStack_88 = fStack_a0 * 0.5f;
        fStack_12c = fStack_9c * 0.5f;
        fStack_84 = fStack_12c;
        fVar2 = fStack_8c;
        fVar3 = fStack_88;
        if (&fStack_50 != &fStack_8c) goto LAB_004993c1;
      }
      else if (&fStack_50 != &local_134) {
        fStack_50 = local_134;
        fStack_4c = fStack_130;
        fVar2 = fStack_50;
        fVar3 = fStack_4c;
LAB_004993c1:
        fStack_4c = fVar3;
        fStack_50 = fVar2;
        fStack_48 = fStack_12c;
      }
      uVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        (*(uint *)(param_1 + 0x1fa60),auStack_68,&fStack_50);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&fStack_74,uVar5);
      pfVar6 = (float *)core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                                  (param_1 + 0x150,auStack_80,_DAT_01c713b0);
      fStack_98 = fStack_74 - *pfVar6;
      fStack_94 = fStack_70 - pfVar6[1];
      fStack_90 = fStack_6c - pfVar6[2];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&uStack_5c,&fStack_98);
      fVar2 = param_2 / 0.3f;
      *(uint *)(param_1 + 0x1fa64) = uStack_5c;
      fVar2 = fVar2 + *(float *)(param_1 + 0x1fa78);
      *(uint *)(param_1 + 0x1fa68) = uStack_58;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0xbcbc) * (float)3.1415926535000001 * (float)2 * param_2
            + *(float *)(param_1 + 0x1fa64);
    local_3c = 0x3fc90fdb;
    *(float *)(param_1 + 0x1fa64) = fVar2;
    if (fVar2 < -1.570796f) {
      *(uint *)(param_1 + 0x1fa64) = 0xbfc90fdb;
    }
    if (1.5707964 < *(float *)(param_1 + 0x1fa64)) {
      *(uint *)(param_1 + 0x1fa64) = 0x3fc90fdb;
    }
    fVar2 = param_2 / 0.3f + *(float *)(param_1 + 0x1fa78);
    *(uint *)(param_1 + 0x1fa68) = 0;
  }
  *(float *)(param_1 + 0x1fa78) = fVar2;
LAB_0049915d:
  if (1.0 < *(float *)(param_1 + 0x1fa78)) {
    *(uint *)(param_1 + 0x1fa78) = 0x3f800000;
  }
  if (*(float *)(param_1 + 0x1fa78) < 0.0) {
    *(uint *)(param_1 + 0x1fa6c) = 0;
    *(uint *)(param_1 + 0x1fa70) = 0;
    *(uint *)(param_1 + 0x1fa78) = 0;
  }
  if (0.0 < *(float *)(param_1 + 0x1fa78)) {
    local_1c = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                (*(float *)(param_1 + 0x1fa68) - *(float *)(param_1 + 0x1fa70));
    local_18 = local_1c;
    local_30 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                (*(float *)(param_1 + 0x1fa64) - *(float *)(param_1 + 0x1fa6c));
    fVar2 = param_2 * (float)3.1415926535000001 * (float)1.5;
    if (local_1c < -fVar2) {
      local_1c = -fVar2;
    }
    if (fVar2 < local_1c) {
      local_1c = fVar2;
    }
    if (local_30 < -fVar2) {
      local_30 = -fVar2;
    }
    if (fVar2 < local_30) {
      local_30 = fVar2;
    }
    *(float *)(param_1 + 0x1fa6c) = *(float *)(param_1 + 0x1fa6c) + local_30;
    *(float *)(param_1 + 0x1fa70) = *(float *)(param_1 + 0x1fa70) + local_1c;
    return;
  }
  *(uint *)(param_1 + 0x1fa6c) = *(uint *)(param_1 + 0x1fa64);
  *(uint *)(param_1 + 0x1fa70) = *(uint *)(param_1 + 0x1fa68);
  return;
}
