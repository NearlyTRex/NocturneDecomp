// Name: core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004ca450
// Address: 004ca450
// Address Range: [[004ca450, 004cab02]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004ca450(CGabriella *this_ptr,float delta_time,int is_holstering)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004ca450(CGabriella *this_ptr,float delta_time,int is_holstering)

{
  CDemonActor *target_actor;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_10cc [968];
  float local_1a0;
  CBoundingBox3D *in_stack_fffffe68;
  float *pfStack_194;
  uint uStack_190;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float afStack_fc [6];
  float fStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float afStack_c0 [3];
  float fStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float fStack_84;
  float afStack_78 [3];
  float fStack_6c;
  float *pfStack_68;
  uint uStack_64;
  float afStack_60 [3];
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  CDemonActor *local_28;
  float local_24;
  float local_20;
  uint local_18;
  float local_14;
  
  bVar6 = 0;
  if ((is_holstering == 0) &&
     (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         (&(this_ptr->base).base.model.base), pSVar2->state_index == 2)) {
    is_holstering = 1;
  }
  if (((this_ptr->base).aim_mode == AIM_MODE_AUTO) ||
     ((this_ptr->base).control_type == HERO_CONTROL_AI)) {
    if ((this_ptr->weapon_state_flags == 0) || (is_holstering != 0)) {
      this_ptr->aim_target = (CDemonActor *)0x0;
    }
    else if (this_ptr->fire_state == 0) {
      local_24 = 1e+30;
      local_28 = (CDemonActor *)0x0;
      local_20 = 0.0;
      for (iVar3 = 0; iVar3 < g_CDemonSetPtr->actor_count; iVar3 = iVar3 + 1) {
        target_actor = *(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)local_20);
        local_1a0 = core_gabriela_cpp_CGabriella_scoreTargetVisibility_FUN_004ca0c0
                              (this_ptr,target_actor,(uint)(target_actor == this_ptr->aim_target));
        if ((0.0 <= local_1a0) && (local_1a0 < local_24)) {
          local_28 = target_actor;
          local_24 = local_1a0;
        }
        local_20 = (float)((int)local_20 + 4);
        local_14 = local_1a0;
      }
      this_ptr->aim_target = local_28;
    }
    if (this_ptr->fire_state == 2) {
      if (this_ptr->aim_target == (CDemonActor *)0x0) {
        this_ptr->aim_yaw = 0.0;
        this_ptr->aim_pitch = this_ptr->aim_yaw;
        this_ptr->target_aim_yaw = this_ptr->aim_pitch;
        this_ptr->target_aim_pitch = this_ptr->target_aim_yaw;
      }
      fVar1 = delta_time / (_DAT_00600d60 * (float)_DAT_005e11fc) + this_ptr->aim_weight;
    }
    else if (this_ptr->aim_target == (CDemonActor *)0x0) {
      if (0.0 < this_ptr->fire_cooldown_timer) goto LAB_004ca4ed;
      fVar1 = this_ptr->aim_weight - delta_time / _DAT_00600d60;
    }
    else {
      __arrinit(&stack0xfffffe64,10,&g_CVectorTypeInfo);
      iVar3 = (*((this_ptr->aim_target->vtable)._ub)->getTargetPoints)
                        (this_ptr->aim_target,(CVector3f *)&stack0xfffffe64);
      if (iVar3 < 1) {
        local_1a0 = 7.039997e-39;
        (*((this_ptr->aim_target->vtable)._ub)->getBoundingBox)
                  (this_ptr->aim_target,in_stack_fffffe68);
        pfVar4 = afStack_fc;
        pfVar5 = &fStack_114;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar5 = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
          pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
        }
        afStack_50[2] = fStack_114 + fStack_108;
        afStack_50[3] = fStack_110 + fStack_104;
        fStack_40 = fStack_10c + fStack_100;
        fStack_9c = fStack_114 + fStack_108;
        afStack_e0[(uint)bVar6 * -2 + 0x12] = afStack_50[(uint)bVar6 * -2 + 3];
        afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
             afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        fStack_3c = fStack_9c * _DAT_005e11f8;
        local_38 = fStack_98 * _DAT_005e11f8;
        local_34 = fStack_94 * _DAT_005e11f8;
        fStack_6c = fStack_9c * _DAT_005e11f8;
        afStack_e0[(uint)bVar6 * -2 + 0x1e] = afStack_50[(uint)bVar6 * -2 + 6];
        afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
             afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        if (afStack_e0 + 0x20 != afStack_e0 + 0x1d) {
          afStack_60[0] = fStack_6c;
        }
      }
      else if ((float **)(afStack_e0 + 0x1e) != &pfStack_194) {
        pfStack_68 = pfStack_194;
        uStack_64 = uStack_190;
      }
      pfStack_194 = afStack_e0 + 0x20;
      core_actor_cpp_FUN_00408b40();
      pfStack_194 = afStack_e0 + 8;
      afStack_c0[0] = (float)uStack_90;
      afStack_e0[(uint)bVar6 * -2 + 9] = afStack_e0[(uint)bVar6 * -2 + 0x15];
      afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
      core_actor_cpp_FUN_00408bb0();
      pfStack_194 = _DAT_01cc9120;
      fStack_54 = fStack_84;
      afStack_50[(uint)bVar6 * -2] = afStack_e0[(uint)bVar6 * -2 + 0x18];
      afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
      core_skeleton_cpp_FUN_00569040();
      fVar1 = fStack_54;
      afStack_e0[2] = fStack_b4;
      afStack_e0[(uint)bVar6 * -2 + 3] = afStack_e0[(uint)bVar6 * -2 + 0xc];
      afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      fStack_a8 = fVar1 - afStack_e0[2];
      fStack_a4 = afStack_50[0] - afStack_e0[3];
      fStack_a0 = afStack_50[1] - fStack_d0;
      afStack_78[0] = fVar1 - afStack_e0[2];
      afStack_e0[(uint)bVar6 * -2 + 0x1b] = afStack_e0[(uint)bVar6 * -2 + 0xf];
      afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
           afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      pfStack_194 = afStack_e0 + 0x1a;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
      fVar1 = delta_time / _DAT_00600d60;
      fStack_cc = fStack_e4;
      afStack_e0[(uint)bVar6 * -2 + 6] = afStack_e0[(uint)bVar6 * -2];
      afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      this_ptr->target_aim_pitch = fStack_cc;
      fVar1 = fVar1 + this_ptr->aim_weight;
      this_ptr->target_aim_yaw = fStack_c8;
    }
  }
  else {
    fVar1 = (this_ptr->base).player_input.look_up_down_speed * _DAT_005e11e4 * (float)_DAT_005e11ec
            * delta_time + this_ptr->target_aim_pitch;
    local_18 = 0x3fc90fdb;
    this_ptr->target_aim_pitch = fVar1;
    if (fVar1 < _DAT_005e11f4) {
      this_ptr->target_aim_pitch = -1.5707964;
    }
    if (1.5707964 < this_ptr->target_aim_pitch) {
      this_ptr->target_aim_pitch = 1.5707964;
    }
    fVar1 = delta_time / _DAT_00600d60 + this_ptr->aim_weight;
    this_ptr->target_aim_yaw = 0.0;
  }
  this_ptr->aim_weight = fVar1;
