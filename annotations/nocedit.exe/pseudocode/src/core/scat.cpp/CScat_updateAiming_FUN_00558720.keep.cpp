// Name: core_scat.cpp_CScat_updateAiming_FUN_00558720
// Address: 00558720
// MANUAL RECONSTRUCTION
// Address Range: [[00558720, 00558ce0]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateAiming_FUN_00558720(CScat *this_ptr,float delta_time,int is_holstered)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_updateAiming_FUN_00558720(CScat *this_ptr,float delta_time,int is_holstered)

{
  SMotion *pSVar2;
  int iVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar1;
  CBoundingBox3D *pCVar5;
  float fVar2;
  float fVar6;
  float local_13c;
  CVector3f local_138 [10];
  CBoundingBox3D CStack_c0;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_84;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float local_38;
  float local_34;
  float local_2c;
  CDemonActor *local_28;
  float local_24;
  int local_20;
  CDemonActor *target;
  
  this_ptr->aim_converged = 0;
  if ((is_holstered == 0) &&
     (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller), pSVar2->state_index == 2)
     ) {
    is_holstered = 1;
  }
  local_13c = this_ptr->aim_pitch;
  local_2c = this_ptr->aim_yaw;
  if (((this_ptr->base).aim_mode != AIM_MODE_AUTO) &&
     ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
    local_13c = (this_ptr->base).player_input.look_up_down_speed * (float)3.1415926535000001 *
                (float)2 * delta_time + local_13c;
    if (local_13c < -1.570796f) {
      local_13c = -1.5707964;
    }
    if (1.5707964 < local_13c) {
      local_13c = 1.5707964;
    }
    local_2c = 0.0;
    goto LAB_005587bd;
  }
  if ((this_ptr->guns_drawn == 0) || (is_holstered != 0)) {
    this_ptr->aim_target = (CDemonActor *)0x0;
  }
  else if ((this_ptr->base).player_input.action_state.fire == 0) {
    local_28 = (CDemonActor *)0x0;
    local_24 = 1e+30;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      target = g_CDemonSetPtr->actors[local_20];
      fVar2 = (float)core_scat_cpp_CScat_scoreAimTarget_FUN_00558cf0
                               (this_ptr,target,(uint)(target == this_ptr->aim_target));
      if ((0.0 <= fVar2) && (fVar2 < local_24)) {
        local_28 = target;
        local_24 = fVar2;
      }
    }
    this_ptr->aim_target = local_28;
  }
  if ((this_ptr->base).player_input.action_state.fire != 0) {
    if (this_ptr->aim_target == (CDemonActor *)0x0) {
      this_ptr->aim_yaw = 0.0;
      this_ptr->aim_pitch = this_ptr->aim_yaw;
      local_13c = this_ptr->aim_pitch;
      local_2c = local_13c;
    }
    goto LAB_005587bd;
  }
  if (this_ptr->aim_target == (CDemonActor *)0x0) goto LAB_005587bd;
  __arrinit(local_138,10,&g_CVectorTypeInfo);
  iVar3 = (*((this_ptr->aim_target->vtable)._ub)->getTargetPoints)(this_ptr->aim_target,local_138);
  if (iVar3 < 1) {
    pCVar5 = (*((this_ptr->aim_target->vtable)._ub)->getBoundingBox)
                       (this_ptr->aim_target,&CStack_c0);
    CStack_60.x = ((pCVar5->min).x + (pCVar5->max).x) * 0.5f;
    CStack_60.y = ((pCVar5->min).y + (pCVar5->max).y) * 0.5f;
    CStack_60.z = ((pCVar5->min).z + (pCVar5->max).z) * 0.5f;
  }
  else {
    CStack_60 = local_138[0];
  }
  pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (this_ptr->aim_target,&CStack_6c,&CStack_60);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            ((CDemonActor *)this_ptr,&CStack_9c,pCVar4);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (&(this_ptr->base).base.model,&CStack_a8,g_ScatIndices[6]);
  CStack_84.x = CStack_9c.x - pCVar1->x;
  CStack_84.y = CStack_9c.y - pCVar1->y;
  CStack_84.z = CStack_9c.z - pCVar1->z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_54,&CStack_84);
  local_13c = CStack_54.x;
  local_2c = CStack_54.y;
LAB_005587bd:
  local_38 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_2c - this_ptr->aim_yaw);
  local_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_13c - this_ptr->aim_pitch);
  fVar2 = delta_time * (float)3.1415926535000001 * (float)1.5;
  if (local_38 < -fVar2) {
    local_38 = -fVar2;
  }
  if (fVar2 < local_38) {
    local_38 = fVar2;
  }
  if (local_34 < -fVar2) {
    local_34 = -fVar2;
  }
  if (fVar2 < local_34) {
    local_34 = fVar2;
  }
  this_ptr->aim_pitch = this_ptr->aim_pitch + local_34;
  this_ptr->aim_yaw = this_ptr->aim_yaw + local_38;
  if ((this_ptr->aim_target != (CDemonActor *)0x0) && (is_holstered == 0)) {
    fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(this_ptr->aim_yaw - local_2c);
    if (((float)0.02 <= ABS(fVar2)) &&
       (fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(this_ptr->aim_yaw - local_2c),
       (float)0.02 <= ABS(fVar6))) {
      return;
    }
    this_ptr->aim_converged = 1;
    return;
  }
  return;
}
