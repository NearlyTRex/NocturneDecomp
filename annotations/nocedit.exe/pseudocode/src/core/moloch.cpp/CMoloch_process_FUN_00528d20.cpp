// Name: core_moloch.cpp_CMoloch_process_FUN_00528d20
// Address: 00528d20
// Address Range: [[00528d20, 005293a1]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_process_FUN_00528d20(CMoloch *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_process_FUN_00528d20(CMoloch *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  char *this_ptr_00;
  CDemonActor *pCVar3;
  CCharacter *this_ptr_01;
  CGame *pCVar4;
  int iVar5;
  uint uVar6;
  CVector3f *pCVar7;
  SMotion *pSVar8;
  char *pcVar9;
  float fVar10;
  float in_stack_ffffe4f8;
  byte auStack_1b00 [6812];
  float local_64;
  float local_60;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_1c;
  float local_18;
  CCharacter_full_vtable *local_14;
  char *model_name;
  
  if ((this_ptr->base).ai_task == 4) {
    return;
  }
  iVar5 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  fVar10 = (float)(this_ptr->base).no_collision_flag - delta_time;
  (this_ptr->base).no_collision_flag = (int)fVar10;
  if (fVar10 < 0.0) {
    (this_ptr->base).no_collision_flag = 0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fVar10 = delta_time;
  while (pCVar4 = g_CGamePtr, 0.0 < fVar10) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(this_ptr->base).base.model.motion_controller);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar6);
  }
  fVar10 = (float)12.566370614;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar10;
  if (pCVar4->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    if ((this_ptr->base).control_type == 2) {
      core_moloch_cpp_CMoloch_FUN_005293b0(this_ptr);
    }
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    uVar6 = pSVar8->state_index;
    if ((((uVar6 == 0) || (uVar6 < 2)) || (uVar6 == 2)) && ((this_ptr->base).base.is_on_ground != 0)
       ) {
      uVar6 = (uint)((this_ptr->base).player_control.action_states[0] != 0);
      if ((this_ptr->base).player_control.action_states[1] != 0) {
        uVar6 = 2;
      }
      if ((this_ptr->base).player_control.action_states[6] != 0) {
        if (this_ptr->morphing == 0) {
          core_moloch_cpp_CMoloch_FUN_00529900(this_ptr);
        }
        (this_ptr->base).player_control.action_states[6] = 0;
      }
      (this_ptr->base).base.turn_angle_accumulator =
           (this_ptr->base).player_control.turn_speed * (this_ptr->base).base.turn_speed;
      pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller);
      if (uVar6 != pSVar8->state_index) goto LAB_00528e32;
    }
  }
  else {
    uVar6 = (this_ptr->base).base.is_walking;
    if (uVar6 < 2) {
      if (uVar6 == 1) goto LAB_00528e31;
LAB_0052903e:
      uVar6 = 0;
    }
    else {
      if (2 < uVar6) {
        if (uVar6 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_00528e3a;
        }
        goto LAB_0052903e;
      }
LAB_00528e31:
      uVar6 = 1;
    }
LAB_00528e32:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,uVar6,1);
  }
LAB_00528e3a:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_38 = (this_ptr->base).base.velocity.x * delta_time;
    local_34 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar7 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_30 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.position_delta;
    auStack_1b00._6796_4_ = pCVar7->x + pCVar2->x;
    auStack_1b00._6800_4_ =
         (this_ptr->base).base.model.accumulated_root_motion.y +
         (this_ptr->base).base.position_delta.y;
    auStack_1b00._6808_4_ = (float)auStack_1b00._6796_4_ + local_38;
    auStack_1b00._6804_4_ =
         (this_ptr->base).base.model.accumulated_root_motion.z +
         (this_ptr->base).base.position_delta.z;
    local_64 = (float)auStack_1b00._6800_4_ + local_34;
    local_60 = (float)auStack_1b00._6804_4_ + local_30;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar7->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar2->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40
              ((CCharacter *)this_ptr,(CVector3f *)(auStack_1b00 + 0x1a98));
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_5c,&(pCVar3->location).position);
      pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_50,pCVar7);
      local_14 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar7->y)
      ;
      fVar10 = (float)local_14;
      if ((float)local_14 < (float)-1.57079632675) {
        fVar10 = (float)local_14 + 3.141593f;
      }
      if ((float)1.57079632675 < fVar10) {
        fVar10 = fVar10 + -3.141593f;
      }
      local_18 = delta_time * (float)3.1415926535000001;
      local_1c = -local_18;
      if (fVar10 < local_1c) {
        fVar10 = local_1c;
      }
      if (local_18 < fVar10) {
        fVar10 = local_18;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fVar10;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    this_ptr_01 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    local_14 = (this_ptr_01->base).vtable._uc;
    pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_44,0);
    iVar5 = (*(local_14->_uc).attractActorToward)(this_ptr_01,(CDemonActor *)this_ptr,pCVar7);
    if (iVar5 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
    }
    else if (((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) &&
            ((this_ptr->base).player_control.action_states[3] == 0)) goto LAB_00528f8e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
  }
LAB_00528f8e:
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_ffffe4f8);
  if (this_ptr->morphing == 0) {
    if (this_ptr->in_human_form == 0) {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->demon_to_human_condition);
      if (iVar5 != 0) {
        core_moloch_cpp_CMoloch_FUN_00529900(this_ptr);
        return;
      }
    }
    else {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->human_to_demon_condition);
      if (iVar5 != 0) {
        core_moloch_cpp_CMoloch_FUN_00529900(this_ptr);
        return;
      }
    }
  }
  else {
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar1->motion_controller);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
              ((CMotionController *)this_ptr->unk1,pSVar8->motion_name,
               (float)(this_ptr->base).base.model.motion_controller.current_frame_number);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)this_ptr->unk1);
    fVar10 = this_ptr->morph_timer + delta_time;
    this_ptr->morph_timer = fVar10;
    if (2.0f < fVar10) {
      if (this_ptr->in_human_form == 0) {
        pcVar9 = "moloch_h.dfm";
        this_ptr->in_human_form = 1;
        model_name = "moloch_d.dfm";
      }
      else {
        pcVar9 = "moloch_d.dfm";
        this_ptr->in_human_form = 0;
        model_name = "moloch_h.dfm";
      }
      this_ptr_00 = this_ptr->unk1;
      this_ptr->morphing = 0;
      this_ptr->morph_timer = 0.0;
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
                ((CDeformableModelInstance *)this_ptr_00,(SBoneTransformData *)auStack_1b00);
      pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         ((CMotionController *)this_ptr_00);
      pCVar1 = &(this_ptr->base).base.model;
      local_14 = *(CCharacter_full_vtable **)(this_ptr->unk1 + 8);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,pcVar9);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(pCVar1);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&pCVar1->motion_controller,pSVar8->motion_name,(float)local_14);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                ((CDeformableModelInstance *)this_ptr_00,model_name);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                ((CDeformableModelInstance *)this_ptr_00);
      pcVar9 = this_ptr->unk2;
      core_morph_cpp_CMorph_FUN_0052b430((CMorph *)pcVar9,0);
      core_morph_cpp_CMorph_FUN_0052b430((CMorph *)pcVar9,1);
      core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)pcVar9);
      return;
    }
  }
  return;
}
