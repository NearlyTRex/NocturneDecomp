// Name: core_svetlana.cpp_FUN_00541d00
// Address: 00541d00
// Address Range: [[00541d00, 005423b6]]
// Convention: unknown
// Signature: void core_svetlana_cpp_FUN_00541d00(CSvetlana *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_svetlana_cpp_FUN_00541d00(CSvetlana *param_1,float param_2)

{
  UOrientationVector *euler;
  CDeformableModelInstance *model_ptr;
  CCharacter *this_ptr;
  bool bVar1;
  float fVar2;
  int iVar3;
  SMotion *pSVar4;
  CVector3f *pCVar5;
  CDemonActor *pCVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  byte bVar10;
  float afStackY_1870 [1520];
  float fVar11;
  code *blend_callback;
  float local_98;
  CQuaternion4f CStack_94;
  float fStack_84;
  float afStack_80 [4];
  float local_70;
  float local_6c;
  CVector3f local_68;
  CVector3f local_5c;
  byte local_50 [12];
  float local_44;
  float local_40;
  float local_3c;
  CVector3f local_38;
  int local_24;
  float local_20;
  CDeformableModelInstance *pCStack_1c;
  float local_18;
  CCharacter_full_vtable *local_14;
  
  bVar10 = 0;
  if (((param_1->base).base.hit_points < (float)100) &&
     (fVar11 = (param_1->base).base.hit_points + param_2, (param_1->base).base.hit_points = fVar11,
     (float)100 < fVar11)) {
    (param_1->base).base.hit_points = 100.0;
  }
  iVar3 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if ((iVar3 == 0) || ((param_1->base).ai_task == HERO_TASK_SUSPEND)) {
switchD_005420d7_caseD_9:
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042abd0((CCharacter *)param_1,param_2);
  fVar11 = (param_1->base).invincibility_timer - param_2;
  fVar2 = (float)12.566370614;
  (param_1->base).invincibility_timer = fVar11;
  (param_1->base).base.turn_speed = param_2 * fVar2;
  if (fVar11 < 0.0) {
    (param_1->base).invincibility_timer = 0.0;
  }
  pCVar5 = &(param_1->base).base.model.accumulated_root_motion;
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  pCVar5->x = (param_1->base).base.model.accumulated_root_motion.y;
  core_svetlana_cpp_CSvetlana_advanceMotion_FUN_00542ad0(param_1,param_2);
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  iVar3 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar3 == 0) {
    if ((param_1->base).control_type == HERO_CONTROL_AI) {
      core_svetlana_cpp_FUN_005423c0(param_1,param_2);
    }
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(param_1->base).base.model.motion_controller);
    switch(pSVar4->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if ((param_1->base).base.is_on_ground != 0) {
        iVar3 = 0;
        if (param_1->blades_drawn != 0) {
          iVar3 = 10;
        }
        if ((param_1->base).player_input.action_state.walk != 0) {
          if ((param_1->base).player_input.action_state.run == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = 2;
          }
        }
        if ((param_1->base).player_input.action_state.backup != 0) {
          iVar3 = 3;
        }
        if ((param_1->base).player_input.action_state.draw != 0) {
          iVar3 = param_1->blades_drawn;
          (param_1->base).player_input.action_state.draw = 0;
          uVar7 = (uint)(iVar3 == 0);
          param_1->blades_drawn = uVar7;
          if (uVar7 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = 10;
          }
        }
        if ((param_1->base).player_input.action_state.fire != 0) {
          bVar1 = true;
          if ((param_1->blades_drawn == 0) && ((param_1->base).control_type != HERO_CONTROL_AI)) {
            iVar8 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(&param_1->base);
            bVar1 = false;
            if (iVar8 != 0) goto LAB_00542171;
            local_24 = core_hero_cpp_FUN_004b5110(param_1);
            if ((local_24 != 0) && (local_24 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(&param_1->base);
            }
            if ((local_24 != 0) ||
               (iVar8 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(&param_1->base),
               iVar8 != 0)) goto LAB_00542171;
            iVar8 = core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(&param_1->base);
            if (iVar8 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(&param_1->base);
              goto LAB_00542171;
            }
          }
          else {
LAB_00542171:
            if (!bVar1) goto LAB_00542192;
          }
          iVar3 = param_1->attack_hand;
          (param_1->base).player_input.action_state.fire = 0;
          if (iVar3 == 0) {
            iVar3 = 0xf;
          }
          else {
            iVar3 = 0xe;
          }
        }
LAB_00542192:
        (param_1->base).base.turn_angle_accumulator =
             (param_1->base).player_input.turn_speed * (param_1->base).base.turn_speed;
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                           (&(param_1->base).base.model.motion_controller);
        if (iVar3 != pSVar4->state_index) goto LAB_00541e3d;
      }
      break;
    case 9:
      goto switchD_005420d7_caseD_9;
    }
  }
  else {
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(param_1->base).base.model.motion_controller);
    if ((pSVar4->state_index != 0x1a) && (pSVar4->state_index != 0x1b)) {
      (param_1->base).base.model.accumulated_root_motion.z = 0.0;
      (param_1->base).base.model.accumulated_root_motion.y =
           (param_1->base).base.model.accumulated_root_motion.z;
      pCVar5->x = (param_1->base).base.model.accumulated_root_motion.y;
    }
    uVar7 = (param_1->base).base.is_walking;
    if (uVar7 < 2) {
      if (uVar7 == 1) {
        iVar3 = 1;
      }
      else {
LAB_00542097:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar7) {
        if (uVar7 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
          goto switchD_005420d7_caseD_4;
        }
        goto LAB_00542097;
      }
      iVar3 = 2;
    }
LAB_00541e3d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,iVar3,1);
  }
