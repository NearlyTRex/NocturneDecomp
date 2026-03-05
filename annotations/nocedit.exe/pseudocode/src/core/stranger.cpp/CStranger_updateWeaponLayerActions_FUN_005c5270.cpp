// Name: core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_005c5270
// Address: 005c5270
// Address Range: [[005c5270, 005c5b68]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005c5270(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005c5793) */

void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005c5270(CStranger *this_ptr,float delta_time)

{
  CWeapon *pCVar1;
  CDemonActor *pCVar2;
  float fVar3;
  char *pcVar4;
  int iVar5;
  CMotionList *pCVar6;
  int iVar7;
  CLightGun *pCVar12;
  uint uVar13;
  CMelee *pCVar11;
  CMelee *pCVar8;
  CVector3f *pCVar14;
  CMelee *pCVar9;
  CMelee *pCVar10;
  int iVar15;
  CVector3f local_60;
  CVector3f local_54;
  int local_40;
  char *local_3c;
  CWeapon *local_38;
  CDynamite *local_34;
  CMotionController *local_30;
  CWeapon *local_2c;
  CDynamite *local_28;
  float local_24;
  CInventory *local_20;
  CWeapon *local_1c;
  float local_18;
  
  if (((this_ptr->base).base.layer_action_index == 0xe) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (this_ptr->base).base.layer_action_t = 0.0;
    (this_ptr->base).base.layer_action_index = 0;
  }
  local_40 = -1;
  local_1c = (CWeapon *)0x0;
  if ((this_ptr->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    if (this_ptr->guns_drawn != 0) {
      pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (pCVar2 == (CDemonActor *)0x0) {
        local_1c = (this_ptr->base).inventory.selected_weapon;
      }
      else {
        local_1c = (CWeapon *)
                   core_actor_cpp_castToClassHash_FUN_0040c790(pCVar2,g_CWeaponClassInfo.name_hash);
        if ((local_1c == (CWeapon *)0x0) &&
           (pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor,
           uVar13 = (*((pCVar2->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar2), (uVar13 & 3) != 0
           )) {
          local_40 = 8;
        }
      }
      if ((local_1c == (CWeapon *)0x0) && (local_40 < 0)) {
        this_ptr->guns_drawn = 0;
      }
    }
  }
  else {
    this_ptr->guns_drawn = 0;
  }
  local_20 = &(this_ptr->base).inventory;
  local_30 = &(this_ptr->base).base.model.motion_controller;
  local_34 = (CDynamite *)0x0;
  do {
    if (delta_time <= 0.0) {
      return;
    }
    iVar15 = this_ptr->action_pending;
    if ((iVar15 == 1) || ((this_ptr->base).target_actor != (CDemonActor *)0x0)) {
LAB_005c52fa:
      iVar15 = 3;
    }
    else if (iVar15 == 2) {
      iVar15 = 0;
    }
    else if (iVar15 == 3) {
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                           ((CCharacter *)this_ptr,6);
      iVar15 = 6;
      if ((float)0.98999999999999999 < local_18) {
        fVar3 = delta_time * (float)25 + this_ptr->aim_speed_factor;
        this_ptr->aim_speed_factor = fVar3;
        if (70.0f < fVar3) {
          this_ptr->aim_speed_factor = 70.0f;
        }
        if ((this_ptr->base).player_control.action_states[3] != 0) {
          return;
        }
        goto switchD_005c56f5_caseD_8;
      }
    }
    else {
      pCVar12 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_20);
      if ((pCVar12 != (CLightGun *)0x0) && ((this_ptr->base).is_wearing_gas_mask == 0))
      goto LAB_005c52fa;
      pCVar12 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_20);
      if ((pCVar12 == (CLightGun *)0x0) || ((this_ptr->base).is_wearing_gas_mask != 1)) {
        pCVar12 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_20);
        if ((pCVar12 == (CLightGun *)0x0) && ((this_ptr->base).is_wearing_gas_mask == 2)) {
          iVar15 = 10;
        }
        else {
          pCVar12 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_20);
          if ((pCVar12 == (CLightGun *)0x0) && ((this_ptr->base).is_wearing_gas_mask == 1))
          goto LAB_005c52fa;
          iVar15 = local_40;
          if (local_40 < 0) {
            pCVar1 = this_ptr->weapon;
            if (pCVar1 == local_1c) {
              if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_005c56f5_caseD_8:
                iVar15 = 0;
              }
              else {
                switch(this_ptr->weapon->weapon_type) {
                case 0:
                case 5:
                  iVar15 = 2;
                  break;
                case 1:
                  iVar15 = 4;
                  break;
                case 2:
                  iVar15 = 5;
                  break;
                default:
                  goto switchD_005c56f5_caseD_8;
                case 4:
                  iVar15 = 7;
                  break;
                case 7:
                  iVar15 = 8;
                }
              }
            }
            else if (pCVar1 == (CWeapon *)0x0) {
              if (local_1c == (CWeapon *)0x0) {
                iVar15 = 0;
              }
              else {
                uVar13 = local_1c->weapon_type;
                if (uVar13 < 7) goto joined_r0x005c57cf;
                if (((7 < uVar13) && (uVar13 != 8)) ||
                   ((pCVar11 = (CMelee *)
                               core_actor_cpp_castToClassHash_FUN_0040c790
                                         (&local_1c->base,g_CMeleeClassInfo.name_hash),
                    pCVar11 != (CMelee *)0x0 && (pCVar11->can_go_in_inventory != 0))))
                goto LAB_005c52fa;
                iVar15 = 0;
              }
            }
            else {
              uVar13 = pCVar1->weapon_type;
              if (uVar13 < 7) {
joined_r0x005c57cf:
                if (uVar13 != 0) goto LAB_005c52fa;
                iVar15 = 1;
              }
              else {
                if (((7 < uVar13) && (uVar13 != 8)) ||
                   ((pCVar8 = (CMelee *)
                              core_actor_cpp_castToClassHash_FUN_0040c790
                                        (&pCVar1->base,g_CMeleeClassInfo.name_hash),
                    pCVar8 != (CMelee *)0x0 && (pCVar8->can_go_in_inventory != 0))))
                goto LAB_005c52fa;
                iVar15 = 0;
              }
            }
          }
        }
      }
      else {
        iVar15 = 10;
      }
    }
    local_24 = (this_ptr->base).base.layer_action_t;
    iVar5 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370
                      ((CCharacter *)this_ptr,&delta_time,iVar15);
    local_18 = (float)((this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index]
                       .motion_index * 0x54c);
    pCVar6 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(local_30);
    local_3c = pCVar6->motions[0].motion_name + (int)local_18;
    switch((this_ptr->base).base.layer_action_index) {
    case 6:
      local_28 = (CDynamite *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (&this_ptr->weapon->base,g_CDynamiteClassInfo.name_hash);
      if (((local_28 != (CDynamite *)0x0) &&
          (iVar7 = core_dynamite_cpp_CDynamite_FUN_0049cf70(local_28), iVar7 == 0)) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(local_3c + 100)),
         (float)(int)local_18 <= (this_ptr->base).base.layer_action_t)) {
        core_dynamite_cpp_CDynamite_FUN_0049cf20(local_28);
      }
      break;
    case 7:
      if ((this_ptr->action_pending == 3) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(local_3c + 100)),
         (float)(int)local_18 <= (this_ptr->base).base.layer_action_t)) {
        core_stranger_cpp_CStranger_getThrowDirection_FUN_005c51c0(this_ptr,&local_54);
        local_38 = (CWeapon *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             (&this_ptr->weapon->base,g_CDynamiteClassInfo.name_hash);
        local_2c = local_38;
        if (local_38 != (CWeapon *)0x0) {
          pCVar14 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                              ((CDemonActor *)this_ptr,&local_60,&local_54);
          pcVar4 = local_2c[1].base.actor_name + 4;
          if ((CVector3f *)pcVar4 != pCVar14) {
            *(float *)pcVar4 = pCVar14->x;
            (((CLocation *)(local_2c[1].base.actor_name + 8))->position).x = pCVar14->y;
            *(float *)(local_2c[1].base.actor_name + 0xc) = pCVar14->z;
          }
          (*(((local_38->base).vtable._uw)->_uw).fire)(local_38);
          this_ptr->weapon = (CWeapon *)0x0;
        }
        if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
          (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                    ((CCharacter *)this_ptr,1,&local_54);
        }
        this_ptr->action_pending = 0;
        this_ptr->aim_speed_factor = 10.0f;
      }
      if (1.0 <= (this_ptr->base).base.layer_action_t) {
        (this_ptr->base).base.layer_action_index = 0;
        (this_ptr->base).base.layer_action_t = 0.0;
      }
      break;
    case 8:
      if ((((int)local_24 < 0x3f19999a) && (0x3f199999 < (int)(this_ptr->base).base.layer_action_t))
         && (iVar7 = core_actor_cpp_isOfClass_FUN_0040c6d0
                               (&this_ptr->weapon->base,"CShotgun"), iVar7 != 0)) {
        (*(((this_ptr->weapon->base).vtable._uw)->_uw).onFired)(this_ptr->weapon);
      }
      break;
    case 0xc:
      if ((((int)local_24 < 0x3ebd70a4) && (0x3ebd70a3 < (int)(this_ptr->base).base.layer_action_t))
         && (pCVar1 = this_ptr->weapon, pCVar1 != (CWeapon *)0x0)) {
        (*((pCVar1->base).vtable._ub)->processMeleeHit)(&pCVar1->base,1);
      }
      break;
    case 0xd:
      if ((((int)local_24 < 0x3f28f5c3) && (0x3f28f5c2 < (int)(this_ptr->base).base.layer_action_t))
         && (pCVar1 = this_ptr->weapon, pCVar1 != (CWeapon *)0x0)) {
        (*((pCVar1->base).vtable._ub)->processMeleeHit)(&pCVar1->base,2);
      }
    }
    if (-1 < iVar5) {
      pCVar1 = this_ptr->weapon;
      if (pCVar1 != local_1c) {
        if (pCVar1 != (CWeapon *)0x0) {
          uVar13 = pCVar1->weapon_type;
          if (uVar13 < 7) {
            if (uVar13 == 0) {
              iVar7 = 1;
            }
            else {
              iVar7 = 3;
            }
          }
          else if ((uVar13 < 8) || (uVar13 == 8)) {
            pCVar9 = (CMelee *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (&pCVar1->base,g_CMeleeClassInfo.name_hash);
            if ((pCVar9 == (CMelee *)0x0) || (pCVar9->can_go_in_inventory == 0)) {
              iVar7 = 0;
            }
            else {
              iVar7 = 3;
            }
          }
          else {
            iVar7 = 3;
          }
          if (iVar5 == iVar7) {
            (*(((this_ptr->weapon->base).vtable._uw)->_uw).setWeaponState)(this_ptr->weapon,1);
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
        if (this_ptr->guns_drawn != 0) {
          if (local_1c == (CWeapon *)0x0) {
LAB_005c53f2:
            iVar7 = 0;
          }
          else {
            uVar13 = local_1c->weapon_type;
            if (uVar13 < 7) {
              if (uVar13 == 0) {
                iVar7 = 1;
              }
              else {
                iVar7 = 3;
              }
            }
            else if ((uVar13 < 8) || (uVar13 == 8)) {
              pCVar10 = (CMelee *)
                        core_actor_cpp_castToClassHash_FUN_0040c790
                                  (&local_1c->base,g_CMeleeClassInfo.name_hash);
              if ((pCVar10 == (CMelee *)0x0) || (pCVar10->can_go_in_inventory == 0))
              goto LAB_005c53f2;
              iVar7 = 3;
            }
            else {
              iVar7 = 3;
            }
          }
          if ((iVar5 == iVar7) && (this_ptr->weapon = local_1c, local_1c != (CWeapon *)0x0)) {
            (*(((local_1c->base).vtable._uw)->_uw).setWeaponState)(local_1c,2);
          }
        }
      }
      if ((this_ptr->action_pending == 1) && (iVar5 == 3)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004f38d0(&this_ptr->base,1);
        this_ptr->action_pending = 0;
      }
      pCVar2 = (this_ptr->base).target_actor;
      if ((pCVar2 != (CDemonActor *)0x0) && (iVar5 == 3)) {
        core_inv_cpp_CInventory_removeItem_FUN_004fea70(local_20,pCVar2,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70
                  (g_CDemonMissionPtr,(this_ptr->base).target_actor);
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
                  ((CCharacter *)this_ptr,1,(this_ptr->base).target_actor,0.0);
        iVar7 = core_actor_cpp_isOfClass_FUN_0040c6d0
                          ((this_ptr->base).target_actor,"CTrap");
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0x16,1);
          if (this_ptr->action_pending != 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       this_ptr->action_pending,0x13b4);
          }
          this_ptr->action_pending = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0x14,1);
          this_ptr->action_pending = 6;
        }
        (this_ptr->base).target_actor = (CDemonActor *)0x0;
      }
      if (iVar5 == 10) {
        pCVar12 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_20);
        if (pCVar12 == (CLightGun *)0x0) {
LAB_005c54e8:
          (this_ptr->base).is_wearing_gas_mask = 1;
        }
        else {
          (this_ptr->base).is_wearing_gas_mask = 2;
        }
      }
      else if ((iVar5 == 3) && ((this_ptr->base).is_wearing_gas_mask < 2)) {
        pCVar12 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_20);
        if (pCVar12 != (CLightGun *)0x0) goto LAB_005c54e8;
        (this_ptr->base).is_wearing_gas_mask = 0;
      }
      if ((this_ptr->action_pending == 7) && ((iVar5 == 0 || (iVar5 == 8)))) {
        this_ptr->action_pending = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0((CCharacter *)this_ptr,iVar15)
      ;
    }
    local_34 = (CDynamite *)((local_34->base).base.actor_name + 1);
    if (1 < (int)local_34) {
      return;
    }
  } while( true );
}
