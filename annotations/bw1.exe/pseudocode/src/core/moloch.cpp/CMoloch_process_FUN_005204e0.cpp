// Name: core_moloch.cpp_CMoloch_process_FUN_005204e0
// Address: 005204e0
// Address Range: [[005204e0, 00520c05]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_process_FUN_005204e0(CMoloch *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moloch_cpp_CMoloch_process_FUN_005204e0(CMoloch *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CDeformableModelInstance *pCVar3;
  CDeformableModelInstance *this_ptr_00;
  EWalkState EVar4;
  CDemonActor *pCVar5;
  float fVar6;
  CCharacter *this_ptr_01;
  CCharacter_full_vtable *pCVar7;
  int iVar8;
  CMotionController *this_ptr_02;
  SMotion *pSVar9;
  CMorph *this_ptr_03;
  char *model_name;
  byte bVar10;
  uint uVar11;
  float fStack_1b60;
  SPose SStack_1b5c;
  uint uStack_c0;
  float afStack_bc [4];
  float fStack_ac;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  uint uStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  float fStack_68;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [5];
  CCharacter *pCStack_30;
  float fStack_2c;
  CMotionController *pCStack_28;
  char *pcStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar10 = 0;
  if ((this_ptr->base).ai_task == HERO_TASK_SUSPEND) {
    return;
  }
  iVar8 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    return;
  }
  fVar6 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar6;
  if (fVar6 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCVar3 = &(this_ptr->base).base.model;
  fStack_1b60 = delta_time;
  while (0.0 < fStack_1b60) {
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar3->base,&fStack_1b60);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar8);
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
      core_moloch_cpp_CMoloch_processAI_FUN_00520c10(this_ptr,delta_time);
    }
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       (&(this_ptr->base).base.model.base);
    uVar11 = pSVar9->state_index;
    if ((((uVar11 == 0) || (uVar11 < 2)) || (uVar11 == 2)) &&
       ((this_ptr->base).base.is_on_ground != 0)) {
      uVar11 = (uint)((this_ptr->base).player_input.action_state.walk != 0);
      if ((this_ptr->base).player_input.action_state.backup != 0) {
        uVar11 = 2;
      }
      if ((this_ptr->base).player_input.action_state.draw != 0) {
        if (this_ptr->morphing == 0) {
          core_moloch_cpp_CMoloch_startMorph_FUN_00521230(this_ptr);
        }
        (this_ptr->base).player_input.action_state.draw = 0;
      }
      (this_ptr->base).base.turn_angle_accumulator =
           (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
      pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         (&(this_ptr->base).base.model.base);
      if (uVar11 != pSVar9->state_index) goto LAB_005205c5;
    }
  }
  else {
    EVar4 = (this_ptr->base).base.walk_state;
    if (EVar4 < 2) {
      if (EVar4 == WALK_STATE_WALKING) goto LAB_005205c4;
LAB_00520855:
      uVar11 = 0;
    }
    else {
      if (2 < EVar4) {
        if (EVar4 == WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar3->base,0,1);
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
          goto LAB_005205cd;
        }
        goto LAB_00520855;
      }
LAB_005205c4:
      uVar11 = 1;
    }
LAB_005205c5:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,uVar11,1);
  }
