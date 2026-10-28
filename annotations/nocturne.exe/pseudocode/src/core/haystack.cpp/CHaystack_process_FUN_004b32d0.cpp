// Name: core_haystack.cpp_CHaystack_process_FUN_004b32d0
// Address: 004b32d0
// Address Range: [[004b32d0, 004b3877]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_process_FUN_004b32d0(CHaystack *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_haystack_cpp_CHaystack_process_FUN_004b32d0(CHaystack *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  EWalkState EVar2;
  CDemonActor *pCVar3;
  CCharacter *this_ptr_00;
  bool bVar4;
  CGame *pCVar5;
  int iVar6;
  CVector3f *pCVar7;
  EDeathState EVar8;
  SMotion *pSVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  byte bVar14;
  float afStackY_1868 [1521];
  CDeformableModelInstance *pCVar15;
  CQuaternion4f *source_quaternions;
  float fVar16;
  code *blend_callback;
  float local_90;
  CQuaternion4f CStack_8c;
  CQuaternion4f CStack_7c;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  float local_28;
  CDeformableModelInstance *pCStack_24;
  float local_20;
  int local_1c;
  CCharacter_full_vtable *local_18;
  
  bVar14 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_004259f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_haystack_cpp_CHaystack_updateAI_FUN_004b3880(this_ptr,delta_time);
  }
  pCVar5 = g_CGame_PTR_005b9354;
  (this_ptr->base).base.turn_speed = delta_time * (float)12.566370614;
  if (pCVar5->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  fVar16 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar16;
  if (fVar16 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_haystack_cpp_CHaystack_advanceMotion_FUN_004b3e00(this_ptr,delta_time);
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00428c00
                    ((CCharacter *)this_ptr,delta_time);
  pCVar15 = &(this_ptr->base).base.model;
  if (iVar6 == 0) {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(&pCVar15->base);
    switch(pSVar9->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar6 = 0;
        if (this_ptr->guns_drawn != 0) {
          iVar6 = 10;
        }
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
          iVar6 = this_ptr->guns_drawn;
          (this_ptr->base).player_input.action_state.draw = 0;
          uVar10 = (uint)(iVar6 == 0);
          this_ptr->guns_drawn = uVar10;
          if (uVar10 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = 10;
          }
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          bVar4 = true;
          if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
            iVar11 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(&this_ptr->base);
            bVar4 = false;
            if (iVar11 != 0) goto LAB_004b3666;
            local_1c = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004b5110(&this_ptr->base);
            if ((local_1c != 0) && (local_1c != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(&this_ptr->base);
            }
            if ((local_1c != 0) ||
               (iVar11 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(&this_ptr->base),
               iVar11 != 0)) goto LAB_004b3666;
            iVar11 = core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(&this_ptr->base);
            if (iVar11 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(&this_ptr->base);
              goto LAB_004b3666;
            }
          }
          else {
LAB_004b3666:
            if (!bVar4) goto LAB_004b3687;
          }
          iVar6 = this_ptr->attack_side;
          (this_ptr->base).player_input.action_state.fire = 0;
          if (iVar6 == 0) {
            iVar6 = 0xf;
          }
          else {
            iVar6 = 0xe;
          }
        }
LAB_004b3687:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
        pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                           (&(this_ptr->base).base.model.base);
        if (iVar6 != pSVar9->state_index) goto LAB_004b33ac;
      }
      break;
    case 9:
      goto switchD_004b375e_caseD_9;
    }
  }
  else {
    EVar2 = (this_ptr->base).base.walk_state;
    if (EVar2 < 2) {
      if (EVar2 == WALK_STATE_WALKING) {
        iVar6 = 1;
      }
      else {
LAB_004b35c4:
        iVar6 = 0;
      }
    }
    else {
      if (2 < EVar2) {
        if (EVar2 == WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar15->base,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",this_ptr);
          goto switchD_004b375e_caseD_4;
        }
        goto LAB_004b35c4;
      }
      iVar6 = 2;
    }
LAB_004b33ac:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
switchD_004b375e_caseD_4:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    pCVar7 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.position_delta;
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_3c.x = pCVar7->x + pCVar1->x;
    local_3c.y = (this_ptr->base).base.model.accumulated_root_motion.y +
                 (this_ptr->base).base.position_delta.y;
    local_3c.z = (this_ptr->base).base.model.accumulated_root_motion.z +
                 (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar7->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(this_ptr->base).base.model.base);
    if ((pSVar9->state_index == 0xe) || (pSVar9->state_index == 0xf)) {
      local_3c.y = 0.0;
      local_3c.x = 0.0;
      local_3c.z = 0.0;
    }
    local_6c = (this_ptr->base).base.velocity.x * delta_time;
    local_68 = (this_ptr->base).base.velocity.y * delta_time;
    local_64 = delta_time * (this_ptr->base).base.velocity.z;
    local_3c.x = local_3c.x + local_6c;
    local_3c.y = local_3c.y + local_68;
    local_3c.z = local_3c.z + local_64;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_3c);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         ((CDemonActor *)this_ptr,&local_60,&(pCVar3->location).position);
      pCVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_54,pCVar7);
      local_18 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar7->y)
      ;
      local_90 = (float)local_18;
      if ((float)local_18 < (float)-1.57079632675) {
        local_90 = (float)local_18 + 3.141593f;
      }
      if ((float)1.57079632675 < local_90) {
        local_90 = local_90 + 1.5938625219265179e-314._0_4_;
      }
      local_20 = delta_time * (float)3.1415926535000001;
      local_28 = -local_20;
      if (local_90 < local_28) {
        local_90 = local_28;
      }
      if (local_20 < local_90) {
        local_90 = local_20;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_90;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)this_ptr);
    }
    this_ptr_00 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    local_18 = (this_ptr_00->base).vtable._uc;
    pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0051d380
                       (&(this_ptr->base).base.model,&local_48,0);
    iVar6 = (*(local_18->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)this_ptr,pCVar7);
    if (iVar6 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004b34d1:
      iVar6 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004b34d1;
      if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_004b34e4;
      iVar6 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
LAB_004b34e4:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  pCStack_24 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCStack_24);
  EVar8 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if ((EVar8 == DEATH_STATE_ALIVE) &&
     (pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(&pCStack_24->base),
     pSVar9->state_index != 0x13)) {
    blend_callback = core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650;
    fVar16 = this_ptr->head_look_blend_weight;
    iVar6 = _DAT_01cae018;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610(&this_ptr->head_look_euler,&CStack_8c);
    pCVar15 = pCStack_24;
    source_quaternions = &CStack_7c;
    CStack_7c.w = CStack_8c.w;
    puVar13 = (uint *)((int)&CStack_7c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
    puVar12 = (uint *)((int)&CStack_8c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
    *(uint *)((int)&CStack_7c + (uint)bVar14 * -8 + 4) =
         *(uint *)((int)&CStack_8c + (uint)bVar14 * -8 + 4);
    *puVar13 = *puVar12;
    puVar13[(uint)bVar14 * -2 + 1] = puVar12[(uint)bVar14 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (pCVar15,source_quaternions,fVar16,iVar6,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042a150((CCharacter *)this_ptr,delta_time);
switchD_004b375e_caseD_9:
  return;
}
