// Name: core_haystack.cpp_CHaystack_process_FUN_004cc990
// Address: 004cc990
// Address Range: [[004cc990, 004ccfe3]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_process_FUN_004cc990(CHaystack *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_haystack_cpp_CHaystack_process_FUN_004cc990(CHaystack *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  EWalkState EVar2;
  CDemonActor *pCVar3;
  bool bVar4;
  int iVar5;
  EDeathState EVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_1898 [1522];
  CDeformableModelInstance *pCVar11;
  CQuaternion4f *source_quaternions;
  float fVar12;
  CVector3f *pCVar13;
  code *blend_callback;
  float fStack_bc;
  CQuaternion4f CStack_ac;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [2];
  CVector3f CStack_84;
  uint uStack_78;
  float afStack_74 [4];
  float fStack_64;
  float afStack_60 [3];
  uint uStack_54;
  uint uStack_48;
  float fStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CCharacter *pCStack_20;
  float fStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar10 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_haystack_cpp_CHaystack_updateAI_FUN_004ccff0(this_ptr,delta_time);
  }
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  fVar12 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar12;
  if (fVar12 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_haystack_cpp_CHaystack_advanceMotion_FUN_004cd660(this_ptr,delta_time);
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  pCVar11 = &(this_ptr->base).base.model;
  if (iVar5 == 0) {
    iVar5 = core_motion_cpp_FUN_005035c0(pCVar11);
    switch(*(uint *)(iVar5 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar5 = 0;
        if (this_ptr->guns_drawn != 0) {
          iVar5 = 10;
        }
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
          iVar5 = this_ptr->guns_drawn;
          (this_ptr->base).player_input.action_state.draw = 0;
          uVar7 = (uint)(iVar5 == 0);
          this_ptr->guns_drawn = uVar7;
          if (uVar7 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = 10;
          }
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          bVar4 = true;
          if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
            iVar8 = core_hero_cpp_FUN_004cec50(this_ptr);
            bVar4 = false;
            if (iVar8 != 0) goto LAB_004ccd9f;
            iVar8 = core_hero_cpp_FUN_004cf030(this_ptr,0);
            if ((iVar8 != 0) && (iVar8 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(&this_ptr->base);
            }
            if ((iVar8 != 0) ||
               (iVar8 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(&this_ptr->base),
               iVar8 != 0)) goto LAB_004ccd9f;
            iVar8 = core_hero_cpp_FUN_004cf2b0(&this_ptr->base);
            if (iVar8 != 0) {
              core_hero_cpp_FUN_004cf440(this_ptr);
              goto LAB_004ccd9f;
            }
          }
          else {
LAB_004ccd9f:
            if (!bVar4) goto LAB_004ccdc0;
          }
          iVar5 = this_ptr->attack_side;
          (this_ptr->base).player_input.action_state.fire = 0;
          if (iVar5 == 0) {
            iVar5 = 0xf;
          }
          else {
            iVar5 = 0xe;
          }
        }
LAB_004ccdc0:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
        iVar8 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
        if (iVar5 != *(int *)(iVar8 + 0x24)) goto LAB_004cca5f;
      }
      break;
    case 9:
      goto switchD_004cce93_caseD_9;
    }
  }
  else {
    EVar2 = (this_ptr->base).base.walk_state;
    if (EVar2 < 2) {
      if (EVar2 == WALK_STATE_WALKING) {
        iVar5 = 1;
      }
      else {
LAB_004cccfd:
        iVar5 = 0;
      }
    }
    else {
      if (2 < EVar2) {
        if (EVar2 == WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar11->base,0,1);
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto switchD_004cce93_caseD_4;
        }
        goto LAB_004cccfd;
      }
      iVar5 = 2;
    }
