// Name: core_icepick.cpp_CIcePick_process_FUN_004f80b0
// Address: 004f80b0
// Address Range: [[004f80b0, 004f8807] [00604911, 00604935]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f80b0(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f86be) */

void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f80b0(CIcePick *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  EWalkState EVar2;
  CDemonActor *pCVar3;
  CCharacter_full_vtable *pCVar6;
  float fVar7;
  float fVar8;
  int iVar3;
  int iVar9;
  CVector3f *pCVar4;
  CVector3f *pCVar10;
  CWeapon *pCVar5;
  EDeathState EVar6;
  uint uVar11;
  CWeapon *this_ptr_02;
  SMotion *pSVar12;
  int iVar7;
  int iVar13;
  uint uVar8;
  SMotion *pSVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_1870 [1521];
  float fVar14;
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
  
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_00429870
                    ((CCharacter *)this_ptr,delta_time);
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
  fVar14 = (this_ptr->base).invincibility_timer;
  this_ptr->is_armed =
       (uint)((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0);
  fVar14 = fVar14 - delta_time;
  (this_ptr->base).base.turn_speed = delta_time * fVar2;
  (this_ptr->base).invincibility_timer = fVar14;
  if (fVar14 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar10 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar10->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_icepick_cpp_CIcePick_processMotionEvents_FUN_004f93a0(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  pCVar1 = &(this_ptr->base).base.model;
  if (iVar9 == 0) {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(&pCVar1->base);
    uVar11 = pSVar9->state_index;
    if (uVar11 < 9) {
      if ((((uVar11 == 0) || (uVar11 < 2)) || (uVar11 < 3)) || (uVar11 == 3)) goto LAB_004f8427;
    }
    else {
      if (uVar11 < 10) {
        return;
      }
      if (uVar11 < 0xf) {
        if (uVar11 < 0xb) {
LAB_004f8427:
          if ((this_ptr->base).base.is_on_ground != 0) {
            iVar9 = 0;
            if ((this_ptr->guns_drawn != 0) && (this_ptr->is_armed == 0)) {
              iVar9 = 10;
            }
            if ((this_ptr->base).player_input.action_state.walk != 0) {
              if ((this_ptr->base).player_input.action_state.run == 0) {
                iVar9 = 1;
              }
              else {
                iVar9 = 2;
              }
            }
            if ((this_ptr->base).player_input.action_state.backup != 0) {
              iVar9 = 3;
            }
            if ((this_ptr->base).player_input.action_state.draw != 0) {
              iVar9 = this_ptr->guns_drawn;
              (this_ptr->base).player_input.action_state.draw = 0;
              uVar11 = (uint)(iVar9 == 0);
              this_ptr->guns_drawn = uVar11;
              if ((uVar11 == 0) || (this_ptr->is_armed != 0)) {
                iVar9 = 0;
              }
              else {
                iVar9 = 10;
              }
            }
            if ((this_ptr->base).player_input.action_state.fire != 0) {
              bVar1 = true;
              if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI))
              {
                iVar13 = core_hero_cpp_CHero_tryInteract_FUN_004f2af0(&this_ptr->base);
                bVar1 = false;
                if (iVar13 != 0) goto LAB_004f84cc;
                iVar13 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70(&this_ptr->base);
                if ((iVar13 != 0) && (iVar13 != 1)) {
                  core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(&this_ptr->base);
                }
                if ((iVar13 != 0) ||
                   (iVar13 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40
                                       (&this_ptr->base), iVar13 != 0)) goto LAB_004f84cc;
                iVar13 = core_hero_cpp_CHero_tryPullLever_FUN_004f2f50(&this_ptr->base);
                if (iVar13 != 0) {
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
                  (this_ptr->base).player_input.action_state.fire = 0;
                  switch(this_ptr->attack_count) {
                  case 0:
                  case 2:
                    iVar9 = 0xe;
                    break;
                  case 1:
                  case 3:
                    iVar9 = 0xf;
                    break;
                  case 4:
                    iVar9 = 0x10;
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
                 (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
            pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                (&(this_ptr->base).base.model.base);
            if (iVar9 != pSVar12->state_index) {
              if ((((iVar9 == 0xe) || (iVar9 == 0xf)) || (iVar9 == 0x10)) &&
                 (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]),
                 iVar7 == 0)) {
                uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"icepick-miss?.wav");
                this_ptr->sfx_handles[0] = uVar8;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.base,iVar9,1);
            }
            if (((this_ptr->base).player_input.action_state.use_item != 0) &&
               (iVar9 = core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004f8970(this_ptr),
               iVar9 == 0)) {
              core_icepick_cpp_CIcePick_startThrowAttack_FUN_004f8ad0(this_ptr);
            }
          }
        }
      }
      else if (((0xf < uVar11) && (0x10 < uVar11)) && (uVar11 == 0x15)) goto LAB_004f8427;
    }
  }
  else {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar10->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    EVar2 = (this_ptr->base).base.walk_state;
    if (EVar2 < 2) {
      if (EVar2 == WALK_STATE_WALKING) {
        iVar9 = 1;
      }
      else {
LAB_004f8417:
        iVar9 = 0;
      }
    }
    else {
      if (2 < EVar2) {
        if (EVar2 == WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->base,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_004f81b6;
        }
        goto LAB_004f8417;
      }
      iVar9 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.base,iVar9,1);
  }
LAB_004f81b6:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    fVar14 = (this_ptr->base).base.model.accumulated_root_motion.x;
    fVar7 = (this_ptr->base).base.model.accumulated_root_motion.y;
    fVar8 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_38.x = fVar14 + (this_ptr->base).base.velocity.x * delta_time +
                          (this_ptr->base).base.position_delta.x;
    local_38.y = fVar7 + (this_ptr->base).base.velocity.y * delta_time +
                         (this_ptr->base).base.position_delta.y;
    local_38.z = fVar8 + delta_time * (this_ptr->base).base.velocity.z +
                         (this_ptr->base).base.position_delta.z;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_38);
    goto LAB_004f82f8;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,&local_68,&(pCVar3->location).position);
    pCVar10 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar4);
    local_98 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar10->y);
    if (local_98 < (float)-1.57079632675) {
      local_98 = local_98 + 3.141593f;
    }
    if ((float)1.57079632675 < local_98) {
      local_98 = local_98 + -3.141593f;
    }
    fVar14 = delta_time * (float)3.1415926535000001;
    if (local_98 < -fVar14) {
      local_98 = -fVar14;
    }
    if (fVar14 < local_98) {
      local_98 = fVar14;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_98;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  }
  this_ptr_01 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  pCVar6 = (this_ptr_01->base).vtable._uc;
  pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0059fb00
                      (&(this_ptr->base).base.model,&local_74,0);
  iVar9 = (*(pCVar6->_uc).attractActorToward)(this_ptr_01,(CDemonActor *)this_ptr,pCVar10);
  if (iVar9 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004f82e5:
    iVar9 = 0;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004f82e5;
    if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_004f82f8;
    iVar9 = 0x11;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.base,iVar9,1);
LAB_004f82f8:
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(&(this_ptr->base).inventory);
  pCVar5 = (CWeapon *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash)
  ;
  if (pCVar5 != (CWeapon *)0x0) {
    (*((pCVar5->base).vtable._ub)->process)((CDemonActor *)pCVar5,delta_time);
    pCVar5->ammo_count = 100;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  EVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar6 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
    fVar14 = this_ptr->head_look_blend_weight;
    iVar9 = g_IcePickIndices[0];
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&this_ptr->head_look_euler,&CStack_94);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCVar1,&CStack_84,fVar14,iVar9,
               (CDeformableModel_MotionBlendWeightFunc *)blend_callback);
  }
  core_icepick_cpp_CIcePick_updateShootBlend_FUN_004f8810(this_ptr,delta_time);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
