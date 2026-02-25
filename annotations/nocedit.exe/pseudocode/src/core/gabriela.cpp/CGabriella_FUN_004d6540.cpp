// Name: core_gabriela.cpp_CGabriella_FUN_004d6540
// Address: 004d6540
// Address Range: [[004d6540, 004d6b2e]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_FUN_004d6540(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_FUN_004d6540(CGabriella *this_ptr)

{
  CDemonActor *pCVar1;
  float fVar2;
  float fVar3;
  SMotion *pSVar4;
  int iVar5;
  CVector3f *pCVar6;
  CBoundingBox3D *pCVar7;
  float in_stack_00000008;
  int in_stack_0000000c;
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
  
  if ((in_stack_0000000c == 0) &&
     (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller), pSVar4->state_index == 2)
     ) {
    in_stack_0000000c = 1;
  }
  if (((this_ptr->base).aim_mode == 0) || ((this_ptr->base).control_type == 2)) {
    if ((this_ptr->weapon_state_flags == 0) || (in_stack_0000000c != 0)) {
      this_ptr->aim_target = (CDemonActor *)0x0;
    }
    else if (this_ptr->fire_state == 0) {
      iVar5 = 0;
      local_24 = 1e+30;
      local_28 = (CDemonActor *)0x0;
      for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
        pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar5);
        local_18 = (float)core_gabriela_cpp_CGabriella_FUN_004d6260(this_ptr);
        if ((0.0 <= local_18) && (local_18 < local_24)) {
          local_28 = pCVar1;
          local_24 = local_18;
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
      fVar2 = in_stack_00000008 / (0.3f * (float)0.5) + this_ptr->aim_weight;
    }
    else if (this_ptr->aim_target == (CDemonActor *)0x0) {
      if (0.0 < this_ptr->fire_cooldown_timer) goto LAB_004d65dd;
      fVar2 = this_ptr->aim_weight - in_stack_00000008 / 0.3f;
    }
    else {
      __arrinit(local_134,10,&g_CVectorTypeInfo);
      iVar5 = (*((this_ptr->aim_target->vtable)._ub)->getTargetPoints)
                        (this_ptr->aim_target,local_134);
      if (iVar5 < 1) {
        pCVar7 = (*((this_ptr->aim_target->vtable)._ub)->getBoundingBox)
                           (this_ptr->aim_target,&CStack_bc);
        fStack_a4 = (pCVar7->min).x + (pCVar7->max).x;
        fStack_a0 = (pCVar7->min).y + (pCVar7->max).y;
        CStack_8c.x = fStack_a4 * 0.5f;
        fStack_9c = (pCVar7->min).z + (pCVar7->max).z;
        CStack_8c.y = fStack_a0 * 0.5f;
        local_134[0].z = fStack_9c * 0.5f;
        CStack_8c.z = local_134[0].z;
        fVar2 = CStack_8c.x;
        fVar3 = CStack_8c.y;
        if (&CStack_50 != &CStack_8c) goto LAB_004d6841;
      }
      else if (&CStack_50 != local_134) {
        CStack_50.x = local_134[0].x;
        CStack_50.y = local_134[0].y;
        fVar2 = CStack_50.x;
        fVar3 = CStack_50.y;
LAB_004d6841:
        CStack_50.y = fVar3;
        CStack_50.x = fVar2;
        CStack_50.z = local_134[0].z;
      }
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (this_ptr->aim_target,&CStack_68,&CStack_50);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                ((CDemonActor *)this_ptr,&CStack_74,pCVar6);
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (&(this_ptr->base).base.model,&CStack_80,INT_02d7b860);
      CStack_98.x = CStack_74.x - pCVar6->x;
      CStack_98.y = CStack_74.y - pCVar6->y;
      CStack_98.z = CStack_74.z - pCVar6->z;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_5c,&CStack_98);
      fVar2 = in_stack_00000008 / 0.3f;
      this_ptr->target_aim_pitch = CStack_5c.x;
      fVar2 = fVar2 + this_ptr->aim_weight;
      this_ptr->target_aim_yaw = CStack_5c.y;
    }
  }
  else {
    fVar2 = (this_ptr->base).player_control.look_up_down_speed * (float)3.1415926535000001 *
            (float)2 * in_stack_00000008 + this_ptr->target_aim_pitch;
    local_3c = 0x3fc90fdb;
    this_ptr->target_aim_pitch = fVar2;
    if (fVar2 < -1.570796f) {
      this_ptr->target_aim_pitch = -1.5707964;
    }
    if (1.5707964 < this_ptr->target_aim_pitch) {
      this_ptr->target_aim_pitch = 1.5707964;
    }
    fVar2 = in_stack_00000008 / 0.3f + this_ptr->aim_weight;
    this_ptr->target_aim_yaw = 0.0;
  }
  this_ptr->aim_weight = fVar2;
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
    local_18 = local_1c;
    local_30 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (this_ptr->target_aim_pitch - this_ptr->aim_pitch);
    fVar2 = in_stack_00000008 * (float)3.1415926535000001 * (float)1.5;
    if (local_1c < -fVar2) {
      local_1c = -fVar2;
    }
    if (fVar2 < local_1c) {
      local_1c = fVar2;
    }
    if (local_30 < -fVar2) {
      local_30 = -fVar2;
    }
    if (fVar2 < local_30) {
      local_30 = fVar2;
    }
    this_ptr->aim_pitch = this_ptr->aim_pitch + local_30;
    this_ptr->aim_yaw = this_ptr->aim_yaw + local_1c;
    return;
  }
  this_ptr->aim_pitch = this_ptr->target_aim_pitch;
  this_ptr->aim_yaw = this_ptr->target_aim_yaw;
  return;
}
