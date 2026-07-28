// Name: core_icepick.cpp_FUN_004b9fe0
// Address: 004b9fe0
// Address Range: [[004b9fe0, 004ba737]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004b9fe0(CHero *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004ba5ee) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_icepick_cpp_FUN_004b9fe0(CHero *param_1,float param_2)

{
  CCharacter *this_ptr;
  CCharacter_full_vtable *pCVar1;
  bool bVar2;
  float fVar3;
  CDeformableModelInstance *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  CDeformableModelInstance *pCVar7;
  CDemonActor *pCVar8;
  int iVar9;
  uint uVar10;
  SMotion *pSVar11;
  byte bVar12;
  float afStackY_1864 [1520];
  int *in_stack_ffffff68;
  float fVar13;
  code *blend_callback;
  float fStack_88;
  byte auStack_78 [24];
  CVector3f CStack_60;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  byte auStack_3c [12];
  CVector3f local_30;
  int local_24;
  CDeformableModelInstance *local_18;
  CDeformableModelInstance *local_14;
  
  bVar12 = 0;
  iVar5 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  if (param_1->ai_task == HERO_TASK_SUSPEND) {
    return;
  }
  if (param_1->control_type == HERO_CONTROL_AI) {
    core_icepick_cpp_FUN_004baba0(param_1,param_2);
  }
  fVar3 = (float)12.566370614;
  fVar13 = param_1->invincibility_timer;
  param_1[1].base.base.location.position.x =
       (float)(uint)((param_1->base).carry_hands[1].carry_actor != (CDemonActor *)0x0);
  fVar13 = fVar13 - param_2;
  (param_1->base).turn_speed = param_2 * fVar3;
  param_1->invincibility_timer = fVar13;
  if (fVar13 < 0.0) {
    param_1->invincibility_timer = 0.0;
  }
  pCVar6 = &(param_1->base).model.accumulated_root_motion;
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  pCVar6->x = (param_1->base).model.accumulated_root_motion.y;
  core_icepick_cpp_CIcePick_processMotionEvents_FUN_004bb2d0(param_1,param_2);
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  iVar5 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  pCVar7 = &(param_1->base).model;
  if (iVar5 == 0) {
    pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                        (&pCVar7->motion_controller);
    uVar10 = pSVar11->state_index;
    if (uVar10 < 9) {
      if ((((uVar10 == 0) || (uVar10 < 2)) || (uVar10 < 3)) || (uVar10 == 3)) goto LAB_004ba357;
    }
    else {
      if (uVar10 < 10) {
        return;
      }
      if (uVar10 < 0xf) {
        if (uVar10 < 0xb) {
LAB_004ba357:
          if ((param_1->base).is_on_ground != 0) {
            iVar5 = 0;
            if ((*(int *)param_1[1].base.base.actor_name != 0) &&
               (param_1[1].base.base.location.position.x == 0.0)) {
              iVar5 = 10;
            }
            if ((param_1->player_input).action_state.walk != 0) {
              if ((param_1->player_input).action_state.run == 0) {
                iVar5 = 1;
              }
              else {
                iVar5 = 2;
              }
            }
            if ((param_1->player_input).action_state.backup != 0) {
              iVar5 = 3;
            }
            if ((param_1->player_input).action_state.draw != 0) {
              iVar5 = *(int *)param_1[1].base.base.actor_name;
              (param_1->player_input).action_state.draw = 0;
              uVar10 = (uint)(iVar5 == 0);
              *(uint *)param_1[1].base.base.actor_name = uVar10;
              if ((uVar10 == 0) || (param_1[1].base.base.location.position.x != 0.0)) {
                iVar5 = 0;
              }
              else {
                iVar5 = 10;
              }
            }
            if ((param_1->player_input).action_state.fire != 0) {
              bVar2 = true;
              if ((*(int *)param_1[1].base.base.actor_name == 0) &&
                 (param_1->control_type != HERO_CONTROL_AI)) {
                iVar9 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(param_1);
                bVar2 = false;
                if (iVar9 != 0) goto LAB_004ba3fc;
                local_24 = core_hero_cpp_FUN_004b5110(param_1);
                if ((local_24 != 0) && (local_24 != 1)) {
                  core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(param_1);
                }
                if ((local_24 != 0) ||
                   (iVar9 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(param_1),
                   iVar9 != 0)) goto LAB_004ba3fc;
                iVar9 = core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(param_1);
                if (iVar9 != 0) {
                  core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(param_1);
                  goto LAB_004ba3fc;
                }
              }
              else {
LAB_004ba3fc:
                if (!bVar2) goto switchD_004ba595_default;
              }
              if (*(int *)param_1[1].base.base.actor_name != 0) {
                if (param_1[1].base.base.location.position.x == 0.0) {
                  (param_1->player_input).action_state.fire = 0;
                  switch(*(uint *)(param_1[1].base.base.actor_name + 4)) {
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
                  pCVar8 = core_actor_cpp_castToClassHash_FUN_0040d890
                                     ((param_1->base).carry_hands[1].carry_actor,
                                      g_CWeaponActorType_02ddf970.name_hash);
                  if (pCVar8 != (CDemonActor *)0x0) {
                    (*((pCVar8->vtable)._ub)->showEditorHelp)(pCVar8,in_stack_ffffff68);
                  }
                }
              }
            }
switchD_004ba595_default:
            (param_1->base).turn_angle_accumulator =
                 (param_1->player_input).turn_speed * (param_1->base).turn_speed;
            pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                                (&(param_1->base).model.motion_controller);
            if (iVar5 != pSVar11->state_index) {
              if ((((iVar5 == 0xe) || (iVar5 == 0xf)) || (iVar5 == 0x10)) &&
                 (iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                    (*(uint *)(param_1[1].base.base.actor_name + 8)), iVar9 == 0)) {
                uVar10 = (*((param_1->base).base.vtable._ub)->playSound)
                                   ((CDemonActor *)param_1,"icepick-miss?.wav");
                *(uint *)(param_1[1].base.base.actor_name + 8) = uVar10;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).model.motion_controller,iVar5,1);
            }
            if (((param_1->player_input).action_state.use_item != 0) &&
               (iVar5 = core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004ba8a0(param_1), iVar5 == 0
               )) {
              core_icepick_cpp_CIcePick_startThrowAttack_FUN_004baa00(param_1);
            }
          }
        }
      }
      else if (((0xf < uVar10) && (0x10 < uVar10)) && (uVar10 == 0x15)) goto LAB_004ba357;
    }
  }
  else {
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar6->x = (param_1->base).model.accumulated_root_motion.y;
    uVar10 = (param_1->base).is_walking;
    if (uVar10 < 2) {
      if (uVar10 == 1) {
        iVar5 = 1;
      }
      else {
LAB_004ba347:
        iVar5 = 0;
      }
    }
    else {
      if (2 < uVar10) {
        if (uVar10 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar7->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
          goto LAB_004ba0e6;
        }
        goto LAB_004ba347;
      }
      iVar5 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar5,1);
  }
LAB_004ba0e6:
  pCVar8 = (param_1->base).grabbed_by;
  if (pCVar8 == (CDemonActor *)0x0) {
    local_30.x = (param_1->base).model.accumulated_root_motion.x;
    local_30.y = (param_1->base).model.accumulated_root_motion.y;
    local_30.z = (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
    local_48 = (param_1->base).velocity.x * param_2;
    local_44 = (param_1->base).velocity.y * param_2;
    fStack_40 = param_2 * (param_1->base).velocity.z;
    local_54 = local_48 + (param_1->base).position_delta.x;
    local_50 = local_44 + (param_1->base).position_delta.y;
    local_30.x = local_30.x + local_54;
    local_4c = fStack_40 + (param_1->base).position_delta.z;
    local_30.y = local_30.y + local_50;
    local_30.z = local_30.z + local_4c;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_30);
    goto LAB_004ba228;
  }
  if ((param_1->base).grabbed_type == 0) {
    pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       ((CDemonActor *)param_1,&CStack_60,&(pCVar8->location).position);
    iVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(auStack_3c,pCVar6);
    pCVar7 = (CDeformableModelInstance *)
             core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar5 + 4));
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
    (param_1->base).base.orient.vec.y = (param_1->base).base.orient.vec.y + (float)pCVar7;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)param_1);
  }
  this_ptr = (CCharacter *)(param_1->base).grabbed_by;
  pCVar1 = (this_ptr->base).vtable._uc;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
            (&(param_1->base).model,(CVector3f *)(auStack_78 + 0xc),0);
  pCVar8 = (*(pCVar1->_uc).getGrabber)(this_ptr);
  if (pCVar8 == (CDemonActor *)0x0) {
    (param_1->base).grabbed_by = (CDemonActor *)0x0;
LAB_004ba215:
    iVar5 = 0;
  }
  else {
    if ((param_1->base).grabbed_by == (CDemonActor *)0x0) goto LAB_004ba215;
    if ((param_1->player_input).action_state.fire == 0) goto LAB_004ba228;
    iVar5 = 0x11;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(param_1->base).model.motion_controller,iVar5,1);