LAB_004cca5f:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
switchD_004cce93_caseD_4:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    pCVar13 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.position_delta;
    fStack_90 = pCVar13->x + pCVar1->x;
    afStack_8c[0] =
         (this_ptr->base).base.model.accumulated_root_motion.y +
         (this_ptr->base).base.position_delta.y;
    afStack_8c[1] =
         (this_ptr->base).base.model.accumulated_root_motion.z +
         (this_ptr->base).base.position_delta.z;
    CStack_84.x = fStack_90;
    *(float *)((int)&CStack_84 + (uint)bVar10 * -8 + 4) = afStack_8c[(uint)bVar10 * -2];
    *(float *)((int)&CStack_84 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar13->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    fVar12 = (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.position_delta.y = fVar12;
    pCVar1->x = fVar12;
    iVar5 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    if ((*(int *)(iVar5 + 0x24) == 0xe) || (*(int *)(iVar5 + 0x24) == 0xf)) {
      CStack_84.y = 0.0;
      CStack_84.x = 0.0;
      CStack_84.z = 0.0;
    }
    afStack_74[2] = (this_ptr->base).base.velocity.x * delta_time;
    pCVar13 = &CStack_84;
    afStack_74[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_64 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_30 = afStack_74[2];
    afStack_74[(uint)bVar10 * -2 + 0x12] = afStack_74[(uint)bVar10 * -2 + 3];
    afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
         afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    CStack_84.x = CStack_84.x + fStack_30;
    CStack_84.y = CStack_84.y + fStack_2c;
    CStack_84.z = CStack_84.z + fStack_28;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,pCVar13);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      core_actor_cpp_FUN_00408de0(this_ptr,&pCVar3->location);
      afStack_60[0] = (float)uStack_54;
      afStack_74[(uint)bVar10 * -2 + 6] = afStack_74[(uint)bVar10 * -2 + 9];
      afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_74 + 5);
      uStack_78 = uStack_48;
      afStack_74[(uint)bVar10 * -2] = afStack_74[(uint)bVar10 * -2 + 0xc];
      afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
      pCStack_14 = (CCharacter_full_vtable *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_74[0]);
      fStack_1c = (float)pCStack_14;
      if ((float)pCStack_14 < _DAT_005d9932) {
        fStack_1c = (float)pCStack_14 + _DAT_005d9936;
      }
      if (_DAT_005d993a < fStack_1c) {
        fStack_1c = fStack_1c + _DAT_005d993e;
      }
      fStack_24 = delta_time * _DAT_005d9936;
      fStack_18 = -fStack_24;
      if (fStack_1c < fStack_18) {
        fStack_1c = fStack_18;
      }
      if (fStack_24 < fStack_1c) {
        fStack_1c = fStack_24;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_1c;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
    }
    pCStack_20 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    pCStack_14 = (pCStack_20->base).vtable._uc;
    core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,0);
    pCVar13 = &CStack_9c;
    CStack_9c.x = fStack_3c;
    *(float *)((int)&CStack_9c + (uint)bVar10 * -8 + 4) = afStack_74[(uint)bVar10 * -2 + 0xf];
    *(float *)((int)&CStack_9c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_74[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
    iVar5 = (*(pCStack_14->_uc).attractActorToward)(pCStack_20,(CDemonActor *)this_ptr,pCVar13);
    if (iVar5 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004ccc0a:
      iVar5 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004ccc0a;
      if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_004ccc1d;
      iVar5 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
LAB_004ccc1d:
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  pCVar11 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar11);
  EVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if ((EVar6 == DEATH_STATE_ALIVE) &&
     (iVar5 = core_motion_cpp_FUN_005035c0(pCVar11), *(int *)(iVar5 + 0x24) != 0x13)) {
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    fVar12 = this_ptr->head_look_blend_weight;
    iVar5 = _DAT_01cede20;
    core_xform_cpp_FUN_00594380(&this_ptr->head_look_euler);
    source_quaternions = &CStack_ac;
    CStack_ac.w = fStack_bc;
    puVar9 = (uint *)((int)&CStack_ac + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_ac + (uint)bVar10 * -8 + 4) =
         *(uint *)(&stack0xffffff48 + (uint)bVar10 * -8);
    *puVar9 = *(uint *)(&stack0xffffff4c + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    puVar9[(uint)bVar10 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff4c + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
          ((uint)bVar10 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (pCVar11,source_quaternions,fVar12,iVar5,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
switchD_004cce93_caseD_9:
  return;
}
