// Name: core_icepick.cpp_CIcePick_process_FUN_004f80b0
// Address: 004f80b0
// Address Range: [[004f80b0, 004f8807]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f80b0(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f86be) */

void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f80b0(CIcePick *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  float fVar3;
  CDemonActor *pCVar6;
  CCharacter_full_vtable *pCVar7;
  float fVar8;
  float fVar9;
  int iVar3;
  int iVar10;
  CVector3f *pCVar4;
  CVector3f *pCVar11;
  CDemonActor *pCVar5;
  EDeathState EVar6;
  uint uVar12;
  CWeapon *this_ptr_02;
  SMotion *pSVar13;
  int iVar7;
  int iVar14;
  uint uVar8;
  SMotion *pSVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_1870 [1521];
  float local_98;
  CQuaternion4f CStack_94;
  CQuaternion4f CStack_84;
  CVector3f local_74;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  CVector3f local_38;
  int local_24;
  CDeformableModelInstance *pCStack_20;
  float local_1c;
  float local_18;
  CCharacter_full_vtable *local_14;
  CCharacter *this_ptr_01;
  bool bVar1;
  float fVar13;
  byte *blend_callback;
  CDeformableModelInstance *this_ptr_00;
  float fVar2;
  
  bVar12 = 0;
  iVar3 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar3 == 0) {
    return;
  }
  if ((this_ptr->base).ai_task == HERO_TASK_SUSPEND) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_icepick_cpp_CIcePick_processAI_FUN_004f8c70(this_ptr,delta_time);
  }
  fVar2 = (float)12.566370614;
  fVar3 = (this_ptr->base).invincibility_timer;
  this_ptr->is_armed =
       (uint)((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0);
  fVar3 = fVar3 - delta_time;
  (this_ptr->base).base.turn_speed = delta_time * fVar2;
  (this_ptr->base).invincibility_timer = fVar3;
  if (fVar3 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar11 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar11->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_icepick_cpp_CIcePick_processMotionEvents_FUN_004f93a0(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  pCVar1 = &(this_ptr->base).base.model;
  if (iVar10 == 0) {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar1->motion_controller);
    uVar12 = pSVar9->state_index;
    if (uVar12 < 9) {
      if ((((uVar12 == 0) || (uVar12 < 2)) || (uVar12 < 3)) || (uVar12 == 3)) goto LAB_004f8427;
    }
    else {
      if (uVar12 < 10) {
        return;
      }
      if (uVar12 < 0xf) {
        if (uVar12 < 0xb) {
LAB_004f8427:
          if ((this_ptr->base).base.is_on_ground != 0) {
            iVar10 = 0;
            if ((this_ptr->guns_drawn != 0) && (this_ptr->is_armed == 0)) {
              iVar10 = 10;
            }
            if ((this_ptr->base).player_control.action_states[0] != 0) {
              if ((this_ptr->base).player_control.action_states[2] == 0) {
                iVar10 = 1;
              }
              else {
                iVar10 = 2;
              }
            }
            if ((this_ptr->base).player_control.action_states[1] != 0) {
              iVar10 = 3;
            }
            if ((this_ptr->base).player_control.action_states[6] != 0) {
              iVar10 = this_ptr->guns_drawn;
              (this_ptr->base).player_control.action_states[6] = 0;
              uVar12 = (uint)(iVar10 == 0);
              this_ptr->guns_drawn = uVar12;
              if ((uVar12 == 0) || (this_ptr->is_armed != 0)) {
                iVar10 = 0;
              }
              else {
                iVar10 = 10;
              }
            }
            if ((this_ptr->base).player_control.action_states[3] != 0) {
              bVar1 = true;
              if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI))
              {
                iVar14 = core_hero_cpp_CHero_tryInteract_FUN_004f2af0(&this_ptr->base);
                bVar1 = false;
                if (iVar14 != 0) goto LAB_004f84cc;
                iVar14 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70(&this_ptr->base);
                if ((iVar14 != 0) && (iVar14 != 1)) {
                  core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(&this_ptr->base);
                }
                if ((iVar14 != 0) ||
                   (iVar14 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40
                                       (&this_ptr->base), iVar14 != 0)) goto LAB_004f84cc;
                iVar14 = core_hero_cpp_CHero_tryPullLever_FUN_004f2f50(&this_ptr->base);
                if (iVar14 != 0) {
                  core_hero_cpp_CHero_executeLeverPull_FUN_004f30f0(&this_ptr->base);
                  goto LAB_004f84cc;
                }
              }
              else {
LAB_004f84cc:
                if (!bVar1) goto switchD_004f8665_default;
              }
              if (this_ptr->guns_drawn != 0) {
                if (this_ptr->is_armed == 0) {
                  (this_ptr->base).player_control.action_states[3] = 0;
                  switch(this_ptr->attack_count) {
                  case 0:
                  case 2:
                    iVar10 = 0xe;
                    break;
                  case 1:
                  case 3:
                    iVar10 = 0xf;
                    break;
                  case 4:
                    iVar10 = 0x10;
                  }
                }
                else {
                  this_ptr_02 = (CWeapon *)
                                core_actor_cpp_castToClassHash_FUN_0040c790
                                          ((this_ptr->base).base.carry_hands[1].carry_actor,
                                           g_CWeaponClassInfo.name_hash);
                  if (this_ptr_02 != (CWeapon *)0x0) {
                    (*(((this_ptr_02->base).vtable._uw)->_uw).fire)(this_ptr_02);
                  }
                }
              }
            }
switchD_004f8665_default:
            (this_ptr->base).base.turn_angle_accumulator =
                 (this_ptr->base).player_control.turn_speed * (this_ptr->base).base.turn_speed;
            pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                (&(this_ptr->base).base.model.motion_controller);
            if (iVar10 != pSVar13->state_index) {
              if ((((iVar10 == 0xe) || (iVar10 == 0xf)) || (iVar10 == 0x10)) &&
                 (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]),
                 iVar7 == 0)) {
                uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"icepick-miss?.wav");
                this_ptr->sfx_handles[0] = uVar8;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,iVar10,1);
            }
            if (((this_ptr->base).player_control.action_states[4] != 0) &&
               (iVar10 = core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004f8970(this_ptr),
               iVar10 == 0)) {
              core_icepick_cpp_CIcePick_startThrowAttack_FUN_004f8ad0(this_ptr);
            }
          }
        }
      }
      else if (((0xf < uVar12) && (0x10 < uVar12)) && (uVar12 == 0x15)) goto LAB_004f8427;
    }
  }
  else {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar11->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    uVar12 = (this_ptr->base).base.is_walking;
    if (uVar12 < 2) {
      if (uVar12 == 1) {
        iVar10 = 1;
      }
      else {
LAB_004f8417:
        iVar10 = 0;
      }
    }
    else {
      if (2 < uVar12) {
        if (uVar12 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_004f81b6;
        }
        goto LAB_004f8417;
      }
      iVar10 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar10,1);
  }
