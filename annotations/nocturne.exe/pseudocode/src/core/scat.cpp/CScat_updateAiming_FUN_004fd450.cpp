// Name: core_scat.cpp_CScat_updateAiming_FUN_004fd450
// Address: 004fd450
// Address Range: [[004fd450, 004fda10]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateAiming_FUN_004fd450(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_updateAiming_FUN_004fd450(int param_1,float param_2,int param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float local_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  byte auStack_c0 [24];
  byte auStack_a8 [12];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  byte auStack_6c [12];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  float local_24;
  int local_20;
  uint local_1c;
  float local_18;
  
  *(uint *)(param_1 + 0x1fa64) = 0;
  if ((param_3 == 0) &&
     (iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150),
     *(int *)(iVar3 + 0x24) == 2)) {
    param_3 = 1;
  }
  local_13c = *(float *)(param_1 + 0x1fa54);
  local_2c = *(float *)(param_1 + 0x1fa58);
  if ((*(int *)(param_1 + 0x1f59c) != 0) && (*(int *)(param_1 + 0xbc90) != 2)) {
    local_13c = *(float *)(param_1 + 0xbcbc) * (float)3.1415926535000001 * (float)2 *
                param_2 + local_13c;
    local_1c = 0x3fc90fdb;
    if (local_13c < -1.570796f) {
      local_13c = -1.5707964;
    }
    if (1.5707964 < local_13c) {
      local_13c = 1.5707964;
    }
    local_2c = 0.0;
    goto LAB_004fd4ed;
  }
  if ((*(int *)(param_1 + 0x1fa3c) == 0) || (param_3 != 0)) {
    *(uint *)(param_1 + 0x1fa60) = 0;
  }
  else if (*(int *)(param_1 + 0xbca0) == 0) {
    local_28 = param_3;
    local_24 = 1e+30;
    iVar3 = 0;
    for (local_20 = param_3; local_20 < *(int *)(0x01E57284 + 0x14cd6c); local_20 = local_20 + 1)
    {
      iVar1 = *(int *)(iVar3 + 0x14cd70 + 0x01E57284);
      local_18 = (float)core_scat_cpp_FUN_004fda20
                                  (param_1,iVar1,iVar1 == *(int *)(param_1 + 0x1fa60));
      if ((0.0 <= local_18) && (local_18 < local_24)) {
        local_28 = iVar1;
        local_24 = local_18;
      }
      iVar3 = iVar3 + 4;
    }
    *(int *)(param_1 + 0x1fa60) = local_28;
  }
  if (*(int *)(param_1 + 0xbca0) != 0) {
    if (*(int *)(param_1 + 0x1fa60) == 0) {
      *(uint *)(param_1 + 0x1fa58) = 0;
      *(uint *)(param_1 + 0x1fa54) = *(uint *)(param_1 + 0x1fa58);
      local_13c = *(float *)(param_1 + 0x1fa54);
      local_2c = local_13c;
    }
    goto LAB_004fd4ed;
  }
  if (*(int *)(param_1 + 0x1fa60) == 0) goto LAB_004fd4ed;
  __arrinit(&local_138,10,&g_CVectorTypeInfo_005993b0);
  iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa60) + 0x14c) + 0x4c))
                    (*(int *)(param_1 + 0x1fa60),&local_138);
  if (iVar3 < 1) {
    pfVar5 = (float *)(**(code **)(*(int *)(*(int *)(param_1 + 0x1fa60) + 0x14c) + 0x14))
                                (*(int *)(param_1 + 0x1fa60),auStack_c0);
    fStack_90 = *pfVar5 + pfVar5[3];
    fStack_8c = pfVar5[1] + pfVar5[4];
    fStack_78 = fStack_90 * 0.5f;
    fStack_88 = pfVar5[2] + pfVar5[5];
    fStack_74 = fStack_8c * 0.5f;
    fStack_130 = fStack_88 * 0.5f;
    fStack_70 = fStack_130;
    fVar6 = fStack_78;
    fVar2 = fStack_74;
    if (&fStack_60 != &fStack_78) goto LAB_004fd81b;
  }
  else if (&fStack_60 != &local_138) {
    fStack_60 = local_138;
    fStack_5c = fStack_134;
    fVar6 = fStack_60;
    fVar2 = fStack_5c;
LAB_004fd81b:
    fStack_5c = fVar2;
    fStack_60 = fVar6;
    fStack_58 = fStack_130;
  }
  uVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    (*(uint *)(param_1 + 0x1fa60),auStack_6c,&fStack_60);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&fStack_9c,uVar4);
  pfVar5 = (float *)core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                              (param_1 + 0x150,auStack_a8,_DAT_01e533a0);
  fStack_84 = fStack_9c - *pfVar5;
  fStack_80 = fStack_98 - pfVar5[1];
  fStack_7c = fStack_94 - pfVar5[2];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&fStack_54,&fStack_84);
  local_13c = fStack_54;
  local_2c = fStack_50;
LAB_004fd4ed:
  local_38 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                              (local_2c - *(float *)(param_1 + 0x1fa58));
  local_18 = local_38;
  local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                              (local_13c - *(float *)(param_1 + 0x1fa54));
  local_30 = param_2 * (float)3.1415926535000001 * (float)1.5;
  local_3c = -local_30;
  if (local_38 < local_3c) {
    local_38 = local_3c;
  }
  if (local_30 < local_38) {
    local_38 = local_30;
  }
  local_40 = -local_30;
  local_34 = local_18;
  if (local_18 < local_40) {
    local_34 = local_40;
  }
  if (local_30 < local_34) {
    local_34 = local_30;
  }
  *(float *)(param_1 + 0x1fa54) = *(float *)(param_1 + 0x1fa54) + local_34;
  *(float *)(param_1 + 0x1fa58) = *(float *)(param_1 + 0x1fa58) + local_38;
  if ((*(int *)(param_1 + 0x1fa60) != 0) && (param_3 == 0)) {
    local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                (*(float *)(param_1 + 0x1fa58) - local_2c);
    if (((float)0.02 <= ABS(local_18)) &&
       (fVar6 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (*(float *)(param_1 + 0x1fa58) - local_2c),
       (float)0.02 <= ABS(fVar6))) {
      return;
    }
    *(uint *)(param_1 + 0x1fa64) = 1;
    return;
  }
  return;
}
