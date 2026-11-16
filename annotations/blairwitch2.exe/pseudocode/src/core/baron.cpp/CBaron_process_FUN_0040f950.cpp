// Name: core_baron.cpp_CBaron_process_FUN_0040f950
// Address: 0040f950
// Address Range: [[0040f950, 0040fee5]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_process_FUN_0040f950(CBaron *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_baron_cpp_CBaron_process_FUN_0040f950(CBaron *this_ptr,float delta_time)

{
  EWalkState EVar1;
  int iVar2;
  SMotion *pSVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1894 [1520];
  CDeformableModelInstance *pCVar7;
  CQuaternion4f *source_quaternions;
  float fVar8;
  code *blend_callback;
  CVector3f *pCVar9;
  CQuaternion4f CStack_b8;
  CQuaternion4f CStack_a8;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float fStack_14;
  
  bVar6 = 0;
  pCVar7 = &(this_ptr->base).base.model;
  if (this_ptr->summoned == 0) {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->summon_event);
    if (iVar2 != 0) {
      this_ptr->summoned = 1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar7->base,6,1);
      this_ptr->shell_visible = 1;
    }
  }
  else {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->go_away_event);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar7->base,7,1);
    }
  }
  if (((this_ptr->summoned == 0) && ((this_ptr->base).control_type == HERO_CONTROL_AI)) ||
     (iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                        ((CCharacter *)this_ptr,delta_time), iVar2 == 0)) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_baron_cpp_CBaron_updateMountedPosition_FUN_00410080(this_ptr,delta_time);
  }
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_0042b2a0((CCharacter *)this_ptr,delta_time);
  fVar8 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar8;
  if (fVar8 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_baron_cpp_CBaron_advanceMotion_FUN_00410590(this_ptr,delta_time);
  if (this_ptr->summoned == 0) {
    return;
  }
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  pCVar7 = &(this_ptr->base).base.model;
  if (iVar2 == 0) {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar7->base);
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
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                         (&(this_ptr->base).base.model.base);
      if (iVar2 == pSVar3->state_index) break;
      goto LAB_0040faba;
    case 4:
      core_xform_cpp_transformVector3x4_FUN_00591530
                ((CVector3f *)&DAT_0265370c,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + DAT_007bc4cc,
                 &CStack_2c);
      pCVar9 = &CStack_38;
      CStack_38.x = CStack_2c.x;
      *(uint *)((int)&CStack_38 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_2c + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar9,&CStack_74);
      CStack_98.x = CStack_74.x;
      *(uint *)((int)&CStack_98 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_74 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_98 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_74 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      if (&CStack_44 != &CStack_98) {
        CStack_44.x = CStack_98.x;
        CStack_44.y = CStack_98.y;
        CStack_44.z = CStack_98.z;
      }
      core_xform_cpp_transformVector3x4_FUN_00591530
                ((CVector3f *)&DAT_0265370c,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + DAT_007bc4d0,
                 &CStack_80);
      pCVar9 = &CStack_50;
      CStack_50.x = CStack_80.x;
      *(uint *)((int)&CStack_50 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_80 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_80 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar9,&CStack_8c);
      CStack_5c.x = CStack_8c.x;
      *(uint *)((int)&CStack_5c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_8c + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      if (&CStack_20 != &CStack_5c) {
        CStack_20.x = CStack_5c.x;
        CStack_20.y = CStack_5c.y;
        CStack_20.z = CStack_5c.z;
      }
      if (this_ptr->new_attack == 0) {
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0049e850
                  (0x01C3DEB4,&CStack_44,&this_ptr->left_hand_pos,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_00609810);
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0049e850
                  (0x01C3DEB4,&CStack_20,&this_ptr->right_hand_pos,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_00609810);
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
    goto switchD_0040fedf_default;
  }
  EVar1 = (this_ptr->base).base.walk_state;
  if (EVar1 < 2) {
    if (EVar1 != WALK_STATE_WALKING) goto LAB_0040fc5d;
    iVar2 = 1;
  }
  else if (EVar1 < WALK_STATE_NO_PATH) {
    iVar2 = 3;
  }
  else {
    if (EVar1 == WALK_STATE_NO_PATH) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar7->base,0,1);
      engine_console_cpp_CConsole_printf_FUN_00436710
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
      goto switchD_0040fedf_default;
    }
LAB_0040fc5d:
    iVar2 = 0;
  }
LAB_0040faba:
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.model.base,iVar2,1);
switchD_0040fedf_default:
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10((CCharacter *)this_ptr,delta_time);
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  pCVar7 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar7);
  blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
  fVar8 = this_ptr->head_blend_weight;
  iVar2 = DAT_007bc498;
  core_xform_cpp_eulerToQuaternion_FUN_00594380(&this_ptr->head_rotation,&CStack_b8);
  source_quaternions = &CStack_a8;
  CStack_a8.w = CStack_b8.w;
  puVar5 = (uint *)((int)&CStack_a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar4 = (uint *)((int)&CStack_b8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&CStack_a8 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&CStack_b8 + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar4;
  puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
            (pCVar7,source_quaternions,fVar8,iVar2,blend_callback);
  iVar2 = 0;
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  do {
    CStack_68.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-2.0,2.0);
    iVar2 = iVar2 + 1;
    CStack_68.y = 2.0;
    fStack_14 = CStack_68.x;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-2.0,2.0);
    CStack_68.x = CStack_68.x + (this_ptr->base).base.base.location.position.x;
    CStack_68.y = CStack_68.y + (this_ptr->base).base.base.location.position.y;
    CStack_68.z = fStack_14 + (this_ptr->base).base.base.location.position.z;
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
              (0x01C3DEB4,&CStack_68,2.0,(CVector3f *)0x0,0xffff);
  } while (iVar2 < 2);
  DAT_007bc4dc = DAT_007bc4dc + delta_time;
  return;
}
