// Name: core_svetlana.cpp_CSvetlana_process_FUN_00541d00
// Address: 00541d00
// Address Range: [[00541d00, 005423b6]]
// Convention: unknown
// Signature: void core_svetlana_cpp_CSvetlana_process_FUN_00541d00(CSvetlana *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_svetlana_cpp_CSvetlana_process_FUN_00541d00(CSvetlana *param_1,float param_2)

{
  UOrientationVector *euler;
  CDeformableModelInstance *model_ptr;
  CDemonActor *pCVar1;
  CCharacter *this_ptr;
  bool bVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  CVector3f *pCVar6;
  EDeathState EVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_1870 [1520];
  float fVar12;
  code *blend_callback;
  float local_98;
  CQuaternion4f CStack_94;
  float fStack_84;
  float afStack_80 [4];
  float local_70;
  float local_6c;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  CVector3f local_38;
  int local_24;
  float local_20;
  CDeformableModelInstance *pCStack_1c;
  float local_18;
  CCharacter_full_vtable *local_14;
  
  bVar11 = 0;
  if (((param_1->base).base.hit_points < (float)100) &&
     (fVar12 = (param_1->base).base.hit_points + param_2, (param_1->base).base.hit_points = fVar12,
     (float)100 < fVar12)) {
    (param_1->base).base.hit_points = 100.0;
  }
  iVar4 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2);
  if ((iVar4 == 0) || ((param_1->base).ai_task == HERO_TASK_SUSPEND)) {
switchD_005420d7_caseD_9:
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042abd0((CCharacter *)param_1,param_2);
  fVar12 = (param_1->base).invincibility_timer - param_2;
  fVar3 = (float)12.566370614;
  (param_1->base).invincibility_timer = fVar12;
  (param_1->base).base.turn_speed = param_2 * fVar3;
  if (fVar12 < 0.0) {
    (param_1->base).invincibility_timer = 0.0;
  }
  pCVar6 = &(param_1->base).base.model.accumulated_root_motion;
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  pCVar6->x = (param_1->base).base.model.accumulated_root_motion.y;
  core_svetlana_cpp_CSvetlana_advanceMotion_FUN_00542ad0(param_1,param_2);
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  iVar4 = core_charactr_cpp_FUN_00428c00((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    if ((param_1->base).control_type == HERO_CONTROL_AI) {
      core_svetlana_cpp_FUN_005423c0(param_1,param_2);
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(param_1->base).base.model.motion_controller);
    switch(pSVar5->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if ((param_1->base).base.is_on_ground != 0) {
        iVar4 = 0;
        if (param_1->blades_drawn != 0) {
          iVar4 = 10;
        }
        if ((param_1->base).player_input.action_state.walk != 0) {
          if ((param_1->base).player_input.action_state.run == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
        }
        if ((param_1->base).player_input.action_state.backup != 0) {
          iVar4 = 3;
        }
        if ((param_1->base).player_input.action_state.draw != 0) {
          iVar4 = param_1->blades_drawn;
          (param_1->base).player_input.action_state.draw = 0;
          uVar8 = (uint)(iVar4 == 0);
          param_1->blades_drawn = uVar8;
          if (uVar8 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = 10;
          }
        }
        if ((param_1->base).player_input.action_state.fire != 0) {
          bVar2 = true;
          if ((param_1->blades_drawn == 0) && ((param_1->base).control_type != HERO_CONTROL_AI)) {
            iVar9 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(&param_1->base);
            bVar2 = false;
            if (iVar9 != 0) goto LAB_00542171;
            local_24 = core_hero_cpp_FUN_004b5110(&param_1->base);
            if ((local_24 != 0) && (local_24 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(&param_1->base);
            }
            if ((local_24 != 0) ||
               (iVar9 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(&param_1->base),
               iVar9 != 0)) goto LAB_00542171;
            iVar9 = core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(&param_1->base);
            if (iVar9 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(&param_1->base);
              goto LAB_00542171;
            }
          }
          else {
LAB_00542171:
            if (!bVar2) goto LAB_00542192;
          }
          iVar4 = param_1->attack_hand;
          (param_1->base).player_input.action_state.fire = 0;
          if (iVar4 == 0) {
            iVar4 = 0xf;
          }
          else {
            iVar4 = 0xe;
          }
        }
LAB_00542192:
        (param_1->base).base.turn_angle_accumulator =
             (param_1->base).player_input.turn_speed * (param_1->base).base.turn_speed;
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                           (&(param_1->base).base.model.motion_controller);
        if (iVar4 != pSVar5->state_index) goto LAB_00541e3d;
      }
      break;
    case 9:
      goto switchD_005420d7_caseD_9;
    }
  }
  else {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(param_1->base).base.model.motion_controller);
    if ((pSVar5->state_index != 0x1a) && (pSVar5->state_index != 0x1b)) {
      (param_1->base).base.model.accumulated_root_motion.z = 0.0;
      (param_1->base).base.model.accumulated_root_motion.y =
           (param_1->base).base.model.accumulated_root_motion.z;
      pCVar6->x = (param_1->base).base.model.accumulated_root_motion.y;
    }
    uVar8 = (param_1->base).base.is_walking;
    if (uVar8 < 2) {
      if (uVar8 == 1) {
        iVar4 = 1;
      }
      else {
LAB_00542097:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar8) {
        if (uVar8 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
          goto switchD_005420d7_caseD_4;
        }
        goto LAB_00542097;
      }
      iVar4 = 2;
    }
LAB_00541e3d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,iVar4,1);
  }
switchD_005420d7_caseD_4:
  pCVar1 = (param_1->base).base.grabbed_by;
  if (pCVar1 == (CDemonActor *)0x0) {
    local_5c.x = (param_1->base).base.model.accumulated_root_motion.x;
    local_5c.y = (param_1->base).base.model.accumulated_root_motion.y;
    local_5c.z = (param_1->base).base.model.accumulated_root_motion.z;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(param_1->base).base.model.motion_controller);
    if (pSVar5->state_index != 0x1a) {
      (param_1->base).base.velocity.y =
           (param_1->base).base.velocity.y - param_2 * (float)32;
    }
    local_44 = (param_1->base).base.velocity.x * param_2;
    local_40 = (param_1->base).base.velocity.y * param_2;
    local_3c = param_2 * (param_1->base).base.velocity.z;
    afStack_80[3] = local_44 + (param_1->base).base.position_delta.x;
    local_70 = local_40 + (param_1->base).base.position_delta.y;
    local_5c.x = local_5c.x + afStack_80[3];
    local_6c = local_3c + (param_1->base).base.position_delta.z;
    local_5c.y = local_5c.y + local_70;
    local_5c.z = local_5c.z + local_6c;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(param_1->base).base.model.motion_controller);
    iVar4 = pSVar5->state_index;
    if ((((iVar4 != 0x17) && (iVar4 != 0x18)) && (iVar4 != 0x19)) &&
       (((iVar4 != 0x25 && (iVar4 != 0x26)) && ((iVar4 != 0x27 && (iVar4 != 0x28)))))) {
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_5c);
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(param_1->base).base.model.motion_controller);
    if (pSVar5->state_index == 0x1a) {
      (param_1->base).base.base.location.position.y =
           param_2 * (float)3 + (param_1->base).base.base.location.position.y;
    }
    goto LAB_00541f87;
  }
  if ((param_1->base).base.grabbed_type == 0) {
    pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       ((CDemonActor *)param_1,&local_68,&(pCVar1->location).position);
    pCVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_50,pCVar6);
    local_14 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar6->y);
    local_98 = (float)local_14;
    if ((float)local_14 < (float)-1.57079632675) {
      local_98 = (float)local_14 + 3.141593f;
    }
    if ((float)1.57079632675 < local_98) {
      local_98 = local_98 + 1.5938625219265179e-314._0_4_;
    }
    local_18 = param_2 * (float)3.1415926535000001;
    local_20 = -local_18;
    if (local_98 < local_20) {
      local_98 = local_20;
    }
    if (local_18 < local_98) {
      local_98 = local_18;
    }
    (param_1->base).base.base.orient.vec.y = (param_1->base).base.base.orient.vec.y + local_98;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)param_1);
  }
  this_ptr = (CCharacter *)(param_1->base).base.grabbed_by;
  local_14 = (this_ptr->base).vtable._uc;
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(param_1->base).base.model,&local_38,0);
  iVar4 = (*(local_14->_uc).attractActorToward)(this_ptr,(CDemonActor *)param_1,pCVar6);
  if (iVar4 == 0) {
    (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_00541f74:
    iVar4 = 0;
  }
  else {
    if ((param_1->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_00541f74;
    if ((param_1->base).player_input.action_state.fire == 0) goto LAB_00541f87;
    iVar4 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(param_1->base).base.model.motion_controller,iVar4,1);
LAB_00541f87:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  pCStack_1c = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCStack_1c);
  EVar7 = (*(((param_1->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)param_1);
  if (EVar7 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_FUN_0051b650;
    fVar12 = (float)(param_1->hair_cloth).vertices[0x2b5].connected_indices[10];
    iVar4 = _DAT_02dca058;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610
              ((param_1->hair_cloth).vertices[0x2b5].connected_indices + 7);
    CStack_94.w = fStack_84;
    pfVar10 = (float *)((int)&CStack_94 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(float *)((int)&CStack_94 + (uint)bVar11 * -8 + 4) = afStack_80[(uint)bVar11 * -2];
    *pfVar10 = afStack_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    pfVar10[(uint)bVar11 * -2 + 1] =
         (afStack_80 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (pCStack_1c,&CStack_94,fVar12,iVar4,blend_callback);
  }
  core_charactr_cpp_FUN_0042a150((CCharacter *)param_1,param_2);
  model_ptr = &(param_1->base).base.model;
  euler = &(param_1->base).base.base.orient;
  local_14 = (CCharacter_full_vtable *)&(param_1->base).base.base.location;
  core_cloth_cpp_CCloth_process_FUN_00436e50
            (&param_1->cape_cloth,(CVector3f *)local_14,&euler->vec,param_2,
             (param_1->base).base.closest_distance_threshold,model_ptr);
  core_cloth_cpp_CCloth_process_FUN_00436e50
            ((CCloth *)((param_1->cape_cloth).vertices[0x300].connected_indices + 9),
             (CVector3f *)local_14,&euler->vec,param_2,
             (param_1->base).base.closest_distance_threshold,model_ptr);
  return;
}
