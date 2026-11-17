// Name: core_colonel.cpp_CColonel_process_FUN_00444550
// Address: 00444550
// Address Range: [[00444550, 00444b44]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_process_FUN_00444550(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

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
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_18b0 [1522];
  CDeformableModelInstance *pCVar13;
  CQuaternion4f *source_quaternions;
  CCharacter *this_ptr_00;
  float fVar14;
  CColonel *actor;
  CVector3f *pCVar15;
  code *blend_callback;
  CQuaternion4f CStack_d4;
  CQuaternion4f CStack_c4;
  CVector3f local_b4;
  CVector3f local_a8;
  float local_9c;
  float local_98 [5];
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  CVector3f local_6c;
  float local_60;
  float local_5c [4];
  float local_4c;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CCharacter *local_24;
  float local_20;
  float local_1c;
  float local_18;
  CCharacter_full_vtable *local_14;
  
  bVar12 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  fVar14 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar14;
  if (fVar14 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_colonel_cpp_CColonel_processMotionEvents_FUN_00445140(this_ptr,delta_time);
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_colonel_cpp_CColonel_processAI_FUN_00444b50(this_ptr,delta_time);
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00435320((CCharacter *)this_ptr,delta_time);
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  pCVar13 = &(this_ptr->base).base.model;
  if (iVar6 == 0) {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar13->base);
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
            if (iVar8 != 0) goto LAB_00444948;
            iVar8 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004eb3e0(&this_ptr->base,0);
            if ((iVar8 != 0) && (iVar8 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(&this_ptr->base);
            }
            if ((iVar8 != 0) ||
               (iVar8 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(&this_ptr->base),
               iVar8 != 0)) goto LAB_00444948;
            iVar8 = core_hero_cpp_CHero_tryPullLever_FUN_004eb660(&this_ptr->base);
            if (iVar8 != 0) {
              core_hero_cpp_CHero_toggleLeverNow_FUN_004eb7f0(&this_ptr->base);
              goto LAB_00444948;
            }
          }
          else {
LAB_00444948:
            if (!bVar4) goto LAB_00444956;
          }
          (this_ptr->base).player_input.action_state.fire = 0;
        }
LAB_00444956:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
        pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           (&(this_ptr->base).base.model.base);
        if (iVar6 != pSVar9->state_index) goto LAB_00444639;
      }
      break;
    case 6:
      goto switchD_00444a17_caseD_6;
    }
  }
  else {
    EVar2 = (this_ptr->base).base.walk_state;
    if (EVar2 < 2) {
      if (EVar2 == WALK_STATE_WALKING) {
        iVar6 = 1;
      }
      else {
LAB_004448bd:
        iVar6 = 0;
      }
    }
    else {
      if (2 < EVar2) {
        if (EVar2 == WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar13->base,0,1);
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
          goto switchD_00444a17_caseD_4;
        }
        goto LAB_004448bd;
      }
      iVar6 = 2;
    }
LAB_00444639:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
switchD_00444a17_caseD_4:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042d700((CCharacter *)this_ptr,delta_time);
    local_60 = (this_ptr->base).base.velocity.x * delta_time;
    pCVar15 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_5c[0] = (this_ptr->base).base.velocity.y * delta_time;
    local_5c[1] = (this_ptr->base).base.velocity.z * delta_time;
    local_9c = local_60;
    local_98[(uint)bVar12 * -2] = local_5c[(uint)bVar12 * -2];
    local_98[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         local_5c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    pCVar1 = &(this_ptr->base).base.position_delta;
    local_5c[2] = pCVar15->x + pCVar1->x;
    local_5c[3] = (this_ptr->base).base.model.accumulated_root_motion.y +
                  (this_ptr->base).base.position_delta.y;
    local_4c = (this_ptr->base).base.model.accumulated_root_motion.z +
               (this_ptr->base).base.position_delta.z;
    local_84 = local_5c[2];
    local_98[(uint)bVar12 * -2 + 6] = local_5c[(uint)bVar12 * -2 + 3];
    local_98[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
         local_5c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    local_78 = local_84 + local_9c;
    local_74 = local_80 + local_98[0];
    local_70 = local_7c + local_98[1];
    local_b4.x = local_84 + local_9c;
    *(float *)((int)&local_b4 + (uint)bVar12 * -8 + 4) = local_98[(uint)bVar12 * -2 + 9];
    *(float *)((int)&local_b4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         local_98[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar15->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr,&local_b4);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)this_ptr,&(pCVar3->location).position,&local_6c);
      local_a8.x = local_6c.x;
      *(uint *)((int)&local_a8 + (uint)bVar12 * -8 + 4) =
           *(uint *)((int)&local_6c + (uint)bVar12 * -8 + 4);
      *(uint *)((int)&local_a8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           *(uint *)((int)&local_6c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_a8,&local_30);
      local_98[2] = local_30.x;
      local_98[(uint)bVar12 * -2 + 3] = *(float *)((int)&local_30 + (uint)bVar12 * -8 + 4);
      local_98[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           *(float *)((int)&local_30 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
      local_14 = (CCharacter_full_vtable *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_98[3]);
      local_18 = (float)local_14;
      if ((float)local_14 < -1.570796f) {
        local_18 = (float)local_14 + 3.141593f;
      }
      if (1.570796f < local_18) {
        local_18 = local_18 + -3.141593f;
      }
      local_1c = delta_time * 3.141593f;
      local_20 = -local_1c;
      if (local_18 < local_20) {
        local_18 = local_20;
      }
      if (local_1c < local_18) {
        local_18 = local_1c;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_18;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
    }
    local_24 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    local_14 = (local_24->base).vtable._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
              (&(this_ptr->base).base.model,0,&local_3c);
    pCVar5 = local_14;
    this_ptr_00 = local_24;
    pCVar15 = (CVector3f *)(local_5c + 5);
    local_48.x = local_3c.x;
    local_5c[(uint)bVar12 * -2 + 6] = *(float *)((int)&local_3c + (uint)bVar12 * -8 + 4);
    actor = this_ptr;
    local_5c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
         *(float *)((int)&local_3c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    iVar6 = (*(pCVar5->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)actor,pCVar15);
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
  pCVar13 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar13);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar7 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00567360;
    fVar14 = this_ptr->head_look_blend_weight;
    iVar6 = g_INT_ARRAY_007db570[0];
    core_xform_cpp_eulerToQuaternion_FUN_005b7ed0(&this_ptr->head_look_euler,&CStack_c4);
    source_quaternions = &CStack_d4;
    CStack_d4.w = CStack_c4.w;
    puVar11 = (uint *)((int)&CStack_d4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    puVar10 = (uint *)((int)&CStack_c4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)((int)&CStack_d4 + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&CStack_c4 + (uint)bVar12 * -8 + 4);
    *puVar11 = *puVar10;
    puVar11[(uint)bVar12 * -2 + 1] = puVar10[(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (pCVar13,source_quaternions,fVar14,iVar6,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
switchD_00444a17_caseD_6:
  return;
}
