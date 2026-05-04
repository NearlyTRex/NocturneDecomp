// Name: core_haystack.cpp_CHaystack_process_FUN_004f0e40
// Address: 004f0e40
// MANUAL RECONSTRUCTION
// Address Range: [[004f0e40, 004f13e7] [0060e4e6, 0060e507]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_process_FUN_004f0e40(CHaystack *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_process_FUN_004f0e40(CHaystack *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar3;
  uint uVar4;
  CCharacter_full_vtable *pCVar5;
  int iVar5;
  int iVar6;
  CVector3f *pCVar6;
  CVector3f *pCVar7;
  EDeathState EVar7;
  SMotion *pSVar8;
  uint uVar9;
  int iVar10;
  int iVar8;
  SMotion *pSVar9;
  float fVar10;
  float local_90;
  CQuaternion4f CStack_8c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f *pCVar1;
  CGame *pCVar4;
  bool bVar3;
  CCharacter *this_ptr_00;
  CDemonActor *pCVar2;
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  
  iVar5 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_haystack_cpp_CHaystack_updateAI_FUN_004f13f0(this_ptr,delta_time);
  }
  pCVar4 = g_CGamePtr;
  (this_ptr->base).base.turn_speed = delta_time * (float)12.566370614;
  if (pCVar4->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  fVar10 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar10;
  if (fVar10 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_haystack_cpp_CHaystack_advanceMotion_FUN_004f1970(this_ptr,delta_time);
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  pCVar3 = &(this_ptr->base).base.model;
  if (iVar6 == 0) {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar3->motion_controller);
    switch(pSVar9->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar6 = 0;
        if (this_ptr->guns_drawn != 0) {
          iVar6 = 10;
        }
        if ((this_ptr->base).player_input.action_state.walk != 0) {
          if ((this_ptr->base).player_input.action_state.run == 0) {
            iVar6 = 1;
          }
          else {
            iVar6 = 2;
          }
        }
        if ((this_ptr->base).player_input.action_state.backup != 0) {
          iVar6 = 3;
        }
        if ((this_ptr->base).player_input.action_state.draw != 0) {
          iVar6 = this_ptr->guns_drawn;
          (this_ptr->base).player_input.action_state.draw = 0;
          uVar9 = (uint)(iVar6 == 0);
          this_ptr->guns_drawn = uVar9;
          if (uVar9 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = 10;
          }
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          bVar3 = true;
          if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
            iVar10 = core_hero_cpp_CHero_tryInteract_FUN_004f2af0(&this_ptr->base);
            bVar3 = false;
            if (iVar10 != 0) goto LAB_004f11d6;
            iVar8 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70(&this_ptr->base);
            if ((iVar8 != 0) && (iVar8 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(&this_ptr->base);
            }
            if ((iVar8 != 0) ||
               (iVar8 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40(&this_ptr->base),
               iVar8 != 0)) goto LAB_004f11d6;
            iVar8 = core_hero_cpp_CHero_tryPullLever_FUN_004f2f50(&this_ptr->base);
            if (iVar8 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004f30f0(&this_ptr->base);
              goto LAB_004f11d6;
            }
          }
          else {
LAB_004f11d6:
            if (!bVar3) goto LAB_004f11f7;
          }
          iVar6 = this_ptr->attack_side;
          (this_ptr->base).player_input.action_state.fire = 0;
          if (iVar6 == 0) {
            iVar6 = 0xf;
          }
          else {
            iVar6 = 0xe;
          }
        }
LAB_004f11f7:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
        pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(this_ptr->base).base.model.motion_controller);
        if (iVar6 != pSVar9->state_index) goto LAB_004f0f1c;
      }
      break;
    case 9:
      goto switchD_004f12ce_caseD_9;
    }
  }
  else {
    uVar4 = (this_ptr->base).base.is_walking;
    if (uVar4 < 2) {
      if (uVar4 == 1) {
        iVar6 = 1;
      }
      else {
LAB_004f1134:
        iVar6 = 0;
      }
    }
    else {
      if (2 < uVar4) {
        if (uVar4 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",(this_ptr->base).base.base.actor_name);
          goto switchD_004f12ce_caseD_8;
        }
        goto LAB_004f1134;
      }
      iVar6 = 2;
    }
LAB_004f0f1c:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
switchD_004f12ce_caseD_8:
  pCVar2 = (this_ptr->base).base.grabbed_by;
  if (pCVar2 == (CDemonActor *)0x0) {
    pCVar7 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.position_delta;
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_3c.x = pCVar7->x + pCVar1->x;
    local_3c.y = (this_ptr->base).base.model.accumulated_root_motion.y +
                 (this_ptr->base).base.position_delta.y;
    local_3c.z = (this_ptr->base).base.model.accumulated_root_motion.z +
                 (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar7->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if ((pSVar9->state_index == 0xe) || (pSVar9->state_index == 0xf)) {
      local_3c.y = 0.0;
      local_3c.x = 0.0;
      local_3c.z = 0.0;
    }
    local_3c.x = local_3c.x + (this_ptr->base).base.velocity.x * delta_time;
    local_3c.y = local_3c.y + (this_ptr->base).base.velocity.y * delta_time;
    local_3c.z = local_3c.z + delta_time * (this_ptr->base).base.velocity.z;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_3c);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_60,&(pCVar2->location).position);
      pCVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_54,pCVar6);
      local_90 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar7->y);
      if (local_90 < (float)-1.57079632675) {
        local_90 = local_90 + 3.141593f;
      }
      if ((float)1.57079632675 < local_90) {
        local_90 = local_90 + -3.141593f;
      }
      fVar10 = delta_time * (float)3.1415926535000001;
      if (local_90 < -fVar10) {
        local_90 = -fVar10;
      }
      if (fVar10 < local_90) {
        local_90 = fVar10;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_90;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    this_ptr_00 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    pCVar5 = (this_ptr_00->base).vtable._uc;
    pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_48,0);
    iVar6 = (*(pCVar5->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)this_ptr,pCVar7);
    if (iVar6 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004f1041:
      iVar6 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004f1041;
      if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_004f1054;
      iVar6 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
LAB_004f1054:
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCVar3 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar3);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if ((EVar7 == DEATH_STATE_ALIVE) &&
     (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&pCVar3->motion_controller), pSVar8->state_index != 0x13)) {
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
    fVar10 = this_ptr->head_look_blend_weight;
    iVar6 = g_HaystackIndices[0];
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&this_ptr->head_look_euler,&CStack_8c);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCVar3,&CStack_8c,fVar10,iVar6,
               (CDeformableModel_MotionBlendWeightFunc *)blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
switchD_004f12ce_caseD_9:
  return;
}
