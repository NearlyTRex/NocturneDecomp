// Name: core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0
// Address: 005d8ba0
// MANUAL RECONSTRUCTION
// Address Range: [[005d8ba0, 005d9256] [00604bd0, 00604bf4]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_005d8ba0(CSvetlana *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_005d8ba0(CSvetlana *this_ptr,float delta_time)

{
  UOrientationVector *euler_00;
  CLocation *position;
  CDeformableModelInstance *this_ptr_01;
  uint uVar1;
  CCharacter_full_vtable *pCVar2;
  int iVar4;
  int iVar3;
  SMotion *pSVar5;
  CVector3f *pCVar6;
  CVector3f *pCVar4;
  EDeathState EVar7;
  uint uVar8;
  int iVar9;
  int iVar5;
  SMotion *pSVar6;
  float fVar7;
  float local_98;
  CQuaternion4f CStack_84;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_38;
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  float fVar3;
  CCharacter *this_ptr_00;
  CDeformableModelInstance *model_ptr;
  bool bVar2;
  CDemonActor *pCVar1;

  if (((this_ptr->base).base.hit_points < (float)100) &&
     (fVar7 = (this_ptr->base).base.hit_points + delta_time,
     (this_ptr->base).base.hit_points = fVar7, (float)100 < fVar7)) {
    (this_ptr->base).base.hit_points = 100.0;
  }
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if ((iVar4 == 0) || ((this_ptr->base).ai_task == HERO_TASK_SUSPEND)) {
switchD_005d8f77_caseD_9:
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042ea40((CCharacter *)this_ptr,delta_time);
  fVar7 = (this_ptr->base).invincibility_timer - delta_time;
  fVar3 = (float)12.566370614;
  (this_ptr->base).invincibility_timer = fVar7;
  (this_ptr->base).base.turn_speed = delta_time * fVar3;
  if (fVar7 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
  core_svetlana_cpp_CSvetlana_advanceMotion_FUN_005d9970(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar3 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 == 0) {
    if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
      core_svetlana_cpp_CSvetlana_processAI_FUN_005d9260(this_ptr,delta_time);
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    switch(pSVar6->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar3 = 0;
        if (this_ptr->blades_drawn != 0) {
          iVar3 = 10;
        }
        if ((this_ptr->base).player_input.action_state.walk != 0) {
          if ((this_ptr->base).player_input.action_state.run == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = 2;
          }
        }
        if ((this_ptr->base).player_input.action_state.backup != 0) {
          iVar3 = 3;
        }
        if ((this_ptr->base).player_input.action_state.draw != 0) {
          iVar3 = this_ptr->blades_drawn;
          (this_ptr->base).player_input.action_state.draw = 0;
          uVar8 = (uint)(iVar3 == 0);
          this_ptr->blades_drawn = uVar8;
          if (uVar8 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = 10;
          }
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          bVar2 = true;
          if ((this_ptr->blades_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
            iVar9 = core_hero_cpp_CHero_tryInteract_FUN_004f2af0(&this_ptr->base);
            bVar2 = false;
            if (iVar9 != 0) goto LAB_005d9011;
            iVar5 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70(&this_ptr->base);
            if ((iVar5 != 0) && (iVar5 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(&this_ptr->base);
            }
            if ((iVar5 != 0) ||
               (iVar5 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40(&this_ptr->base),
               iVar5 != 0)) goto LAB_005d9011;
            iVar5 = core_hero_cpp_CHero_tryPullLever_FUN_004f2f50(&this_ptr->base);
            if (iVar5 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004f30f0(&this_ptr->base);
              goto LAB_005d9011;
            }
          }
          else {
LAB_005d9011:
            if (!bVar2) goto LAB_005d9032;
          }
          iVar3 = this_ptr->attack_hand;
          (this_ptr->base).player_input.action_state.fire = 0;
          if (iVar3 == 0) {
            iVar3 = 0xf;
          }
          else {
            iVar3 = 0xe;
          }
        }
LAB_005d9032:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
        pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(this_ptr->base).base.model.motion_controller);
        if (iVar3 != pSVar6->state_index) goto LAB_005d8cdd;
      }
      break;
    case 9:
      goto switchD_005d8f77_caseD_9;
    }
  }
  else {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if ((pSVar5->state_index != 0x1a) && (pSVar5->state_index != 0x1b)) {
      (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
      (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
    }
    uVar1 = (this_ptr->base).base.is_walking;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar3 = 1;
      }
      else {
LAB_005d8f37:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",(this_ptr->base).base.base.actor_name);
          goto switchD_005d8f77_caseD_8;
        }
        goto LAB_005d8f37;
      }
      iVar3 = 2;
    }
LAB_005d8cdd:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar3,1);
  }
switchD_005d8f77_caseD_8:
  pCVar1 = (this_ptr->base).base.grabbed_by;
  if (pCVar1 == (CDemonActor *)0x0) {
    local_5c = (this_ptr->base).base.model.accumulated_root_motion;
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if (pSVar6->state_index != 0x1a) {
      (this_ptr->base).base.velocity.y =
           (this_ptr->base).base.velocity.y - delta_time * (float)32;
    }
    local_5c.x = local_5c.x +
                 (this_ptr->base).base.velocity.x * delta_time +
                 (this_ptr->base).base.position_delta.x;
    local_5c.y = local_5c.y +
                 (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y;
    local_5c.z = local_5c.z +
                 delta_time * (this_ptr->base).base.velocity.z +
                 (this_ptr->base).base.position_delta.z;
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    iVar3 = pSVar6->state_index;
    if ((((iVar3 != 0x17) && (iVar3 != 0x18)) && (iVar3 != 0x19)) &&
       (((iVar3 != 0x25 && (iVar3 != 0x26)) && ((iVar3 != 0x27 && (iVar3 != 0x28)))))) {
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_5c);
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if (pSVar6->state_index == 0x1a) {
      (this_ptr->base).base.base.location.position.y =
           delta_time * (float)3 + (this_ptr->base).base.base.location.position.y;
    }
    goto LAB_005d8e27;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,&local_68,&(pCVar1->location).position);
    pCVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_50,pCVar6);
    local_98 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar4->y);
    if (local_98 < (float)-1.57079632675) {
      local_98 = local_98 + 3.141593f;
    }
    if ((float)1.57079632675 < local_98) {
      local_98 = local_98 + -3.141593f;
    }
    fVar7 = delta_time * (float)3.1415926535000001;
    if (local_98 < -fVar7) {
      local_98 = -fVar7;
    }
    if (fVar7 < local_98) {
      local_98 = fVar7;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_98;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  }
  this_ptr_00 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  pCVar2 = (this_ptr_00->base).vtable._uc;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_38,0);
  iVar3 = (*(pCVar2->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)this_ptr,pCVar4);
  if (iVar3 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_005d8e14:
    iVar3 = 0;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_005d8e14;
    if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_005d8e27;
    iVar3 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,iVar3,1);
LAB_005d8e27:
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  this_ptr_01 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(this_ptr_01);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar7 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
    fVar7 = this_ptr->head_blend_weight;
    iVar3 = g_SvetlanaBoneIndices[0];
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&this_ptr->head_euler_angles,&CStack_84);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (this_ptr_01,&CStack_84,fVar7,iVar3,
               (CDeformableModel_MotionBlendWeightFunc *)blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  model_ptr = &(this_ptr->base).base.model;
  euler_00 = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_process_FUN_0043ab80
            (&this_ptr->cape_cloth,&position->position,&euler_00->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,model_ptr);
  core_cloth_cpp_CCloth_process_FUN_0043ab80
            (&this_ptr->hair_cloth,&position->position,&euler_00->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,model_ptr);
  return;
}
