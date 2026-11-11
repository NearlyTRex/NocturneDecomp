// Name: core_baron.cpp_CBaron_process_FUN_0040f4d0
// Address: 0040f4d0
// Address Range: [[0040f4d0, 0040fa65]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_process_FUN_0040f4d0(CBaron *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_baron_cpp_CBaron_process_FUN_0040f4d0(CBaron *this_ptr,float delta_time)

{
  EWalkState EVar1;
  int iVar2;
  SMotion *pSVar3;
  byte bVar4;
  float afStackY_1894 [1520];
  CDeformableModelInstance *pCVar5;
  CQuaternion4f *source_quaternions;
  float fVar6;
  code *blend_callback;
  uint *puVar7;
  float *pfVar8;
  float fStack_b8;
  CQuaternion4f CStack_a8;
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [5];
  float fStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [2];
  CVector3f CStack_44;
  uint uStack_38;
  float afStack_34 [5];
  CVector3f CStack_20;
  float fStack_14;
  
  bVar4 = 0;
  pCVar5 = &(this_ptr->base).base.model;
  if (this_ptr->summoned == 0) {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,this_ptr->summon_event);
    if (iVar2 != 0) {
      this_ptr->summoned = 1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar5->base,6,1);
      this_ptr->shell_visible = 1;
    }
  }
  else {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,this_ptr->go_away_event);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar5->base,7,1);
    }
  }
  if (((this_ptr->summoned == 0) && ((this_ptr->base).control_type == HERO_CONTROL_AI)) ||
     (iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                        ((CCharacter *)this_ptr,delta_time), iVar2 == 0)) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_baron_cpp_CBaron_updateMountedPosition_FUN_0040fc00(this_ptr,delta_time);
  }
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
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
  core_baron_cpp_CBaron_advanceMotion_FUN_00410110(this_ptr,delta_time);
  if (this_ptr->summoned == 0) {
    return;
  }
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  pCVar5 = &(this_ptr->base).base.model;
  if (iVar2 == 0) {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar5->base);
    switch(pSVar3->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar2 = 0;
      if ((this_ptr->base).player_input.action_state.walk != 0) {
        if ((this_ptr->base).player_input.action_state.run == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = 3;
        }
      }
      if ((this_ptr->base).player_input.action_state.backup != 0) {
        iVar2 = 2;
      }
      if ((this_ptr->base).player_input.action_state.fire != 0) {
        this_ptr->new_attack = 1;
        iVar2 = 4;
        (this_ptr->base).player_input.action_state.fire = 0;
      }
      (this_ptr->base).base.turn_angle_accumulator =
           (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         (&(this_ptr->base).base.model.base);
      if (iVar2 == pSVar3->state_index) break;
      goto LAB_0040f63a;
    case 4:
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + DAT_007c34cc);
      puVar7 = &uStack_38;
      uStack_38 = afStack_34[2];
      afStack_34[(uint)bVar4 * -2] = afStack_34[(uint)bVar4 * -2 + 3];
      afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      core_actor_cpp_FUN_00408b40(this_ptr,puVar7);
      CStack_98.x = fStack_74;
      *(float *)((int)&CStack_98 + (uint)bVar4 * -8 + 4) = afStack_88[(uint)bVar4 * -2 + 6];
      *(float *)((int)&CStack_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      if (&CStack_44 != &CStack_98) {
        CStack_44.x = CStack_98.x;
        CStack_44.y = CStack_98.y;
        CStack_44.z = CStack_98.z;
      }
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + DAT_007c34d0);
      pfVar8 = &fStack_50;
      fStack_50 = afStack_88[2];
      afStack_4c[(uint)bVar4 * -2] = afStack_88[(uint)bVar4 * -2 + 3];
      afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar8);
      CStack_5c.x = fStack_8c;
      *(float *)((int)&CStack_5c + (uint)bVar4 * -8 + 4) = afStack_88[(uint)bVar4 * -2];
      *(float *)((int)&CStack_5c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&CStack_20 != &CStack_5c) {
        CStack_20.x = CStack_5c.x;
        CStack_20.y = CStack_5c.y;
        CStack_20.z = CStack_5c.z;
      }
      if (this_ptr->new_attack == 0) {
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004b7150
                  (0x01C57074,&CStack_44,&this_ptr->left_hand_pos,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_00610914);
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004b7150
                  (0x01C57074,&CStack_20,&this_ptr->right_hand_pos,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_00610914);
      }
      if (&this_ptr->left_hand_pos != &CStack_44) {
        (this_ptr->left_hand_pos).x = CStack_44.x;
        (this_ptr->left_hand_pos).y = CStack_44.y;
        (this_ptr->left_hand_pos).z = CStack_44.z;
      }
      if (&this_ptr->right_hand_pos != &CStack_20) {
        (this_ptr->right_hand_pos).x = CStack_20.x;
        (this_ptr->right_hand_pos).y = CStack_20.y;
        (this_ptr->right_hand_pos).z = CStack_20.z;
      }
      this_ptr->new_attack = 0;
    }
    goto switchD_0040fa5f_default;
  }
  EVar1 = (this_ptr->base).base.walk_state;
  if (EVar1 < 2) {
    if (EVar1 != WALK_STATE_WALKING) goto LAB_0040f7dd;
    iVar2 = 1;
  }
  else if (EVar1 < WALK_STATE_NO_PATH) {
    iVar2 = 3;
  }
  else {
    if (EVar1 == WALK_STATE_NO_PATH) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar5->base,0,1);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
      goto switchD_0040fa5f_default;
    }
LAB_0040f7dd:
    iVar2 = 0;
  }
LAB_0040f63a:
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,iVar2,1);
switchD_0040fa5f_default:
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  pCVar5 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar5);
  blend_callback = core_skeleton_cpp_FUN_00567360;
  fVar6 = this_ptr->head_blend_weight;
  iVar2 = DAT_007c3498;
  core_xform_cpp_FUN_005b7ed0(&this_ptr->head_rotation);
  source_quaternions = &CStack_a8;
  CStack_a8.w = fStack_b8;
  puVar7 = (uint *)((int)&CStack_a8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&CStack_a8 + (uint)bVar4 * -8 + 4) =
       *(uint *)(&stack0xffffff4c + (uint)bVar4 * -8);
  *puVar7 = *(uint *)(&stack0xffffff50 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  puVar7[(uint)bVar4 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff50 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
            (pCVar5,source_quaternions,fVar6,iVar2,blend_callback);
  iVar2 = 0;
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  do {
    CStack_68.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
    iVar2 = iVar2 + 1;
    CStack_68.y = 2.0;
    fStack_14 = CStack_68.x;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
    CStack_68.x = CStack_68.x + (this_ptr->base).base.base.location.position.x;
    CStack_68.y = CStack_68.y + (this_ptr->base).base.base.location.position.y;
    CStack_68.z = fStack_14 + (this_ptr->base).base.base.location.position.z;
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
              (0x01C57074,&CStack_68,2.0,(CVector3f *)0x0,0xffff);
  } while (iVar2 < 2);
  DAT_007c34dc = DAT_007c34dc + delta_time;
  return;
}
