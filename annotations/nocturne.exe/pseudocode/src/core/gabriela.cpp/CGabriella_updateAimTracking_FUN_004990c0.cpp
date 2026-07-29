// Name: core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004990c0
// Address: 004990c0
// Address Range: [[004990c0, 004996ae]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004990c0(CGabriella *this_ptr,float delta_time,int is_holstering)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004990c0(CGabriella *this_ptr,float delta_time,int is_holstering)

{
  CDemonActor *target_actor;
  float fVar1;
  float fVar2;
  SMotion *pSVar3;
  int iVar4;
  CVector3f *pCVar5;
  CBoundingBox3D *pCVar6;
  CVector3f local_134 [10];
  CBoundingBox3D CStack_bc;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  uint local_3c;
  float local_30;
  CDemonActor *local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  if ((is_holstering == 0) &&
     (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&(this_ptr->base).base.model.motion_controller), pSVar3->state_index == 2)
     ) {
    is_holstering = 1;
  }
  if (((this_ptr->base).aim_mode == AIM_MODE_AUTO) ||
     ((this_ptr->base).control_type == HERO_CONTROL_AI)) {
    if ((this_ptr->weapon_state_flags == 0) || (is_holstering != 0)) {
      this_ptr->aim_target = (CDemonActor *)0x0;
    }
    else if (this_ptr->fire_state == 0) {
      iVar4 = 0;
      local_24 = 1e+30;
      local_28 = (CDemonActor *)0x0;
      for (local_20 = 0; local_20 < *(int *)(0x01E57284 + 0x14cd6c); local_20 = local_20 + 1) {
        target_actor = *(CDemonActor **)(iVar4 + 0x14cd70 + 0x01E57284);
        local_18 = core_gabriela_cpp_FUN_00498de0
                             (this_ptr,target_actor,(uint)(target_actor == this_ptr->aim_target));
        if ((0.0 <= local_18) && (local_18 < local_24)) {
          local_28 = target_actor;
          local_24 = local_18;
        }
        iVar4 = iVar4 + 4;
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
      fVar1 = delta_time / (0.3f * (float)0.5) + this_ptr->aim_weight;
    }
    else if (this_ptr->aim_target == (CDemonActor *)0x0) {
      if (0.0 < this_ptr->fire_cooldown_timer) goto LAB_0049915d;
      fVar1 = this_ptr->aim_weight - delta_time / 0.3f;
    }
    else {
      __arrinit(local_134,10,&g_CVectorTypeInfo_005993b0);
      iVar4 = (*((this_ptr->aim_target->vtable)._ub)->getTargetPoints)
                        (this_ptr->aim_target,local_134);
      if (iVar4 < 1) {
        pCVar6 = (*((this_ptr->aim_target->vtable)._ub)->getBoundingBox)
                           (this_ptr->aim_target,&CStack_bc);
        fStack_a4 = (pCVar6->min).x + (pCVar6->max).x;
        fStack_a0 = (pCVar6->min).y + (pCVar6->max).y;
        CStack_8c.x = fStack_a4 * 0.5f;
        fStack_9c = (pCVar6->min).z + (pCVar6->max).z;
        CStack_8c.y = fStack_a0 * 0.5f;
        local_134[0].z = fStack_9c * 0.5f;
        CStack_8c.z = local_134[0].z;
        fVar1 = CStack_8c.x;
        fVar2 = CStack_8c.y;
        if (&CStack_50 != &CStack_8c) goto LAB_004993c1;
      }
      else if (&CStack_50 != local_134) {
        CStack_50.x = local_134[0].x;
        CStack_50.y = local_134[0].y;
        fVar1 = CStack_50.x;
        fVar2 = CStack_50.y;
LAB_004993c1:
        CStack_50.y = fVar2;
        CStack_50.x = fVar1;
        CStack_50.z = local_134[0].z;
      }
      pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         (this_ptr->aim_target,&CStack_68,&CStack_50);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                ((CDemonActor *)this_ptr,&CStack_74,pCVar5);
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                         (&(this_ptr->base).base.model,&CStack_80,_DAT_01c713b0);
      CStack_98.x = CStack_74.x - pCVar5->x;
      CStack_98.y = CStack_74.y - pCVar5->y;
      CStack_98.z = CStack_74.z - pCVar5->z;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&CStack_5c,&CStack_98);
      fVar1 = delta_time / 0.3f;
      this_ptr->target_aim_pitch = CStack_5c.x;
      fVar1 = fVar1 + this_ptr->aim_weight;
      this_ptr->target_aim_yaw = CStack_5c.y;
    }
  }
  else {
    fVar1 = (this_ptr->base).player_input.look_up_down_speed * (float)3.1415926535000001 *
            (float)2 * delta_time + this_ptr->target_aim_pitch;
    local_3c = 0x3fc90fdb;
    this_ptr->target_aim_pitch = fVar1;
    if (fVar1 < -1.570796f) {
      this_ptr->target_aim_pitch = -1.5707964;
    }
    if (1.5707964 < this_ptr->target_aim_pitch) {
      this_ptr->target_aim_pitch = 1.5707964;
    }
    fVar1 = delta_time / 0.3f + this_ptr->aim_weight;
    this_ptr->target_aim_yaw = 0.0;
  }
  this_ptr->aim_weight = fVar1;
LAB_0049915d:
  if (1.0 < this_ptr->aim_weight) {
    this_ptr->aim_weight = 1.0;
  }
  if (this_ptr->aim_weight < 0.0) {
    this_ptr->aim_pitch = 0.0;
    this_ptr->aim_yaw = 0.0;
    this_ptr->aim_weight = 0.0;
  }
  if (0.0 < this_ptr->aim_weight) {
    local_1c = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                         (this_ptr->target_aim_yaw - this_ptr->aim_yaw);
    local_18 = local_1c;
    local_30 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                         (this_ptr->target_aim_pitch - this_ptr->aim_pitch);
    fVar1 = delta_time * (float)3.1415926535000001 * (float)1.5;
    if (local_1c < -fVar1) {
      local_1c = -fVar1;
    }
    if (fVar1 < local_1c) {
      local_1c = fVar1;
    }
    if (local_30 < -fVar1) {
      local_30 = -fVar1;
    }
    if (fVar1 < local_30) {
      local_30 = fVar1;
    }
    this_ptr->aim_pitch = this_ptr->aim_pitch + local_30;
    this_ptr->aim_yaw = this_ptr->aim_yaw + local_1c;
    return;
  }
  this_ptr->aim_pitch = this_ptr->target_aim_pitch;
  this_ptr->aim_yaw = this_ptr->target_aim_yaw;
  return;
}
