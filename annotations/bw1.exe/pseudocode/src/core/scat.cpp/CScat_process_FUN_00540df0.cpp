// Name: core_scat.cpp_CScat_process_FUN_00540df0
// Address: 00540df0
// Address Range: [[00540df0, 005415b2]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_process_FUN_00540df0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_process_FUN_00540df0(CScat *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  EWalkState EVar2;
  CCharacter_full_vtable *pCVar3;
  CWeapon *pCVar4;
  CMotionController *pCVar5;
  int iVar6;
  CMotionController *this_ptr_00;
  CDemonActor *pCVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  EDeathState EVar12;
  SMotion *pSVar13;
  int desired_state_index;
  byte bVar14;
  float in_stack_0000001c;
  uint in_stack_00000020;
  float in_stack_00000024;
  float afStackY_187c [1517];
  CDemonActor *in_stack_ffffff44;
  int in_stack_ffffff48;
  CCharacter *pCVar15;
  CDeformableModelInstance *pCVar16;
  CDemonActor *in_stack_ffffff50;
  CScat *actor;
  CQuaternion4f *source_quaternions;
  CVector3f *pCVar17;
  float fVar18;
  code *blend_callback;
  float in_stack_ffffff60;
  CQuaternion4f CStack_90;
  float afStack_80 [4];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  float fStack_60;
  float afStack_58 [3];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  uint uStack_28;
  float afStack_24 [2];
  CVector3f CStack_1c;
  
  bVar14 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
