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
  float fVar4;
  CGame *pCVar5;
  int iVar6;
  uint uVar7;
  CVector3f *pCVar8;
  SMotion *pSVar9;
  char *pcVar10;
  float in_stack_ffffe4e8;
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
  
  if ((this_ptr->base).ai_task == 4) {
    return;
  }
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  fVar4 = (float)(this_ptr->base).no_collision_flag - delta_time;
  (this_ptr->base).no_collision_flag = (int)fVar4;
  if (fVar4 < 0.0) {
    (this_ptr->base).no_collision_flag = 0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  while (pCVar5 = g_CGamePtr, 0.0 < delta_time) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(this_ptr->base).base.model.motion_controller);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar7);
  }
  fVar4 = (float)12.566370614;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar4;
  if (pCVar5->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    if ((this_ptr->base).control_type == 2) {
      core_moloch_cpp_CMoloch_FUN_005293b0(this_ptr);
    }
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    uVar7 = pSVar9->state_index;
    if ((((uVar7 == 0) || (uVar7 < 2)) || (uVar7 == 2)) && ((this_ptr->base).base.is_on_ground != 0)
       ) {
      uVar7 = (uint)((this_ptr->base).player_control.action_states[0] != 0);
      if ((this_ptr->base).player_control.action_states[1] != 0) {
        uVar7 = 2;
      }
      if ((this_ptr->base).player_control.action_states[6] != 0) {
        if (this_ptr->morphing == 0) {
          core_moloch_cpp_CMoloch_FUN_00529900(this_ptr);
        }
        (this_ptr->base).player_control.action_states[6] = 0;
      }
      (this_ptr->base).base.turn_angle_accumulator =
           (this_ptr->base).player_control.turn_speed * (this_ptr->base).base.turn_speed;
      pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller);
      if (uVar7 != pSVar9->state_index) goto LAB_00528e32;
    }
  }
  else {
    uVar7 = (this_ptr->base).base.is_walking;
    if (uVar7 < 2) {
      if (uVar7 == 1) goto LAB_00528e31;
LAB_0052903e:
      uVar7 = 0;
    }
    else {
      if (2 < uVar7) {
        if (uVar7 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_00528e3a;
        }
        goto LAB_0052903e;
      }
LAB_00528e31:
      uVar7 = 1;
    }
LAB_00528e32:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,uVar7,1);
  }
LAB_00528e3a:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_38 = (this_ptr->base).base.velocity.x * delta_time;
    local_34 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar8 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_30 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.position_delta;
    local_74 = pCVar8->x + pCVar2->x;
    local_70 = (this_ptr->base).base.model.accumulated_root_motion.y +
               (this_ptr->base).base.position_delta.y;
    local_68.x = local_74 + local_38;
    local_6c = (this_ptr->base).base.model.accumulated_root_motion.z +
               (this_ptr->base).base.position_delta.z;
    local_68.y = local_70 + local_34;
    local_68.z = local_6c + local_30;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar8->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar2->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_68);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_5c,&(pCVar3->location).position);
      pCVar8 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_50,pCVar8);
      local_14 = (SMotion *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar8->y);
      in_stack_ffffe4e8 = (float)local_14;
      if ((float)local_14 < (float)-1.57079632675) {
        in_stack_ffffe4e8 = (float)local_14 + 3.141593f;
      }
      if ((float)1.57079632675 < in_stack_ffffe4e8) {
        in_stack_ffffe4e8 = in_stack_ffffe4e8 + -3.141593f;
      }
      local_18 = delta_time * (float)3.1415926535000001;
      local_1c = -local_18;
      if (in_stack_ffffe4e8 < local_1c) {
        in_stack_ffffe4e8 = local_1c;
      }
      if (local_18 < in_stack_ffffe4e8) {
        in_stack_ffffe4e8 = local_18;
      }
      (this_ptr->base).base.base.orient.vec.y =
           (this_ptr->base).base.base.orient.vec.y + in_stack_ffffe4e8;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    this_ptr_01 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    local_14 = (SMotion *)(this_ptr_01->base).vtable._uc;
    pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_44,0);
    iVar6 = (*((CCharacter_vtable *)((int)local_14 + 0xec))->attractActorToward)
                      (this_ptr_01,(CDemonActor *)this_ptr,pCVar8);
    if (iVar6 == 0) {
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
            ((CCharacter *)this_ptr,delta_time,in_stack_ffffe4e8);
  if (this_ptr->morphing == 0) {
    if (this_ptr->in_human_form == 0) {
      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->demon_to_human_condition);
      if (iVar6 != 0) {
        core_moloch_cpp_CMoloch_FUN_00529900(this_ptr);
        return;
      }
    }
    else {
      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->human_to_demon_condition);
      if (iVar6 != 0) {
        core_moloch_cpp_CMoloch_FUN_00529900(this_ptr);
        return;
      }
    }
  }
  else {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar1->motion_controller);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
              ((CMotionController *)this_ptr->unk1,pSVar9->motion_name,
               (float)(this_ptr->base).base.model.motion_controller.current_frame_number);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)this_ptr->unk1);
    fVar4 = this_ptr->morph_timer + delta_time;
    this_ptr->morph_timer = fVar4;
    if (2.0f < fVar4) {
      if (this_ptr->in_human_form == 0) {
        pcVar10 = "moloch_h.dfm";
        this_ptr->in_human_form = 1;
        pcStack_20 = "moloch_d.dfm";
      }
      else {
        pcVar10 = "moloch_d.dfm";
        this_ptr->in_human_form = 0;
        pcStack_20 = "moloch_h.dfm";
      }
      this_ptr_00 = this_ptr->unk1;
      this_ptr->morphing = 0;
      this_ptr->morph_timer = 0.0;
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
                ((CDeformableModelInstance *)this_ptr_00,&SStack_1b10);
      local_14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           ((CMotionController *)this_ptr_00);
      pCVar1 = &(this_ptr->base).base.model;
      fStack_24 = *(float *)(this_ptr->unk1 + 8);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,pcVar10);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(pCVar1);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&pCVar1->motion_controller,local_14->motion_name,fStack_24);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                ((CDeformableModelInstance *)this_ptr_00,pcStack_20);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                ((CDeformableModelInstance *)this_ptr_00);
      pcVar10 = this_ptr->unk2;
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430((CMorph *)pcVar10,0,pCVar1);
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430
                ((CMorph *)pcVar10,1,(CDeformableModelInstance *)this_ptr_00);
      core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)pcVar10);
      return;
    }
  }
  return;
}
