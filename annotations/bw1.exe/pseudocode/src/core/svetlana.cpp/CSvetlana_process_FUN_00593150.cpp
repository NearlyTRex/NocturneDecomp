// Name: core_svetlana.cpp_CSvetlana_process_FUN_00593150
// Address: 00593150
// Address Range: [[00593150, 005938b7]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_00593150(CSvetlana *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_00593150(CSvetlana *this_ptr,float delta_time)

{
  UOrientationVector *euler;
  CLocation *position;
  EWalkState EVar1;
  CDemonActor *pCVar2;
  bool bVar3;
  int iVar4;
  SMotion *pSVar5;
  EDeathState EVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  byte bVar10;
  float afStackY_18ac [1521];
  CDeformableModelInstance *pCVar11;
  CQuaternion4f *source_quaternions;
  float fVar12;
  CVector3f *pCVar13;
  code *blend_callback;
  CQuaternion4f CStack_d0;
  float fStack_c0;
  float afStack_bc [3];
  CVector3f CStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float afStack_98 [3];
  CVector3f CStack_8c;
  uint uStack_80;
  float afStack_7c [4];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint uStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_38;
  CCharacter *pCStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar10 = 0;
  if (((this_ptr->base).base.hit_points < (float)_DAT_005f756f) &&
     (fVar12 = (this_ptr->base).base.hit_points + delta_time,
     (this_ptr->base).base.hit_points = fVar12, (float)_DAT_005f756f < fVar12)) {
    (this_ptr->base).base.hit_points = 100.0;
  }
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if ((iVar4 == 0) || ((this_ptr->base).ai_task == HERO_TASK_SUSPEND)) {
switchD_005935af_caseD_9:
    return;
  }
  core_charactr_cpp_FUN_00434790(this_ptr,delta_time);
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  fVar12 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar12;
  if (fVar12 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar13 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar13->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_svetlana_cpp_CSvetlana_advanceMotion_FUN_005940a0(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar4 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
      core_svetlana_cpp_CSvetlana_processAI_FUN_005938c0(this_ptr,delta_time);
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       (&(this_ptr->base).base.model.base);
    switch(pSVar5->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar4 = 0;
        if (this_ptr->blades_drawn != 0) {
          iVar4 = 10;
        }
        if ((this_ptr->base).player_input.action_state.walk != 0) {
          if ((this_ptr->base).player_input.action_state.run == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
        }
        if ((this_ptr->base).player_input.action_state.backup != 0) {
          iVar4 = 3;
        }
        if ((this_ptr->base).player_input.action_state.draw != 0) {
          iVar4 = this_ptr->blades_drawn;
          (this_ptr->base).player_input.action_state.draw = 0;
          uVar7 = (uint)(iVar4 == 0);
          this_ptr->blades_drawn = uVar7;
          if (uVar7 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = 10;
          }
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          bVar3 = true;
          if ((this_ptr->blades_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
            iVar8 = core_hero_cpp_CHero_tryInteract_FUN_004eb090(&this_ptr->base);
            bVar3 = false;
            if (iVar8 != 0) goto LAB_00593649;
            iVar8 = core_hero_cpp_FUN_004eb3e0(this_ptr,0);
            if ((iVar8 != 0) && (iVar8 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(&this_ptr->base);
            }
            if ((iVar8 != 0) ||
               (iVar8 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(&this_ptr->base),
               iVar8 != 0)) goto LAB_00593649;
            iVar8 = core_hero_cpp_FUN_004eb660(&this_ptr->base);
            if (iVar8 != 0) {
              core_hero_cpp_CHero_toggleLeverNow_FUN_004eb7f0(&this_ptr->base);
              goto LAB_00593649;
            }
          }
          else {
LAB_00593649:
            if (!bVar3) goto LAB_0059366a;
          }
          iVar4 = this_ptr->attack_hand;
          (this_ptr->base).player_input.action_state.fire = 0;
          if (iVar4 == 0) {
            iVar4 = 0xf;
          }
          else {
            iVar4 = 0xe;
          }
        }
LAB_0059366a:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           (&(this_ptr->base).base.model.base);
        if (iVar4 != pSVar5->state_index) goto LAB_005932a3;
      }
      break;
    case 9:
      goto switchD_005935af_caseD_9;
    }
  }
  else {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       (&(this_ptr->base).base.model.base);
    if ((pSVar5->state_index != 0x1a) && (pSVar5->state_index != 0x1b)) {
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      pCVar13->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    }
    EVar1 = (this_ptr->base).base.walk_state;
    if (EVar1 < 2) {
      if (EVar1 == WALK_STATE_WALKING) {
        iVar4 = 1;
      }
      else {
LAB_0059356b:
        iVar4 = 0;
      }
    }
    else {
      if (2 < EVar1) {
        if (EVar1 == WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0,1);
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
          goto switchD_005935af_caseD_4;
        }
        goto LAB_0059356b;
      }
      iVar4 = 2;
    }
LAB_005932a3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar4,1);
  }
switchD_005935af_caseD_4:
  pCVar2 = (this_ptr->base).base.grabbed_by;
  if (pCVar2 == (CDemonActor *)0x0) {
    CStack_8c.x = (this_ptr->base).base.model.accumulated_root_motion.x;
    CStack_8c.y = (this_ptr->base).base.model.accumulated_root_motion.y;
    CStack_8c.z = (this_ptr->base).base.model.accumulated_root_motion.z;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       (&(this_ptr->base).base.model.base);
    if (pSVar5->state_index != 0x1a) {
      core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    }
    afStack_7c[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_7c[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_6c = (this_ptr->base).base.velocity.z * delta_time;
    fStack_44 = afStack_7c[2];
    afStack_7c[(uint)bVar10 * -2 + 0xf] = afStack_7c[(uint)bVar10 * -2 + 3];
    afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
         afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    fStack_68 = fStack_44 + (this_ptr->base).base.position_delta.x;
    fStack_64 = fStack_40 + (this_ptr->base).base.position_delta.y;
    fStack_60 = fStack_3c + (this_ptr->base).base.position_delta.z;
    fStack_a4 = fStack_68;
    afStack_bc[(uint)bVar10 * -2 + 7] = afStack_7c[(uint)bVar10 * -2 + 6];
    afStack_bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 8] =
         afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    CStack_8c.x = CStack_8c.x + fStack_a4;
    CStack_8c.y = CStack_8c.y + fStack_a0;
    CStack_8c.z = CStack_8c.z + fStack_9c;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       (&(this_ptr->base).base.model.base);
    iVar4 = pSVar5->state_index;
    if ((((iVar4 != 0x17) && (iVar4 != 0x18)) && (iVar4 != 0x19)) &&
       (((iVar4 != 0x25 && (iVar4 != 0x26)) && ((iVar4 != 0x27 && (iVar4 != 0x28)))))) {
      core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_8c);
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       (&(this_ptr->base).base.model.base);
    if (pSVar5->state_index == 0x1a) {
      (this_ptr->base).base.base.location.position.y =
           delta_time * (float)_DAT_005f7577 + (this_ptr->base).base.base.location.position.y;
    }
    goto LAB_00593467;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    core_actor_cpp_FUN_00408bb0(this_ptr,&pCVar2->location);
    afStack_98[0] = (float)uStack_5c;
    afStack_bc[(uint)bVar10 * -2 + 10] = afStack_7c[(uint)bVar10 * -2 + 9];
    afStack_bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xb] =
         afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_bc + 9);
    uStack_80 = uStack_50;
    afStack_7c[(uint)bVar10 * -2] = afStack_7c[(uint)bVar10 * -2 + 0xc];
    afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
    pCStack_14 = (CCharacter_full_vtable *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_7c[0]);
    fStack_18 = (float)pCStack_14;
    if ((float)pCStack_14 < _DAT_005f757f) {
      fStack_18 = (float)pCStack_14 + _DAT_005f7583;
    }
    if (_DAT_005f7587 < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005f758b;
    }
    fStack_1c = delta_time * _DAT_005f7583;
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
  pCStack_24 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  pCStack_14 = (pCStack_24->base).vtable._uc;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,0,&CStack_38);
  pCVar13 = (CVector3f *)(afStack_bc + 3);
  CStack_b0.x = CStack_38.x;
  afStack_bc[(uint)bVar10 * -2 + 4] = *(float *)((int)&CStack_38 + (uint)bVar10 * -8 + 4);
  afStack_bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5] =
       *(float *)((int)&CStack_38 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  iVar4 = (*(pCStack_14->_uc).attractActorToward)(pCStack_24,(CDemonActor *)this_ptr,pCVar13);
  if (iVar4 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_00593454:
    iVar4 = 0;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_00593454;
    if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_00593467;
    iVar4 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,iVar4,1);
LAB_00593467:
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  pCVar11 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar11);
  EVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar6 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
    fVar12 = this_ptr->head_blend_weight;
    iVar4 = _DAT_02c83708;
    core_xform_cpp_FUN_005b7ed0(&this_ptr->head_euler_angles);
    source_quaternions = &CStack_d0;
    CStack_d0.w = fStack_c0;
    pfVar9 = (float *)((int)&CStack_d0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&CStack_d0 + (uint)bVar10 * -8 + 4) = afStack_bc[(uint)bVar10 * -2];
    *pfVar9 = afStack_bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar9[(uint)bVar10 * -2 + 1] =
         (afStack_bc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (pCVar11,source_quaternions,fVar12,iVar4,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  pCVar11 = &(this_ptr->base).base.model;
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_process_FUN_00440610
            (&this_ptr->cape_cloth,&position->position,&euler->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar11);
  core_cloth_cpp_CCloth_process_FUN_00440610
            (&this_ptr->hair_cloth,&position->position,&euler->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar11);
  return;
}
