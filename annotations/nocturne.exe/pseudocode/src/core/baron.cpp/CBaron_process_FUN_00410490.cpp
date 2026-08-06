// Name: core_baron.cpp_CBaron_process_FUN_00410490
// Address: 00410490
// Address Range: [[00410490, 00410a73]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_process_FUN_00410490(CBaron *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_baron_cpp_CBaron_process_FUN_00410490(CBaron *this_ptr,float delta_time)

{
  uint uVar1;
  CGame *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  SMotion *pSVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1880 [1519];
  CDeformableModelInstance *pCVar9;
  CQuaternion4f *source_quaternions;
  float fVar10;
  code *blend_callback;
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
  
  bVar8 = 0;
  pCVar9 = &(this_ptr->base).base.model;
  if (this_ptr->summoned == 0) {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->summon_event);
    if (iVar3 != 0) {
      this_ptr->summoned = 1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar9->motion_controller,6,1)
      ;
      this_ptr->shell_visible = 1;
    }
  }
  else {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->go_away_event);
    if (iVar3 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar9->motion_controller,7,1)
      ;
    }
  }
  if (((this_ptr->summoned == 0) && ((this_ptr->base).control_type == HERO_CONTROL_AI)) ||
     (iVar3 = core_charactr_cpp_CCharacter_FUN_004259f0((CCharacter *)this_ptr,delta_time),
     iVar3 == 0)) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_baron_cpp_CBaron_updateMountedPosition_FUN_00410bf0(this_ptr,delta_time);
  }
  pCVar2 = g_CGame_PTR_005b9354;
  (this_ptr->base).base.turn_speed = delta_time * (float)12.566370614;
  if (pCVar2->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  fVar10 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar10;
  if (fVar10 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_baron_cpp_CBaron_advanceMotion_FUN_00411010(this_ptr,delta_time);
  if (this_ptr->summoned == 0) {
    return;
  }
  iVar3 = core_charactr_cpp_CCharacter_FUN_00428c00((CCharacter *)this_ptr,delta_time);
  pCVar9 = &(this_ptr->base).base.model;
  if (iVar3 == 0) {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&pCVar9->motion_controller);
    switch(pSVar5->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar3 = 0;
      if ((this_ptr->base).player_input.action_state.walk != 0) {
        if ((this_ptr->base).player_input.action_state.run == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = 3;
        }
      }
      if ((this_ptr->base).player_input.action_state.backup != 0) {
        iVar3 = 2;
      }
      if ((this_ptr->base).player_input.action_state.fire != 0) {
        this_ptr->new_attack = 1;
        iVar3 = 4;
        (this_ptr->base).player_input.action_state.fire = 0;
      }
      (this_ptr->base).base.turn_angle_accumulator =
           (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
      pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&(this_ptr->base).base.model.motion_controller);
      if (iVar3 == pSVar5->state_index) break;
      goto LAB_0041061c;
    case 4:
      pCVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_84,(CVector3f *)&DAT_02dd1184,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          DAT_0076431c);
      pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)this_ptr,&local_48,pCVar4);
      if (&local_30 != pCVar4) {
        local_30.x = pCVar4->x;
        local_30.y = pCVar4->y;
        local_30.z = pCVar4->z;
      }
      pCVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_24,(CVector3f *)&DAT_02dd1184,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          DAT_00764320);
      pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)this_ptr,&local_78,pCVar4);
      if (&local_54 != pCVar4) {
        local_54.x = pCVar4->x;
        local_54.y = pCVar4->y;
        local_54.z = pCVar4->z;
      }
      if (this_ptr->new_attack == 0) {
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0048c590
                  (g_CFireEffect_PTR_005b80f0,&local_30,&this_ptr->left_hand_pos,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_005acf40);
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0048c590
                  (g_CFireEffect_PTR_005b80f0,&local_54,&this_ptr->right_hand_pos,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_005acf40);
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
    goto switchD_00410a6d_default;
  }
  uVar1 = (this_ptr->base).base.is_walking;
  if (uVar1 < 2) {
    if (uVar1 != 1) goto LAB_00410847;
    iVar3 = 1;
  }
  else if (uVar1 < 3) {
    iVar3 = 3;
  }
  else {
    if (uVar1 == 3) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar9->motion_controller,0,1)
      ;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n");
      goto switchD_00410a6d_default;
    }
LAB_00410847:
    iVar3 = 0;
  }
LAB_0041061c:
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(this_ptr->base).base.model.motion_controller,iVar3,1);
switchD_00410a6d_default:
  pCVar4 = &(this_ptr->base).base.model.accumulated_root_motion;
  fVar10 = (float)32;
  local_6c = pCVar4->x;
  local_68 = (this_ptr->base).base.model.accumulated_root_motion.y;
  local_64 = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar4->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  (this_ptr->base).base.velocity.y = (this_ptr->base).base.velocity.y - delta_time * fVar10;
  local_3c = (this_ptr->base).base.velocity.x * delta_time;
  local_38 = (this_ptr->base).base.velocity.y * delta_time;
  local_34 = (this_ptr->base).base.velocity.z * delta_time;
  local_6c = local_6c + local_3c;
  local_68 = local_68 + local_38;
  local_64 = local_64 + local_34;
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  pCVar9 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar9);
  blend_callback = core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650;
  fVar10 = this_ptr->head_blend_weight;
  iVar3 = DAT_007642e8;
  core_xform_cpp_eulerToQuaternion_FUN_0055d610(&this_ptr->head_rotation,&local_a4);
  source_quaternions = &local_94;
  local_94.w = local_a4.w;
  puVar7 = (uint *)((int)&local_94 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  puVar6 = (uint *)((int)&local_a4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  *(uint *)((int)&local_94 + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_a4 + (uint)bVar8 * -8 + 4);
  *puVar7 = *puVar6;
  puVar7[(uint)bVar8 * -2 + 1] = puVar6[(uint)bVar8 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
            (pCVar9,source_quaternions,fVar10,iVar3,blend_callback);
  iVar3 = 0;
  core_charactr_cpp_CCharacter_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  do {
    local_60.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-2.0,2.0);
    iVar3 = iVar3 + 1;
    local_60.y = 2.0;
    local_10 = local_60.x;
    local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-2.0,2.0);
    local_60.x = local_60.x + (this_ptr->base).base.base.location.position.x;
    local_60.y = local_60.y + (this_ptr->base).base.base.location.position.y;
    local_60.z = local_10 + (this_ptr->base).base.base.location.position.z;
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
              (g_CFireEffect_PTR_005b80f0,&local_60,2.0,(CVector3f *)0x0,0xffff);
  } while (iVar3 < 2);
  DAT_0076432c = DAT_0076432c + delta_time;
  return;
}