switchD_00541320_caseD_5:
    return;
  }
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  fVar18 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar18;
  if (fVar18 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar17 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar17->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_00541af0(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
      core_scat_cpp_CScat_updateAI_FUN_005415c0(this_ptr,delta_time);
    }
    pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                        (&(this_ptr->base).base.model.base);
    switch(pSVar13->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar6 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
        desired_state_index = 0;
        if (iVar6 != 0) {
          desired_state_index = 7;
        }
        if ((this_ptr->base).player_input.action_state.walk != 0) {
          iVar6 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
          if (iVar6 == 0) {
            if ((this_ptr->base).player_input.action_state.run == 0) {
              desired_state_index = 1;
            }
            else {
              desired_state_index = 2;
            }
          }
          else {
            desired_state_index = 9;
          }
        }
        if ((this_ptr->base).player_input.action_state.backup != 0) {
          iVar6 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
          if (iVar6 == 0) {
            desired_state_index = 3;
          }
          else {
            desired_state_index = 10;
          }
        }
        if (((((this_ptr->base).player_input.action_state.fire != 0) && (this_ptr->guns_drawn != 0))
            && (pCVar15 = (CCharacter *)this_ptr->weapon_actor, pCVar15 != (CCharacter *)0x0)) &&
           (iVar6 = (*(((pCVar15->base).vtable._uc)->_uc).canBeGrabbed)
                              (pCVar15,in_stack_ffffff44,in_stack_ffffff48), iVar6 != 0)) {
          (*(((((CCharacter *)this_ptr->weapon_actor)->base).vtable._uc)->_uc).isGrabbable)
                    ((CCharacter *)this_ptr->weapon_actor,in_stack_ffffff50);
          pCVar4 = this_ptr->weapon_actor;
          (this_ptr->base).player_input.action_state.fire = 0;
          if (pCVar4->weapon_type == WEAPON_TYPE_BARON) {
            desired_state_index = 0xb;
          }
        }
        pCVar16 = &(this_ptr->base).base.model;
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed +
             (this_ptr->base).base.turn_angle_accumulator;
        pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar16->base);
        if (desired_state_index != pSVar13->state_index) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&pCVar16->base,desired_state_index,1);
        }
        if ((this_ptr->base).player_input.action_state.draw != 0) {
          (this_ptr->base).player_input.action_state.draw = 0;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                    ((CEnemy *)this_ptr,(float)(uint)(this_ptr->guns_drawn == 0));
        }
      }
      break;
    case 5:
      goto switchD_00541320_caseD_5;
    }
  }
  else {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar17->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    EVar2 = (this_ptr->base).base.walk_state;
    if (EVar2 < 2) {
      if (EVar2 == WALK_STATE_WALKING) {
        iVar6 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
        if (iVar6 == 0) {
          iVar6 = 1;
        }
        else {
LAB_00540ee3:
          iVar6 = 9;
        }
      }
      else {
LAB_005412cd:
        iVar6 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = 7;
        }
      }
    }
    else if (EVar2 < WALK_STATE_NO_PATH) {
      iVar6 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
      if (iVar6 != 0) goto LAB_00540ee3;
      iVar6 = 2;
    }
    else {
      if (EVar2 != WALK_STATE_NO_PATH) goto LAB_005412cd;
      engine_console_cpp_CConsole_printf_FUN_00445430
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
      iVar6 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
  pCVar7 = (this_ptr->base).base.grabbed_by;
  if (pCVar7 == (CDemonActor *)0x0) {
    pCVar17 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.position_delta;
    fStack_40 = pCVar17->x + pCVar1->x;
    fStack_3c = (this_ptr->base).base.model.accumulated_root_motion.y +
                (this_ptr->base).base.position_delta.y;
    fStack_38 = (this_ptr->base).base.model.accumulated_root_motion.z +
                (this_ptr->base).base.position_delta.z;
    CStack_1c.x = fStack_40;
    *(float *)((int)&CStack_1c + (uint)bVar14 * -8 + 4) = afStack_80[(uint)bVar14 * -2 + 0x11];
    *(float *)((int)&CStack_1c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         afStack_80[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x12];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar17->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_FUN_0042d700(this_ptr,in_stack_0000001c);
    fStack_4c = (this_ptr->base).base.velocity.x * in_stack_0000001c;
    pCVar17 = &CStack_1c;
    fStack_48 = (this_ptr->base).base.velocity.y * in_stack_0000001c;
    fStack_44 = (this_ptr->base).base.velocity.z * in_stack_0000001c;
    fStack_70 = fStack_4c;
    afStack_80[(uint)bVar14 * -2 + 5] = afStack_80[(uint)bVar14 * -2 + 0xe];
    afStack_80[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 6] =
         afStack_80[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xf];
    CStack_1c.x = CStack_1c.x + fStack_70;
    CStack_1c.y = CStack_1c.y + fStack_6c;
    CStack_1c.z = CStack_1c.z + fStack_68;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,pCVar17);
    goto LAB_00541092;
  }
  core_actor_cpp_FUN_00408bb0(this_ptr,&pCVar7->location);
  afStack_58[0] = afStack_80[1];
  afStack_80[(uint)bVar14 * -2 + 0xb] = afStack_80[(uint)bVar14 * -2 + 2];
  afStack_80[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xc] =
       afStack_80[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 3];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_80 + 10);
  uStack_64 = uStack_28;
  afStack_80[(uint)bVar14 * -2 + 8] = afStack_24[(uint)bVar14 * -2];
  afStack_80[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 9] =
       afStack_24[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
  this_ptr_00 = (CMotionController *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_60);
  if ((float)this_ptr_00 < _DAT_005ede4b) {
    this_ptr_00 = (CMotionController *)((float)this_ptr_00 + _DAT_005ede4f);
  }
  if (_DAT_005ede53 < (float)this_ptr_00) {
    this_ptr_00 = (CMotionController *)((float)this_ptr_00 + _DAT_005ede57);
  }
  pCVar5 = (CMotionController *)(in_stack_0000001c * _DAT_005ede4f);
  if ((float)this_ptr_00 < -(float)pCVar5) {
    this_ptr_00 = (CMotionController *)-(float)pCVar5;
  }
  if ((float)pCVar5 < (float)this_ptr_00) {
    this_ptr_00 = pCVar5;
  }
  (this_ptr->base).base.base.orient.vec.y =
       (this_ptr->base).base.base.orient.vec.y + (float)this_ptr_00;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
  pCVar15 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  pCVar3 = (pCVar15->base).vtable._uc;
  core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,0);
  pCVar17 = &CStack_34;
  CStack_34.x = CStack_90.y;
  *(float *)((int)&CStack_34 + (uint)bVar14 * -8 + 4) = afStack_80[(uint)bVar14 * -2 + -1];
  actor = this_ptr;
  *(float *)((int)&CStack_34 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
       afStack_80[(uint)bVar14 * -2 + (uint)bVar14 * -2];
  iVar6 = (*(pCVar3->_uc).attractActorToward)(pCVar15,(CDemonActor *)actor,pCVar17);
  if (iVar6 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_0054107f:
    iVar6 = 0;
    this_ptr_00 = &(this_ptr->base).base.model.base;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_0054107f;
    if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_00541092;
    iVar6 = 0xf;
  }
  in_stack_ffffff60 = 1.4013e-45;
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr_00,iVar6,1);
LAB_00541092:
  core_inv_cpp_FUN_004f9f10(&(this_ptr->base).inventory);
  pCVar4 = this_ptr->weapon_actor;
  if (pCVar4 != (CWeapon *)0x0) {
    (*((pCVar4->base).vtable._ub)->process)(&pCVar4->base,in_stack_0000001c);
  }
  core_scat_cpp_CScat_updateWeaponState_FUN_00541e30(this_ptr,in_stack_0000001c);
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  fVar18 = (this_ptr->base).base.hit_points;
  pCVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getGrabber)((CCharacter *)this_ptr);
  fVar8 = (float)core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model,0xc);
  fVar9 = (float)core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model,0xd);
  fVar10 = (float)core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model,4);
  fVar11 = (float)core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model,5);
  core_scat_cpp_FUN_005424f0
            (this_ptr,in_stack_00000020,
             0.0 < fVar11 ||
             (0.0 < fVar10 ||
             (0.0 < fVar9 || (0.0 < fVar8 || (pCVar7 != (CDemonActor *)0x0 || fVar18 <= 0.0)))));
  pCVar16 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar16);
  core_scat_cpp_CScat_blendLayerAction_FUN_00542090(this_ptr);
  iVar6 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
  if ((iVar6 == 0) &&
     (EVar12 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                         ((CCharacter *)this_ptr), EVar12 == DEATH_STATE_ALIVE)) {
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar18 = this_ptr->head_blend_weight;
    iVar6 = _DAT_01e7e014;
    core_xform_cpp_FUN_005b7ed0(&this_ptr->head_euler_angles);
    source_quaternions = &CStack_90;
    CStack_90.w = in_stack_ffffff60;
    afStack_80[(uint)bVar14 * -2 + -3] = *(float *)(&stack0xffffff64 + (uint)bVar14 * -8);
    afStack_80[(uint)bVar14 * -2 + (uint)bVar14 * -2 + -2] =
         *(float *)(&stack0xffffff68 + (uint)bVar14 * -8 + (uint)bVar14 * -8);
    (afStack_80 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + -2)[(uint)bVar14 * -2 + 1] =
         *(float *)((int)(&stack0xffffff68 + (uint)bVar14 * -8 + (uint)bVar14 * -8) +
                   ((uint)bVar14 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (pCVar16,source_quaternions,fVar18,iVar6,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80
            ((CCharacter *)this_ptr,in_stack_00000024);
  core_scat_cpp_FUN_00542f20(this_ptr);
  return;
}
