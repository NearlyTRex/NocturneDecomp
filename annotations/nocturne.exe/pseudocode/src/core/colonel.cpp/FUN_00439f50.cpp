// Name: core_colonel.cpp_FUN_00439f50
// Address: 00439f50
// Address Range: [[00439f50, 0043a466]]
// Convention: unknown
// Signature: void core_colonel_cpp_FUN_00439f50(CHero *param_1,float param_2)

#include "nocturne.h"

void core_colonel_cpp_FUN_00439f50(CHero *param_1,float param_2)

{
  CVector3f *pCVar1;
  uint uVar2;
  CCharacter *this_ptr;
  bool bVar3;
  int iVar4;
  CVector3f *pCVar5;
  CDemonActor *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_1870 [1521];
  CDeformableModelInstance *pCVar11;
  CQuaternion4f *source_quaternions;
  float fVar12;
  code *blend_callback;
  float local_98;
  float fStack_94;
  CQuaternion4f CStack_84;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  byte local_44 [12];
  float local_38;
  float local_34;
  float local_30;
  int local_24;
  float local_20;
  float local_1c;
  CDeformableModelInstance *pCStack_18;
  CCharacter_full_vtable *local_14;
  
  bVar10 = 0;
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  fVar12 = param_1->invincibility_timer - param_2;
  param_1->invincibility_timer = fVar12;
  if (fVar12 < 0.0) {
    param_1->invincibility_timer = 0.0;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  core_colonel_cpp_CColonel_processMotionEvents_FUN_0043a980(param_1,param_2);
  if (param_1->control_type == HERO_CONTROL_AI) {
    core_colonel_cpp_CColonel_processAI_FUN_0043a470(param_1,param_2);
  }
  fVar12 = (float)12.566370614;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).turn_speed = param_2 * fVar12;
  iVar4 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  pCVar11 = &(param_1->base).model;
  if (iVar4 == 0) {
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&pCVar11->motion_controller);
    switch(pSVar8->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      if ((param_1->base).is_on_ground != 0) {
        iVar4 = 0;
        if ((param_1->player_input).action_state.walk != 0) {
          if ((param_1->player_input).action_state.run == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
        }
        if ((param_1->player_input).action_state.backup != 0) {
          iVar4 = 3;
        }
        if ((param_1->player_input).action_state.draw != 0) {
          iVar7 = *(int *)param_1[1].base.base.actor_name;
          (param_1->player_input).action_state.draw = 0;
          iVar4 = 0;
          *(uint *)param_1[1].base.base.actor_name = (uint)(iVar7 == 0);
        }
        if ((param_1->player_input).action_state.fire != 0) {
          bVar3 = true;
          if ((*(int *)param_1[1].base.base.actor_name == 0) &&
             (param_1->control_type != HERO_CONTROL_AI)) {
            iVar7 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(param_1);
            bVar3 = false;
            if (iVar7 != 0) goto LAB_0043a2b0;
            local_24 = core_hero_cpp_FUN_004b5110(param_1);
            if ((local_24 != 0) && (local_24 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(param_1);
            }
            if ((local_24 != 0) ||
               (iVar7 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(param_1),
               iVar7 != 0)) goto LAB_0043a2b0;
            iVar7 = core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(param_1);
            if (iVar7 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(param_1);
              goto LAB_0043a2b0;
            }
          }
          else {
LAB_0043a2b0:
            if (!bVar3) goto LAB_0043a2be;
          }
          (param_1->player_input).action_state.fire = 0;
        }
LAB_0043a2be:
        (param_1->base).turn_angle_accumulator =
             (param_1->player_input).turn_speed * (param_1->base).turn_speed;
        pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                           (&(param_1->base).model.motion_controller);
        if (iVar4 != pSVar8->state_index) goto LAB_0043a023;
      }
      break;
    case 6:
      goto switchD_0043a387_caseD_6;
    }
  }
  else {
    uVar2 = (param_1->base).is_walking;
    if (uVar2 < 2) {
      if (uVar2 == 1) {
        iVar4 = 1;
      }
      else {
LAB_0043a224:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar2) {
        if (uVar2 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar11->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
          goto switchD_0043a387_caseD_4;
        }
        goto LAB_0043a224;
      }
      iVar4 = 2;
    }
LAB_0043a023:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar4,1);
  }
switchD_0043a387_caseD_4:
  pCVar6 = (param_1->base).grabbed_by;
  if (pCVar6 == (CDemonActor *)0x0) {
    (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
    local_38 = (param_1->base).velocity.x * param_2;
    local_34 = (param_1->base).velocity.y * param_2;
    local_30 = param_2 * (param_1->base).velocity.z;
    pCVar5 = &(param_1->base).model.accumulated_root_motion;
    pCVar1 = &(param_1->base).position_delta;
    local_50 = pCVar5->x + pCVar1->x;
    local_4c = (param_1->base).model.accumulated_root_motion.y + (param_1->base).position_delta.y;
    local_68.x = local_50 + local_38;
    local_48 = (param_1->base).model.accumulated_root_motion.z + (param_1->base).position_delta.z;
    local_68.y = local_4c + local_34;
    local_68.z = local_48 + local_30;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar5->x = (param_1->base).model.accumulated_root_motion.y;
    (param_1->base).position_delta.z = 0.0;
    fVar12 = (param_1->base).position_delta.z;
    (param_1->base).position_delta.y = fVar12;
    pCVar1->x = fVar12;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_68);
  }
  else {
    if ((param_1->base).grabbed_type == 0) {
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         ((CDemonActor *)param_1,&local_5c,&(pCVar6->location).position);
      iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_44,pCVar5);
      local_14 = (CCharacter_full_vtable *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar4 + 4));
      local_98 = (float)local_14;
      if ((float)local_14 < (float)-1.57079632675) {
        local_98 = (float)local_14 + 5.3286462644388174e-315._0_4_;
      }
      if ((float)1.57079632675 < local_98) {
        local_98 = local_98 + 1.5938625219265179e-314._0_4_;
      }
      local_1c = param_2 * (float)3.1415926535000001;
      local_20 = -local_1c;
      if (local_98 < local_20) {
        local_98 = local_20;
      }
      if (local_1c < local_98) {
        local_98 = local_1c;
      }
      (param_1->base).base.orient.vec.y = (param_1->base).base.orient.vec.y + local_98;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)param_1);
    }
    this_ptr = (CCharacter *)(param_1->base).grabbed_by;
    local_14 = (this_ptr->base).vtable._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
              (&(param_1->base).model,&local_74,0);
    pCVar6 = (*(local_14->_uc).getGrabber)(this_ptr);
    if (pCVar6 == (CDemonActor *)0x0) {
      (param_1->base).grabbed_by = (CDemonActor *)0x0;
LAB_0043a151:
      iVar4 = 0;
    }
    else {
      if ((param_1->base).grabbed_by == (CDemonActor *)0x0) goto LAB_0043a151;
      if ((param_1->player_input).action_state.fire == 0) goto LAB_0043a164;
      iVar4 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar4,1);
  }
LAB_0043a164:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  pCStack_18 = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCStack_18);
  iVar4 = (*(((param_1->base).base.vtable._uc)->_uc).releaseFromGrab)(&param_1->base);
  if (iVar4 == 0) {
    blend_callback = core_skeleton_cpp_FUN_0051b650;
    fVar12 = *(float *)(param_1[1].base.base.actor_name + 0x14);
    iVar4 = DAT_0077ac8c;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610(param_1[1].base.base.actor_name + 8);
    pCVar11 = pCStack_18;
    source_quaternions = &CStack_84;
    CStack_84.w = fStack_94;
    puVar9 = (uint *)((int)&CStack_84 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_84 + (uint)bVar10 * -8 + 4) =
         *(uint *)(&stack0xffffff70 + (uint)bVar10 * -8);
    *puVar9 = *(uint *)(&stack0xffffff74 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    puVar9[(uint)bVar10 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff74 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
          ((uint)bVar10 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (pCVar11,source_quaternions,fVar12,iVar4,blend_callback);
  }
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
switchD_0043a387_caseD_6:
  return;
}
