// Name: core_scat.cpp_CScat_updateAiming_FUN_005424f0
// Address: 005424f0
// Address Range: [[005424f0, 00542b89]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateAiming_FUN_005424f0(CScat *this_ptr,float delta_time,int is_holstered)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_updateAiming_FUN_005424f0(CScat *this_ptr,float delta_time,int is_holstered)

{
  CDemonActor *target;
  SMotion *pSVar1;
  int iVar2;
  float fVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_10d0 [967];
  float local_1a8;
  CBoundingBox3D *in_stack_fffffe60;
  float fStack_198;
  float fStack_194;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  CVector3f CStack_e8;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [2];
  CVector3f CStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [4];
  float local_38;
  uint local_34;
  float local_2c;
  float local_28;
  float local_24;
  CDemonActor *local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  
  bVar7 = 0;
  this_ptr->aim_converged = 0;
  if ((is_holstered == 0) &&
     (pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         (&(this_ptr->base).base.model.base), pSVar1->state_index == 2)) {
    is_holstered = 1;
  }
  local_1a8 = this_ptr->aim_pitch;
  local_24 = this_ptr->aim_yaw;
  if (((this_ptr->base).aim_mode == AIM_MODE_AUTO) ||
     ((this_ptr->base).control_type == HERO_CONTROL_AI)) {
    if ((this_ptr->guns_drawn == 0) || (is_holstered != 0)) {
      this_ptr->aim_target = (CDemonActor *)0x0;
    }
    else if ((this_ptr->base).player_input.action_state.fire == 0) {
      local_20 = (CDemonActor *)is_holstered;
      local_1c = 1e+30;
      iVar5 = 0;
      for (iVar2 = 0; iVar2 < g_CDemonSetPtr->actor_count; iVar2 = iVar2 + 1) {
        target = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar5);
        local_18 = core_scat_cpp_CScat_scoreAimTarget_FUN_00542b90
                             (this_ptr,target,(uint)(target == this_ptr->aim_target));
        if ((0.0 <= local_18) && (local_18 < local_1c)) {
          local_20 = target;
          local_1c = local_18;
        }
        iVar5 = iVar5 + 4;
      }
      this_ptr->aim_target = local_20;
    }
    if ((this_ptr->base).player_input.action_state.fire == 0) {
      if (this_ptr->aim_target != (CDemonActor *)0x0) {
        __arrinit(&stack0xfffffe60,10,&g_CVectorTypeInfo);
        iVar2 = (*((this_ptr->aim_target->vtable)._ub)->getTargetPoints)
                          (this_ptr->aim_target,(CVector3f *)&stack0xfffffe60);
        if (iVar2 < 1) {
          local_1a8 = 7.729275e-39;
          (*((this_ptr->aim_target->vtable)._ub)->getBoundingBox)
                    (this_ptr->aim_target,in_stack_fffffe60);
          puVar4 = (uint *)&stack0xfffffee8;
          puVar6 = (uint *)&stack0xfffffef8;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          afStack_48[2] = fStack_100 + fStack_f4;
          afStack_48[3] = fStack_fc + fStack_f0;
          local_38 = fStack_f8 + fStack_ec;
          fStack_88 = fStack_100 + fStack_f4;
          afStack_84[(uint)bVar7 * -2] = afStack_48[(uint)bVar7 * -2 + 3];
          afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          fStack_d0 = fStack_88 * 0.5f;
          afStack_cc[0] = afStack_84[0] * 0.5f;
          afStack_cc[1] = afStack_84[1] * 0.5f;
          CStack_c4.x = fStack_88 * 0.5f;
          afStack_cc[(uint)bVar7 * -2 + 3] = afStack_cc[(uint)bVar7 * -2];
          afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if (&CStack_a0 != (CVector3f *)(afStack_cc + 2)) {
            CStack_a0.x = CStack_c4.x;
          }
        }
        else if (afStack_cc + 9 != &stack0xfffffe68) {
          fStack_a8 = fStack_198;
          fStack_a4 = fStack_194;
        }
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  (this_ptr->aim_target,&CStack_a0,&CStack_70);
        CStack_dc.x = CStack_70.x;
        *(uint *)((int)&CStack_dc + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_70 + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&CStack_dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  ((CDemonActor *)this_ptr,&CStack_dc,&CStack_e8);
        afStack_84[2] = CStack_e8.x;
        afStack_84[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_e8 + (uint)bVar7 * -8 + 4);
        afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             *(float *)((int)&CStack_e8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (&(this_ptr->base).base.model,g_ScatIndices[6],&CStack_58);
        fVar3 = afStack_84[2];
        fStack_ac = CStack_58.x;
        afStack_cc[(uint)bVar7 * -2 + 9] = *(float *)((int)&CStack_58 + (uint)bVar7 * -8 + 4);
        afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
             *(float *)((int)&CStack_58 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        fStack_b8 = fVar3 - fStack_ac;
        fStack_b4 = afStack_84[3] - fStack_a8;
        fStack_b0 = fStack_74 - fStack_a4;
        CStack_94.x = fVar3 - fStack_ac;
        *(float *)((int)&CStack_94 + (uint)bVar7 * -8 + 4) = afStack_cc[(uint)bVar7 * -2 + 6];
        *(float *)((int)&CStack_94 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_94,&CStack_64);
        fStack_4c = CStack_64.x;
        afStack_48[(uint)bVar7 * -2] = *(float *)((int)&CStack_64 + (uint)bVar7 * -8 + 4);
        afStack_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             *(float *)((int)&CStack_64 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        fStack_198 = fStack_4c;
        fStack_14 = afStack_48[0];
      }
    }
    else if (this_ptr->aim_target == (CDemonActor *)0x0) {
      this_ptr->aim_yaw = 0.0;
      this_ptr->aim_pitch = this_ptr->aim_yaw;
      local_1a8 = this_ptr->aim_pitch;
      local_24 = local_1a8;
    }
  }
  else {
    local_1a8 = (this_ptr->base).player_input.look_up_down_speed * 3.141593f *
                (float)2 * delta_time + local_1a8;
    local_34 = 0x3fc90fdb;
    if (local_1a8 < -1.570796f) {
      local_1a8 = -1.5707964;
    }
    if (1.5707964 < local_1a8) {
      local_1a8 = 1.5707964;
    }
    local_24 = 0.0;
  }
  local_1c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_14 - this_ptr->aim_yaw);
  local_20 = (CDemonActor *)
             core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_198 - this_ptr->aim_pitch);
  local_18 = delta_time * 3.141593f * (float)1.5;
  local_28 = -local_18;
  if (local_1c < local_28) {
    local_1c = local_28;
  }
  if (local_18 < local_1c) {
    local_1c = local_18;
  }
  local_2c = -local_18;
  if ((float)local_20 < local_2c) {
    local_20 = (CDemonActor *)local_2c;
  }
  if (local_18 < (float)local_20) {
    local_20 = (CDemonActor *)local_18;
  }
  this_ptr->aim_pitch = this_ptr->aim_pitch + (float)local_20;
  this_ptr->aim_yaw = this_ptr->aim_yaw + local_1c;
  if ((this_ptr->aim_target != (CDemonActor *)0x0) && (is_holstered == 0)) {
    fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(this_ptr->aim_yaw - fStack_14);
    if (((float)0.02 <= ABS(fVar3)) &&
       (fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(this_ptr->aim_yaw - fStack_14),
       (float)0.02 <= ABS(fVar3))) {
      return;
    }
    this_ptr->aim_converged = 1;
    return;
  }
  return;
}
