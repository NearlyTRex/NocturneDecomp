// Name: core_moloch.cpp_CMoloch_process_FUN_00501530
// Address: 00501530
// Address Range: [[00501530, 00501c55]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_process_FUN_00501530(CMoloch *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moloch_cpp_CMoloch_process_FUN_00501530(CMoloch *this_ptr,float delta_time)

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
  char *pcVar9;
  CMorph *this_ptr_03;
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
  uint uStack_68;
  uint uStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
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
  iVar8 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
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
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_005030c0(&pCVar3->base,&fStack_1b60);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar8);
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
      core_moloch_cpp_CMoloch_processAI_FUN_00501c60(this_ptr,delta_time);
    }
    iVar8 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    uVar11 = *(uint *)(iVar8 + 0x24);
    if ((((uVar11 == 0) || (uVar11 < 2)) || (uVar11 == 2)) &&
       ((this_ptr->base).base.is_on_ground != 0)) {
      uVar11 = (uint)((this_ptr->base).player_input.action_state.walk != 0);
      if ((this_ptr->base).player_input.action_state.backup != 0) {
        uVar11 = 2;
      }
      if ((this_ptr->base).player_input.action_state.draw != 0) {
        if (this_ptr->morphing == 0) {
          core_moloch_cpp_CMoloch_startMorph_FUN_00502280(this_ptr);
        }
        (this_ptr->base).player_input.action_state.draw = 0;
      }
      (this_ptr->base).base.turn_angle_accumulator =
           (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
      iVar8 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
      if (uVar11 != *(uint *)(iVar8 + 0x24)) goto LAB_00501615;
    }
  }
  else {
    EVar4 = (this_ptr->base).base.walk_state;
    if (EVar4 < 2) {
      if (EVar4 == WALK_STATE_WALKING) goto LAB_00501614;
LAB_005018a5:
      uVar11 = 0;
    }
    else {
      if (2 < EVar4) {
        if (EVar4 == WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar3->base,0,1);
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_0050161d;
        }
        goto LAB_005018a5;
      }
LAB_00501614:
      uVar11 = 1;
    }
LAB_00501615:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,uVar11,1);
  }
LAB_0050161d:
  pCVar5 = (this_ptr->base).base.grabbed_by;
  if (pCVar5 == (CDemonActor *)0x0) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
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
    fStack_44 = fStack_74 + afStack_98[3];
    fStack_40 = fStack_70 + fStack_88;
    CStack_a8.x = fStack_78 + afStack_98[2];
    *(float *)((int)&CStack_a8 + (uint)bVar10 * -8 + 4) = afStack_98[(uint)bVar10 * -2 + 0x15];
    *(float *)((int)&CStack_a8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_98[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar2->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_a8);
    goto LAB_005017f4;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    core_actor_cpp_FUN_00408de0(this_ptr,&pCVar5->location);
    uStack_c0 = uStack_3c;
    afStack_bc[(uint)bVar10 * -2] = afStack_98[(uint)bVar10 * -2 + 0x18];
    afStack_bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_98[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&uStack_c0);
    uStack_6c = uStack_84;
    afStack_98[(uint)bVar10 * -2 + 0xc] = afStack_98[(uint)bVar10 * -2 + 6];
    afStack_98[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         afStack_98[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    pCStack_14 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(uStack_68)
    ;
    fStack_18 = (float)pCStack_14;
    if ((float)pCStack_14 < _DAT_005df235) {
      fStack_18 = (float)pCStack_14 + _DAT_005df239;
    }
    if (_DAT_005df23d < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005df241;
    }
    fStack_1c = delta_time * _DAT_005df239;
    fStack_20 = -fStack_1c;
    if (fStack_18 < fStack_20) {
      fStack_18 = fStack_20;
    }
    if (fStack_1c < fStack_18) {
      fStack_18 = fStack_1c;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_18;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  }
  pCStack_30 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  pCStack_14 = (pCStack_30->base).vtable._uc;
  pCStack_28 = &(this_ptr->base).base.model.base;
  core_skeleton_cpp_FUN_00546a90(pCStack_28,0);
  pCVar7 = pCStack_14;
  this_ptr_01 = pCStack_30;
  CStack_54.x = (float)uStack_60;
  afStack_98[(uint)bVar10 * -2 + 0x12] = afStack_98[(uint)bVar10 * -2 + 0xf];
  afStack_98[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
       afStack_98[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
  iVar8 = (*(pCVar7->_uc).attractActorToward)
                    (this_ptr_01,(CDemonActor *)this_ptr,(CVector3f *)(afStack_98 + 0x11));
  if (iVar8 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_005017e1:
    this_ptr_02 = &(this_ptr->base).base.model.base;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_005017e1;
    this_ptr_02 = pCStack_28;
    if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_005017f4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr_02,0,1);
LAB_005017f4:
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  pCVar3 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar3);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  if (this_ptr->morphing == 0) {
    if (this_ptr->in_human_form == 0) {
      iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,this_ptr->demon_to_human_condition);
      if (iVar8 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_00502280(this_ptr);
        return;
      }
    }
    else {
      iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,this_ptr->human_to_demon_condition);
      if (iVar8 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_00502280(this_ptr);
        return;
      }
    }
  }
  else {
    pcVar9 = (char *)core_motion_cpp_FUN_005035c0(pCVar3);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
              (&(this_ptr->model).base,pcVar9,(this_ptr->base).base.model.base.current_frame_number)
    ;
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
              (&this_ptr->model);
    fVar6 = this_ptr->morph_timer + delta_time;
    this_ptr->morph_timer = fVar6;
    if (_DAT_005fa3d8 < fVar6) {
      if (this_ptr->in_human_form == 0) {
        pcVar9 = "moloch_h.dfm";
        this_ptr->in_human_form = 1;
        pcStack_24 = "moloch_d.dfm";
      }
      else {
        pcVar9 = "moloch_d.dfm";
        this_ptr->in_human_form = 0;
        pcStack_24 = "moloch_h.dfm";
      }
      pCVar3 = &this_ptr->model;
      this_ptr->morphing = 0;
      this_ptr->morph_timer = 0.0;
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620(pCVar3,&SStack_1b5c);
      pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005035c0(pCVar3);
      this_ptr_00 = &(this_ptr->base).base.model;
      fStack_2c = (this_ptr->model).base.current_frame_number;
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(this_ptr_00,pcVar9);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
                (&this_ptr_00->base,(char *)pCStack_14,fStack_2c);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(pCVar3,pcStack_24);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(pCVar3);
      this_ptr_03 = &this_ptr->morph;
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(this_ptr_03,0,this_ptr_00);
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(this_ptr_03,1,pCVar3);
      core_morph_cpp_CMorph_getReady_FUN_005b71d0(this_ptr_03);
      return;
    }
  }
  return;
}
