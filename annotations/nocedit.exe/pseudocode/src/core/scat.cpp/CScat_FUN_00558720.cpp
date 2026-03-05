// Name: core_scat.cpp_CScat_FUN_00558720
// Address: 00558720
// Address Range: [[00558720, 00558ce0]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_FUN_00558720(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_FUN_00558720(CScat *this_ptr)

{
  CDemonActor *pCVar1;
  float fVar2;
  SMotion *pSVar3;
  int iVar4;
  CVector3f *pCVar5;
  CBoundingBox3D *pCVar6;
  float fVar7;
  float in_stack_00000008;
  CDemonActor *in_stack_0000000c;
  float local_13c;
  CVector3f local_138 [10];
  CBoundingBox3D CStack_c0;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  CDemonActor *local_28;
  float local_24;
  CDemonActor *local_20;
  uint local_1c;
  float local_18;
  
  this_ptr->aim_converged = 0;
  if ((in_stack_0000000c == (CDemonActor *)0x0) &&
     (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller), pSVar3->state_index == 2)
     ) {
    in_stack_0000000c = (CDemonActor *)0x1;
  }
  local_13c = this_ptr->aim_pitch;
  local_2c = this_ptr->aim_yaw;
  if (((this_ptr->base).aim_mode != AIM_MODE_AUTO) &&
     ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
    local_13c = (this_ptr->base).player_control.look_up_down_speed * (float)3.1415926535000001 *
                (float)2 * in_stack_00000008 + local_13c;
    local_1c = 0x3fc90fdb;
    if (local_13c < -1.570796f) {
      local_13c = -1.5707964;
    }
    if (1.5707964 < local_13c) {
      local_13c = 1.5707964;
    }
    local_2c = 0.0;
    goto LAB_005587bd;
  }
  if ((this_ptr->guns_drawn == 0) || (in_stack_0000000c != (CDemonActor *)0x0)) {
    this_ptr->aim_target = (CDemonActor *)0x0;
  }
  else if ((this_ptr->base).player_control.action_states[3] == 0) {
    local_28 = in_stack_0000000c;
    local_24 = 1e+30;
    iVar4 = 0;
    for (local_20 = in_stack_0000000c; (int)local_20 < g_CDemonSetPtr->actor_count;
        local_20 = (CDemonActor *)(local_20->actor_name + 1)) {
      pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar4);
      local_18 = (float)core_scat_cpp_CScat_FUN_00558cf0(this_ptr);
      if ((0.0 <= local_18) && (local_18 < local_24)) {
        local_28 = pCVar1;
        local_24 = local_18;
      }
      iVar4 = iVar4 + 4;
    }
    this_ptr->aim_target = local_28;
  }
  if ((this_ptr->base).player_control.action_states[3] != 0) {
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
  iVar4 = (*((this_ptr->aim_target->vtable)._ub)->getTargetPoints)(this_ptr->aim_target,local_138);
  if (iVar4 < 1) {
    pCVar6 = (*((this_ptr->aim_target->vtable)._ub)->getBoundingBox)
                       (this_ptr->aim_target,&CStack_c0);
    fStack_90 = (pCVar6->min).x + (pCVar6->max).x;
    fStack_8c = (pCVar6->min).y + (pCVar6->max).y;
    CStack_78.x = fStack_90 * 0.5f;
    fStack_88 = (pCVar6->min).z + (pCVar6->max).z;
    CStack_78.y = fStack_8c * 0.5f;
    local_138[0].z = fStack_88 * 0.5f;
    CStack_78.z = local_138[0].z;
    fVar7 = CStack_78.x;
    fVar2 = CStack_78.y;
    if (&CStack_60 != &CStack_78) goto LAB_00558aeb;
  }
  else if (&CStack_60 != local_138) {
    CStack_60.x = local_138[0].x;
    CStack_60.y = local_138[0].y;
    fVar7 = CStack_60.x;
    fVar2 = CStack_60.y;
LAB_00558aeb:
    CStack_60.y = fVar2;
    CStack_60.x = fVar7;
    CStack_60.z = local_138[0].z;
  }
  pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (this_ptr->aim_target,&CStack_6c,&CStack_60);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            ((CDemonActor *)this_ptr,&CStack_9c,pCVar5);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (&(this_ptr->base).base.model,&CStack_a8,INT_03106174);
  CStack_84.x = CStack_9c.x - pCVar5->x;
  CStack_84.y = CStack_9c.y - pCVar5->y;
  CStack_84.z = CStack_9c.z - pCVar5->z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_54,&CStack_84);
  local_13c = CStack_54.x;
  local_2c = CStack_54.y;
LAB_005587bd:
  local_38 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_2c - this_ptr->aim_yaw);
  local_18 = local_38;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_13c - this_ptr->aim_pitch);
  local_30 = in_stack_00000008 * (float)3.1415926535000001 * (float)1.5;
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
  this_ptr->aim_pitch = this_ptr->aim_pitch + local_34;
  this_ptr->aim_yaw = this_ptr->aim_yaw + local_38;
  if ((this_ptr->aim_target != (CDemonActor *)0x0) && (in_stack_0000000c == (CDemonActor *)0x0)) {
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(this_ptr->aim_yaw - local_2c);
    if (((float)0.02 <= ABS(local_18)) &&
       (fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(this_ptr->aim_yaw - local_2c),
       (float)0.02 <= ABS(fVar7))) {
      return;
    }
    this_ptr->aim_converged = 1;
    return;
  }
  return;
}
