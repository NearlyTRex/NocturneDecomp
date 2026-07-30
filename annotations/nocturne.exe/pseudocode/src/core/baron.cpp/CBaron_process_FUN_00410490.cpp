// Name: core_baron.cpp_CBaron_process_FUN_00410490
// Address: 00410490
// Address Range: [[00410490, 00410a73]]
// Convention: unknown
// Signature: void core_baron_cpp_CBaron_process_FUN_00410490(CBaron *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_baron_cpp_CBaron_process_FUN_00410490(CBaron *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  CVector3f *pCVar3;
  SMotion *pSVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1880 [1519];
  CDeformableModelInstance *pCVar7;
  CQuaternion4f *source_quaternions;
  float fVar8;
  code *blend_callback;
  float local_a4;
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
  
  bVar6 = 0;
  pCVar7 = &(param_1->base).base.model;
  if (param_1->summoned == 0) {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->summon_event);
    if (iVar2 != 0) {
      param_1->summoned = 1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar7->motion_controller,6,1)
      ;
      param_1->shell_visible = 1;
    }
  }
  else {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->go_away_event);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar7->motion_controller,7,1)
      ;
    }
  }
  if (((param_1->summoned == 0) && ((param_1->base).control_type == HERO_CONTROL_AI)) ||
     (iVar2 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2), iVar2 == 0)) {
    return;
  }
  if ((param_1->base).control_type == HERO_CONTROL_AI) {
    core_baron_cpp_CBaron_updateMountedPosition_FUN_00410bf0(param_1,param_2);
  }
  iVar2 = 0x01C775EC;
  (param_1->base).base.turn_speed = param_2 * (float)12.566370614;
  if (*(int *)(iVar2 + 0x228) != 0) {
    (param_1->base).base.turn_speed = (param_1->base).base.turn_speed * (float)0.33333333333333298;
  }
  fVar8 = (param_1->base).invincibility_timer - param_2;
  (param_1->base).invincibility_timer = fVar8;
  if (fVar8 < 0.0) {
    (param_1->base).invincibility_timer = 0.0;
  }
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
  core_baron_cpp_CBaron_advanceMotion_FUN_00411010(param_1,param_2);
  if (param_1->summoned == 0) {
    return;
  }
  iVar2 = core_charactr_cpp_FUN_00428c00((CCharacter *)param_1,param_2);
  pCVar7 = &(param_1->base).base.model;
  if (iVar2 == 0) {
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&pCVar7->motion_controller);
    switch(pSVar4->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar2 = 0;
      if ((param_1->base).player_input.action_state.walk != 0) {
        if ((param_1->base).player_input.action_state.run == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = 3;
        }
      }
      if ((param_1->base).player_input.action_state.backup != 0) {
        iVar2 = 2;
      }
      if ((param_1->base).player_input.action_state.fire != 0) {
        param_1->new_attack = 1;
        iVar2 = 4;
        (param_1->base).player_input.action_state.fire = 0;
      }
      (param_1->base).base.turn_angle_accumulator =
           (param_1->base).player_input.turn_speed * (param_1->base).base.turn_speed;
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&(param_1->base).base.model.motion_controller);
      if (iVar2 == pSVar4->state_index) break;
      goto LAB_0041061c;
    case 4:
      pCVar3 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_84,(CVector3f *)&DAT_02dd1184,
                          (param_1->base).base.model.bone_transform.bone_world_matrices +
                          DAT_0076431c);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_48,pCVar3);
      if (&local_30 != pCVar3) {
        local_30.x = pCVar3->x;
        local_30.y = pCVar3->y;
        local_30.z = pCVar3->z;
      }
      pCVar3 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_24,(CVector3f *)&DAT_02dd1184,
                          (param_1->base).base.model.bone_transform.bone_world_matrices +
                          DAT_00764320);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_78,pCVar3);
      if (&local_54 != pCVar3) {
        local_54.x = pCVar3->x;
        local_54.y = pCVar3->y;
        local_54.z = pCVar3->z;
      }
      if (param_1->new_attack == 0) {
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0048c590
                  (0x01C08D04,&local_30,&param_1->left_hand_pos,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_005acf40);
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0048c590
                  (0x01C08D04,&local_54,&param_1->right_hand_pos,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_005acf40);
      }
      if (&param_1->left_hand_pos != &local_30) {
        (param_1->left_hand_pos).x = local_30.x;
        (param_1->left_hand_pos).y = local_30.y;
        (param_1->left_hand_pos).z = local_30.z;
      }
      if (&param_1->right_hand_pos != &local_54) {
        (param_1->right_hand_pos).x = local_54.x;
        (param_1->right_hand_pos).y = local_54.y;
        (param_1->right_hand_pos).z = local_54.z;
      }
      param_1->new_attack = 0;
    }
    goto switchD_00410a6d_default;
  }
  uVar1 = (param_1->base).base.is_walking;
  if (uVar1 < 2) {
    if (uVar1 != 1) goto LAB_00410847;
    iVar2 = 1;
  }
  else if (uVar1 < 3) {
    iVar2 = 3;
  }
  else {
    if (uVar1 == 3) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar7->motion_controller,0,1)
      ;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
      goto switchD_00410a6d_default;
    }
LAB_00410847:
    iVar2 = 0;
  }
LAB_0041061c:
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(param_1->base).base.model.motion_controller,iVar2,1);
switchD_00410a6d_default:
  pCVar3 = &(param_1->base).base.model.accumulated_root_motion;
  fVar8 = (float)32;
  local_6c = pCVar3->x;
  local_68 = (param_1->base).base.model.accumulated_root_motion.y;
  local_64 = (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  pCVar3->x = (param_1->base).base.model.accumulated_root_motion.y;
  (param_1->base).base.velocity.y = (param_1->base).base.velocity.y - param_2 * fVar8;
  local_3c = (param_1->base).base.velocity.x * param_2;
  local_38 = (param_1->base).base.velocity.y * param_2;
  local_34 = (param_1->base).base.velocity.z * param_2;
  local_6c = local_6c + local_3c;
  local_68 = local_68 + local_38;
  local_64 = local_64 + local_34;
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  pCVar7 = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar7);
  blend_callback = core_skeleton_cpp_FUN_0051b650;
  fVar8 = param_1->head_blend_weight;
  iVar2 = DAT_007642e8;
  core_xform_cpp_eulerToQuaternion_FUN_0055d610(&param_1->head_rotation);
  source_quaternions = &local_94;
  local_94.w = local_a4;
  puVar5 = (uint *)((int)&local_94 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(uint *)((int)&local_94 + (uint)bVar6 * -8 + 4) =
       *(uint *)(&stack0xffffff60 + (uint)bVar6 * -8);
  *puVar5 = *(uint *)(&stack0xffffff64 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  puVar5[(uint)bVar6 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff64 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
            (pCVar7,source_quaternions,fVar8,iVar2,blend_callback);
  iVar2 = 0;
  core_charactr_cpp_FUN_0042a150((CCharacter *)param_1,param_2);
  do {
    local_60.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-2.0,2.0);
    iVar2 = iVar2 + 1;
    local_60.y = 2.0;
    local_10 = local_60.x;
    local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-2.0,2.0);
    local_60.x = local_60.x + (param_1->base).base.base.location.position.x;
    local_60.y = local_60.y + (param_1->base).base.base.location.position.y;
    local_60.z = local_10 + (param_1->base).base.base.location.position.z;
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
              (0x01C08D04,&local_60,2.0,(CVector3f *)0x0,0xffff);
  } while (iVar2 < 2);
  DAT_0076432c = DAT_0076432c + param_2;
  return;
}
