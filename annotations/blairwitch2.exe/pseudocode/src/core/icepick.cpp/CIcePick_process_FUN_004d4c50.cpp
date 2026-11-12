// Name: core_icepick.cpp_CIcePick_process_FUN_004d4c50
// Address: 004d4c50
// Address Range: [[004d4c50, 004d5460]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_process_FUN_004d4c50(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004d52e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  CMotionController *unaff_ESI;
  byte bVar11;
  float in_stack_00000010;
  float in_stack_00000014;
  float afStackY_1898 [1521];
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *source_quaternions;
  CDemonActor *in_stack_ffffff38;
  CIcePick *actor;
  float fVar13;
  CVector3f *pCVar14;
  code *blend_callback;
  float in_stack_ffffff44;
  CQuaternion4f CStack_ac;
  float afStack_9c [4];
  float fStack_8c;
  uint uStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3f CStack_70;
  CVector3f CStack_64;
  uint uStack_58;
  float afStack_54 [5];
  uint uStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CCharacter_full_vtable *pCStack_1c;
  float fStack_18;
  CDeformableModelInstance *pCStack_14;
  
  bVar11 = 0;
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
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
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
  core_icepick_cpp_CIcePick_processMotionEvents_FUN_004d6140(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  pCVar12 = &(this_ptr->base).base.model;
  if (iVar5 == 0) {
    iVar5 = core_motion_cpp_FUN_005035c0(pCVar12);
    uVar10 = *(uint *)(iVar5 + 0x24);
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
                iVar9 = core_hero_cpp_FUN_004cec50(this_ptr);
                bVar2 = false;
                if (iVar9 != 0) goto LAB_004d50f7;
                iVar9 = core_hero_cpp_FUN_004cf030(this_ptr,0);
                if ((iVar9 != 0) && (iVar9 != 1)) {
                  core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(&this_ptr->base);
                }
                if ((iVar9 != 0) ||
                   (iVar9 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90
                                      (&this_ptr->base), iVar9 != 0)) goto LAB_004d50f7;
                iVar9 = core_hero_cpp_FUN_004cf2b0(&this_ptr->base);
                if (iVar9 != 0) {
                  core_hero_cpp_FUN_004cf440(this_ptr);
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
            iVar9 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
            if (iVar5 != *(int *)(iVar9 + 0x24)) {
              if ((((iVar5 == 0xe) || (iVar5 == 0xf)) || (iVar5 == 0x10)) &&
                 (iVar9 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]), iVar9 == 0)) {
                uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"icepick-miss?.wav");
                this_ptr->sfx_handles[0] = uVar10;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,iVar5,1);
            }
            if (((this_ptr->base).player_input.action_state.use_item != 0) &&
               (iVar5 = core_icepick_cpp_FUN_004d55e0(this_ptr), iVar5 == 0)) {
              core_icepick_cpp_FUN_004d5780(this_ptr);
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
    pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
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
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar12->base,0,1);
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
    core_charactr_cpp_FUN_00423a10(this_ptr,in_stack_00000010);
    CStack_ac.z = (this_ptr->base).base.velocity.x * in_stack_00000010;
    pCVar14 = &CStack_64;
    afStack_9c[0] = (this_ptr->base).base.velocity.y * in_stack_00000010;
    afStack_9c[1] = (this_ptr->base).base.velocity.z * in_stack_00000010;
    fStack_7c = CStack_ac.z;
    afStack_9c[(uint)bVar11 * -2 + 9] = afStack_9c[(uint)bVar11 * -2];
    afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    fStack_34 = fStack_7c + (this_ptr->base).base.position_delta.x;
    fStack_30 = fStack_78 + (this_ptr->base).base.position_delta.y;
    fStack_2c = fStack_74 + (this_ptr->base).base.position_delta.z;
    afStack_9c[2] = fStack_34;
    afStack_9c[(uint)bVar11 * -2 + 3] = afStack_54[(uint)bVar11 * -2 + 9];
    afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_54[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    CStack_64.x = CStack_64.x + afStack_9c[2];
    CStack_64.y = CStack_64.y + afStack_9c[3];
    CStack_64.z = CStack_64.z + fStack_8c;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,pCVar14);
    goto LAB_004d4f1a;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    core_actor_cpp_FUN_00408de0(this_ptr,&pCVar6->location);
    uStack_58 = uStack_40;
    afStack_54[(uint)bVar11 * -2] = afStack_54[(uint)bVar11 * -2 + 6];
    afStack_54[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_54[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&uStack_58);
    afStack_54[2] = (float)uStack_88;
    afStack_54[(uint)bVar11 * -2 + 3] = afStack_9c[(uint)bVar11 * -2 + 6];
    afStack_54[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    pCStack_1c = (CCharacter_full_vtable *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_54[3]);
    fVar13 = (float)pCStack_1c;
    if ((float)pCStack_1c < _DAT_005da83e) {
      fVar13 = (float)pCStack_1c + _DAT_005da842;
    }
    if (_DAT_005da846 < fVar13) {
      fVar13 = fVar13 + _DAT_005da84a;
    }
    fVar3 = in_stack_00000010 * _DAT_005da842;
    fStack_18 = -fVar3;
    if (fVar13 < fStack_18) {
      fVar13 = fStack_18;
    }
    if (fVar3 < fVar13) {
      fVar13 = fVar3;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fVar13;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  }
  pCVar8 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  pCStack_1c = (pCVar8->base).vtable._uc;
  pCStack_14 = &(this_ptr->base).base.model;
  core_skeleton_cpp_FUN_00546a90(pCStack_14,0);
  pCVar4 = pCStack_1c;
  pCVar14 = &CStack_70;
  CStack_70.x = fStack_28;
  *(float *)((int)&CStack_70 + (uint)bVar11 * -8 + 4) = afStack_54[(uint)bVar11 * -2 + 0xc];
  actor = this_ptr;
  *(float *)((int)&CStack_70 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       afStack_54[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
  iVar5 = (*(pCVar4->_uc).attractActorToward)(pCVar8,(CDemonActor *)actor,pCVar14);
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
  pCVar12 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar12);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar7 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    fVar13 = this_ptr->head_look_blend_weight;
    iVar5 = _DAT_01cee0b4;
    core_xform_cpp_FUN_00594380(&this_ptr->head_look_euler);
    source_quaternions = &CStack_ac;
    CStack_ac.w = in_stack_ffffff44;
    afStack_9c[(uint)bVar11 * -2 + -3] = *(float *)(&stack0xffffff48 + (uint)bVar11 * -8);
    afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -2] =
         *(float *)(&stack0xffffff4c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    (afStack_9c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + -2)[(uint)bVar11 * -2 + 1] =
         *(float *)((int)(&stack0xffffff4c + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
                   ((uint)bVar11 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (pCVar12,source_quaternions,fVar13,iVar5,blend_callback);
  }
  core_icepick_cpp_FUN_004d5470(this_ptr,in_stack_00000014);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90
            ((CCharacter *)this_ptr,in_stack_00000014);
  return;
}
