// Name: core_scat.cpp_FUN_005203c0
// Address: 005203c0
// Address Range: [[005203c0, 00520a59]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_005203c0(CDemonActor *param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_005203c0(CDemonActor *param_1,float param_2,int param_3)

{
  int iVar1;
  SMotion *pSVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_10e0 [971];
  float local_1a8;
  float local_1a4;
  CVector3f local_1a0 [10];
  float afStack_128 [6];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  float fStack_e0;
  float afStack_dc [2];
  CVector3f CStack_d4;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  CVector3f CStack_b0;
  float fStack_a4;
  float afStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_80;
  float fStack_74;
  float afStack_70 [2];
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [4];
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
  
  bVar8 = 0;
  param_1[0xdd].process_disabled = 0;
  if ((param_3 == 0) &&
     (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                         ((CMotionController *)(param_1 + 1)), pSVar2->state_index == 2)) {
    param_3 = 1;
  }
  local_1a8 = param_1[0xdd].platform_orientation_delta.z;
  local_24 = (float)param_1[0xdd].is_renderable;
  if ((param_1[0xd6].collision_disabled == 0) ||
     (param_1[0x62].particle_systems[0].fade_end == 2.8026e-45)) {
    if ((param_1[0xdd].standing_platform == (CPlatform *)0x0) || (param_3 != 0)) {
      param_1[0xdd].collision_disabled = 0;
    }
    else if (param_1[0x62].particle_systems[0].standalone == 0) {
      local_20 = param_3;
      local_1c = 1e+30;
      iVar6 = 0;
      for (iVar3 = 0; iVar3 < g_CDemonSetPtr->actor_count; iVar3 = iVar3 + 1) {
        iVar1 = *(int *)((int)g_CDemonSetPtr->actors + iVar6);
        local_1a4 = (float)core_scat_cpp_FUN_00520a60
                                     (param_1,iVar1,iVar1 == param_1[0xdd].collision_disabled);
        if ((0.0 <= local_1a4) && (local_1a4 < local_1c)) {
          local_20 = iVar1;
          local_1c = local_1a4;
        }
        iVar6 = iVar6 + 4;
        local_18 = local_1a4;
      }
      param_1[0xdd].collision_disabled = local_20;
    }
    if (param_1[0x62].particle_systems[0].standalone == 0) {
      if (param_1[0xdd].collision_disabled != 0) {
        __arrinit(local_1a0,10,&g_CVectorTypeInfo);
        iVar3 = (**(code **)(*(int *)(param_1[0xdd].collision_disabled + 0x2b0) + 0x5c))
                          (param_1[0xdd].collision_disabled,local_1a0);
        if (iVar3 < 1) {
          (**(code **)(*(int *)(param_1[0xdd].collision_disabled + 0x2b0) + 0x24))
                    (param_1[0xdd].collision_disabled);
          pfVar5 = afStack_128;
          pfVar7 = &fStack_110;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar7 = *pfVar5;
            pfVar5 = pfVar5 + (uint)bVar8 * -2 + 1;
            pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
          }
          afStack_58[2] = fStack_110 + fStack_104;
          afStack_58[3] = fStack_10c + fStack_100;
          fStack_48 = fStack_108 + fStack_fc;
          afStack_a0[2] = fStack_110 + fStack_104;
          afStack_a0[(uint)bVar8 * -2 + 3] = afStack_58[(uint)bVar8 * -2 + 3];
          afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               afStack_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          fStack_e0 = afStack_a0[2] * _DAT_005e2bcf;
          afStack_dc[0] = afStack_a0[3] * _DAT_005e2bcf;
          afStack_dc[1] = fStack_90 * _DAT_005e2bcf;
          CStack_d4.x = afStack_a0[2] * _DAT_005e2bcf;
          afStack_dc[(uint)bVar8 * -2 + 3] = afStack_dc[(uint)bVar8 * -2];
          afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (&CStack_b0 != (CVector3f *)(afStack_dc + 2)) {
            CStack_b0.x = CStack_d4.x;
            CStack_b0.y = CStack_d4.y;
          }
        }
        else if (&CStack_b0 != local_1a0) {
          CStack_b0.x = local_1a0[0].x;
          CStack_b0.y = local_1a0[0].y;
        }
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  ((CDemonActor *)param_1[0xdd].collision_disabled,&CStack_b0,&CStack_80);
        CStack_ec.x = CStack_80.x;
        *(uint *)((int)&CStack_ec + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_80 + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_ec + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(param_1,&CStack_ec,&CStack_f8);
        fStack_8c = CStack_f8.x;
        afStack_a0[(uint)bVar8 * -2 + 6] = *(float *)((int)&CStack_f8 + (uint)bVar8 * -8 + 4);
        afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
             *(float *)((int)&CStack_f8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  ((CDeformableModelInstance *)(param_1 + 1),_DAT_01e62080,&CStack_68);
        fVar4 = fStack_8c;
        fStack_bc = CStack_68.x;
        afStack_dc[(uint)bVar8 * -2 + 9] = *(float *)((int)&CStack_68 + (uint)bVar8 * -8 + 4);
        afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
             *(float *)((int)&CStack_68 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        fStack_c8 = fVar4 - fStack_bc;
        fStack_c4 = fStack_88 - fStack_b8;
        fStack_c0 = fStack_84 - fStack_b4;
        fStack_a4 = fVar4 - fStack_bc;
        afStack_a0[(uint)bVar8 * -2] = afStack_dc[(uint)bVar8 * -2 + 6];
        afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_a4);
        fStack_5c = fStack_74;
        afStack_58[(uint)bVar8 * -2] = afStack_70[(uint)bVar8 * -2];
        afStack_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        local_1a8 = fStack_5c;
        local_24 = afStack_58[0];
      }
    }
    else if (param_1[0xdd].collision_disabled == 0) {
      param_1[0xdd].is_renderable = 0;
      param_1[0xdd].platform_orientation_delta.z = (float)param_1[0xdd].is_renderable;
      local_1a8 = param_1[0xdd].platform_orientation_delta.z;
      local_24 = local_1a8;
    }
  }
  else {
    local_1a8 = (float)param_1[0x62].particle_systems[1].owner * _DAT_005e2bbb *
                (float)_DAT_005e2bc3 * param_2 + local_1a8;
    local_34 = 0x3fc90fdb;
    if (local_1a8 < _DAT_005e2bcb) {
      local_1a8 = -1.5707964;
    }
    if (1.5707964 < local_1a8) {
      local_1a8 = 1.5707964;
    }
    local_24 = 0.0;
  }
  local_2c = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                       (local_24 - (float)param_1[0xdd].is_renderable);
  local_18 = local_2c;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                       (local_1a8 - param_1[0xdd].platform_orientation_delta.z);
  local_28 = param_2 * _DAT_005e2bbb * (float)_DAT_005e2bd3;
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
  fVar4 = (float)param_1[0xdd].is_renderable;
  iVar3 = param_1[0xdd].collision_disabled;
  param_1[0xdd].platform_orientation_delta.z = param_1[0xdd].platform_orientation_delta.z + local_30
  ;
  param_1[0xdd].is_renderable = (int)(fVar4 + local_2c);
  if ((iVar3 != 0) && (param_3 == 0)) {
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                         ((float)param_1[0xdd].is_renderable - local_24);
    if (((float)_DAT_005e2bdb <= ABS(local_18)) &&
       (fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                          ((float)param_1[0xdd].is_renderable - local_24),
       (float)_DAT_005e2bdb <= ABS(fVar4))) {
      return;
    }
    param_1[0xdd].process_disabled = 1;
    return;
  }
  return;
}
