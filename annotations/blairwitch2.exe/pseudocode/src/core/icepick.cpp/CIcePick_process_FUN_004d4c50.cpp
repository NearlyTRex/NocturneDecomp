// Name: core_icepick.cpp_CIcePick_process_FUN_004d4c50
// Address: 004d4c50
// Address Range: [[004d4c50, 004d5460]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_process_FUN_004d4c50(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004d52e5) */

void __cdecl core_icepick_cpp_CIcePick_process_FUN_004d4c50(CIcePick *this_ptr,float delta_time)

{
  EWalkState EVar1;
  bool bVar2;
  float fVar3;
  CCharacter_full_vtable *pCVar4;
  int iVar5;
  CDemonActor *pCVar6;
  EDeathState EVar7;
  CCharacter *pCVar8;
  int iVar9;
  uint uVar10;
  SMotion *pSVar11;
  CMotionController *unaff_ESI;
  byte bVar12;
  float in_stack_00000010;
  float in_stack_00000014;
  float afStackY_1898 [1521];
  CDeformableModelInstance *pCVar13;
  CQuaternion4f *source_quaternions;
  CDemonActor *in_stack_ffffff38;
  CIcePick *actor;
  float fVar14;
  CVector3f *pCVar15;
  code *blend_callback;
  float in_stack_ffffff44;
  CQuaternion4f CStack_ac;
  float afStack_9c [4];
  float fStack_8c;
  CVector3f CStack_88;
  float fStack_7c;
  float afStack_78 [2];
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [2];
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [2];
  CVector3f CStack_28;
  CCharacter_full_vtable *pCStack_1c;
  float fStack_18;
  CDeformableModelInstance *pCStack_14;
  
  bVar12 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  if ((this_ptr->base).ai_task == HERO_TASK_SUSPEND) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_icepick_cpp_CIcePick_processAI_FUN_004d5950(this_ptr,delta_time);
  }
  this_ptr->is_armed =
       (uint)((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0);
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_0042b2a0((CCharacter *)this_ptr,delta_time);
  fVar14 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar14;
  if (fVar14 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar15 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar15->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_icepick_cpp_CIcePick_processMotionEvents_FUN_004d6140(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  pCVar13 = &(this_ptr->base).base.model;
  if (iVar5 == 0) {
    pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar13->base);
    uVar10 = pSVar11->state_index;
    if (uVar10 < 9) {
      if ((((uVar10 == 0) || (uVar10 < 2)) || (uVar10 < 3)) || (uVar10 == 3)) goto LAB_004d5052;
    }
    else {
      if (uVar10 < 10) {
        return;
      }
      if (uVar10 < 0xf) {
        if (uVar10 < 0xb) {
LAB_004d5052:
          if ((this_ptr->base).base.is_on_ground != 0) {
            iVar5 = 0;
            if ((this_ptr->guns_drawn != 0) && (this_ptr->is_armed == 0)) {
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
              uVar10 = (uint)(iVar5 == 0);
              this_ptr->guns_drawn = uVar10;
              if ((uVar10 == 0) || (this_ptr->is_armed != 0)) {
                iVar5 = 0;
              }
              else {
                iVar5 = 10;
              }
            }
            if ((this_ptr->base).player_input.action_state.fire != 0) {
              bVar2 = true;
              if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI))
              {
                iVar9 = core_hero_cpp_CHero_tryInteract_FUN_004cec50(&this_ptr->base);
                bVar2 = false;
                if (iVar9 != 0) goto LAB_004d50f7;
                iVar9 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004cf030(&this_ptr->base,0);
                if ((iVar9 != 0) && (iVar9 != 1)) {
                  core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(&this_ptr->base);
                }
                if ((iVar9 != 0) ||
                   (iVar9 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90
                                      (&this_ptr->base), iVar9 != 0)) goto LAB_004d50f7;
                iVar9 = core_hero_cpp_CHero_tryPullLever_FUN_004cf2b0(&this_ptr->base);
                if (iVar9 != 0) {
                  core_hero_cpp_CHero_toggleLeverNow_FUN_004cf440(&this_ptr->base);
                  goto LAB_004d50f7;
                }
              }
              else {
LAB_004d50f7:
                if (!bVar2) goto switchD_004d528c_default;
              }
              if (this_ptr->guns_drawn != 0) {
                if (this_ptr->is_armed == 0) {
                  iVar9 = this_ptr->attack_count;
                  (this_ptr->base).player_input.action_state.fire = 0;
                  switch(iVar9) {
                  case 0:
                  case 2:
                    iVar5 = 0xe;
                    break;
                  case 1:
                  case 3:
                    iVar5 = 0xf;
                    break;
                  case 4:
                    iVar5 = 0x10;
                  }
                }
                else {
                  pCVar8 = (CCharacter *)
                           core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     ((this_ptr->base).base.carry_hands[1].carry_actor,
                                      g_CWeaponClassInfo.name_hash);
                  if (pCVar8 != (CCharacter *)0x0) {
                    (*(((pCVar8->base).vtable._uc)->_uc).isGrabbable)(pCVar8,in_stack_ffffff38);
                  }
                }
              }
            }
switchD_004d528c_default:
            (this_ptr->base).base.turn_angle_accumulator =
                 (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
            pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                                (&(this_ptr->base).base.model.base);
            if (iVar5 != pSVar11->state_index) {
              if ((((iVar5 == 0xe) || (iVar5 == 0xf)) || (iVar5 == 0x10)) &&
                 (iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[0]),
                 iVar9 == 0)) {
                uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"icepick-miss?.wav");
                this_ptr->sfx_handles[0] = uVar10;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,iVar5,1);
            }
            if (((this_ptr->base).player_input.action_state.use_item != 0) &&
               (iVar5 = core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004d55e0(this_ptr),
               iVar5 == 0)) {
              core_icepick_cpp_CIcePick_startThrowAttack_FUN_004d5780(this_ptr);
            }
          }
        }
      }
      else if (((0xf < uVar10) && (0x10 < uVar10)) && (uVar10 == 0x15)) goto LAB_004d5052;
    }
  }
  else {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar15->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    EVar1 = (this_ptr->base).base.walk_state;
    if (EVar1 < 2) {
      if (EVar1 == WALK_STATE_WALKING) {
        iVar5 = 1;
      }
      else {
LAB_004d5042:
        iVar5 = 0;
      }
    }
    else {
      if (2 < EVar1) {
        if (EVar1 == WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar13->base,0,1);
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
          goto LAB_004d4d65;
        }
        goto LAB_004d5042;
      }
      iVar5 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
LAB_004d4d65:
  pCVar6 = (this_ptr->base).base.grabbed_by;
  if (pCVar6 == (CDemonActor *)0x0) {
    CStack_64.x = (this_ptr->base).base.model.accumulated_root_motion.x;
    CStack_64.y = (this_ptr->base).base.model.accumulated_root_motion.y;
    CStack_64.z = (this_ptr->base).base.model.accumulated_root_motion.z;
    core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10((CCharacter *)this_ptr,in_stack_00000010)
    ;
    CStack_ac.z = (this_ptr->base).base.velocity.x * in_stack_00000010;
    pCVar15 = &CStack_64;
    afStack_9c[0] = (this_ptr->base).base.velocity.y * in_stack_00000010;
    afStack_9c[1] = (this_ptr->base).base.velocity.z * in_stack_00000010;
    fStack_7c = CStack_ac.z;
    afStack_78[(uint)bVar12 * -2] = afStack_9c[(uint)bVar12 * -2];
    afStack_78[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_9c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    fStack_34 = fStack_7c + (this_ptr->base).base.position_delta.x;
    afStack_30[0] = afStack_78[0] + (this_ptr->base).base.position_delta.y;
    afStack_30[1] = afStack_78[1] + (this_ptr->base).base.position_delta.z;
    afStack_9c[2] = fStack_34;
    afStack_9c[(uint)bVar12 * -2 + 3] = afStack_30[(uint)bVar12 * -2];
    afStack_9c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
         afStack_30[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    CStack_64.x = CStack_64.x + afStack_9c[2];
    CStack_64.y = CStack_64.y + afStack_9c[3];
    CStack_64.z = CStack_64.z + fStack_8c;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,pCVar15);
    goto LAB_004d4f1a;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
              ((CDemonActor *)this_ptr,&(pCVar6->location).position,&CStack_40);
    CStack_58.x = CStack_40.x;
    *(uint *)((int)&CStack_58 + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&CStack_40 + (uint)bVar12 * -8 + 4);
    *(uint *)((int)&CStack_58 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         *(uint *)((int)&CStack_40 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_58,&CStack_88);
    fStack_4c = CStack_88.x;
    afStack_48[(uint)bVar12 * -2] = *(float *)((int)&CStack_88 + (uint)bVar12 * -8 + 4);
    afStack_48[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         *(float *)((int)&CStack_88 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    pCStack_1c = (CCharacter_full_vtable *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_48[0]);
    fVar14 = (float)pCStack_1c;
    if ((float)pCStack_1c < -1.570796f) {
      fVar14 = (float)pCStack_1c + 3.141593f;
    }
    if (1.570796f < fVar14) {
      fVar14 = fVar14 + -3.141593f;
    }
    fVar3 = in_stack_00000010 * 3.141593f;
    fStack_18 = -fVar3;
    if (fVar14 < fStack_18) {
      fVar14 = fStack_18;
    }
    if (fVar3 < fVar14) {
      fVar14 = fVar3;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fVar14;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  }
  pCVar8 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  pCStack_1c = (pCVar8->base).vtable._uc;
  pCStack_14 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (pCStack_14,0,&CStack_28);
  pCVar4 = pCStack_1c;
  pCVar15 = &CStack_70;
  CStack_70.x = CStack_28.x;
  *(uint *)((int)&CStack_70 + (uint)bVar12 * -8 + 4) =
       *(uint *)((int)&CStack_28 + (uint)bVar12 * -8 + 4);
  actor = this_ptr;
  *(uint *)((int)&CStack_70 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
       *(uint *)((int)&CStack_28 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
  iVar5 = (*(pCVar4->_uc).attractActorToward)(pCVar8,(CDemonActor *)actor,pCVar15);
  if (iVar5 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004d4f07:
    in_stack_ffffff44 = 0.0;
    unaff_ESI = &(this_ptr->base).base.model.base;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004d4f07;
    if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_004d4f1a;
    in_stack_ffffff44 = 2.38221e-44;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(unaff_ESI,(int)in_stack_ffffff44,1)
  ;
LAB_004d4f1a:
  core_inv_cpp_CInventory_updateInventory_FUN_004dccd0((this_ptr->base).inventories);
  pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash)
  ;
  if (pCVar6 != (CDemonActor *)0x0) {
    (*((pCVar6->vtable)._ub)->process)(pCVar6,in_stack_00000010);
    pCVar6[2].particle_systems[0].position.z = 1.4013e-43;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  pCVar13 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar13);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar7 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
    fVar14 = this_ptr->head_look_blend_weight;
    iVar5 = g_INT_ARRAY_01cee0b4[0];
    core_xform_cpp_eulerToQuaternion_FUN_00594380
              (&this_ptr->head_look_euler,(CQuaternion4f *)&stack0xffffff44);
    source_quaternions = &CStack_ac;
    CStack_ac.w = in_stack_ffffff44;
    afStack_9c[(uint)bVar12 * -2 + -3] = *(float *)(&stack0xffffff48 + (uint)bVar12 * -8);
    afStack_9c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -2] =
         *(float *)(&stack0xffffff4c + (uint)bVar12 * -8 + (uint)bVar12 * -8);
    (afStack_9c + (uint)bVar12 * -2 + (uint)bVar12 * -2 + -2)[(uint)bVar12 * -2 + 1] =
         *(float *)((int)(&stack0xffffff4c + (uint)bVar12 * -8 + (uint)bVar12 * -8) +
                   ((uint)bVar12 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (pCVar13,source_quaternions,fVar14,iVar5,blend_callback);
  }
  core_icepick_cpp_CIcePick_updateShootBlend_FUN_004d5470(this_ptr,in_stack_00000014);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90
            ((CCharacter *)this_ptr,in_stack_00000014);
  return;
}
