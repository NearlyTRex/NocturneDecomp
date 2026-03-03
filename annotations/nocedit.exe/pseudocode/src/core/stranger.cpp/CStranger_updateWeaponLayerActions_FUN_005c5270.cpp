// Name: core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_005c5270
// Address: 005c5270
// Address Range: [[005c5270, 005c5b68]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005c5270(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005c5793) */

void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005c5270(CStranger *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CDemonActor *pCVar2;
  CWeapon *pCVar3;
  float fVar4;
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
  CVector3f *in_stack_ffffffa4;
  float in_stack_ffffffa8;
  CVector3f CStack_50;
  uint local_40;
  int local_3c;
  char *local_38;
  CDynamite *local_34;
  int local_30;
  CMotionController *local_2c;
  CDynamite *local_28;
  CDynamite *local_24;
  float local_20;
  CWeapon *local_1c;
  CCharacter *local_18;
  float fStack_14;
  
  if (((this_ptr->base).base.layer_action_index == 0xe) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (this_ptr->base).base.layer_action_t = 0.0;
    (this_ptr->base).base.layer_action_index = 0;
  }
  local_40 = 0xffffffff;
  local_1c = (CWeapon *)0x0;
  if ((this_ptr->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    if (this_ptr->guns_drawn != 0) {
      pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (((pCVar2 != (CDemonActor *)0x0) &&
          (local_1c = (CWeapon *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCVar2,g_CWeaponClassInfo.name_hash), local_1c == (CWeapon *)0x0))
         && (pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor,
            uVar13 = (*((pCVar2->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar2),
            (uVar13 & 3) != 0)) {
        local_3c = 8;
      }
      if ((local_18 == (CCharacter *)0x0) && (local_3c < 0)) {
        this_ptr->guns_drawn = 0;
      }
    }
  }
  else {
    this_ptr->guns_drawn = 0;
  }
  local_1c = (CWeapon *)&(this_ptr->base).inventory;
  local_2c = &(this_ptr->base).base.model.motion_controller;
  local_30 = 0;
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
      fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                            ((CCharacter *)this_ptr,6);
      iVar15 = 6;
      if ((float)0.98999999999999999 < fStack_14) {
        fVar4 = delta_time * (float)25 + this_ptr->aim_speed_factor;
        this_ptr->aim_speed_factor = fVar4;
        if (70.0f < fVar4) {
          this_ptr->aim_speed_factor = 70.0f;
        }
        if ((this_ptr->base).player_control.action_states[3] != 0) {
          return;
        }
        goto switchD_005c56f5_caseD_8;
      }
    }
    else {
      pCVar12 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0((CInventory *)local_1c);
      if ((pCVar12 != (CLightGun *)0x0) && ((this_ptr->base).is_wearing_gas_mask == 0))
      goto LAB_005c52fa;
      pCVar12 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0((CInventory *)local_1c);
      if ((pCVar12 == (CLightGun *)0x0) || ((this_ptr->base).is_wearing_gas_mask != 1)) {
        pCVar12 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0((CInventory *)local_1c);
        if ((pCVar12 == (CLightGun *)0x0) && ((this_ptr->base).is_wearing_gas_mask == 2)) {
          iVar15 = 10;
        }
        else {
          pCVar12 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0((CInventory *)local_1c);
          if ((pCVar12 == (CLightGun *)0x0) && ((this_ptr->base).is_wearing_gas_mask == 1))
          goto LAB_005c52fa;
          iVar15 = local_3c;
          if (local_3c < 0) {
            pCVar1 = (CCharacter *)this_ptr->weapon;
            if (pCVar1 == local_18) {
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
            else if (pCVar1 == (CCharacter *)0x0) {
              if (local_18 == (CCharacter *)0x0) {
                iVar15 = 0;
              }
              else {
                fVar4 = (local_18->model).transformed_vertices[0x19].y;
                if ((uint)fVar4 < 7) goto joined_r0x005c57cf;
                if (((7 < (uint)fVar4) && (fVar4 != 1.12104e-44)) ||
                   ((pCVar11 = (CMelee *)
                               core_actor_cpp_castToClassHash_FUN_0040c790
                                         (&local_18->base,g_CMeleeClassInfo.name_hash),
                    pCVar11 != (CMelee *)0x0 && (pCVar11->can_go_in_inventory != 0))))
                goto LAB_005c52fa;
                iVar15 = 0;
              }
            }
            else {
              fVar4 = (pCVar1->model).transformed_vertices[0x19].y;
              if ((uint)fVar4 < 7) {
joined_r0x005c57cf:
                if (fVar4 != 0.0) goto LAB_005c52fa;
                iVar15 = 1;
              }
              else {
                if (((7 < (uint)fVar4) && (fVar4 != 1.12104e-44)) ||
                   ((pCVar8 = (CMelee *)
                              core_actor_cpp_castToClassHash_FUN_0040c790
                                        ((CDemonActor *)pCVar1,g_CMeleeClassInfo.name_hash),
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
    local_20 = (this_ptr->base).base.layer_action_t;
    iVar5 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370
                      ((CCharacter *)this_ptr,&delta_time,iVar15);
    fStack_14 = (float)((this_ptr->base).base.layer_actions
                        [(this_ptr->base).base.layer_action_index].motion_index * 0x54c);
    pCVar6 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(local_2c);
    local_38 = pCVar6->motions[0].motion_name + (int)fStack_14;
    switch((this_ptr->base).base.layer_action_index) {
    case 6:
      local_24 = (CDynamite *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (&this_ptr->weapon->base,g_CDynamiteClassInfo.name_hash);
      if (((local_24 != (CDynamite *)0x0) &&
          (iVar7 = core_dynamite_cpp_CDynamite_FUN_0049cf70(local_24), iVar7 == 0)) &&
         (fStack_14 = (float)(0xb / (longlong)*(int *)(local_38 + 100)),
         (float)(int)fStack_14 <= (this_ptr->base).base.layer_action_t)) {
        core_dynamite_cpp_CDynamite_FUN_0049cf20(local_24);
      }
      break;
    case 7:
      if ((this_ptr->action_pending == 3) &&
         (fStack_14 = (float)(0xb / (longlong)*(int *)(local_38 + 100)),
         (float)(int)fStack_14 <= (this_ptr->base).base.layer_action_t)) {
        core_stranger_cpp_CStranger_getThrowDirection_FUN_005c51c0(this_ptr,&CStack_50);
        local_34 = (CDynamite *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             (&this_ptr->weapon->base,g_CDynamiteClassInfo.name_hash);
        local_28 = local_34;
        if (local_34 != (CDynamite *)0x0) {
          pCVar14 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                              ((CDemonActor *)this_ptr,(CVector3f *)&stack0xffffffa4,&CStack_50);
          if (&local_28->toss_velocity != pCVar14) {
            (local_28->toss_velocity).x = pCVar14->x;
            (local_28->toss_velocity).y = pCVar14->y;
            (local_28->toss_velocity).z = pCVar14->z;
          }
          (*(((local_34->base).base.vtable._uc)->_uc).isGrabbable)((CCharacter *)local_34);
          this_ptr->weapon = (CWeapon *)0x0;
        }
        if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
          (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                    ((CCharacter *)this_ptr,1,&CStack_50);
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
      if ((((int)local_20 < 0x3f19999a) && (0x3f199999 < (int)(this_ptr->base).base.layer_action_t))
         && (iVar7 = core_actor_cpp_isOfClass_FUN_0040c6d0
                               (&this_ptr->weapon->base,"CShotgun"), iVar7 != 0)) {
        (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).applyDamage)
                  ((CCharacter *)this_ptr->weapon,(int)in_stack_ffffffa4,in_stack_ffffffa8);
      }
      break;
    case 0xc:
      if ((((int)local_20 < 0x3ebd70a4) && (0x3ebd70a3 < (int)(this_ptr->base).base.layer_action_t))
         && (pCVar3 = this_ptr->weapon, pCVar3 != (CWeapon *)0x0)) {
        (*((pCVar3->base).vtable._ub)->processMeleeHit)(&pCVar3->base,1);
      }
      break;
    case 0xd:
      if ((((int)local_20 < 0x3f28f5c3) && (0x3f28f5c2 < (int)(this_ptr->base).base.layer_action_t))
         && (pCVar3 = this_ptr->weapon, pCVar3 != (CWeapon *)0x0)) {
        (*((pCVar3->base).vtable._ub)->processMeleeHit)(&pCVar3->base,2);
      }
    }
    if (-1 < iVar5) {
      pCVar1 = (CCharacter *)this_ptr->weapon;
      if (pCVar1 != local_18) {
        if (pCVar1 != (CCharacter *)0x0) {
          fVar4 = (pCVar1->model).transformed_vertices[0x19].y;
          if ((uint)fVar4 < 7) {
            if (fVar4 == 0.0) {
              iVar7 = 1;
            }
            else {
              iVar7 = 3;
            }
          }
          else if (((uint)fVar4 < 8) || (fVar4 == 1.12104e-44)) {
            pCVar9 = (CMelee *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               ((CDemonActor *)pCVar1,g_CMeleeClassInfo.name_hash);
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
            (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).kill)
                      ((CCharacter *)this_ptr->weapon,1,in_stack_ffffffa4,in_stack_ffffffa8);
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
        if (this_ptr->guns_drawn != 0) {
          if (local_18 == (CCharacter *)0x0) {
LAB_005c53f2:
            iVar7 = 0;
          }
          else {
            fVar4 = (local_18->model).transformed_vertices[0x19].y;
            if ((uint)fVar4 < 7) {
              if (fVar4 == 0.0) {
                iVar7 = 1;
              }
              else {
                iVar7 = 3;
              }
            }
            else if (((uint)fVar4 < 8) || (fVar4 == 1.12104e-44)) {
              pCVar10 = (CMelee *)
                        core_actor_cpp_castToClassHash_FUN_0040c790
                                  (&local_18->base,g_CMeleeClassInfo.name_hash);
              if ((pCVar10 == (CMelee *)0x0) || (pCVar10->can_go_in_inventory == 0))
              goto LAB_005c53f2;
              iVar7 = 3;
            }
            else {
              iVar7 = 3;
            }
          }
          if ((iVar5 == iVar7) &&
             (this_ptr->weapon = (CWeapon *)local_18, local_18 != (CCharacter *)0x0)) {
            (*(((local_18->base).vtable._uc)->_uc).kill)
                      (local_18,2,in_stack_ffffffa4,in_stack_ffffffa8);
          }
        }
      }
      if ((this_ptr->action_pending == 1) && (iVar5 == 3)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004f38d0(&this_ptr->base,1);
        this_ptr->action_pending = 0;
      }
      pCVar2 = (this_ptr->base).target_actor;
      if ((pCVar2 != (CDemonActor *)0x0) && (iVar5 == 3)) {
        core_inv_cpp_CInventory_removeItem_FUN_004fea70((CInventory *)local_1c,pCVar2,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70
                  (g_CDemonMissionPtr,(this_ptr->base).target_actor);
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
                  ((CCharacter *)this_ptr,1,(this_ptr->base).target_actor,0.0);
        iVar7 = core_actor_cpp_isOfClass_FUN_0040c6d0
                          ((this_ptr->base).target_actor,"CTrap");
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_2c,0x16,1);
          if (this_ptr->action_pending != 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       this_ptr->action_pending,0x13b4);
          }
          this_ptr->action_pending = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_2c,0x14,1);
          this_ptr->action_pending = 6;
        }
        (this_ptr->base).target_actor = (CDemonActor *)0x0;
      }
      if (iVar5 == 10) {
        pCVar12 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0((CInventory *)local_1c);
        if (pCVar12 == (CLightGun *)0x0) {
LAB_005c54e8:
          (this_ptr->base).is_wearing_gas_mask = 1;
        }
        else {
          (this_ptr->base).is_wearing_gas_mask = 2;
        }
      }
      else if ((iVar5 == 3) && ((this_ptr->base).is_wearing_gas_mask < 2)) {
        pCVar12 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0((CInventory *)local_1c);
        if (pCVar12 != (CLightGun *)0x0) goto LAB_005c54e8;
        (this_ptr->base).is_wearing_gas_mask = 0;
      }
      if ((this_ptr->action_pending == 7) && ((iVar5 == 0 || (iVar5 == 8)))) {
        this_ptr->action_pending = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0((CCharacter *)this_ptr,iVar15)
      ;
    }
    local_30 = local_30 + 1;
    if (1 < local_30) {
      return;
    }
  } while( true );
}
