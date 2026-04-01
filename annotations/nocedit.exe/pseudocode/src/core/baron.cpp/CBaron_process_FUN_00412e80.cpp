// Name: core_baron.cpp_CBaron_process_FUN_00412e80
// Address: 00412e80
// Address Range: [[00412e80, 00413463] [0060eb5b, 0060eb7c]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_process_FUN_00412e80(CBaron *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_baron_cpp_CBaron_process_FUN_00412e80(CBaron *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  int iVar3;
  int iVar2;
  float fVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  SMotion *pSVar6;
  SMotion *pSVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1880 [1519];
  CQuaternion4f local_a4;
  CQuaternion4f local_94;
  CVector3f local_84;
  CVector3f local_78;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  CVector3f local_24;
  float local_10;
  CDeformableModelInstance *pCVar9;
  float fVar10;
  CQuaternion4f *source_quaternions;
  byte *blend_callback;
  uint uVar1;
  CGame *pCVar2;
  
  pCVar1 = &(this_ptr->base).base.model;
  if (this_ptr->summoned == 0) {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->summon_event);
    if (iVar2 != 0) {
      this_ptr->summoned = 1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,6,1)
      ;
      this_ptr->shell_visible = 1;
    }
  }
  else {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->go_away_event);
    if (iVar3 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,7,1)
      ;
    }
  }
  if (((this_ptr->summoned == 0) && ((this_ptr->base).control_type == HERO_CONTROL_AI)) ||
     (iVar2 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time),
     iVar2 == 0)) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_baron_cpp_CBaron_updateMountedPosition_FUN_004135e0(this_ptr);
  }
  pCVar2 = g_CGamePtr;
  (this_ptr->base).base.turn_speed = delta_time * (float)12.566370614;
  if (pCVar2->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  fVar3 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar3;
  if (fVar3 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_baron_cpp_CBaron_advanceMotion_FUN_00413a00(this_ptr,delta_time);
  if (this_ptr->summoned == 0) {
    return;
  }
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  pCVar1 = &(this_ptr->base).base.model;
  if (iVar2 == 0) {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar1->motion_controller);
    switch(pSVar5->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar2 = 0;
      if ((this_ptr->base).player_control.action_bindings.walk_key != 0) {
        if ((this_ptr->base).player_control.action_bindings.run_key == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = 3;
        }
      }
      if ((this_ptr->base).player_control.action_bindings.backup_key != 0) {
        iVar2 = 2;
      }
      if ((this_ptr->base).player_control.action_bindings.fire_key != 0) {
        this_ptr->new_attack = 1;
        iVar2 = 4;
        (this_ptr->base).player_control.action_bindings.fire_key = 0;
      }
      (this_ptr->base).base.turn_angle_accumulator =
           (this_ptr->base).player_control.turn_speed * (this_ptr->base).base.turn_speed;
      pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller);
      if (iVar2 == pSVar6->state_index) break;
      goto LAB_0041300c;
    case 4:
      pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_84,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          g_BaronIndices[0xd]);
      pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_48,pCVar4);
      if (&local_30 != pCVar5) {
        local_30.x = pCVar5->x;
        local_30.y = pCVar5->y;
        local_30.z = pCVar5->z;
      }
      pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_24,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          g_BaronIndices[0xe]);
      pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_78,pCVar5);
      if (&local_54 != pCVar5) {
        local_54.x = pCVar5->x;
        local_54.y = pCVar5->y;
        local_54.z = pCVar5->z;
      }
      if (this_ptr->new_attack == 0) {
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004c90c0
                  (g_CFireEffectPtr,&local_30,&this_ptr->left_hand_pos,2.0,0.5,0.5,
                   &SMRGLTextureBasic_0066e460);
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004c90c0
                  (g_CFireEffectPtr,&local_54,&this_ptr->right_hand_pos,2.0,0.5,0.5,
                   &SMRGLTextureBasic_0066e460);
      }
      if (&this_ptr->left_hand_pos != &local_30) {
        (this_ptr->left_hand_pos).x = local_30.x;
        (this_ptr->left_hand_pos).y = local_30.y;
        (this_ptr->left_hand_pos).z = local_30.z;
      }
      if (&this_ptr->right_hand_pos != &local_54) {
        (this_ptr->right_hand_pos).x = local_54.x;
        (this_ptr->right_hand_pos).y = local_54.y;
        (this_ptr->right_hand_pos).z = local_54.z;
      }
      this_ptr->new_attack = 0;
    }
    goto switchD_0041345d_default;
  }
  uVar1 = (this_ptr->base).base.is_walking;
  if (uVar1 < 2) {
    if (uVar1 != 1) goto LAB_00413237;
    iVar2 = 1;
  }
  else if (uVar1 < 3) {
    iVar2 = 3;
  }
  else {
    if (uVar1 == 3) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
      goto switchD_0041345d_default;
    }
LAB_00413237:
    iVar2 = 0;
  }
LAB_0041300c:
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,iVar2,1);
switchD_0041345d_default:
  fVar3 = (float)32;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  (this_ptr->base).base.velocity.y = (this_ptr->base).base.velocity.y - delta_time * fVar3;
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
  fVar3 = this_ptr->head_blend_weight;
  iVar2 = g_BaronIndices[0];
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&this_ptr->head_rotation,&local_a4);
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (pCVar1,&local_94,fVar3,iVar2,(CDeformableModel_MotionBlendWeightFunc *)blend_callback);
  iVar2 = 0;
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  do {
    local_60.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-2.0,2.0);
    iVar2 = iVar2 + 1;
    local_60.y = 2.0;
    fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-2.0,2.0);
    local_60.x = local_60.x + (this_ptr->base).base.base.location.position.x;
    local_60.y = local_60.y + (this_ptr->base).base.base.location.position.y;
    local_60.z = fVar3 + (this_ptr->base).base.base.location.position.z;
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
              (g_CFireEffectPtr,&local_60,2.0,(CVector3f *)0x0,0xffff);
  } while (iVar2 < 2);
  FLOAT_008224dc = FLOAT_008224dc + delta_time;
  return;
}
