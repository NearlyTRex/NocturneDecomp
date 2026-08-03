// Name: core_icepick.cpp_CIcePick_process_FUN_004b9fe0
// Address: 004b9fe0
// Address Range: [[004b9fe0, 004ba737]]
// Convention: unknown
// Signature: void core_icepick_cpp_CIcePick_process_FUN_004b9fe0(CIcePick *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004ba5ee) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_icepick_cpp_CIcePick_process_FUN_004b9fe0(CIcePick *param_1,float param_2)

{
  CCharacter_full_vtable *pCVar1;
  bool bVar2;
  float fVar3;
  CDeformableModelInstance *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  CDeformableModelInstance *pCVar7;
  CDemonActor *pCVar8;
  EDeathState EVar9;
  CCharacter *pCVar10;
  int iVar11;
  uint uVar12;
  SMotion *pSVar13;
  byte bVar14;
  float afStackY_1864 [1520];
  CDemonActor *in_stack_ffffff68;
  float fVar15;
  code *blend_callback;
  float in_stack_ffffff78;
  byte auStack_78 [24];
  CVector3f CStack_60;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  CVector3f CStack_3c;
  CVector3f local_30;
  int local_24;
  CDeformableModelInstance *local_18;
  CDeformableModelInstance *local_14;
  
  bVar14 = 0;
  iVar5 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  if ((param_1->base).ai_task == HERO_TASK_SUSPEND) {
    return;
  }
  if ((param_1->base).control_type == HERO_CONTROL_AI) {
    core_icepick_cpp_FUN_004baba0(param_1,param_2);
  }
  fVar3 = (float)12.566370614;
  fVar15 = (param_1->base).invincibility_timer;
  param_1->is_armed = (uint)((param_1->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0);
  fVar15 = fVar15 - param_2;
  (param_1->base).base.turn_speed = param_2 * fVar3;
  (param_1->base).invincibility_timer = fVar15;
  if (fVar15 < 0.0) {
    (param_1->base).invincibility_timer = 0.0;
  }
  pCVar6 = &(param_1->base).base.model.accumulated_root_motion;
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  pCVar6->x = (param_1->base).base.model.accumulated_root_motion.y;
  core_icepick_cpp_CIcePick_processMotionEvents_FUN_004bb2d0(param_1,param_2);
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  iVar5 = core_charactr_cpp_FUN_00428c00((CCharacter *)param_1,param_2);
  pCVar7 = &(param_1->base).base.model;
  if (iVar5 == 0) {
    pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                        (&pCVar7->motion_controller);
    uVar12 = pSVar13->state_index;
    if (uVar12 < 9) {
      if ((((uVar12 == 0) || (uVar12 < 2)) || (uVar12 < 3)) || (uVar12 == 3)) goto LAB_004ba357;
    }
    else {
      if (uVar12 < 10) {
        return;
      }
      if (uVar12 < 0xf) {
        if (uVar12 < 0xb) {
LAB_004ba357:
          if ((param_1->base).base.is_on_ground != 0) {
            iVar5 = 0;
            if ((param_1->guns_drawn != 0) && (param_1->is_armed == 0)) {
              iVar5 = 10;
            }
            if ((param_1->base).player_input.action_state.walk != 0) {
              if ((param_1->base).player_input.action_state.run == 0) {
                iVar5 = 1;
              }
              else {
                iVar5 = 2;
              }
            }
            if ((param_1->base).player_input.action_state.backup != 0) {
              iVar5 = 3;
            }
            if ((param_1->base).player_input.action_state.draw != 0) {
              iVar5 = param_1->guns_drawn;
              (param_1->base).player_input.action_state.draw = 0;
              uVar12 = (uint)(iVar5 == 0);
              param_1->guns_drawn = uVar12;
              if ((uVar12 == 0) || (param_1->is_armed != 0)) {
                iVar5 = 0;
              }
              else {
                iVar5 = 10;
              }
            }
            if ((param_1->base).player_input.action_state.fire != 0) {
              bVar2 = true;
              if ((param_1->guns_drawn == 0) && ((param_1->base).control_type != HERO_CONTROL_AI)) {
                iVar11 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(&param_1->base);
                bVar2 = false;
                if (iVar11 != 0) goto LAB_004ba3fc;
                local_24 = core_hero_cpp_FUN_004b5110(&param_1->base);
                if ((local_24 != 0) && (local_24 != 1)) {
                  core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(&param_1->base);
                }
                if ((local_24 != 0) ||
                   (iVar11 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0
                                       (&param_1->base), iVar11 != 0)) goto LAB_004ba3fc;
                iVar11 = core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(&param_1->base);
                if (iVar11 != 0) {
                  core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(&param_1->base);
                  goto LAB_004ba3fc;
                }
              }
              else {
LAB_004ba3fc:
                if (!bVar2) goto switchD_004ba595_default;
              }
              if (param_1->guns_drawn != 0) {
                if (param_1->is_armed == 0) {
                  (param_1->base).player_input.action_state.fire = 0;
                  switch(param_1->attack_count) {
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
                  pCVar10 = (CCharacter *)
                            core_actor_cpp_castToClassHash_FUN_0040d890
                                      ((param_1->base).base.carry_hands[1].carry_actor,
                                       g_CWeaponActorType_02ddf970.name_hash);
                  if (pCVar10 != (CCharacter *)0x0) {
                    (*(((pCVar10->base).vtable._uc)->_uc).isGrabbable)(pCVar10,in_stack_ffffff68);
                  }
                }
              }
            }
switchD_004ba595_default:
            (param_1->base).base.turn_angle_accumulator =
                 (param_1->base).player_input.turn_speed * (param_1->base).base.turn_speed;
            pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                                (&(param_1->base).base.model.motion_controller);
            if (iVar5 != pSVar13->state_index) {
              if ((((iVar5 == 0xe) || (iVar5 == 0xf)) || (iVar5 == 0x10)) &&
                 (iVar11 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[0]),
                 iVar11 == 0)) {
                uVar12 = (*((param_1->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)param_1,"icepick-miss?.wav");
                param_1->sfx_handles[0] = uVar12;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).base.model.motion_controller,iVar5,1);
            }
            if (((param_1->base).player_input.action_state.use_item != 0) &&
               (iVar5 = core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004ba8a0(param_1), iVar5 == 0
               )) {
              core_icepick_cpp_CIcePick_startThrowAttack_FUN_004baa00(param_1);
            }
          }
        }
      }
      else if (((0xf < uVar12) && (0x10 < uVar12)) && (uVar12 == 0x15)) goto LAB_004ba357;
    }
  }
  else {
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    pCVar6->x = (param_1->base).base.model.accumulated_root_motion.y;
    uVar12 = (param_1->base).base.is_walking;
    if (uVar12 < 2) {
      if (uVar12 == 1) {
        iVar5 = 1;
      }
      else {
LAB_004ba347:
        iVar5 = 0;
      }
    }
    else {
      if (2 < uVar12) {
        if (uVar12 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar7->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",param_1);
          goto LAB_004ba0e6;
        }
        goto LAB_004ba347;
      }
      iVar5 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,iVar5,1);
  }
LAB_004ba0e6:
  pCVar8 = (param_1->base).base.grabbed_by;
  if (pCVar8 == (CDemonActor *)0x0) {
    local_30.x = (param_1->base).base.model.accumulated_root_motion.x;
    local_30.y = (param_1->base).base.model.accumulated_root_motion.y;
    local_30.z = (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.velocity.y =
         (param_1->base).base.velocity.y - param_2 * (float)32;
    local_48 = (param_1->base).base.velocity.x * param_2;
    local_44 = (param_1->base).base.velocity.y * param_2;
    fStack_40 = param_2 * (param_1->base).base.velocity.z;
    local_54 = local_48 + (param_1->base).base.position_delta.x;
    local_50 = local_44 + (param_1->base).base.position_delta.y;
    local_30.x = local_30.x + local_54;
    local_4c = fStack_40 + (param_1->base).base.position_delta.z;
    local_30.y = local_30.y + local_50;
    local_30.z = local_30.z + local_4c;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_30);
    goto LAB_004ba228;
  }
  if ((param_1->base).base.grabbed_type == 0) {
    pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       ((CDemonActor *)param_1,&CStack_60,&(pCVar8->location).position);
    pCVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&CStack_3c,pCVar6);
    pCVar7 = (CDeformableModelInstance *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar6->y);
    if ((float)pCVar7 < (float)-1.57079632675) {
      pCVar7 = (CDeformableModelInstance *)((float)pCVar7 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)pCVar7) {
      pCVar7 = (CDeformableModelInstance *)((float)pCVar7 + 1.5938625219265179e-314._0_4_);
    }
    pCVar4 = (CDeformableModelInstance *)(param_2 * (float)3.1415926535000001);
    local_14 = (CDeformableModelInstance *)-(float)pCVar4;
    if ((float)pCVar7 < (float)local_14) {
      pCVar7 = local_14;
    }
    if ((float)pCVar4 < (float)pCVar7) {
      pCVar7 = pCVar4;
    }
    (param_1->base).base.base.orient.vec.y = (param_1->base).base.base.orient.vec.y + (float)pCVar7;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)param_1);
  }
  pCVar10 = (CCharacter *)(param_1->base).base.grabbed_by;
  pCVar1 = (pCVar10->base).vtable._uc;
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(param_1->base).base.model,(CVector3f *)(auStack_78 + 0xc),0);
  iVar5 = (*(pCVar1->_uc).attractActorToward)(pCVar10,(CDemonActor *)param_1,pCVar6);
  if (iVar5 == 0) {
    (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004ba215:
    iVar5 = 0;
  }
  else {
    if ((param_1->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004ba215;
    if ((param_1->base).player_input.action_state.fire == 0) goto LAB_004ba228;
    iVar5 = 0x11;
  }
  in_stack_ffffff78 = 1.4013e-45;
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(param_1->base).base.model.motion_controller,iVar5,1);
LAB_004ba228:
  core_inv_cpp_CInventory_updateInventory_FUN_004c1850(&(param_1->base).inventory);
  pCVar8 = core_actor_cpp_castToClassHash_FUN_0040d890
                     ((param_1->base).base.carry_hands[1].carry_actor,
                      g_CWeaponActorType_02ddf970.name_hash);
  if (pCVar8 != (CDemonActor *)0x0) {
    (*((pCVar8->vtable)._ub)->process)(pCVar8,param_2);
    pCVar8[4].location.position.x = 1.4013e-43;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  local_18 = &(param_1->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(local_18);
  EVar9 = (*(((param_1->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)param_1);
  if (EVar9 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_FUN_0051b650;
    fVar15 = param_1->head_look_blend_weight;
    iVar5 = _DAT_01cae288;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610(&param_1->head_look_euler);
    auStack_78._0_4_ = in_stack_ffffff78;
    *(uint *)(auStack_78 + (uint)bVar14 * -8 + 4) =
         *(uint *)(&stack0xffffff7c + (uint)bVar14 * -8);
    *(uint *)(auStack_78 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         *(uint *)(&stack0xffffff80 + (uint)bVar14 * -8 + (uint)bVar14 * -8);
    *(uint *)
     ((int)(auStack_78 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) + ((uint)bVar14 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff80 + (uint)bVar14 * -8 + (uint)bVar14 * -8) +
          ((uint)bVar14 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (local_14,(CQuaternion4f *)auStack_78,fVar15,iVar5,blend_callback);
  }
  core_icepick_cpp_FUN_004ba740(param_1,param_2);
  core_charactr_cpp_FUN_0042a150((CCharacter *)param_1,param_2);
  return;
}
