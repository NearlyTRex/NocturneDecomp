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
  SMotion *pSVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_10cc [968];
  float local_1a0;
  CBoundingBox3D *in_stack_fffffe68;
  CVector3f *input_world_point;
  float fVar6;
  float fStack_190;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [4];
  float fStack_94;
  CVector3f CStack_90;
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [2];
  CVector3f CStack_6c;
  CVector3f CStack_60;
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
  
  bVar5 = 0;
  if ((is_holstering == 0) &&
     (pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         (&(this_ptr->base).base.model.base), pSVar1->state_index == 2)) {
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
      for (iVar2 = 0; iVar2 < g_CDemonSetPtr->actor_count; iVar2 = iVar2 + 1) {
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
      fVar6 = delta_time / (_DAT_00600d60 * (float)_DAT_005e11fc) + this_ptr->aim_weight;
    }
    else if (this_ptr->aim_target == (CDemonActor *)0x0) {
      if (0.0 < this_ptr->fire_cooldown_timer) goto LAB_004ca4ed;
      fVar6 = this_ptr->aim_weight - delta_time / _DAT_00600d60;
    }
    else {
      __arrinit(&stack0xfffffe64,10,&g_CVectorTypeInfo);
      iVar2 = (*((this_ptr->aim_target->vtable)._ub)->getTargetPoints)
                        (this_ptr->aim_target,(CVector3f *)&stack0xfffffe64);
      if (iVar2 < 1) {
        local_1a0 = 7.039997e-39;
        (*((this_ptr->aim_target->vtable)._ub)->getBoundingBox)
                  (this_ptr->aim_target,in_stack_fffffe68);
        puVar3 = (uint *)&stack0xffffff04;
        puVar4 = &stack0xfffffeec;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        afStack_50[2] = fStack_114 + fStack_108;
        afStack_50[3] = fStack_110 + fStack_104;
        fStack_40 = fStack_10c + fStack_100;
        afStack_a4[2] = fStack_114 + fStack_108;
        afStack_a4[(uint)bVar5 * -2 + 3] = afStack_50[(uint)bVar5 * -2 + 3];
        afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_50[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        fStack_3c = afStack_a4[2] * _DAT_005e11f8;
        local_38 = afStack_a4[3] * _DAT_005e11f8;
        local_34 = fStack_94 * _DAT_005e11f8;
        CStack_6c.x = afStack_a4[2] * _DAT_005e11f8;
        *(float *)((int)&CStack_6c + (uint)bVar5 * -8 + 4) = afStack_50[(uint)bVar5 * -2 + 6];
        *(float *)((int)&CStack_6c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_50[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        if (&CStack_60 != (CVector3f *)(afStack_74 + 2)) {
          CStack_60.x = CStack_6c.x;
        }
      }
      else if (&CStack_6c.y != (float *)&stack0xfffffe6c) {
        CStack_6c.z = fStack_190;
      }
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                (this_ptr->aim_target,&CStack_60,&CStack_90);
      input_world_point = &CStack_c0;
      CStack_c0.x = CStack_90.x;
      *(uint *)((int)&CStack_c0 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_90 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_c0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_90 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)this_ptr,input_world_point,&CStack_84);
      fStack_54 = CStack_84.x;
      afStack_50[(uint)bVar5 * -2] = *(float *)((int)&CStack_84 + (uint)bVar5 * -8 + 4);
      fVar6 = _DAT_01cc9120;
      afStack_50[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           *(float *)((int)&CStack_84 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                (&(this_ptr->base).base.model,(int)fVar6,&CStack_b4);
      fVar6 = fStack_54;
      fStack_d8 = CStack_b4.x;
      *(uint *)((int)&stack0xffffff2c + (uint)bVar5 * -8) =
           *(uint *)((int)&CStack_b4 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&stack0xffffff30 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&CStack_b4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      fStack_a8 = fVar6 - fStack_d8;
      afStack_a4[0] = afStack_50[0] - fStack_d4;
      afStack_a4[1] = afStack_50[1] - fStack_d0;
      fStack_78 = fVar6 - fStack_d8;
      afStack_74[(uint)bVar5 * -2] = afStack_a4[(uint)bVar5 * -2];
      afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
      fVar6 = delta_time / _DAT_00600d60;
      fStack_cc = fStack_e4;
      *(uint *)((int)&stack0xffffff38 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff20 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffff3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff24 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      this_ptr->target_aim_pitch = fStack_cc;
      fVar6 = fVar6 + this_ptr->aim_weight;
      this_ptr->target_aim_yaw = fStack_c8;
    }
  }
  else {
    fVar6 = (this_ptr->base).player_input.look_up_down_speed * _DAT_005e11e4 * (float)_DAT_005e11ec
            * delta_time + this_ptr->target_aim_pitch;
    local_18 = 0x3fc90fdb;
    this_ptr->target_aim_pitch = fVar6;
    if (fVar6 < _DAT_005e11f4) {
      this_ptr->target_aim_pitch = -1.5707964;
    }
    if (1.5707964 < this_ptr->target_aim_pitch) {
      this_ptr->target_aim_pitch = 1.5707964;
    }
    fVar6 = delta_time / _DAT_00600d60 + this_ptr->aim_weight;
    this_ptr->target_aim_yaw = 0.0;
  }
  this_ptr->aim_weight = fVar6;
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
    local_20 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                         (this_ptr->target_aim_yaw - this_ptr->aim_yaw);
    local_24 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                         (this_ptr->target_aim_pitch - this_ptr->aim_pitch);
    fVar6 = delta_time * _DAT_005e11e4 * (float)_DAT_005e1204;
    if (local_20 < -fVar6) {
      local_20 = -fVar6;
    }
    if (fVar6 < local_20) {
      local_20 = fVar6;
    }
    if (local_24 < -fVar6) {
      local_24 = -fVar6;
    }
    if (fVar6 < local_24) {
      local_24 = fVar6;
    }
    this_ptr->aim_pitch = this_ptr->aim_pitch + local_24;
    this_ptr->aim_yaw = this_ptr->aim_yaw + local_20;
    return;
  }
  this_ptr->aim_pitch = this_ptr->target_aim_pitch;
  this_ptr->aim_yaw = this_ptr->target_aim_yaw;
  return;
}