LAB_004ca4ed:
  if (1.0 < this_ptr->aim_weight) {
    this_ptr->aim_weight = 1.0;
  }
  if (this_ptr->aim_weight < 0.0) {
    this_ptr->aim_pitch = 0.0;
    this_ptr->aim_yaw = 0.0;
    this_ptr->aim_weight = 0.0;
  }
  if (0.0 < this_ptr->aim_weight) {
    pfStack_194 = (float *)(this_ptr->target_aim_yaw - this_ptr->aim_yaw);
    local_20 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
    pfStack_194 = (float *)(this_ptr->target_aim_pitch - this_ptr->aim_pitch);
    local_24 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
    fVar1 = delta_time * _DAT_005e11e4 * (float)_DAT_005e1204;
    if (local_20 < -fVar1) {
      local_20 = -fVar1;
    }
    if (fVar1 < local_20) {
      local_20 = fVar1;
    }
    if (local_24 < -fVar1) {
      local_24 = -fVar1;
    }
    if (fVar1 < local_24) {
      local_24 = fVar1;
    }
    this_ptr->aim_pitch = this_ptr->aim_pitch + local_24;
    this_ptr->aim_yaw = this_ptr->aim_yaw + local_20;
    return;
  }
  this_ptr->aim_pitch = this_ptr->target_aim_pitch;
  this_ptr->aim_yaw = this_ptr->target_aim_yaw;
  return;
}