LAB_004ba228:
  core_inv_cpp_CInventory_updateInventory_FUN_004c1850(&param_1->inventory);
  pCVar8 = core_actor_cpp_castToClassHash_FUN_0040d890
                     ((param_1->base).carry_hands[1].carry_actor,
                      g_CWeaponActorType_02ddf970.name_hash);
  if (pCVar8 != (CDemonActor *)0x0) {
    (*((pCVar8->vtable)._ub)->process)(pCVar8,param_2);
    pCVar8[4].location.position.x = 1.4013e-43;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  local_18 = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(local_18);
  iVar5 = (*(((param_1->base).base.vtable._uc)->_uc).releaseFromGrab)(&param_1->base);
  if (iVar5 == 0) {
    blend_callback = core_skeleton_cpp_FUN_0051b650;
    fVar13 = *(float *)(param_1[1].base.base.actor_name + 0x1c);
    iVar5 = _DAT_01cae288;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610(param_1[1].base.base.actor_name + 0x10);
    auStack_78._0_4_ = fStack_88;
    *(uint *)(auStack_78 + (uint)bVar12 * -8 + 4) =
         *(uint *)(&stack0xffffff7c + (uint)bVar12 * -8);
    *(uint *)(auStack_78 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         *(uint *)(&stack0xffffff80 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
    *(uint *)
     ((int)(auStack_78 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) + ((uint)bVar12 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff80 + (uint)bVar12 * -8 + (uint)bVar12 * -8) +
          ((uint)bVar12 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (local_14,(CQuaternion4f *)auStack_78,fVar13,iVar5,blend_callback);
  }
  core_icepick_cpp_FUN_004ba740(param_1,param_2);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
