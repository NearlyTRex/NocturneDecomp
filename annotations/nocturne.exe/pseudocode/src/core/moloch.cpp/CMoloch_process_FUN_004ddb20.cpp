// Name: core_moloch.cpp_CMoloch_process_FUN_004ddb20
// Address: 004ddb20
// Address Range: [[004ddb20, 004de1a1]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_process_FUN_004ddb20(CMoloch *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moloch_cpp_CMoloch_process_FUN_004ddb20(CMoloch *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *pCVar2;
  CDeformableModelInstance *this_ptr_00;
  CDemonActor *pCVar3;
  CCharacter *this_ptr_01;
  float fVar4;
  CGame *pCVar5;
  int iVar6;
  CVector3f *pCVar7;
  SMotion *pSVar8;
  CMorph *this_ptr_02;
  char *model_name;
  uint uVar9;
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
  
  if ((this_ptr->base).ai_task == HERO_TASK_SUSPEND) {
    return;
  }
  iVar6 = core_charactr_cpp_CCharacter_FUN_004259f0((CCharacter *)this_ptr,delta_time);
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
  while (pCVar5 = g_CGame_PTR_005b9354, 0.0 < local_1b14) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&(this_ptr->base).base.model.motion_controller,&local_1b14);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,iVar6);
  }
  fVar4 = (float)12.566370614;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar4;
  if (pCVar5->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  iVar6 = core_charactr_cpp_CCharacter_FUN_00428c00((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
      core_moloch_cpp_CMoloch_processAI_FUN_004de1b0(this_ptr,delta_time);
    }
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(this_ptr->base).base.model.motion_controller);
    uVar9 = pSVar8->state_index;
    if ((((uVar9 == 0) || (uVar9 < 2)) || (uVar9 == 2)) && ((this_ptr->base).base.is_on_ground != 0)
       ) {
      uVar9 = (uint)((this_ptr->base).player_input.action_state.walk != 0);
      if ((this_ptr->base).player_input.action_state.backup != 0) {
        uVar9 = 2;
      }
      if ((this_ptr->base).player_input.action_state.draw != 0) {
        if (this_ptr->morphing == 0) {
          core_moloch_cpp_CMoloch_startMorph_FUN_004de700(this_ptr);
        }
        (this_ptr->base).player_input.action_state.draw = 0;
      }
      (this_ptr->base).base.turn_angle_accumulator =
           (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
      pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&(this_ptr->base).base.model.motion_controller);
      if (uVar9 != pSVar8->state_index) goto LAB_004ddc32;
    }
  }
  else {
    uVar9 = (this_ptr->base).base.is_walking;
    if (uVar9 < 2) {
      if (uVar9 == 1) goto LAB_004ddc31;
LAB_004dde3e:
      uVar9 = 0;
    }
    else {
      if (2 < uVar9) {
        if (uVar9 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_004ddc3a;
        }
        goto LAB_004dde3e;
      }
LAB_004ddc31:
      uVar9 = 1;
    }
LAB_004ddc32:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,uVar9,1);
  }
LAB_004ddc3a:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_38 = (this_ptr->base).base.velocity.x * delta_time;
    local_34 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar7 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_30 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar1 = &(this_ptr->base).base.position_delta;
    local_74 = pCVar7->x + pCVar1->x;
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
    pCVar7->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_68);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         ((CDemonActor *)this_ptr,&local_5c,&(pCVar3->location).position);
      pCVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_50,pCVar7);
      local_14 = (SMotion *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar7->y);
      local_1b18 = (float)local_14;
      if ((float)local_14 < (float)-1.57079632675) {
        local_1b18 = (float)local_14 + 3.141593f;
      }
      if ((float)1.57079632675 < local_1b18) {
        local_1b18 = local_1b18 + 1.5938625219265179e-314._0_4_;
      }
      local_18 = delta_time * (float)3.1415926535000001;
      local_1c = -local_18;
      if (local_1b18 < local_1c) {
        local_1b18 = local_1c;
      }
      if (local_18 < local_1b18) {
        local_1b18 = local_18;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_1b18
      ;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)this_ptr);
    }
    this_ptr_01 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    local_14 = (SMotion *)(this_ptr_01->base).vtable._uc;
    pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (&(this_ptr->base).base.model,&local_44,0);
    iVar6 = (*((CCharacter_vtable *)((int)local_14 + 0xd0))->attractActorToward)
                      (this_ptr_01,(CDemonActor *)this_ptr,pCVar7);
    if (iVar6 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
    }
    else if (((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) &&
            ((this_ptr->base).player_input.action_state.fire == 0)) goto LAB_004ddd8e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,0,1);
  }
LAB_004ddd8e:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar2);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  core_charactr_cpp_CCharacter_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  if (this_ptr->morphing == 0) {
    if (this_ptr->in_human_form == 0) {
      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,this_ptr->demon_to_human_condition);
      if (iVar6 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_004de700(this_ptr);
        return;
      }
    }
    else {
      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,this_ptr->human_to_demon_condition);
      if (iVar6 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_004de700(this_ptr);
        return;
      }
    }
  }
  else {
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&pCVar2->motion_controller);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
              (&(this_ptr->model).motion_controller,pSVar8->motion_name,
               (this_ptr->base).base.model.motion_controller.current_frame_number);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
              (&this_ptr->model);
    fVar4 = this_ptr->morph_timer + delta_time;
    this_ptr->morph_timer = fVar4;
    if (_DAT_005a0ab8 < fVar4) {
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
      pCVar2 = &this_ptr->model;
      this_ptr->morphing = 0;
      this_ptr->morph_timer = 0.0;
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(pCVar2,&SStack_1b10);
      local_14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                           (&pCVar2->motion_controller);
      this_ptr_00 = &(this_ptr->base).base.model;
      fStack_24 = (this_ptr->model).motion_controller.current_frame_number;
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(this_ptr_00,model_name);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_00);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
                (&this_ptr_00->motion_controller,local_14->motion_name,fStack_24);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(pCVar2,pcStack_20);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(pCVar2);
      this_ptr_02 = &this_ptr->morph;
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(this_ptr_02,0,this_ptr_00);
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(this_ptr_02,1,pCVar2);
      core_morph_cpp_CMorph_getReady_FUN_004e03c0(this_ptr_02);
      return;
    }
  }
  return;
}