switchD_005420d7_caseD_4:
  pCVar6 = (param_1->base).base.grabbed_by;
  if (pCVar6 == (CDemonActor *)0x0) {
    local_5c.x = (param_1->base).base.model.accumulated_root_motion.x;
    local_5c.y = (param_1->base).base.model.accumulated_root_motion.y;
    local_5c.z = (param_1->base).base.model.accumulated_root_motion.z;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(param_1->base).base.model.motion_controller);
    if (pSVar4->state_index != 0x1a) {
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
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(param_1->base).base.model.motion_controller);
    iVar3 = pSVar4->state_index;
    if ((((iVar3 != 0x17) && (iVar3 != 0x18)) && (iVar3 != 0x19)) &&
       (((iVar3 != 0x25 && (iVar3 != 0x26)) && ((iVar3 != 0x27 && (iVar3 != 0x28)))))) {
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_5c);
    }
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(param_1->base).base.model.motion_controller);
    if (pSVar4->state_index == 0x1a) {
      (param_1->base).base.base.location.position.y =
           param_2 * (float)3 + (param_1->base).base.base.location.position.y;
    }
    goto LAB_00541f87;
  }
  if ((param_1->base).base.grabbed_type == 0) {
    pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       ((CDemonActor *)param_1,&local_68,&(pCVar6->location).position);
    iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_50,pCVar5);
    local_14 = (CCharacter_full_vtable *)
               core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar3 + 4));
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
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
            (&(param_1->base).base.model,&local_38,0);
  pCVar6 = (*(local_14->_uc).getGrabber)(this_ptr);
  if (pCVar6 == (CDemonActor *)0x0) {
    (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_00541f74:
    iVar3 = 0;
  }
  else {
    if ((param_1->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_00541f74;
    if ((param_1->base).player_input.action_state.fire == 0) goto LAB_00541f87;
    iVar3 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(param_1->base).base.model.motion_controller,iVar3,1);
LAB_00541f87:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  pCStack_1c = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCStack_1c);
  iVar3 = (*(((param_1->base).base.base.vtable._uc)->_uc).releaseFromGrab)((CCharacter *)param_1);
  if (iVar3 == 0) {
    blend_callback = core_skeleton_cpp_FUN_0051b650;
    fVar11 = (float)(param_1->hair_cloth).vertices[0x2b5].connected_indices[10];
    iVar3 = _DAT_02dca058;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610
              ((param_1->hair_cloth).vertices[0x2b5].connected_indices + 7);
    CStack_94.w = fStack_84;
    pfVar9 = (float *)((int)&CStack_94 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&CStack_94 + (uint)bVar10 * -8 + 4) = afStack_80[(uint)bVar10 * -2];
    *pfVar9 = afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar9[(uint)bVar10 * -2 + 1] =
         (afStack_80 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (pCStack_1c,&CStack_94,fVar11,iVar3,blend_callback);
  }
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
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