LAB_004f81b6:
  pCVar6 = (this_ptr->base).base.grabbed_by;
  if (pCVar6 == (CDemonActor *)0x0) {
    fVar3 = (this_ptr->base).base.model.accumulated_root_motion.x;
    fVar8 = (this_ptr->base).base.model.accumulated_root_motion.y;
    fVar9 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_38.x = fVar3 + (this_ptr->base).base.velocity.x * delta_time +
                         (this_ptr->base).base.position_delta.x;
    local_38.y = fVar8 + (this_ptr->base).base.velocity.y * delta_time +
                         (this_ptr->base).base.position_delta.y;
    local_38.z = fVar9 + delta_time * (this_ptr->base).base.velocity.z +
                         (this_ptr->base).base.position_delta.z;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_38);
    goto LAB_004f82f8;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,&local_68,&(pCVar6->location).position);
    pCVar11 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar4);
    local_98 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar11->y);
    if (local_98 < (float)-1.57079632675) {
      local_98 = local_98 + 3.141593f;
    }
    if ((float)1.57079632675 < local_98) {
      local_98 = local_98 + -3.141593f;
    }
    fVar3 = delta_time * (float)3.1415926535000001;
    if (local_98 < -fVar3) {
      local_98 = -fVar3;
    }
    if (fVar3 < local_98) {
      local_98 = fVar3;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_98;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  }
  this_ptr_01 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  pCVar7 = (this_ptr_01->base).vtable._uc;
  pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                      (&(this_ptr->base).base.model,&local_74,0);
  iVar10 = (*(pCVar7->_uc).attractActorToward)(this_ptr_01,(CDemonActor *)this_ptr,pCVar11);
  if (iVar10 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004f82e5:
    iVar10 = 0;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004f82e5;
    if ((this_ptr->base).player_control.action_states[3] == 0) goto LAB_004f82f8;
    iVar10 = 0x11;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,iVar10,1);
LAB_004f82f8:
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(&(this_ptr->base).inventory);
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                     ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash)
  ;
  if (pCVar5 != (CDemonActor *)0x0) {
    (*((pCVar5->vtable)._ub)->process)(pCVar5,delta_time);
    pCVar5[4].actor_name[8] = 'd';
    pCVar5[4].actor_name[9] = '\0';
    pCVar5[4].actor_name[10] = '\0';
    pCVar5[4].actor_name[0xb] = '\0';
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  EVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar6 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
    fVar13 = this_ptr->head_look_blend_weight;
    iVar10 = INT_02db8970;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&this_ptr->head_look_euler,&CStack_94);
    CStack_84.w = CStack_94.w;
    puVar11 = (uint *)((int)&CStack_84 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    puVar10 = (uint *)((int)&CStack_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)((int)&CStack_84 + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&CStack_94 + (uint)bVar12 * -8 + 4);
    *puVar11 = *puVar10;
    puVar11[(uint)bVar12 * -2 + 1] = puVar10[(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCVar1,&CStack_84,fVar13,iVar10,
               (CDeformableModel_MotionBlendWeightFunc *)blend_callback);
  }
  core_icepick_cpp_CIcePick_updateShootBlend_FUN_004f8810(this_ptr,delta_time);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
