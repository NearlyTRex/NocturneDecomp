// Name: core_colonel.cpp_CColonel_process_FUN_00439f50
// Address: 00439f50
// Address Range: [[00439f50, 0043a466]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_process_FUN_00439f50(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_colonel_cpp_CColonel_process_FUN_00439f50(CColonel *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  uint uVar2;
  CDemonActor *pCVar3;
  CCharacter *this_ptr_00;
  bool bVar4;
  int iVar5;
  CVector3f *pCVar6;
  EDeathState EVar7;
  int iVar8;
  SMotion *pSVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_1870 [1521];
  CDeformableModelInstance *pCVar13;
  CQuaternion4f *source_quaternions;
  float fVar14;
  code *blend_callback;
  float local_98;
  CQuaternion4f CStack_94;
  CQuaternion4f CStack_84;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  int local_24;
  float local_20;
  float local_1c;
  CDeformableModelInstance *pCStack_18;
  CCharacter_full_vtable *local_14;
  
  bVar12 = 0;
  iVar5 = core_charactr_cpp_CCharacter_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
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
  core_colonel_cpp_CColonel_processMotionEvents_FUN_0043a980(this_ptr,delta_time);
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_colonel_cpp_CColonel_processAI_FUN_0043a470(this_ptr,delta_time);
  }
  fVar14 = (float)12.566370614;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar14;
  iVar5 = core_charactr_cpp_CCharacter_FUN_00428c00((CCharacter *)this_ptr,delta_time);
  pCVar13 = &(this_ptr->base).base.model;
  if (iVar5 == 0) {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&pCVar13->motion_controller);
    switch(pSVar9->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar5 = 0;
        if ((this_ptr->base).player_input.action_state.walk != 0) {
          if ((this_ptr->base).player_input.action_state.run == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
          }
        }
        if ((this_ptr->base).player_input.action_state.backup != 0) {
          iVar5 = 3;
        }
        if ((this_ptr->base).player_input.action_state.draw != 0) {
          iVar8 = this_ptr->guns_drawn;
          (this_ptr->base).player_input.action_state.draw = 0;
          iVar5 = 0;
          this_ptr->guns_drawn = (uint)(iVar8 == 0);
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          bVar4 = true;
          if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
            iVar8 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(&this_ptr->base);
            bVar4 = false;
            if (iVar8 != 0) goto LAB_0043a2b0;
            local_24 = core_hero_cpp_CHero_FUN_004b5110(&this_ptr->base);
            if ((local_24 != 0) && (local_24 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(&this_ptr->base);
            }
            if ((local_24 != 0) ||
               (iVar8 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(&this_ptr->base),
               iVar8 != 0)) goto LAB_0043a2b0;
            iVar8 = core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(&this_ptr->base);
            if (iVar8 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(&this_ptr->base);
              goto LAB_0043a2b0;
            }
          }
          else {
LAB_0043a2b0:
            if (!bVar4) goto LAB_0043a2be;
          }
          (this_ptr->base).player_input.action_state.fire = 0;
        }
LAB_0043a2be:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
        pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                           (&(this_ptr->base).base.model.motion_controller);
        if (iVar5 != pSVar9->state_index) goto LAB_0043a023;
      }
      break;
    case 6:
      goto switchD_0043a387_caseD_6;
    }
  }
  else {
    uVar2 = (this_ptr->base).base.is_walking;
    if (uVar2 < 2) {
      if (uVar2 == 1) {
        iVar5 = 1;
      }
      else {
LAB_0043a224:
        iVar5 = 0;
      }
    }
    else {
      if (2 < uVar2) {
        if (uVar2 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar13->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n");
          goto switchD_0043a387_caseD_4;
        }
        goto LAB_0043a224;
      }
      iVar5 = 2;
    }
LAB_0043a023:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
switchD_0043a387_caseD_4:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_38 = (this_ptr->base).base.velocity.x * delta_time;
    local_34 = (this_ptr->base).base.velocity.y * delta_time;
    local_30 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar6 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.position_delta;
    local_50 = pCVar6->x + pCVar1->x;
    local_4c = (this_ptr->base).base.model.accumulated_root_motion.y +
               (this_ptr->base).base.position_delta.y;
    local_68.x = local_50 + local_38;
    local_48 = (this_ptr->base).base.model.accumulated_root_motion.z +
               (this_ptr->base).base.position_delta.z;
    local_68.y = local_4c + local_34;
    local_68.z = local_48 + local_30;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar6->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    fVar14 = (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.position_delta.y = fVar14;
    pCVar1->x = fVar14;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_68);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         ((CDemonActor *)this_ptr,&local_5c,&(pCVar3->location).position);
      pCVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_44,pCVar6);
      local_14 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar6->y)
      ;
      local_98 = (float)local_14;
      if ((float)local_14 < (float)-1.57079632675) {
        local_98 = (float)local_14 + 5.3286462644388174e-315._0_4_;
      }
      if ((float)1.57079632675 < local_98) {
        local_98 = local_98 + 1.5938625219265179e-314._0_4_;
      }
      local_1c = delta_time * (float)3.1415926535000001;
      local_20 = -local_1c;
      if (local_98 < local_20) {
        local_98 = local_20;
      }
      if (local_1c < local_98) {
        local_98 = local_1c;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_98;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)this_ptr);
    }
    this_ptr_00 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    local_14 = (this_ptr_00->base).vtable._uc;
    pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (&(this_ptr->base).base.model,&local_74,0);
    iVar5 = (*(local_14->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)this_ptr,pCVar6);
    if (iVar5 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_0043a151:
      iVar5 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_0043a151;
      if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_0043a164;
      iVar5 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
LAB_0043a164:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  pCStack_18 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCStack_18);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar7 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650;
    fVar14 = this_ptr->head_look_blend_weight;
    iVar5 = DAT_0077ac8c;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610(&this_ptr->head_look_euler,&CStack_94);
    pCVar13 = pCStack_18;
    source_quaternions = &CStack_84;
    CStack_84.w = CStack_94.w;
    puVar11 = (uint *)((int)&CStack_84 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    puVar10 = (uint *)((int)&CStack_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)((int)&CStack_84 + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&CStack_94 + (uint)bVar12 * -8 + 4);
    *puVar11 = *puVar10;
    puVar11[(uint)bVar12 * -2 + 1] = puVar10[(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (pCVar13,source_quaternions,fVar14,iVar5,blend_callback);
  }
  core_charactr_cpp_CCharacter_FUN_0042a150((CCharacter *)this_ptr,delta_time);
switchD_0043a387_caseD_6:
  return;
}
