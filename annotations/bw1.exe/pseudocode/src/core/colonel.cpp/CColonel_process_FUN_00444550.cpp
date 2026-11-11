// Name: core_colonel.cpp_CColonel_process_FUN_00444550
// Address: 00444550
// Address Range: [[00444550, 00444550]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_process_FUN_00444550(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_colonel_cpp_CColonel_process_FUN_00444550(CColonel *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  EWalkState EVar2;
  CDemonActor *pCVar3;
  bool bVar4;
  CCharacter_full_vtable *pCVar5;
  int iVar6;
  EDeathState EVar7;
  int iVar8;
  SMotion *pSVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_18b0 [1522];
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *source_quaternions;
  CCharacter *this_ptr_00;
  float fVar13;
  CColonel *actor;
  CVector3f *pCVar14;
  code *blend_callback;
  CQuaternion4f CStack_d4;
  float fStack_c4;
  float afStack_c0 [3];
  CVector3f CStack_b4;
  uint uStack_a8;
  float afStack_a4 [4];
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CVector3f CStack_48;
  uint uStack_3c;
  uint uStack_30;
  CCharacter *pCStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar11 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  fVar13 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar13;
  if (fVar13 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  func_0x00445140(this_ptr,delta_time);
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_colonel_cpp_FUN_00444b4e(this_ptr,delta_time);
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  pCVar12 = &(this_ptr->base).base.model;
  if (iVar6 == 0) {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar12->base);
    switch(pSVar9->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar6 = 0;
        if ((this_ptr->base).player_input.action_state.walk != 0) {
          if ((this_ptr->base).player_input.action_state.run == 0) {
            iVar6 = 1;
          }
          else {
            iVar6 = 2;
          }
        }
        if ((this_ptr->base).player_input.action_state.backup != 0) {
          iVar6 = 3;
        }
        if ((this_ptr->base).player_input.action_state.draw != 0) {
          iVar8 = this_ptr->guns_drawn;
          (this_ptr->base).player_input.action_state.draw = 0;
          iVar6 = 0;
          this_ptr->guns_drawn = (uint)(iVar8 == 0);
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          bVar4 = true;
          if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
            iVar8 = core_hero_cpp_CHero_tryInteract_FUN_004eb090(&this_ptr->base);
            bVar4 = false;
            if (iVar8 != 0) goto code_r0x00444948;
            iVar8 = core_hero_cpp_FUN_004eb3e0(this_ptr,0);
            if ((iVar8 != 0) && (iVar8 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(&this_ptr->base);
            }
            if ((iVar8 != 0) ||
               (iVar8 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(&this_ptr->base),
               iVar8 != 0)) goto code_r0x00444948;
            iVar8 = core_hero_cpp_FUN_004eb660(&this_ptr->base);
            if (iVar8 != 0) {
              core_hero_cpp_FUN_004eb7f0(this_ptr);
              goto code_r0x00444948;
            }
          }
          else {
code_r0x00444948:
            if (!bVar4) goto code_r0x00444956;
          }
          (this_ptr->base).player_input.action_state.fire = 0;
        }
code_r0x00444956:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
        pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           (&(this_ptr->base).base.model.base);
        if (iVar6 != pSVar9->state_index) goto code_r0x00444639;
      }
      break;
    case 6:
      goto code_r0x0044487e;
    }
  }
  else {
    EVar2 = (this_ptr->base).base.walk_state;
    if (EVar2 < 2) {
      if (EVar2 == WALK_STATE_WALKING) {
        iVar6 = 1;
      }
      else {
code_r0x004448bd:
        iVar6 = 0;
      }
    }
    else {
      if (2 < EVar2) {
        if (EVar2 == WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar12->base,0,1);
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto DAT_00444641;
        }
        goto code_r0x004448bd;
      }
      iVar6 = 2;
    }
code_r0x00444639:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
DAT_00444641:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_60 = (this_ptr->base).base.velocity.x * delta_time;
    pCVar14 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_5c = (this_ptr->base).base.velocity.y * delta_time;
    fStack_58 = (this_ptr->base).base.velocity.z * delta_time;
    afStack_a4[2] = fStack_60;
    afStack_a4[(uint)bVar11 * -2 + 3] = afStack_a4[(uint)bVar11 * -2 + 0x12];
    afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
    pCVar1 = &(this_ptr->base).base.position_delta;
    fStack_54 = pCVar14->x + pCVar1->x;
    fStack_50 = (this_ptr->base).base.model.accumulated_root_motion.y +
                (this_ptr->base).base.position_delta.y;
    fStack_4c = (this_ptr->base).base.model.accumulated_root_motion.z +
                (this_ptr->base).base.position_delta.z;
    fStack_84 = fStack_54;
    afStack_a4[(uint)bVar11 * -2 + 9] = afStack_a4[(uint)bVar11 * -2 + 0x15];
    afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
    fStack_78 = fStack_84 + afStack_a4[2];
    fStack_74 = fStack_80 + afStack_a4[3];
    fStack_70 = fStack_7c + fStack_94;
    CStack_b4.x = fStack_84 + afStack_a4[2];
    *(float *)((int)&CStack_b4 + (uint)bVar11 * -8 + 4) = afStack_a4[(uint)bVar11 * -2 + 0xc];
    *(float *)((int)&CStack_b4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_b4);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      core_actor_cpp_FUN_00408bb0(this_ptr,&pCVar3->location);
      uStack_a8 = uStack_6c;
      afStack_a4[(uint)bVar11 * -2] = afStack_a4[(uint)bVar11 * -2 + 0xf];
      afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&uStack_a8);
      uStack_90 = uStack_30;
      afStack_a4[(uint)bVar11 * -2 + 6] = afStack_a4[(uint)bVar11 * -2 + 0x1e];
      afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
           afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f];
      pCStack_14 = (CCharacter_full_vtable *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(uStack_8c);
      fStack_18 = (float)pCStack_14;
      if ((float)pCStack_14 < _DAT_005d6ca3) {
        fStack_18 = (float)pCStack_14 + _DAT_005d6ca7;
      }
      if (_DAT_005d6cab < fStack_18) {
        fStack_18 = fStack_18 + _DAT_005d6caf;
      }
      fStack_1c = delta_time * _DAT_005d6ca7;
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
    core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,0);
    pCVar5 = pCStack_14;
    this_ptr_00 = pCStack_24;
    pCVar14 = (CVector3f *)(afStack_a4 + 0x17);
    CStack_48.x = (float)uStack_3c;
    afStack_a4[(uint)bVar11 * -2 + 0x18] = afStack_a4[(uint)bVar11 * -2 + 0x1b];
    actor = this_ptr;
    afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
         afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c];
    iVar6 = (*(pCVar5->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)actor,pCVar14);
    if (iVar6 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004447f0:
      iVar6 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004447f0;
      if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_00444803;
      iVar6 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
LAB_00444803:
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  pCVar12 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar12);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar7 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar13 = this_ptr->head_look_blend_weight;
    iVar6 = DAT_007db570;
    core_xform_cpp_FUN_005b7ed0(&this_ptr->head_look_euler);
    source_quaternions = &CStack_d4;
    CStack_d4.w = fStack_c4;
    pfVar10 = (float *)((int)&CStack_d4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(float *)((int)&CStack_d4 + (uint)bVar11 * -8 + 4) = afStack_c0[(uint)bVar11 * -2];
    *pfVar10 = afStack_c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    pfVar10[(uint)bVar11 * -2 + 1] =
         (afStack_c0 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (pCVar12,source_quaternions,fVar13,iVar6,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
code_r0x0044487e:
  return;
}
