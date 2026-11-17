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
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (g_CEventList_PTR_0061b4d0,this_ptr->summon_event);
    if (iVar2 != 0) {
      this_ptr->summoned = 1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar7->base,6,1);
      this_ptr->shell_visible = 1;
    }
  }
  else {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (g_CEventList_PTR_0061b4d0,this_ptr->go_away_event);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar7->base,7,1);
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
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00435320((CCharacter *)this_ptr,delta_time);
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
  core_baron_cpp_CBaron_advanceMotion_FUN_00410110(this_ptr,delta_time);
  if (this_ptr->summoned == 0) {
    return;
  }
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  pCVar7 = &(this_ptr->base).base.model;
  if (iVar2 == 0) {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar7->base);
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
      core_xform_cpp_transformVector3x4_FUN_005b5080
                (&g_CVector3f_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                 g_INT_ARRAY_007c3498[0xd],&CStack_2c);
      pCVar9 = &CStack_38;
      CStack_38.x = CStack_2c.x;
      *(uint *)((int)&CStack_38 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_2c + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
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
      core_xform_cpp_transformVector3x4_FUN_005b5080
                (&g_CVector3f_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                 g_INT_ARRAY_007c3498[0xe],&CStack_80);
      pCVar9 = &CStack_50;
      CStack_50.x = CStack_80.x;
      *(uint *)((int)&CStack_50 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_80 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_80 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
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
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004b7150
                  (g_CFireEffect_PTR_0061c010,&CStack_44,&this_ptr->left_hand_pos,2.0,0.5,0.5,
                   &g_SMRGLTextureBasic_00610914);
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004b7150
                  (g_CFireEffect_PTR_0061c010,&CStack_20,&this_ptr->right_hand_pos,2.0,0.5,0.5,
                   &g_SMRGLTextureBasic_00610914);
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
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar7->base,0,1);
      engine_console_cpp_CConsole_printf_FUN_00445430
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
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
  core_charactr_cpp_CCharacter_applyGravity_FUN_0042d700((CCharacter *)this_ptr,delta_time);
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  pCVar7 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar7);
  blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
  fVar8 = this_ptr->head_blend_weight;
  iVar2 = g_INT_ARRAY_007c3498[0];
  core_xform_cpp_eulerToQuaternion_FUN_005b7ed0(&this_ptr->head_rotation,&CStack_b8);
  source_quaternions = &CStack_a8;
  CStack_a8.w = CStack_b8.w;
  puVar5 = (uint *)((int)&CStack_a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar4 = (uint *)((int)&CStack_b8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&CStack_a8 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&CStack_b8 + (uint)bVar6 * -8 + 4);
  *puVar5 = *puVar4;
  puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
            (pCVar7,source_quaternions,fVar8,iVar2,blend_callback);
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
              (g_CFireEffect_PTR_0061c010,&CStack_68,2.0,(CVector3f *)0x0,0xffff);
  } while (iVar2 < 2);
  g_FLOAT_007c34dc = g_FLOAT_007c34dc + delta_time;
  return;
}
