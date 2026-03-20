// Name: core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004d6540
// Address: 004d6540
// Address Range: [[004d6540, 004d6b2e]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004d6540(CGabriella *this_ptr,float delta_time,int is_holstering)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004d6540(CGabriella *this_ptr,float delta_time,int is_holstering)

{
  SMotion *pSVar3;
  float fVar3;
  int iVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar4;
  CBoundingBox3D *pCVar6;
  int iVar5;
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
  float local_30;
  CDemonActor *local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  float fVar1;
  CDemonActor *target_actor;
  float fVar2;
  
  if ((is_holstering == 0) &&
     (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
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
      iVar5 = 0;
      local_24 = 1e+30;
      local_28 = (CDemonActor *)0x0;
      for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
        target_actor = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar5);
        fVar3 = core_gabriela_cpp_CGabriella_scoreTargetVisibility_FUN_004d6260
                          (this_ptr,target_actor,(uint)(target_actor == this_ptr->aim_target));
        if ((0.0 <= fVar3) && (fVar3 < local_24)) {
          local_28 = target_actor;
          local_24 = fVar3;
        }
        iVar5 = iVar5 + 4;
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
      fVar3 = delta_time / (0.3f * (float)0.5) + this_ptr->aim_weight;
    }
    else if (this_ptr->aim_target == (CDemonActor *)0x0) {
      if (0.0 < this_ptr->fire_cooldown_timer) goto LAB_004d65dd;
      fVar3 = this_ptr->aim_weight - delta_time / 0.3f;
    }
    else {
      __arrinit(local_134,10,&g_CVectorTypeInfo);
      iVar4 = (*((this_ptr->aim_target->vtable)._ub)->getTargetPoints)
                        (this_ptr->aim_target,local_134);
      if (iVar4 < 1) {
        pCVar6 = (*((this_ptr->aim_target->vtable)._ub)->getBoundingBox)
                           (this_ptr->aim_target,&CStack_bc);
        CStack_8c.x = ((pCVar6->min).x + (pCVar6->max).x) * 0.5f;
        CStack_8c.y = ((pCVar6->min).y + (pCVar6->max).y) * 0.5f;
        local_134[0].z = ((pCVar6->min).z + (pCVar6->max).z) * 0.5f;
        CStack_8c.z = local_134[0].z;
        fVar1 = CStack_8c.x;
        fVar2 = CStack_8c.y;
        if (&CStack_50 != &CStack_8c) goto LAB_004d6841;
      }
      else if (&CStack_50 != local_134) {
        CStack_50.x = local_134[0].x;
        CStack_50.y = local_134[0].y;
        fVar1 = CStack_50.x;
        fVar2 = CStack_50.y;
LAB_004d6841:
        CStack_50.y = fVar2;
        CStack_50.x = fVar1;
        CStack_50.z = local_134[0].z;
      }
      pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (this_ptr->aim_target,&CStack_68,&CStack_50);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                ((CDemonActor *)this_ptr,&CStack_74,pCVar5);
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (&(this_ptr->base).base.model,&CStack_80,g_GabriellaIndices[6]);
      CStack_98.x = CStack_74.x - pCVar4->x;
      CStack_98.y = CStack_74.y - pCVar4->y;
      CStack_98.z = CStack_74.z - pCVar4->z;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_5c,&CStack_98);
      fVar3 = delta_time / 0.3f;
      this_ptr->target_aim_pitch = CStack_5c.x;
      fVar3 = fVar3 + this_ptr->aim_weight;
      this_ptr->target_aim_yaw = CStack_5c.y;
    }
  }
  else {
    fVar3 = (this_ptr->base).player_control.look_up_down_speed * (float)3.1415926535000001 *
            (float)2 * delta_time + this_ptr->target_aim_pitch;
    this_ptr->target_aim_pitch = fVar3;
    if (fVar3 < -1.570796f) {
      this_ptr->target_aim_pitch = -1.5707964;
    }
    if (1.5707964 < this_ptr->target_aim_pitch) {
      this_ptr->target_aim_pitch = 1.5707964;
    }
    fVar3 = delta_time / 0.3f + this_ptr->aim_weight;
    this_ptr->target_aim_yaw = 0.0;
  }
  this_ptr->aim_weight = fVar3;
LAB_004d65dd:
  if (1.0 < this_ptr->aim_weight) {
    this_ptr->aim_weight = 1.0;
  }
  if (this_ptr->aim_weight < 0.0) {
    this_ptr->aim_pitch = 0.0;
    this_ptr->aim_yaw = 0.0;
    this_ptr->aim_weight = 0.0;
  }
  if (0.0 < this_ptr->aim_weight) {
    local_1c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (this_ptr->target_aim_yaw - this_ptr->aim_yaw);
    local_30 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (this_ptr->target_aim_pitch - this_ptr->aim_pitch);
    fVar3 = delta_time * (float)3.1415926535000001 * (float)1.5;
    if (local_1c < -fVar3) {
      local_1c = -fVar3;
    }
    if (fVar3 < local_1c) {
      local_1c = fVar3;
    }
    if (local_30 < -fVar3) {
      local_30 = -fVar3;
    }
    if (fVar3 < local_30) {
      local_30 = fVar3;
    }
    this_ptr->aim_pitch = this_ptr->aim_pitch + local_30;
    this_ptr->aim_yaw = this_ptr->aim_yaw + local_1c;
    return;
  }
  this_ptr->aim_pitch = this_ptr->target_aim_pitch;
  this_ptr->aim_yaw = this_ptr->target_aim_yaw;
  return;
}
