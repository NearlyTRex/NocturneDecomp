// Name: core_colonel.cpp_CColonel_process_FUN_0043fa00
// Address: 0043fa00
// Address Range: [[0043fa00, 0043ff16] [0060e52a, 0060e54b]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_process_FUN_0043fa00(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_colonel_cpp_CColonel_process_FUN_0043fa00(CColonel *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar2;
  CCharacter_full_vtable *pCVar4;
  int iVar5;
  int iVar6;
  CVector3f *pCVar6;
  CVector3f *pCVar7;
  EDeathState EVar7;
  SMotion *pSVar8;
  int iVar8;
  int iVar9;
  SMotion *pSVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_1870 [1521];
  float fVar10;
  float local_98;
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
  CQuaternion4f *source_quaternions;
  float fVar14;
  byte *blend_callback;
  CCharacter *this_ptr_00;
  bool bVar4;
  CDeformableModelInstance *pCVar13;
  uint uVar2;
  CDemonActor *pCVar3;
  CVector3f *pCVar1;
  
  iVar5 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
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
  core_colonel_cpp_CColonel_processMotionEvents_FUN_00440430(this_ptr,delta_time);
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_colonel_cpp_CColonel_processAI_FUN_0043ff20(this_ptr,delta_time);
  }
  fVar10 = (float)12.566370614;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar10;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  pCVar2 = &(this_ptr->base).base.model;
  if (iVar6 == 0) {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar2->motion_controller);
    switch(pSVar9->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar6 = 0;
        if ((this_ptr->base).player_control.action_states[0] != 0) {
          if ((this_ptr->base).player_control.action_states[2] == 0) {
            iVar6 = 1;
          }
          else {
            iVar6 = 2;
          }
        }
        if ((this_ptr->base).player_control.action_states[1] != 0) {
          iVar6 = 3;
        }
        if ((this_ptr->base).player_control.action_states[6] != 0) {
          iVar9 = this_ptr->guns_drawn;
          (this_ptr->base).player_control.action_states[6] = 0;
          iVar6 = 0;
          this_ptr->guns_drawn = (uint)(iVar9 == 0);
        }
        if ((this_ptr->base).player_control.action_states[3] != 0) {
          bVar4 = true;
          if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
            iVar8 = core_hero_cpp_CHero_tryInteract_FUN_004f2af0(&this_ptr->base);
            bVar4 = false;
            if (iVar8 != 0) goto LAB_0043fd60;
            iVar9 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70(&this_ptr->base);
            if ((iVar9 != 0) && (iVar9 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(&this_ptr->base);
            }
            if ((iVar9 != 0) ||
               (iVar9 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40(&this_ptr->base),
               iVar9 != 0)) goto LAB_0043fd60;
            iVar9 = core_hero_cpp_CHero_tryPullLever_FUN_004f2f50(&this_ptr->base);
            if (iVar9 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004f30f0(&this_ptr->base);
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
        if (iVar6 != pSVar8->state_index) goto LAB_0043fad3;
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
        iVar6 = 1;
      }
      else {
LAB_0043fcd4:
        iVar6 = 0;
      }
    }
    else {
      if (2 < uVar2) {
        if (uVar2 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto switchD_0043fe37_caseD_5;
        }
        goto LAB_0043fcd4;
      }
      iVar6 = 2;
    }
LAB_0043fad3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
switchD_0043fe37_caseD_5:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar7 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.position_delta;
    local_68.x = pCVar7->x + pCVar1->x + (this_ptr->base).base.velocity.x * delta_time;
    local_68.y = (this_ptr->base).base.model.accumulated_root_motion.y +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.velocity.y * delta_time;
    local_68.z = (this_ptr->base).base.model.accumulated_root_motion.z +
                 (this_ptr->base).base.position_delta.z +
                 delta_time * (this_ptr->base).base.velocity.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar7->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    fVar10 = (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.position_delta.y = fVar10;
    pCVar1->x = fVar10;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_68);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_5c,&(pCVar3->location).position);
      pCVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar6);
      local_98 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar7->y);
      if (local_98 < (float)-1.57079632675) {
        local_98 = local_98 + 5.3286462644388174e-315._0_4_;
      }
      if ((float)1.57079632675 < local_98) {
        local_98 = local_98 + -3.141593f;
      }
      fVar10 = delta_time * (float)3.1415926535000001;
      if (local_98 < -fVar10) {
        local_98 = -fVar10;
      }
      if (fVar10 < local_98) {
        local_98 = fVar10;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_98;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    this_ptr_00 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    pCVar4 = (this_ptr_00->base).vtable._uc;
    pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_74,0);
    iVar6 = (*(pCVar4->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)this_ptr,pCVar7);
    if (iVar6 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_0043fc01:
      iVar6 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_0043fc01;
      if ((this_ptr->base).player_control.action_states[3] == 0) goto LAB_0043fc14;
      iVar6 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
LAB_0043fc14:
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar2);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar7 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
    fVar10 = this_ptr->head_look_blend_weight;
    iVar6 = g_ColonelIndices[0];
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&this_ptr->head_look_euler,&CStack_94);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCVar2,&CStack_84,fVar10,iVar6,
               (CDeformableModel_MotionBlendWeightFunc *)blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
switchD_0043fe37_caseD_6:
  return;
}
