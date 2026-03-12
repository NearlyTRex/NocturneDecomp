// Name: core_moloch.cpp_CMoloch_process_FUN_00528d20
// Address: 00528d20
// Address Range: [[00528d20, 005293a1]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_process_FUN_00528d20(CMoloch *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_process_FUN_00528d20(CMoloch *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar4;
  CDeformableModelInstance *this_ptr_03;
  uint uVar5;
  CCharacter_full_vtable *pCVar6;
  float fVar7;
  int iVar6;
  int iVar8;
  CVector3f *pCVar7;
  CVector3f *pCVar9;
  SMotion *pSVar8;
  SMotion *pSVar10;
  CMorph *this_ptr_02;
  char *model_name;
  float local_1b18;
  float local_1b14;
  SPose SStack_1b10;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float fStack_24;
  char *pcStack_20;
  float local_1c;
  float local_18;
  SMotion *local_14;
  CDeformableModelInstance *this_ptr_00;
  CDemonActor *pCVar3;
  uint uVar9;
  CCharacter *this_ptr_01;
  float fVar4;
  CGame *pCVar5;
  CVector3f *pCVar1;
  CDeformableModelInstance *pCVar2;
  
  if ((this_ptr->base).ai_task == HERO_TASK_SUSPEND) {
    return;
  }
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  fVar4 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar4;
  if (fVar4 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_1b14 = delta_time;
  while (pCVar5 = g_CGamePtr, 0.0 < local_1b14) {
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(this_ptr->base).base.model.motion_controller,&local_1b14);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar8);
  }
  fVar7 = (float)12.566370614;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar7;
  if (pCVar5->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
      core_moloch_cpp_CMoloch_processAI_FUN_005293b0(this_ptr,delta_time);
    }
    pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(this_ptr->base).base.model.motion_controller);
    uVar5 = pSVar10->state_index;
    if ((((uVar5 == 0) || (uVar5 < 2)) || (uVar5 == 2)) && ((this_ptr->base).base.is_on_ground != 0)
       ) {
      uVar9 = (uint)((this_ptr->base).player_control.action_states[0] != 0);
      if ((this_ptr->base).player_control.action_states[1] != 0) {
        uVar9 = 2;
      }
      if ((this_ptr->base).player_control.action_states[6] != 0) {
        if (this_ptr->morphing == 0) {
          core_moloch_cpp_CMoloch_startMorph_FUN_00529900(this_ptr);
        }
        (this_ptr->base).player_control.action_states[6] = 0;
      }
      (this_ptr->base).base.turn_angle_accumulator =
           (this_ptr->base).player_control.turn_speed * (this_ptr->base).base.turn_speed;
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&(this_ptr->base).base.model.motion_controller);
      if (uVar9 != pSVar10->state_index) goto LAB_00528e32;
    }
  }
  else {
    uVar5 = (this_ptr->base).base.is_walking;
    if (uVar5 < 2) {
      if (uVar5 == 1) goto LAB_00528e31;
LAB_0052903e:
      uVar9 = 0;
    }
    else {
      if (2 < uVar5) {
        if (uVar5 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_00528e3a;
        }
        goto LAB_0052903e;
      }
LAB_00528e31:
      uVar9 = 1;
    }
LAB_00528e32:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,uVar9,1);
  }
LAB_00528e3a:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar9 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.position_delta;
    local_68.x = pCVar9->x + pCVar1->x + (this_ptr->base).base.velocity.x * delta_time;
    local_68.y = (this_ptr->base).base.model.accumulated_root_motion.y +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.velocity.y * delta_time;
    local_68.z = (this_ptr->base).base.model.accumulated_root_motion.z +
                 (this_ptr->base).base.position_delta.z +
                 delta_time * (this_ptr->base).base.velocity.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar9->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_68);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_5c,&(pCVar3->location).position);
      pCVar9 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_50,pCVar7);
      local_1b18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar9->y);
      if (local_1b18 < (float)-1.57079632675) {
        local_1b18 = local_1b18 + 3.141593f;
      }
      if ((float)1.57079632675 < local_1b18) {
        local_1b18 = local_1b18 + -3.141593f;
      }
      fVar7 = delta_time * (float)3.1415926535000001;
      if (local_1b18 < -fVar7) {
        local_1b18 = -fVar7;
      }
      if (fVar7 < local_1b18) {
        local_1b18 = fVar7;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_1b18
      ;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    this_ptr_01 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    pCVar6 = (this_ptr_01->base).vtable._uc;
    pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_44,0);
    iVar8 = (*(pCVar6->_uc).attractActorToward)(this_ptr_01,(CDemonActor *)this_ptr,pCVar9);
    if (iVar8 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
    }
    else if (((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) &&
            ((this_ptr->base).player_control.action_states[3] == 0)) goto LAB_00528f8e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
  }
LAB_00528f8e:
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCVar4 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar4);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  if (this_ptr->morphing == 0) {
    if (this_ptr->in_human_form == 0) {
      iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->demon_to_human_condition);
      if (iVar8 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_00529900(this_ptr);
        return;
      }
    }
    else {
      iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->human_to_demon_condition);
      if (iVar8 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_00529900(this_ptr);
        return;
      }
    }
  }
  else {
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar4->motion_controller);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
              (&(this_ptr->model).motion_controller,pSVar8->motion_name,
               (this_ptr->base).base.model.motion_controller.current_frame_number);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              (&this_ptr->model);
    fVar7 = this_ptr->morph_timer + delta_time;
    this_ptr->morph_timer = fVar7;
    if (2.0f < fVar7) {
      if (this_ptr->in_human_form == 0) {
        model_name = "moloch_h.dfm";
        this_ptr->in_human_form = 1;
        pcStack_20 = "moloch_d.dfm";
      }
      else {
        model_name = "moloch_d.dfm";
        this_ptr->in_human_form = 0;
        pcStack_20 = "moloch_h.dfm";
      }
      pCVar4 = &this_ptr->model;
      this_ptr->morphing = 0;
      this_ptr->morph_timer = 0.0;
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(pCVar4,&SStack_1b10);
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&pCVar4->motion_controller);
      this_ptr_03 = &(this_ptr->base).base.model;
      fVar7 = (this_ptr->model).motion_controller.current_frame_number;
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr_03,model_name);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_03);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&this_ptr_03->motion_controller,pSVar10->motion_name,fVar7);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar4,pcStack_20);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(pCVar4);
      this_ptr_02 = &this_ptr->morph;
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(this_ptr_02,0,this_ptr_03);
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(this_ptr_02,1,pCVar4);
      core_morph_cpp_CMorph_getReady_FUN_0052b680(this_ptr_02);
      return;
    }
  }
  return;
}
