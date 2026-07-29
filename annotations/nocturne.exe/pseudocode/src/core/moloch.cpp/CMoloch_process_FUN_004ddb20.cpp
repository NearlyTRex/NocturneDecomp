// Name: core_moloch.cpp_CMoloch_process_FUN_004ddb20
// Address: 004ddb20
// Address Range: [[004ddb20, 004de1a1]]
// Convention: unknown
// Signature: void core_moloch_cpp_CMoloch_process_FUN_004ddb20(CMoloch *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_moloch_cpp_CMoloch_process_FUN_004ddb20(CMoloch *param_1,float param_2)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *pCVar2;
  CDeformableModelInstance *this_ptr;
  CDemonActor *pCVar3;
  CCharacter *this_ptr_00;
  float fVar4;
  int iVar5;
  CVector3f *pCVar6;
  SMotion *pSVar7;
  CMorph *this_ptr_01;
  char *model_name;
  uint uVar8;
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
  
  if ((param_1->base).ai_task == HERO_TASK_SUSPEND) {
    return;
  }
  iVar5 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  fVar4 = (param_1->base).invincibility_timer - param_2;
  (param_1->base).invincibility_timer = fVar4;
  if (fVar4 < 0.0) {
    (param_1->base).invincibility_timer = 0.0;
  }
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
  local_1b14 = param_2;
  while (iVar5 = 0x01C775EC, 0.0 < local_1b14) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&(param_1->base).base.model.motion_controller,&local_1b14);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,iVar5);
  }
  fVar4 = (float)12.566370614;
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.turn_speed = param_2 * fVar4;
  if (*(int *)(iVar5 + 0x228) != 0) {
    (param_1->base).base.turn_speed = (param_1->base).base.turn_speed * (float)0.33333333333333298;
  }
  iVar5 = core_charactr_cpp_FUN_00428c00((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
    if ((param_1->base).control_type == HERO_CONTROL_AI) {
      core_moloch_cpp_CMoloch_processAI_FUN_004de1b0(param_1,param_2);
    }
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(param_1->base).base.model.motion_controller);
    uVar8 = pSVar7->state_index;
    if ((((uVar8 == 0) || (uVar8 < 2)) || (uVar8 == 2)) && ((param_1->base).base.is_on_ground != 0))
    {
      uVar8 = (uint)((param_1->base).player_input.action_state.walk != 0);
      if ((param_1->base).player_input.action_state.backup != 0) {
        uVar8 = 2;
      }
      if ((param_1->base).player_input.action_state.draw != 0) {
        if (param_1->morphing == 0) {
          core_moloch_cpp_CMoloch_startMorph_FUN_004de700(param_1);
        }
        (param_1->base).player_input.action_state.draw = 0;
      }
      (param_1->base).base.turn_angle_accumulator =
           (param_1->base).player_input.turn_speed * (param_1->base).base.turn_speed;
      pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&(param_1->base).base.model.motion_controller);
      if (uVar8 != pSVar7->state_index) goto LAB_004ddc32;
    }
  }
  else {
    uVar8 = (param_1->base).base.is_walking;
    if (uVar8 < 2) {
      if (uVar8 == 1) goto LAB_004ddc31;
LAB_004dde3e:
      uVar8 = 0;
    }
    else {
      if (2 < uVar8) {
        if (uVar8 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
          goto LAB_004ddc3a;
        }
        goto LAB_004dde3e;
      }
LAB_004ddc31:
      uVar8 = 1;
    }
LAB_004ddc32:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,uVar8,1);
  }
