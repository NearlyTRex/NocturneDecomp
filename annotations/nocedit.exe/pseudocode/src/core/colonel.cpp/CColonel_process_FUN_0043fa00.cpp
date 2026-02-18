// Name: core_colonel.cpp_CColonel_process_FUN_0043fa00
// Address: 0043fa00
// Address Range: [[0043fa00, 0043ff16]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_process_FUN_0043fa00(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_colonel_cpp_CColonel_process_FUN_0043fa00(CColonel *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  uint uVar2;
  CDemonActor *pCVar3;
  CCharacter *this_ptr_00;
  bool bVar4;
  int iVar5;
  CVector3f *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_1870 [1521];
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *source_quaternions;
  float fVar13;
  code *blend_callback;
  float in_stack_ffffff68;
  CQuaternion4f CStack_94;
  CQuaternion4f CStack_84;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  int local_24;
  float local_20;
  float local_1c;
  CDeformableModelInstance *pCStack_18;
  CCharacter_full_vtable *local_14;
  
  bVar11 = 0;
  iVar5 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  fVar13 = (float)(this_ptr->base).no_collision_flag - delta_time;
  (this_ptr->base).no_collision_flag = (int)fVar13;
  if (fVar13 < 0.0) {
    (this_ptr->base).no_collision_flag = 0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_colonel_cpp_CColonel_FUN_00440430(this_ptr);
  if ((this_ptr->base).control_type == 2) {
    core_colonel_cpp_CColonel_FUN_0043ff20(this_ptr);
  }
  fVar13 = (float)12.566370614;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar13;
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  pCVar12 = &(this_ptr->base).base.model;
  if (iVar5 == 0) {
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar12->motion_controller);
    switch(pSVar8->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar5 = 0;
        if ((this_ptr->base).player_control.action_states[0] != 0) {
          if ((this_ptr->base).player_control.action_states[2] == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
          }
        }
        if ((this_ptr->base).player_control.action_states[1] != 0) {
          iVar5 = 3;
        }
        if ((this_ptr->base).player_control.action_states[6] != 0) {
          iVar7 = this_ptr->guns_drawn;
          (this_ptr->base).player_control.action_states[6] = 0;
          iVar5 = 0;
          this_ptr->guns_drawn = (uint)(iVar7 == 0);
        }
        if ((this_ptr->base).player_control.action_states[3] != 0) {
          bVar4 = true;
          if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != 2)) {
            iVar7 = core_hero_cpp_CHero_FUN_004f2af0(&this_ptr->base);
            bVar4 = false;
            if (iVar7 != 0) goto LAB_0043fd60;
            local_24 = core_hero_cpp_CHero_FUN_004f2d70(&this_ptr->base);
            if ((local_24 != 0) && (local_24 != 1)) {
              core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
            }
            if ((local_24 != 0) ||
               (iVar7 = core_hero_cpp_CHero_FUN_004f2c40(&this_ptr->base), iVar7 != 0))
            goto LAB_0043fd60;
            iVar7 = core_hero_cpp_CHero_FUN_004f2f50(&this_ptr->base);
            if (iVar7 != 0) {
              core_hero_cpp_CHero_FUN_004f30f0(&this_ptr->base);
              goto LAB_0043fd60;
            }
          }
          else {
LAB_0043fd60:
            if (!bVar4) goto LAB_0043fd6e;
          }
          (this_ptr->base).player_control.action_states[3] = 0;
        }
LAB_0043fd6e:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_control.turn_speed * (this_ptr->base).base.turn_speed;
        pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(this_ptr->base).base.model.motion_controller);
        if (iVar5 != pSVar8->state_index) goto LAB_0043fad3;
      }
      break;
    case 6:
      goto switchD_0043fe37_caseD_6;
    }
  }
  else {
    uVar2 = (this_ptr->base).base.is_walking;
    if (uVar2 < 2) {
      if (uVar2 == 1) {
        iVar5 = 1;
      }
      else {
LAB_0043fcd4:
        iVar5 = 0;
      }
    }
    else {
      if (2 < uVar2) {
        if (uVar2 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar12->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto switchD_0043fe37_caseD_5;
        }
        goto LAB_0043fcd4;
      }
      iVar5 = 2;
    }
LAB_0043fad3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
switchD_0043fe37_caseD_5:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_38 = (this_ptr->base).base.velocity.x * delta_time;
    local_34 = (this_ptr->base).base.velocity.y * delta_time;
    local_30 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar6 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.position_delta;
    local_50 = pCVar6->x + pCVar1->x;
    local_4c = (this_ptr->base).base.model.accumulated_root_motion.y +
               (this_ptr->base).base.position_delta.y;
    local_68.x = local_50 + local_38;
    local_48 = (this_ptr->base).base.model.accumulated_root_motion.z +
               (this_ptr->base).base.position_delta.z;
    local_68.y = local_4c + local_34;
    local_68.z = local_48 + local_30;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar6->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    fVar13 = (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.position_delta.y = fVar13;
    pCVar1->x = fVar13;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_68);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_5c,&(pCVar3->location).position);
      pCVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar6);
      local_14 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar6->y)
      ;
      in_stack_ffffff68 = (float)local_14;
      if ((float)local_14 < (float)-1.57079632675) {
        in_stack_ffffff68 = (float)local_14 + 5.3286462644388174e-315._0_4_;
      }
      if ((float)1.57079632675 < in_stack_ffffff68) {
        in_stack_ffffff68 = in_stack_ffffff68 + -3.141593f;
      }
      local_1c = delta_time * (float)3.1415926535000001;
      local_20 = -local_1c;
      if (in_stack_ffffff68 < local_20) {
        in_stack_ffffff68 = local_20;
      }
      if (local_1c < in_stack_ffffff68) {
        in_stack_ffffff68 = local_1c;
      }
      (this_ptr->base).base.base.orient.vec.y =
           (this_ptr->base).base.base.orient.vec.y + in_stack_ffffff68;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    this_ptr_00 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    local_14 = (this_ptr_00->base).vtable._uc;
    pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_74,0);
    iVar5 = (*(local_14->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)this_ptr,pCVar6);
    if (iVar5 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_0043fc01:
      iVar5 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_0043fc01;
      if ((this_ptr->base).player_control.action_states[3] == 0) goto LAB_0043fc14;
      iVar5 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
LAB_0043fc14:
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCStack_18 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack_18);
  iVar5 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (iVar5 == 0) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar13 = *(float *)(this_ptr->field2_0x1fbd8 + 0x10);
    iVar5 = INT_0083b124;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CVector3f *)(this_ptr->field2_0x1fbd8 + 4),&CStack_94);
    pCVar12 = pCStack_18;
    source_quaternions = &CStack_84;
    CStack_84.w = CStack_94.w;
    puVar10 = (uint *)((int)&CStack_84 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    puVar9 = (uint *)((int)&CStack_94 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(uint *)((int)&CStack_84 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_94 + (uint)bVar11 * -8 + 4);
    *puVar10 = *puVar9;
    puVar10[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCVar12,source_quaternions,fVar13,iVar5,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_ffffff68);
switchD_0043fe37_caseD_6:
  return;
}
