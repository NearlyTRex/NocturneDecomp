// Name: core_haystack.cpp_FUN_004b32d0
// Address: 004b32d0
// Address Range: [[004b32d0, 004b3877]]
// Convention: unknown
// Signature: void core_haystack_cpp_FUN_004b32d0(CHero *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_haystack_cpp_FUN_004b32d0(CHero *param_1,float param_2)

{
  CVector3f *pCVar1;
  CCharacter *this_ptr;
  bool bVar2;
  int iVar3;
  CVector3f *pCVar4;
  CDemonActor *pCVar5;
  SMotion *pSVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_1868 [1521];
  CDeformableModelInstance *pCVar11;
  CQuaternion4f *source_quaternions;
  float fVar12;
  code *blend_callback;
  float local_90;
  float fStack_8c;
  CQuaternion4f CStack_7c;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f local_60;
  byte local_54 [12];
  CVector3f local_48;
  CVector3f local_3c;
  float local_28;
  CDeformableModelInstance *pCStack_24;
  float local_20;
  int local_1c;
  CCharacter_full_vtable *local_18;
  
  bVar10 = 0;
  iVar3 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  if (param_1->control_type == HERO_CONTROL_AI) {
    core_haystack_cpp_CHaystack_updateAI_FUN_004b3880(param_1,param_2);
  }
  iVar3 = 0x01C775EC;
  (param_1->base).turn_speed = param_2 * (float)12.566370614;
  if (*(int *)(iVar3 + 0x228) != 0) {
    (param_1->base).turn_speed = (param_1->base).turn_speed * (float)0.33333333333333298;
  }
  fVar12 = param_1->invincibility_timer - param_2;
  param_1->invincibility_timer = fVar12;
  if (fVar12 < 0.0) {
    param_1->invincibility_timer = 0.0;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  core_haystack_cpp_CHaystack_advanceMotion_FUN_004b3e00(param_1,param_2);
  iVar3 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  pCVar11 = &(param_1->base).model;
  if (iVar3 == 0) {
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&pCVar11->motion_controller);
    switch(pSVar6->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if ((param_1->base).is_on_ground != 0) {
        iVar3 = 0;
        if (*(int *)param_1[1].base.base.actor_name != 0) {
          iVar3 = 10;
        }
        if ((param_1->player_input).action_state.walk != 0) {
          if ((param_1->player_input).action_state.run == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = 2;
          }
        }
        if ((param_1->player_input).action_state.backup != 0) {
          iVar3 = 3;
        }
        if ((param_1->player_input).action_state.draw != 0) {
          iVar3 = *(int *)param_1[1].base.base.actor_name;
          (param_1->player_input).action_state.draw = 0;
          uVar7 = (uint)(iVar3 == 0);
          *(uint *)param_1[1].base.base.actor_name = uVar7;
          if (uVar7 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = 10;
          }
        }
        if ((param_1->player_input).action_state.fire != 0) {
          bVar2 = true;
          if ((*(int *)param_1[1].base.base.actor_name == 0) &&
             (param_1->control_type != HERO_CONTROL_AI)) {
            iVar8 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(param_1);
            bVar2 = false;
            if (iVar8 != 0) goto LAB_004b3666;
            local_1c = core_hero_cpp_FUN_004b5110(param_1);
            if ((local_1c != 0) && (local_1c != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(param_1);
            }
            if ((local_1c != 0) ||
               (iVar8 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(param_1),
               iVar8 != 0)) goto LAB_004b3666;
            iVar8 = core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(param_1);
            if (iVar8 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(param_1);
              goto LAB_004b3666;
            }
          }
          else {
LAB_004b3666:
            if (!bVar2) goto LAB_004b3687;
          }
          iVar3 = *(int *)(param_1[1].base.base.actor_name + 4);
          (param_1->player_input).action_state.fire = 0;
          if (iVar3 == 0) {
            iVar3 = 0xf;
          }
          else {
            iVar3 = 0xe;
          }
        }
LAB_004b3687:
        (param_1->base).turn_angle_accumulator =
             (param_1->player_input).turn_speed * (param_1->base).turn_speed;
        pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                           (&(param_1->base).model.motion_controller);
        if (iVar3 != pSVar6->state_index) goto LAB_004b33ac;
      }
      break;
    case 9:
      goto switchD_004b375e_caseD_9;
    }
  }
  else {
    uVar7 = (param_1->base).is_walking;
    if (uVar7 < 2) {
      if (uVar7 == 1) {
        iVar3 = 1;
      }
      else {
LAB_004b35c4:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar7) {
        if (uVar7 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar11->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
          goto switchD_004b375e_caseD_4;
        }
        goto LAB_004b35c4;
      }
      iVar3 = 2;
    }
LAB_004b33ac:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar3,1);
  }
switchD_004b375e_caseD_4:
  pCVar5 = (param_1->base).grabbed_by;
  if (pCVar5 == (CDemonActor *)0x0) {
    pCVar4 = &(param_1->base).model.accumulated_root_motion;
    pCVar1 = &(param_1->base).position_delta;
    (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
    local_3c.x = pCVar4->x + pCVar1->x;
    local_3c.y = (param_1->base).model.accumulated_root_motion.y + (param_1->base).position_delta.y;
    local_3c.z = (param_1->base).model.accumulated_root_motion.z + (param_1->base).position_delta.z;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar4->x = (param_1->base).model.accumulated_root_motion.y;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar1->x = (param_1->base).position_delta.y;
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(param_1->base).model.motion_controller);
    if ((pSVar6->state_index == 0xe) || (pSVar6->state_index == 0xf)) {
      local_3c.y = 0.0;
      local_3c.x = 0.0;
      local_3c.z = 0.0;
    }
    local_6c = (param_1->base).velocity.x * param_2;
    local_68 = (param_1->base).velocity.y * param_2;
    local_64 = param_2 * (param_1->base).velocity.z;
    local_3c.x = local_3c.x + local_6c;
    local_3c.y = local_3c.y + local_68;
    local_3c.z = local_3c.z + local_64;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_3c);
  }
  else {
    if ((param_1->base).grabbed_type == 0) {
      pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         ((CDemonActor *)param_1,&local_60,&(pCVar5->location).position);
      iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_54,pCVar4);
      local_18 = (CCharacter_full_vtable *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar3 + 4));
      local_90 = (float)local_18;
      if ((float)local_18 < (float)-1.57079632675) {
        local_90 = (float)local_18 + 3.141593f;
      }
      if ((float)1.57079632675 < local_90) {
        local_90 = local_90 + 1.5938625219265179e-314._0_4_;
      }
      local_20 = param_2 * (float)3.1415926535000001;
      local_28 = -local_20;
      if (local_90 < local_28) {
        local_90 = local_28;
      }
      if (local_20 < local_90) {
        local_90 = local_20;
      }
      (param_1->base).base.orient.vec.y = (param_1->base).base.orient.vec.y + local_90;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)param_1);
    }
    this_ptr = (CCharacter *)(param_1->base).grabbed_by;
    local_18 = (this_ptr->base).vtable._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
              (&(param_1->base).model,&local_48,0);
    pCVar5 = (*(local_18->_uc).getGrabber)(this_ptr);
    if (pCVar5 == (CDemonActor *)0x0) {
      (param_1->base).grabbed_by = (CDemonActor *)0x0;
LAB_004b34d1:
      iVar3 = 0;
    }
    else {
      if ((param_1->base).grabbed_by == (CDemonActor *)0x0) goto LAB_004b34d1;
      if ((param_1->player_input).action_state.fire == 0) goto LAB_004b34e4;
      iVar3 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar3,1);
  }
LAB_004b34e4:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  pCStack_24 = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCStack_24);
  iVar3 = (*(((param_1->base).base.vtable._uc)->_uc).releaseFromGrab)(&param_1->base);
  if ((iVar3 == 0) &&
     (pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&pCStack_24->motion_controller), pSVar6->state_index != 0x13)) {
    blend_callback = core_skeleton_cpp_FUN_0051b650;
    fVar12 = *(float *)(param_1[1].base.base.actor_name + 0x14);
    iVar3 = _DAT_01cae018;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610(param_1[1].base.base.actor_name + 8);
    pCVar11 = pCStack_24;
    source_quaternions = &CStack_7c;
    CStack_7c.w = fStack_8c;
    puVar9 = (uint *)((int)&CStack_7c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_7c + (uint)bVar10 * -8 + 4) =
         *(uint *)(&stack0xffffff78 + (uint)bVar10 * -8);
    *puVar9 = *(uint *)(&stack0xffffff7c + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    puVar9[(uint)bVar10 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff7c + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
          ((uint)bVar10 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (pCVar11,source_quaternions,fVar12,iVar3,blend_callback);
  }
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
switchD_004b375e_caseD_9:
  return;
}
