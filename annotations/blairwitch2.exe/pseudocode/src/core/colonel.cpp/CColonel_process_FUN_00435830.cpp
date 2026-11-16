// Name: core_colonel.cpp_CColonel_process_FUN_00435830
// Address: 00435830
// Address Range: [[00435830, 00435e24]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_process_FUN_00435830(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_colonel_cpp_CColonel_process_FUN_00435830(CColonel *this_ptr,float delta_time)

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
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [5];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CCharacter *pCStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar12 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
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
  core_colonel_cpp_CColonel_processMotionEvents_FUN_00436420(this_ptr,delta_time);
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_colonel_cpp_CColonel_processAI_FUN_00435e30(this_ptr,delta_time);
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_0042b2a0((CCharacter *)this_ptr,delta_time);
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  pCVar13 = &(this_ptr->base).base.model;
  if (iVar6 == 0) {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar13->base);
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
            iVar8 = core_hero_cpp_CHero_tryInteract_FUN_004cec50(&this_ptr->base);
            bVar4 = false;
            if (iVar8 != 0) goto LAB_00435c28;
            iVar8 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004cf030(&this_ptr->base,0);
            if ((iVar8 != 0) && (iVar8 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(&this_ptr->base);
            }
            if ((iVar8 != 0) ||
               (iVar8 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(&this_ptr->base),
               iVar8 != 0)) goto LAB_00435c28;
            iVar8 = core_hero_cpp_CHero_tryPullLever_FUN_004cf2b0(&this_ptr->base);
            if (iVar8 != 0) {
              core_hero_cpp_CHero_toggleLeverNow_FUN_004cf440(&this_ptr->base);
              goto LAB_00435c28;
            }
          }
          else {
LAB_00435c28:
            if (!bVar4) goto LAB_00435c36;
          }
          (this_ptr->base).player_input.action_state.fire = 0;
        }
LAB_00435c36:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
        pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                           (&(this_ptr->base).base.model.base);
        if (iVar6 != pSVar9->state_index) goto LAB_00435919;
      }
      break;
    case 6:
      goto switchD_00435cf7_caseD_6;
    }
  }
  else {
    EVar2 = (this_ptr->base).base.walk_state;
    if (EVar2 < 2) {
      if (EVar2 == WALK_STATE_WALKING) {
        iVar6 = 1;
      }
      else {
LAB_00435b9d:
        iVar6 = 0;
      }
    }
    else {
      if (2 < EVar2) {
        if (EVar2 == WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar13->base,0,1);
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
          goto switchD_00435cf7_caseD_4;
        }
        goto LAB_00435b9d;
      }
      iVar6 = 2;
    }
LAB_00435919:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
switchD_00435cf7_caseD_4:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10((CCharacter *)this_ptr,delta_time);
    fStack_60 = (this_ptr->base).base.velocity.x * delta_time;
    pCVar15 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_5c[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_5c[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_9c = fStack_60;
    afStack_98[(uint)bVar12 * -2] = afStack_5c[(uint)bVar12 * -2];
    afStack_98[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_5c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    pCVar1 = &(this_ptr->base).base.position_delta;
    afStack_5c[2] = pCVar15->x + pCVar1->x;
    afStack_5c[3] =
         (this_ptr->base).base.model.accumulated_root_motion.y +
         (this_ptr->base).base.position_delta.y;
    fStack_4c = (this_ptr->base).base.model.accumulated_root_motion.z +
                (this_ptr->base).base.position_delta.z;
    fStack_84 = afStack_5c[2];
    afStack_98[(uint)bVar12 * -2 + 6] = afStack_5c[(uint)bVar12 * -2 + 3];
    afStack_98[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
         afStack_5c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    fStack_78 = fStack_84 + fStack_9c;
    fStack_74 = fStack_80 + afStack_98[0];
    fStack_70 = fStack_7c + afStack_98[1];
    CStack_b4.x = fStack_84 + fStack_9c;
    *(float *)((int)&CStack_b4 + (uint)bVar12 * -8 + 4) = afStack_98[(uint)bVar12 * -2 + 9];
    *(float *)((int)&CStack_b4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         afStack_98[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar15->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,&CStack_b4);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                ((CDemonActor *)this_ptr,&(pCVar3->location).position,&CStack_6c);
      CStack_a8.x = CStack_6c.x;
      *(uint *)((int)&CStack_a8 + (uint)bVar12 * -8 + 4) =
           *(uint *)((int)&CStack_6c + (uint)bVar12 * -8 + 4);
      *(uint *)((int)&CStack_a8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           *(uint *)((int)&CStack_6c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_a8,&CStack_30);
      afStack_98[2] = CStack_30.x;
      afStack_98[(uint)bVar12 * -2 + 3] = *(float *)((int)&CStack_30 + (uint)bVar12 * -8 + 4);
      afStack_98[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           *(float *)((int)&CStack_30 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
      pCStack_14 = (CCharacter_full_vtable *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_98[3]);
      fStack_18 = (float)pCStack_14;
      if ((float)pCStack_14 < _DAT_005cdbe1) {
        fStack_18 = (float)pCStack_14 + _DAT_005cdbe5;
      }
      if (_DAT_005cdbe9 < fStack_18) {
        fStack_18 = fStack_18 + _DAT_005cdbed;
      }
      fStack_1c = delta_time * _DAT_005cdbe5;
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
              (&(this_ptr->base).base.model,0,&CStack_3c);
    pCVar5 = pCStack_14;
    this_ptr_00 = pCStack_24;
    pCVar15 = (CVector3f *)(afStack_5c + 5);
    CStack_48.x = CStack_3c.x;
    afStack_5c[(uint)bVar12 * -2 + 6] = *(float *)((int)&CStack_3c + (uint)bVar12 * -8 + 4);
    actor = this_ptr;
    afStack_5c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
         *(float *)((int)&CStack_3c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    iVar6 = (*(pCVar5->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)actor,pCVar15);
    if (iVar6 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_00435ad0:
      iVar6 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_00435ad0;
      if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_00435ae3;
      iVar6 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
LAB_00435ae3:
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  pCVar13 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar13);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar7 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
    fVar14 = this_ptr->head_look_blend_weight;
    iVar6 = DAT_007c150c;
    core_xform_cpp_eulerToQuaternion_FUN_00594380(&this_ptr->head_look_euler,&CStack_c4);
    source_quaternions = &CStack_d4;
    CStack_d4.w = CStack_c4.w;
    puVar11 = (uint *)((int)&CStack_d4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    puVar10 = (uint *)((int)&CStack_c4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)((int)&CStack_d4 + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&CStack_c4 + (uint)bVar12 * -8 + 4);
    *puVar11 = *puVar10;
    puVar11[(uint)bVar12 * -2 + 1] = puVar10[(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (pCVar13,source_quaternions,fVar14,iVar6,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
switchD_00435cf7_caseD_6:
  return;
}
