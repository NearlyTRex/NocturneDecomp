// Name: core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_005c5270
// Address: 005c5270
// MANUAL RECONSTRUCTION
// Address Range: [[005c5270, 005c5b68]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005c5270(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005c5270(CStranger *this_ptr,float delta_time)

{
  CInventory *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  CWeapon *pCVar3;
  CDemonActor *pCVar4;
  uint uVar5;
  int iVar5;
  CMotionList *pCVar6;
  CDynamite *this_ptr_02;
  int iVar6;
  int iVar7;
  int iVar8;
  CLightGun *pCVar12;
  uint uVar13;
  float fVar9;
  CMelee *pCVar11;
  CMelee *pCVar8;
  CDynamite *pCVar13;
  CVector3f *pCVar14;
  CMelee *pCVar9;
  CMelee *pCVar10;
  CLightGun *pCVar15;
  int iVar15;
  CVector3f local_60;
  CVector3f local_54;
  int local_40;
  int local_34;
  CWeapon *local_1c;
  char *pcVar4;
  float fVar3;
  CDemonActor *pCVar2;
  
  if (((this_ptr->base).base.layer_action_index == 0xe) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (this_ptr->base).base.layer_action_t = 0.0;
    (this_ptr->base).base.layer_action_index = 0;
  }
  local_40 = -1;
  local_1c = (CWeapon *)0x0;
  if ((this_ptr->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    if (this_ptr->guns_drawn != 0) {
      pCVar4 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (pCVar4 == (CDemonActor *)0x0) {
        local_1c = (this_ptr->base).inventory.selected_weapon;
      }
      else {
        local_1c = (CWeapon *)
                   core_actor_cpp_castToClassHash_FUN_0040c790(pCVar4,g_CWeaponClassInfo.name_hash);
        if ((local_1c == (CWeapon *)0x0) &&
           (pCVar4 = (this_ptr->base).base.carry_hands[1].carry_actor,
           uVar13 = (*((pCVar4->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar4), (uVar13 & 3) != 0
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
  this_ptr_00 = &(this_ptr->base).inventory;
  this_ptr_01 = &(this_ptr->base).base.model;
  local_34 = 0;
  do {
    if (delta_time <= 0.0) {
      return;
    }
    iVar8 = this_ptr->action_pending;
    if ((iVar8 == 1) || ((this_ptr->base).target_actor != (CDemonActor *)0x0)) {
LAB_005c52fa:
      iVar15 = 3;
    }
    else if (iVar8 == 2) {
      iVar15 = 0;
    }
    else if (iVar8 == 3) {
      iVar15 = 6;
      fVar9 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                        ((CCharacter *)this_ptr,6);
      if ((float)0.98999999999999999 < fVar9) {
        fVar3 = delta_time * (float)25 + this_ptr->aim_speed_factor;
        this_ptr->aim_speed_factor = fVar3;
        if (70.0f < fVar3) {
          this_ptr->aim_speed_factor = 70.0f;
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          return;
        }
        goto switchD_005c56f5_caseD_8;
      }
    }
    else {
      pCVar15 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(this_ptr_00);
      if ((pCVar15 != (CLightGun *)0x0) && ((this_ptr->base).is_wearing_gas_mask == 0))
      goto LAB_005c52fa;
      pCVar15 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(this_ptr_00);
      if ((pCVar15 == (CLightGun *)0x0) || ((this_ptr->base).is_wearing_gas_mask != 1)) {
        pCVar15 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(this_ptr_00);
        if ((pCVar15 == (CLightGun *)0x0) && ((this_ptr->base).is_wearing_gas_mask == 2)) {
          iVar15 = 10;
        }
        else {
          pCVar15 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(this_ptr_00);
          if ((pCVar15 == (CLightGun *)0x0) && ((this_ptr->base).is_wearing_gas_mask == 1))
          goto LAB_005c52fa;
          iVar15 = local_40;
          if (local_40 < 0) {
            pCVar3 = this_ptr->weapon;
            if (pCVar3 == local_1c) {
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
            else if (pCVar3 == (CWeapon *)0x0) {
              if (local_1c == (CWeapon *)0x0) {
                iVar15 = 0;
              }
              else {
                uVar5 = local_1c->weapon_type;
                if (uVar5 < 7) goto joined_r0x005c57cf;
                if (((7 < uVar5) && (uVar5 != 8)) ||
                   ((pCVar11 = (CMelee *)
                               core_actor_cpp_castToClassHash_FUN_0040c790
                                         (&local_1c->base,g_CMeleeClassInfo.name_hash),
                    pCVar11 != (CMelee *)0x0 && (pCVar11->can_go_in_inventory != 0))))
                goto LAB_005c52fa;
                iVar15 = 0;
              }
            }
            else {
              uVar5 = pCVar3->weapon_type;
              if (uVar5 < 7) {
joined_r0x005c57cf:
                if (uVar5 != 0) goto LAB_005c52fa;
                iVar15 = 1;
              }
              else {
                if (((7 < uVar5) && (uVar5 != 8)) ||
                   ((pCVar8 = (CMelee *)
                              core_actor_cpp_castToClassHash_FUN_0040c790
                                        (&pCVar3->base,g_CMeleeClassInfo.name_hash),
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
    fVar9 = (this_ptr->base).base.layer_action_t;
    iVar5 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370
                      ((CCharacter *)this_ptr,&delta_time,iVar15);
    iVar8 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
            motion_index;
    pCVar6 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                       (&this_ptr_01->motion_controller);
    switch((this_ptr->base).base.layer_action_index) {
    case 6:
      this_ptr_02 = (CDynamite *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (&this_ptr->weapon->base,g_CDynamiteClassInfo.name_hash);
      if (((this_ptr_02 != (CDynamite *)0x0) &&
          (iVar6 = core_dynamite_cpp_CDynamite_isFuseLit_FUN_0049cf70(this_ptr_02), iVar6 == 0)) &&
         ((float)(int)(0xb / (longlong)pCVar6->motions[iVar8].frame_count) <=
          (this_ptr->base).base.layer_action_t)) {
        core_dynamite_cpp_CDynamite_lightFuse_FUN_0049cf20(this_ptr_02);
      }
      break;
    case 7:
      if ((this_ptr->action_pending == 3) &&
         ((float)(int)(0xb / (longlong)pCVar6->motions[iVar8].frame_count) <=
          (this_ptr->base).base.layer_action_t)) {
        core_stranger_cpp_CStranger_getThrowDirection_FUN_005c51c0(this_ptr,&local_54);
        pCVar13 = (CDynamite *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (&this_ptr->weapon->base,g_CDynamiteClassInfo.name_hash);
        if (pCVar13 != (CDynamite *)0x0) {
          pCVar14 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                              ((CDemonActor *)this_ptr,&local_60,&local_54);
          pcVar4 = (char *)&pCVar13->toss_velocity;
          if ((CVector3f *)pcVar4 != pCVar14) {
            *(float *)pcVar4 = pCVar14->x;
            (pCVar13->toss_velocity).y = pCVar14->y;
            (pCVar13->toss_velocity).z = pCVar14->z;
          }
          (*(((pCVar13->base).base.vtable._uw)->_uw).fire)((CWeapon *)pCVar13);
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
      if ((((int)fVar9 < 0x3f19999a) && (0x3f199999 < (int)(this_ptr->base).base.layer_action_t)) &&
         (iVar8 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->weapon->base,"CShotgun")
         , iVar8 != 0)) {
        (*(((this_ptr->weapon->base).vtable._uw)->_uw).onFired)(this_ptr->weapon);
      }
      break;
    case 0xc:
      if ((((int)fVar9 < 0x3ebd70a4) && (0x3ebd70a3 < (int)(this_ptr->base).base.layer_action_t)) &&
         (pCVar3 = this_ptr->weapon, pCVar3 != (CWeapon *)0x0)) {
        (*((pCVar3->base).vtable._ub)->processMeleeHit)(&pCVar3->base,1);
      }
      break;
    case 0xd:
      if ((((int)fVar9 < 0x3f28f5c3) && (0x3f28f5c2 < (int)(this_ptr->base).base.layer_action_t)) &&
         (pCVar3 = this_ptr->weapon, pCVar3 != (CWeapon *)0x0)) {
        (*((pCVar3->base).vtable._ub)->processMeleeHit)(&pCVar3->base,2);
      }
    }
    if (-1 < iVar5) {
      pCVar3 = this_ptr->weapon;
      if (pCVar3 != local_1c) {
        if (pCVar3 != (CWeapon *)0x0) {
          uVar5 = pCVar3->weapon_type;
          if (uVar5 < 7) {
            if (uVar5 == 0) {
              iVar8 = 1;
            }
            else {
              iVar8 = 3;
            }
          }
          else if ((uVar5 < 8) || (uVar5 == 8)) {
            pCVar9 = (CMelee *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (&pCVar3->base,g_CMeleeClassInfo.name_hash);
            if ((pCVar9 == (CMelee *)0x0) || (pCVar9->can_go_in_inventory == 0)) {
              iVar8 = 0;
            }
            else {
              iVar8 = 3;
            }
          }
          else {
            iVar8 = 3;
          }
          if (iVar5 == iVar8) {
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
            uVar5 = local_1c->weapon_type;
            if (uVar5 < 7) {
              if (uVar5 == 0) {
                iVar7 = 1;
              }
              else {
                iVar7 = 3;
              }
            }
            else if ((uVar5 < 8) || (uVar5 == 8)) {
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
        core_inv_cpp_CInventory_removeItem_FUN_004fea70(this_ptr_00,pCVar2,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70
                  (g_CDemonMissionPtr,(this_ptr->base).target_actor);
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
                  ((CCharacter *)this_ptr,1,(this_ptr->base).target_actor,0.0);
        iVar8 = core_actor_cpp_isOfClass_FUN_0040c6d0
                          ((this_ptr->base).target_actor,"CTrap");
        if (iVar8 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_01->motion_controller,0x16,1);
          if (this_ptr->action_pending != 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       this_ptr->action_pending,0x13b4);
          }
          this_ptr->action_pending = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_01->motion_controller,0x14,1);
          this_ptr->action_pending = 6;
        }
        (this_ptr->base).target_actor = (CDemonActor *)0x0;
      }
      if (iVar5 == 10) {
        pCVar12 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(this_ptr_00);
        if (pCVar12 == (CLightGun *)0x0) {
LAB_005c54e8:
          (this_ptr->base).is_wearing_gas_mask = 1;
        }
        else {
          (this_ptr->base).is_wearing_gas_mask = 2;
        }
      }
      else if ((iVar5 == 3) && ((this_ptr->base).is_wearing_gas_mask < 2)) {
        pCVar15 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(this_ptr_00);
        if (pCVar15 != (CLightGun *)0x0) goto LAB_005c54e8;
        (this_ptr->base).is_wearing_gas_mask = 0;
      }
      if ((this_ptr->action_pending == 7) && ((iVar5 == 0 || (iVar5 == 8)))) {
        this_ptr->action_pending = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0((CCharacter *)this_ptr,iVar15)
      ;
    }
    local_34 = local_34 + 1;
    if (1 < local_34) {
      return;
    }
  } while( true );
}
