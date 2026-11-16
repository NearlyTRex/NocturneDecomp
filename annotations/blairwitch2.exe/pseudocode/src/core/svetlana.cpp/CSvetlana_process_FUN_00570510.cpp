// Name: core_svetlana.cpp_CSvetlana_process_FUN_00570510
// Address: 00570510
// Address Range: [[00570510, 00570c77]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_00570510(CSvetlana *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_00570510(CSvetlana *this_ptr,float delta_time)

{
  UOrientationVector *euler;
  CLocation *position;
  EWalkState EVar1;
  CDemonActor *pCVar2;
  bool bVar3;
  int iVar4;
  SMotion *pSVar5;
  EDeathState EVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_18ac [1521];
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *source_quaternions;
  float fVar13;
  CVector3f *pCVar14;
  code *blend_callback;
  CQuaternion4f CStack_d0;
  CQuaternion4f CStack_c0;
  CVector3f CStack_b0;
  float fStack_a4;
  float afStack_a0 [2];
  CVector3f CStack_98;
  CVector3f CStack_8c;
  float fStack_80;
  float afStack_7c [4];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  CCharacter *pCStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar11 = 0;
  if (((this_ptr->base).base.hit_points < (float)_DAT_005ec2fb) &&
     (fVar13 = (this_ptr->base).base.hit_points + delta_time,
     (this_ptr->base).base.hit_points = fVar13, (float)_DAT_005ec2fb < fVar13)) {
    (this_ptr->base).base.hit_points = 100.0;
  }
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if ((iVar4 == 0) || ((this_ptr->base).ai_task == HERO_TASK_SUSPEND)) {
switchD_0057096f_caseD_9:
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0((CCharacter *)this_ptr,delta_time);
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_0042b2a0((CCharacter *)this_ptr,delta_time);
  fVar13 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar13;
  if (fVar13 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar14 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_svetlana_cpp_CSvetlana_advanceMotion_FUN_00571460(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar4 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
      core_svetlana_cpp_CSvetlana_processAI_FUN_00570c80(this_ptr,delta_time);
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                       (&(this_ptr->base).base.model.base);
    switch(pSVar5->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar4 = 0;
        if (this_ptr->blades_drawn != 0) {
          iVar4 = 10;
        }
        if ((this_ptr->base).player_input.action_state.walk != 0) {
          if ((this_ptr->base).player_input.action_state.run == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
        }
        if ((this_ptr->base).player_input.action_state.backup != 0) {
          iVar4 = 3;
        }
        if ((this_ptr->base).player_input.action_state.draw != 0) {
          iVar4 = this_ptr->blades_drawn;
          (this_ptr->base).player_input.action_state.draw = 0;
          uVar7 = (uint)(iVar4 == 0);
          this_ptr->blades_drawn = uVar7;
          if (uVar7 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = 10;
          }
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          bVar3 = true;
          if ((this_ptr->blades_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
            iVar8 = core_hero_cpp_CHero_tryInteract_FUN_004cec50(&this_ptr->base);
            bVar3 = false;
            if (iVar8 != 0) goto LAB_00570a09;
            iVar8 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004cf030(&this_ptr->base,0);
            if ((iVar8 != 0) && (iVar8 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(&this_ptr->base);
            }
            if ((iVar8 != 0) ||
               (iVar8 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(&this_ptr->base),
               iVar8 != 0)) goto LAB_00570a09;
            iVar8 = core_hero_cpp_CHero_tryPullLever_FUN_004cf2b0(&this_ptr->base);
            if (iVar8 != 0) {
              core_hero_cpp_CHero_toggleLeverNow_FUN_004cf440(&this_ptr->base);
              goto LAB_00570a09;
            }
          }
          else {
LAB_00570a09:
            if (!bVar3) goto LAB_00570a2a;
          }
          iVar4 = this_ptr->attack_hand;
          (this_ptr->base).player_input.action_state.fire = 0;
          if (iVar4 == 0) {
            iVar4 = 0xf;
          }
          else {
            iVar4 = 0xe;
          }
        }
LAB_00570a2a:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                           (&(this_ptr->base).base.model.base);
        if (iVar4 != pSVar5->state_index) goto LAB_00570663;
      }
      break;
    case 9:
      goto switchD_0057096f_caseD_9;
    }
  }
  else {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                       (&(this_ptr->base).base.model.base);
    if ((pSVar5->state_index != 0x1a) && (pSVar5->state_index != 0x1b)) {
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    }
    EVar1 = (this_ptr->base).base.walk_state;
    if (EVar1 < 2) {
      if (EVar1 == WALK_STATE_WALKING) {
        iVar4 = 1;
      }
      else {
LAB_0057092b:
        iVar4 = 0;
      }
    }
    else {
      if (2 < EVar1) {
        if (EVar1 == WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0,1);
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
          goto switchD_0057096f_caseD_4;
        }
        goto LAB_0057092b;
      }
      iVar4 = 2;
    }
LAB_00570663:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar4,1);
  }
switchD_0057096f_caseD_4:
  pCVar2 = (this_ptr->base).base.grabbed_by;
  if (pCVar2 == (CDemonActor *)0x0) {
    CStack_8c.x = (this_ptr->base).base.model.accumulated_root_motion.x;
    CStack_8c.y = (this_ptr->base).base.model.accumulated_root_motion.y;
    CStack_8c.z = (this_ptr->base).base.model.accumulated_root_motion.z;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                       (&(this_ptr->base).base.model.base);
    if (pSVar5->state_index != 0x1a) {
      core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10((CCharacter *)this_ptr,delta_time);
    }
    afStack_7c[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_7c[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_6c = (this_ptr->base).base.velocity.z * delta_time;
    fStack_44 = afStack_7c[2];
    afStack_40[(uint)bVar11 * -2] = afStack_7c[(uint)bVar11 * -2 + 3];
    afStack_40[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    fStack_68 = fStack_44 + (this_ptr->base).base.position_delta.x;
    fStack_64 = afStack_40[0] + (this_ptr->base).base.position_delta.y;
    fStack_60 = afStack_40[1] + (this_ptr->base).base.position_delta.z;
    fStack_a4 = fStack_68;
    afStack_a0[(uint)bVar11 * -2] = afStack_7c[(uint)bVar11 * -2 + 6];
    afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    CStack_8c.x = CStack_8c.x + fStack_a4;
    CStack_8c.y = CStack_8c.y + afStack_a0[0];
    CStack_8c.z = CStack_8c.z + afStack_a0[1];
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                       (&(this_ptr->base).base.model.base);
    iVar4 = pSVar5->state_index;
    if ((((iVar4 != 0x17) && (iVar4 != 0x18)) && (iVar4 != 0x19)) &&
       (((iVar4 != 0x25 && (iVar4 != 0x26)) && ((iVar4 != 0x27 && (iVar4 != 0x28)))))) {
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,&CStack_8c);
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                       (&(this_ptr->base).base.model.base);
    if (pSVar5->state_index == 0x1a) {
      (this_ptr->base).base.base.location.position.y =
           delta_time * (float)_DAT_005ec303 + (this_ptr->base).base.base.location.position.y;
    }
    goto LAB_00570827;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
              ((CDemonActor *)this_ptr,&(pCVar2->location).position,&CStack_5c);
    CStack_98.x = CStack_5c.x;
    *(uint *)((int)&CStack_98 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_5c + (uint)bVar11 * -8 + 4);
    *(uint *)((int)&CStack_98 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)((int)&CStack_5c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_98,&CStack_50);
    fStack_80 = CStack_50.x;
    afStack_7c[(uint)bVar11 * -2] = *(float *)((int)&CStack_50 + (uint)bVar11 * -8 + 4);
    afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         *(float *)((int)&CStack_50 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    pCStack_14 = (CCharacter_full_vtable *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_7c[0]);
    fStack_18 = (float)pCStack_14;
    if ((float)pCStack_14 < _DAT_005ec30b) {
      fStack_18 = (float)pCStack_14 + _DAT_005ec30f;
    }
    if (_DAT_005ec313 < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005ec317;
    }
    fStack_1c = delta_time * _DAT_005ec30f;
    fStack_20 = -fStack_1c;
    if (fStack_18 < fStack_20) {
      fStack_18 = fStack_20;
    }
    if (fStack_1c < fStack_18) {
      fStack_18 = fStack_1c;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_18;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  }
  pCStack_24 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  pCStack_14 = (pCStack_24->base).vtable._uc;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,0,&CStack_38);
  pCVar14 = &CStack_b0;
  CStack_b0.x = CStack_38.x;
  *(uint *)((int)&CStack_b0 + (uint)bVar11 * -8 + 4) =
       *(uint *)((int)&CStack_38 + (uint)bVar11 * -8 + 4);
  *(uint *)((int)&CStack_b0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       *(uint *)((int)&CStack_38 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  iVar4 = (*(pCStack_14->_uc).attractActorToward)(pCStack_24,(CDemonActor *)this_ptr,pCVar14);
  if (iVar4 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_00570814:
    iVar4 = 0;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_00570814;
    if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_00570827;
    iVar4 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.model.base,iVar4,1);
LAB_00570827:
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  pCVar12 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar12);
  EVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar6 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
    fVar13 = this_ptr->head_blend_weight;
    iVar4 = _DAT_0264bf38;
    core_xform_cpp_eulerToQuaternion_FUN_00594380(&this_ptr->head_euler_angles,&CStack_c0);
    source_quaternions = &CStack_d0;
    CStack_d0.w = CStack_c0.w;
    puVar10 = (uint *)((int)&CStack_d0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    puVar9 = (uint *)((int)&CStack_c0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(uint *)((int)&CStack_d0 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_c0 + (uint)bVar11 * -8 + 4);
    *puVar10 = *puVar9;
    puVar10[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (pCVar12,source_quaternions,fVar13,iVar4,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  pCVar12 = &(this_ptr->base).base.model;
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            (&this_ptr->cape_cloth,&position->position,&euler->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar12);
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            (&this_ptr->hair_cloth,&position->position,&euler->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar12);
  return;
}