LAB_005205cd:
  pCVar5 = (this_ptr->base).base.grabbed_by;
  if (pCVar5 == (CDemonActor *)0x0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    afStack_bc[2] = (this_ptr->base).base.velocity.x * delta_time;
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_bc[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_ac = (this_ptr->base).base.velocity.z * delta_time;
    afStack_98[2] = afStack_bc[2];
    afStack_98[(uint)bVar10 * -2 + 3] = afStack_bc[(uint)bVar10 * -2 + 3];
    afStack_98[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    pCVar2 = &(this_ptr->base).base.position_delta;
    fStack_9c = pCVar1->x + pCVar2->x;
    afStack_98[0] =
         (this_ptr->base).base.model.accumulated_root_motion.y +
         (this_ptr->base).base.position_delta.y;
    afStack_98[1] =
         (this_ptr->base).base.model.accumulated_root_motion.z +
         (this_ptr->base).base.position_delta.z;
    fStack_78 = fStack_9c;
    afStack_98[(uint)bVar10 * -2 + 9] = afStack_98[(uint)bVar10 * -2];
    afStack_98[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_98[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    fStack_48 = fStack_78 + afStack_98[2];
    afStack_44[0] = fStack_74 + afStack_98[3];
    afStack_44[1] = fStack_70 + fStack_88;
    CStack_a8.x = fStack_78 + afStack_98[2];
    *(float *)((int)&CStack_a8 + (uint)bVar10 * -8 + 4) = afStack_44[(uint)bVar10 * -2];
    *(float *)((int)&CStack_a8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar2->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_a8);
    goto LAB_005207a4;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    core_actor_cpp_FUN_00408bb0(this_ptr,&pCVar5->location);
    uStack_c0 = afStack_44[2];
    afStack_bc[(uint)bVar10 * -2] = afStack_44[(uint)bVar10 * -2 + 3];
    afStack_bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&uStack_c0);
    uStack_6c = uStack_84;
    afStack_98[(uint)bVar10 * -2 + 0xc] = afStack_98[(uint)bVar10 * -2 + 6];
    afStack_98[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         afStack_98[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    pCStack_14 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_68)
    ;
    fStack_18 = (float)pCStack_14;
    if ((float)pCStack_14 < _DAT_005ea282) {
      fStack_18 = (float)pCStack_14 + _DAT_005ea286;
    }
    if (_DAT_005ea28a < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005ea28e;
    }
    fStack_1c = delta_time * _DAT_005ea286;
    fStack_20 = -fStack_1c;
    if (fStack_18 < fStack_20) {
      fStack_18 = fStack_20;
    }
    if (fStack_1c < fStack_18) {
      fStack_18 = fStack_1c;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_18;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
  }
  pCStack_30 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  pCStack_14 = (pCStack_30->base).vtable._uc;
  pCStack_28 = &(this_ptr->base).base.model.base;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            ((CDeformableModelInstance *)pCStack_28,0,&CStack_60);
  pCVar7 = pCStack_14;
  this_ptr_01 = pCStack_30;
  CStack_54.x = CStack_60.x;
  *(uint *)((int)&CStack_54 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&CStack_60 + (uint)bVar10 * -8 + 4);
  *(uint *)((int)&CStack_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
       *(uint *)((int)&CStack_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  iVar8 = (*(pCVar7->_uc).attractActorToward)(this_ptr_01,(CDemonActor *)this_ptr,&CStack_54);
  if (iVar8 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_00520791:
    this_ptr_02 = &(this_ptr->base).base.model.base;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_00520791;
    this_ptr_02 = pCStack_28;
    if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_005207a4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr_02,0,1);
LAB_005207a4:
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  pCVar3 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar3);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  if (this_ptr->morphing == 0) {
    if (this_ptr->in_human_form == 0) {
      iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,this_ptr->demon_to_human_condition);
      if (iVar8 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_00521230(this_ptr);
        return;
      }
    }
    else {
      iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,this_ptr->human_to_demon_condition);
      if (iVar8 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_00521230(this_ptr);
        return;
      }
    }
  }
  else {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar3->base);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
              (&(this_ptr->model).base,pSVar9->motion_name,
               (this_ptr->base).base.model.base.current_frame_number);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
              (&this_ptr->model);
    fVar6 = this_ptr->morph_timer + delta_time;
    this_ptr->morph_timer = fVar6;
    if (_DAT_00603ef8 < fVar6) {
      if (this_ptr->in_human_form == 0) {
        model_name = "moloch_h.dfm";
        this_ptr->in_human_form = 1;
        pcStack_24 = "moloch_d.dfm";
      }
      else {
        model_name = "moloch_d.dfm";
        this_ptr->in_human_form = 0;
        pcStack_24 = "moloch_h.dfm";
      }
      pCVar3 = &this_ptr->model;
      this_ptr->morphing = 0;
      this_ptr->morph_timer = 0.0;
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(pCVar3,&SStack_1b5c);
      pCStack_14 = (CCharacter_full_vtable *)
                   core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar3->base);
      this_ptr_00 = &(this_ptr->base).base.model;
      fStack_2c = (this_ptr->model).base.current_frame_number;
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50(this_ptr_00,model_name);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_00);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
                (&this_ptr_00->base,(char *)pCStack_14,fStack_2c);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50(pCVar3,pcStack_24);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(pCVar3);
      this_ptr_03 = &this_ptr->morph;
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0(this_ptr_03,0,this_ptr_00);
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0(this_ptr_03,1,pCVar3);
      core_morph_cpp_CMorph_getReady_FUN_00523310(this_ptr_03);
      return;
    }
  }
  return;
}
