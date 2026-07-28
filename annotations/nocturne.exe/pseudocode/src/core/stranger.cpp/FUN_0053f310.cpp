// Name: core_stranger.cpp_FUN_0053f310
// Address: 0053f310
// Address Range: [[0053f310, 0053fc38]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0053f310(CStranger *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0053f84f) */

void core_stranger_cpp_FUN_0053f310(CStranger *param_1,float param_2)

{
  CWeapon *pCVar1;
  uint uVar2;
  int iVar3;
  CMotionList *pCVar4;
  int iVar5;
  CLightGun *pCVar6;
  float fVar7;
  float *pfVar8;
  CDemonActor *pCVar9;
  float *pfVar10;
  int iVar11;
  int *in_stack_ffffffa4;
  CVector3f CStack_50;
  int local_3c;
  int local_38;
  SMotion *local_34;
  CDemonActor *local_30;
  int local_2c;
  CMotionController *local_28;
  float local_24;
  CDemonActor *local_20;
  CDemonActor *local_1c;
  CInventory *local_18;
  CWeapon *local_14;
  
  if (((param_1->base).base.layer_action_index == 0xe) &&
     ((param_1->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (param_1->base).base.layer_action_t = 0.0;
    (param_1->base).base.layer_action_index = 0;
  }
  local_3c = 0xffffffff;
  local_18 = (CInventory *)0x0;
  if ((param_1->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    if (param_1->guns_drawn != 0) {
      pCVar9 = (param_1->base).base.carry_hands[1].carry_actor;
      if (((pCVar9 != (CDemonActor *)0x0) &&
          (local_18 = (CInventory *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (pCVar9,g_CWeaponActorType_02ddf970.name_hash),
          local_18 == (CInventory *)0x0)) &&
         (pCVar9 = (param_1->base).base.carry_hands[1].carry_actor,
         uVar2 = (*((pCVar9->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar9), (uVar2 & 3) != 0)) {
        local_38 = 8;
      }
      if ((local_14 == (CWeapon *)0x0) && (local_38 < 0)) {
        param_1->guns_drawn = 0;
      }
    }
  }
  else {
    param_1->guns_drawn = 0;
  }
  local_18 = &(param_1->base).inventory;
  local_3c = 0;
  local_28 = &(param_1->base).base.model.motion_controller;
  local_2c = 0;
  do {
    if (param_2 <= 0.0) {
LAB_0053f38b:
      if (local_3c == 0) {
        return;
      }
      goto LAB_0053fc23;
    }
    iVar11 = param_1->action_pending;
    if ((iVar11 == 1) || ((param_1->base).target_actor != (CDemonActor *)0x0)) {
LAB_0053f41f:
      iVar11 = 3;
    }
    else if (iVar11 == 2) {
      iVar11 = 0;
    }
    else if (iVar11 == 3) {
      fVar7 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(param_1,6);
      iVar11 = 6;
      if ((float)0.98999999999999999 < fVar7) {
        fVar7 = param_2 * (float)25 + param_1->aim_speed_factor;
        param_1->aim_speed_factor = fVar7;
        if (70.0f < fVar7) {
          param_1->aim_speed_factor = 70.0f;
        }
        if ((param_1->base).player_input.action_state.fire == 0) goto switchD_0053f7b3_caseD_3;
        goto LAB_0053f38b;
      }
    }
    else {
      pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(local_18);
      if ((pCVar6 != (CLightGun *)0x0) && ((param_1->base).is_wearing_gas_mask == 0))
      goto LAB_0053f41f;
      pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(local_18);
      if ((pCVar6 == (CLightGun *)0x0) || ((param_1->base).is_wearing_gas_mask != 1)) {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(local_18);
        if ((pCVar6 == (CLightGun *)0x0) && ((param_1->base).is_wearing_gas_mask == 2)) {
          iVar11 = 10;
        }
        else {
          pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(local_18);
          if ((pCVar6 == (CLightGun *)0x0) && ((param_1->base).is_wearing_gas_mask == 1))
          goto LAB_0053f41f;
          iVar11 = local_38;
          if (local_38 < 0) {
            pCVar1 = param_1->weapon;
            if (pCVar1 == local_14) {
              if (param_1->weapon == (CWeapon *)0x0) {
switchD_0053f7b3_caseD_3:
                iVar11 = 0;
              }
              else {
                switch(param_1->weapon->weapon_type) {
                case 0:
                case 5:
                  iVar11 = 2;
                  break;
                case 1:
                  iVar11 = 4;
                  break;
                case 2:
                  iVar11 = 5;
                  break;
                default:
                  goto switchD_0053f7b3_caseD_3;
                case 4:
                  iVar11 = 7;
                  break;
                case 7:
                  iVar11 = 8;
                }
              }
            }
            else if (pCVar1 == (CWeapon *)0x0) {
              if (local_14 == (CWeapon *)0x0) {
                iVar11 = 0;
              }
              else {
                uVar2 = local_14->weapon_type;
                if (uVar2 < 7) goto joined_r0x0053f88b;
                if (((7 < uVar2) && (uVar2 != 8)) ||
                   ((pCVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                                        (&local_14->base,g_CMeleeActorType_01cc56a4.name_hash),
                    pCVar9 != (CDemonActor *)0x0 && (pCVar9[4].orient_matrix.m[0].y != 0.0))))
                goto LAB_0053f41f;
                iVar11 = 0;
              }
            }
            else {
              uVar2 = pCVar1->weapon_type;
              if (uVar2 < 7) {
joined_r0x0053f88b:
                if (uVar2 != 0) goto LAB_0053f41f;
                iVar11 = 1;
              }
              else {
                if (((7 < uVar2) && (uVar2 != 8)) ||
                   ((pCVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                                        (&pCVar1->base,g_CMeleeActorType_01cc56a4.name_hash),
                    pCVar9 != (CDemonActor *)0x0 && (pCVar9[4].orient_matrix.m[0].y != 0.0))))
                goto LAB_0053f41f;
                iVar11 = 0;
              }
            }
          }
        }
      }
      else {
        iVar11 = 10;
      }
    }
    local_24 = (param_1->base).base.layer_action_t;
    iVar3 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a500(param_1,&param_2,iVar11);
    iVar5 = (param_1->base).base.layer_actions[(param_1->base).base.layer_action_index].motion_index
    ;
    pCVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(local_28);
    local_34 = pCVar4->motions + iVar5;
    switch((param_1->base).base.layer_action_index) {
    case 6:
      local_1c = core_actor_cpp_castToClassHash_FUN_0040d890
                           (&param_1->weapon->base,g_CDynamiteActorType_01bca088.name_hash);
      if (((local_1c != (CDemonActor *)0x0) &&
          (iVar5 = core_dynamite_cpp_FUN_0046ed80(local_1c), iVar5 == 0)) &&
         ((float)(int)(0xb / (longlong)local_34->frame_count) <= (param_1->base).base.layer_action_t
         )) {
        core_dynamite_cpp_CDynamite_lightFuse_FUN_0046ed30(local_1c);
      }
      break;
    case 7:
      if ((param_1->action_pending == 3) &&
         ((float)(int)(0xb / (longlong)local_34->frame_count) <= (param_1->base).base.layer_action_t
         )) {
        core_stranger_cpp_CStranger_getThrowDirection_FUN_0053f260(param_1,&CStack_50);
        local_30 = core_actor_cpp_castToClassHash_FUN_0040d890
                             (&param_1->weapon->base,g_CDynamiteActorType_01bca088.name_hash);
        local_20 = local_30;
        if (local_30 != (CDemonActor *)0x0) {
          pfVar8 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                      (param_1,&stack0xffffffa4,&CStack_50);
          pfVar10 = &local_20[4].orient.vec.y;
          if (pfVar10 != pfVar8) {
            *pfVar10 = *pfVar8;
            local_20[4].orient.vec.z = pfVar8[1];
            local_20[4].orient_matrix.m[0].x = pfVar8[2];
          }
          (*((local_30->vtable)._ub)->showEditorHelp)(local_30,in_stack_ffffffa4);
          param_1->weapon = (CWeapon *)0x0;
        }
        if ((param_1->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
          (*(((param_1->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)param_1);
        }
        param_1->action_pending = 0;
        param_1->aim_speed_factor = 10.0f;
      }
      if (1.0 <= (param_1->base).base.layer_action_t) {
        (param_1->base).base.layer_action_index = 0;
        (param_1->base).base.layer_action_t = 0.0;
      }
      break;
    case 8:
      if ((((int)local_24 < 0x3f19999a) && (0x3f199999 < (int)(param_1->base).base.layer_action_t))
         && (iVar5 = core_actor_cpp_isOfClass_FUN_0040d7e0
                               (&param_1->weapon->base,"CShotgun"), iVar5 != 0)) {
        (*((param_1->weapon->base).vtable._ub)->processInEditor)(&param_1->weapon->base);
      }
      break;
    case 0xc:
      if ((((int)local_24 < 0x3ebd70a4) && (0x3ebd70a3 < (int)(param_1->base).base.layer_action_t))
         && (pCVar1 = param_1->weapon, pCVar1 != (CWeapon *)0x0)) {
        (*((pCVar1->base).vtable._ub)->processMeleeHit)(&pCVar1->base,1);
      }
      break;
    case 0xd:
      if ((((int)local_24 < 0x3f28f5c3) && (0x3f28f5c2 < (int)(param_1->base).base.layer_action_t))
         && (pCVar1 = param_1->weapon, pCVar1 != (CWeapon *)0x0)) {
        (*((pCVar1->base).vtable._ub)->processMeleeHit)(&pCVar1->base,2);
      }
    }
    if (-1 < iVar3) {
      pCVar1 = param_1->weapon;
      if (pCVar1 != local_14) {
        if (pCVar1 != (CWeapon *)0x0) {
          uVar2 = pCVar1->weapon_type;
          if (uVar2 < 7) {
            if (uVar2 == 0) {
              iVar5 = 1;
            }
            else {
              iVar5 = 3;
            }
          }
          else if ((uVar2 < 8) || (uVar2 == 8)) {
            pCVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                               (&pCVar1->base,g_CMeleeActorType_01cc56a4.name_hash);
            if ((pCVar9 == (CDemonActor *)0x0) || (pCVar9[4].orient_matrix.m[0].y == 0.0)) {
              iVar5 = 0;
            }
            else {
              iVar5 = 3;
            }
          }
          else {
            iVar5 = 3;
          }
          if (iVar3 == iVar5) {
            (*((param_1->weapon->base).vtable._ub)->getPropertyList)
                      (&param_1->weapon->base,(CActorPropertyList *)0x1);
            param_1->weapon = (CWeapon *)0x0;
            local_34 = (SMotion *)0x1;
          }
        }
        if (param_1->guns_drawn != 0) {
          if (local_14 == (CWeapon *)0x0) {
LAB_0053f520:
            iVar5 = 0;
          }
          else {
            uVar2 = local_14->weapon_type;
            if (uVar2 < 7) {
              if (uVar2 == 0) {
                iVar5 = 1;
              }
              else {
                iVar5 = 3;
              }
            }
            else if ((uVar2 < 8) || (uVar2 == 8)) {
              pCVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                                 (&local_14->base,g_CMeleeActorType_01cc56a4.name_hash);
              if ((pCVar9 == (CDemonActor *)0x0) || (pCVar9[4].orient_matrix.m[0].y == 0.0))
              goto LAB_0053f520;
              iVar5 = 3;
            }
            else {
              iVar5 = 3;
            }
          }
          if (iVar3 == iVar5) {
            param_1->weapon = local_14;
            if (local_14 != (CWeapon *)0x0) {
              (*((local_14->base).vtable._ub)->getPropertyList)
                        (&local_14->base,(CActorPropertyList *)0x2);
            }
            local_3c = 1;
          }
        }
      }
      if ((param_1->action_pending == 1) && (iVar3 == 3)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(&param_1->base,1);
        param_1->action_pending = 0;
      }
      pCVar9 = (param_1->base).target_actor;
      if ((pCVar9 != (CDemonActor *)0x0) && (iVar3 == 3)) {
        core_inv_cpp_CInventory_removeItem_FUN_004c07b0(local_18,pCVar9,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
                  (0x01CC9450,(param_1->base).target_actor);
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40
                  ((CCharacter *)param_1,1,(param_1->base).target_actor,0.0);
        iVar5 = core_actor_cpp_isOfClass_FUN_0040d7e0((param_1->base).target_actor,"CTrap")
        ;
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_28,0x16,1);
          if (param_1->action_pending != 0) {
            shape_edittool_cpp_FUN_0046fb40
                      (0x01BCD074,"actionPending = %d\nstranger.cpp line %d",param_1->action_pending,
                       0x13ba);
          }
          param_1->action_pending = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_28,0x14,1);
          param_1->action_pending = 6;
        }
        (param_1->base).target_actor = (CDemonActor *)0x0;
      }
      if (iVar3 == 10) {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(local_18);
        if (pCVar6 == (CLightGun *)0x0) {
LAB_0053f61d:
          (param_1->base).is_wearing_gas_mask = 1;
        }
        else {
          (param_1->base).is_wearing_gas_mask = 2;
        }
      }
      else if ((iVar3 == 3) && ((param_1->base).is_wearing_gas_mask < 2)) {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(local_18);
        if (pCVar6 != (CLightGun *)0x0) goto LAB_0053f61d;
        (param_1->base).is_wearing_gas_mask = 0;
      }
      if ((param_1->action_pending == 7) && ((iVar3 == 0 || (iVar3 == 8)))) {
        param_1->action_pending = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50((CCharacter *)param_1,iVar11);
    }
    local_2c = local_2c + 1;
  } while (local_2c < 2);
  if (local_3c == 0) {
    return;
  }
LAB_0053fc23:
  xxx_unk_c_FUN_004940d0(INT_005b9284);
  return;
}