LAB_004ddc3a:
  pCVar3 = (param_1->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    (param_1->base).base.velocity.y =
         (param_1->base).base.velocity.y - param_2 * (float)32;
    local_38 = (param_1->base).base.velocity.x * param_2;
    local_34 = (param_1->base).base.velocity.y * param_2;
    pCVar6 = &(param_1->base).base.model.accumulated_root_motion;
    local_30 = param_2 * (param_1->base).base.velocity.z;
    pCVar1 = &(param_1->base).base.position_delta;
    local_74 = pCVar6->x + pCVar1->x;
    local_70 = (param_1->base).base.model.accumulated_root_motion.y +
               (param_1->base).base.position_delta.y;
    local_68.x = local_74 + local_38;
    local_6c = (param_1->base).base.model.accumulated_root_motion.z +
               (param_1->base).base.position_delta.z;
    local_68.y = local_70 + local_34;
    local_68.z = local_6c + local_30;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    pCVar6->x = (param_1->base).base.model.accumulated_root_motion.y;
    (param_1->base).base.position_delta.z = 0.0;
    (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
    pCVar1->x = (param_1->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_68);
  }
  else {
    if ((param_1->base).base.grabbed_type == 0) {
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         ((CDemonActor *)param_1,&local_5c,&(pCVar3->location).position);
      pCVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_50,pCVar6);
      local_14 = (SMotion *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar6->y);
      local_1b18 = (float)local_14;
      if ((float)local_14 < (float)-1.57079632675) {
        local_1b18 = (float)local_14 + 3.141593f;
      }
      if ((float)1.57079632675 < local_1b18) {
        local_1b18 = local_1b18 + 1.5938625219265179e-314._0_4_;
      }
      local_18 = param_2 * (float)3.1415926535000001;
      local_1c = -local_18;
      if (local_1b18 < local_1c) {
        local_1b18 = local_1c;
      }
      if (local_18 < local_1b18) {
        local_1b18 = local_18;
      }
      (param_1->base).base.base.orient.vec.y = (param_1->base).base.base.orient.vec.y + local_1b18;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)param_1);
    }
    this_ptr_00 = (CCharacter *)(param_1->base).base.grabbed_by;
    local_14 = (SMotion *)(this_ptr_00->base).vtable._uc;
    pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (&(param_1->base).base.model,&local_44,0);
    iVar5 = (*((CCharacter_vtable *)((int)local_14 + 0xd0))->attractActorToward)
                      (this_ptr_00,(CDemonActor *)param_1,pCVar6);
    if (iVar5 == 0) {
      (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
    }
    else if (((param_1->base).base.grabbed_by != (CDemonActor *)0x0) &&
            ((param_1->base).player_input.action_state.fire == 0)) goto LAB_004ddd8e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,0,1);
  }
LAB_004ddd8e:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  pCVar2 = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar2);
  (*(((param_1->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)param_1);
  core_charactr_cpp_FUN_0042a150((CCharacter *)param_1,param_2);
  if (param_1->morphing == 0) {
    if (param_1->in_human_form == 0) {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,param_1->demon_to_human_condition);
      if (iVar5 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_004de700(param_1);
        return;
      }
    }
    else {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,param_1->human_to_demon_condition);
      if (iVar5 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_004de700(param_1);
        return;
      }
    }
  }
  else {
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&pCVar2->motion_controller);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
              (&(param_1->model).motion_controller,pSVar7->motion_name,
               (param_1->base).base.model.motion_controller.current_frame_number);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
              (&param_1->model);
    param_2 = param_1->morph_timer + param_2;
    param_1->morph_timer = param_2;
    if (_DAT_005a0ab8 < param_2) {
      if (param_1->in_human_form == 0) {
        model_name = "moloch_h.dfm";
        param_1->in_human_form = 1;
        pcStack_20 = "moloch_d.dfm";
      }
      else {
        model_name = "moloch_d.dfm";
        param_1->in_human_form = 0;
        pcStack_20 = "moloch_h.dfm";
      }
      pCVar2 = &param_1->model;
      param_1->morphing = 0;
      param_1->morph_timer = 0.0;
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(pCVar2,&SStack_1b10);
      local_14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                           (&pCVar2->motion_controller);
      this_ptr = &(param_1->base).base.model;
      fStack_24 = (param_1->model).motion_controller.current_frame_number;
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(this_ptr,model_name);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
                (&this_ptr->motion_controller,local_14->motion_name,fStack_24);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(pCVar2,pcStack_20);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(pCVar2);
      this_ptr_01 = &param_1->morph;
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(this_ptr_01,0,this_ptr);
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(this_ptr_01,1,pCVar2);
      core_morph_cpp_CMorph_getReady_FUN_004e03c0(this_ptr_01);
      return;
    }
  }
  return;
}
