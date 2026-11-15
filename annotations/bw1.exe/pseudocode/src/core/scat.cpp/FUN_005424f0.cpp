// Name: core_scat.cpp_FUN_005424f0
// Address: 005424f0
// Address Range: [[005424f0, 00542b89]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_005424f0(CDemonActor *param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_005424f0(CDemonActor *param_1,float param_2,float param_3)

{
  SMotion *pSVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  byte bVar7;
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
  float local_20;
  float local_1c;
  float local_18;
  
  bVar7 = 0;
  param_1[0x17c].previous_transform_state.position.z = 0.0;
  if ((param_3 == 0.0) &&
     (pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)(param_1 + 1)), pSVar1->state_index == 2)) {
    param_3 = 1.4013e-45;
  }
  local_1a8 = (float)param_1[0x17c].dead1;
  local_24 = (float)param_1[0x17c].dead2;
  if ((param_1[0x179].orient_matrix.m[1].y == 0.0) ||
     (param_1[0x90].orient_matrix.m[2].x == 2.8026e-45)) {
    if ((param_1[0x17c].scale.y == 0) || (param_3 != 0.0)) {
      param_1[0x17c].previous_transform_state.position.y = 0.0;
    }
    else if (param_1[0x90].health == 0) {
      local_20 = param_3;
      local_1c = 1e+30;
      iVar5 = 0;
      for (iVar2 = 0; iVar2 < g_CDemonSetPtr->actor_count; iVar2 = iVar2 + 1) {
        fVar3 = *(float *)((int)g_CDemonSetPtr->actors + iVar5);
        local_1a4 = (float)core_scat_cpp_FUN_00542b90
                                     (param_1,fVar3,
                                      fVar3 == param_1[0x17c].previous_transform_state.position.y);
        if ((0.0 <= local_1a4) && (local_1a4 < local_1c)) {
          local_20 = fVar3;
          local_1c = local_1a4;
        }
        iVar5 = iVar5 + 4;
        local_18 = local_1a4;
      }
      param_1[0x17c].previous_transform_state.position.y = local_20;
    }
    if (param_1[0x90].health == 0) {
      if (param_1[0x17c].previous_transform_state.position.y != 0.0) {
        __arrinit(local_1a0,10,&g_CVectorTypeInfo);
        fVar3 = param_1[0x17c].previous_transform_state.position.y;
        iVar2 = (**(code **)(*(int *)((int)fVar3 + 0x154) + 0x54))(fVar3,local_1a0);
        if (iVar2 < 1) {
          fVar3 = param_1[0x17c].previous_transform_state.position.y;
          (**(code **)(*(int *)((int)fVar3 + 0x154) + 0x1c))(fVar3);
          pfVar4 = afStack_128;
          pfVar6 = &fStack_110;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar6 = *pfVar4;
            pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          afStack_58[2] = fStack_110 + fStack_104;
          afStack_58[3] = fStack_10c + fStack_100;
          fStack_48 = fStack_108 + fStack_fc;
          afStack_a0[2] = fStack_110 + fStack_104;
          afStack_a0[(uint)bVar7 * -2 + 3] = afStack_58[(uint)bVar7 * -2 + 3];
          afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          fStack_e0 = afStack_a0[2] * _DAT_005ededb;
          afStack_dc[0] = afStack_a0[3] * _DAT_005ededb;
          afStack_dc[1] = fStack_90 * _DAT_005ededb;
          CStack_d4.x = afStack_a0[2] * _DAT_005ededb;
          afStack_dc[(uint)bVar7 * -2 + 3] = afStack_dc[(uint)bVar7 * -2];
          afStack_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if (&CStack_b0 != (CVector3f *)(afStack_dc + 2)) {
            CStack_b0.x = CStack_d4.x;
            CStack_b0.y = CStack_d4.y;
          }
        }
        else if (&CStack_b0 != local_1a0) {
          CStack_b0.x = local_1a0[0].x;
          CStack_b0.y = local_1a0[0].y;
        }
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)param_1[0x17c].previous_transform_state.position.y,&CStack_b0,
                   &CStack_80);
        CStack_ec.x = CStack_80.x;
        *(uint *)((int)&CStack_ec + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_80 + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&CStack_ec + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(param_1,&CStack_ec,&CStack_f8);
        fStack_8c = CStack_f8.x;
        afStack_a0[(uint)bVar7 * -2 + 6] = *(float *)((int)&CStack_f8 + (uint)bVar7 * -8 + 4);
        afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             *(float *)((int)&CStack_f8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  ((CDeformableModelInstance *)(param_1 + 1),_DAT_01e7e02c,&CStack_68);
        fVar3 = fStack_8c;
        fStack_bc = CStack_68.x;
        afStack_dc[(uint)bVar7 * -2 + 9] = *(float *)((int)&CStack_68 + (uint)bVar7 * -8 + 4);
        afStack_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
             *(float *)((int)&CStack_68 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        fStack_c8 = fVar3 - fStack_bc;
        fStack_c4 = fStack_88 - fStack_b8;
        fStack_c0 = fStack_84 - fStack_b4;
        fStack_a4 = fVar3 - fStack_bc;
        afStack_a0[(uint)bVar7 * -2] = afStack_dc[(uint)bVar7 * -2 + 6];
        afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&fStack_a4);
        fStack_5c = fStack_74;
        afStack_58[(uint)bVar7 * -2] = afStack_70[(uint)bVar7 * -2];
        afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        local_1a8 = fStack_5c;
        local_24 = afStack_58[0];
      }
    }
    else if (param_1[0x17c].previous_transform_state.position.y == 0.0) {
      param_1[0x17c].dead2 = 0;
      param_1[0x17c].dead1 = param_1[0x17c].dead2;
      local_1a8 = (float)param_1[0x17c].dead1;
      local_24 = local_1a8;
    }
  }
  else {
    local_1a8 = *(float *)(param_1[0x90].create_event + 0xc) * _DAT_005edec7 * (float)_DAT_005edecf
                * param_2 + local_1a8;
    local_34 = 0x3fc90fdb;
    if (local_1a8 < _DAT_005eded7) {
      local_1a8 = -1.5707964;
    }
    if (1.5707964 < local_1a8) {
      local_1a8 = 1.5707964;
    }
    local_24 = 0.0;
  }
  local_2c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_24 - (float)param_1[0x17c].dead2);
  local_18 = local_2c;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_1a8 - (float)param_1[0x17c].dead1)
  ;
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
  fVar3 = param_1[0x17c].previous_transform_state.position.y;
  param_1[0x17c].dead1 = (int)((float)param_1[0x17c].dead1 + local_30);
  param_1[0x17c].dead2 = (int)((float)param_1[0x17c].dead2 + local_2c);
  if ((fVar3 != 0.0) && (param_3 == 0.0)) {
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                         ((float)param_1[0x17c].dead2 - local_24);
    if (((float)_DAT_005edee7 <= ABS(local_18)) &&
       (fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                          ((float)param_1[0x17c].dead2 - local_24),
       (float)_DAT_005edee7 <= ABS(fVar3))) {
      return;
    }
    param_1[0x17c].previous_transform_state.position.z = 1.4013e-45;
    return;
  }
  return;
}
