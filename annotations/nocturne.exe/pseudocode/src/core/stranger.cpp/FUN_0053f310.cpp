// Name: core_stranger.cpp_FUN_0053f310
// Address: 0053f310
// Address Range: [[0053f310, 0053fc38]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_0053f310(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0053f84f) */

void __cdecl core_stranger_cpp_FUN_0053f310(CStranger *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CWeapon *pCVar2;
  uint uVar3;
  int iVar4;
  CMotionList *pCVar5;
  int iVar6;
  CLightGun *pCVar7;
  float fVar8;
  CVector3f *pCVar9;
  CDemonActor *pCVar10;
  CVector3f *pCVar11;
  int iVar12;
  CDemonActor *in_stack_ffffffa4;
  float in_stack_ffffffa8;
  CVector3f CStack_50;
  int local_3c;
  int local_38;
  SMotion *local_34;
  CCharacter *local_30;
  int local_2c;
  CMotionController *local_28;
  float local_24;
  CCharacter *local_20;
  CDynamite *local_1c;
  CInventory *local_18;
  CCharacter *local_14;
  
  if (((this_ptr->base).base.layer_action_index == 0xe) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (this_ptr->base).base.layer_action_t = 0.0;
    (this_ptr->base).base.layer_action_index = 0;
  }
  local_3c = 0xffffffff;
  local_18 = (CInventory *)0x0;
  if ((this_ptr->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    if (this_ptr->guns_drawn != 0) {
      pCVar10 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (((pCVar10 != (CDemonActor *)0x0) &&
          (local_18 = (CInventory *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (pCVar10,g_CWeaponActorType_02ddf970.name_hash),
          local_18 == (CInventory *)0x0)) &&
         (pCVar10 = (this_ptr->base).base.carry_hands[1].carry_actor,
         uVar3 = (*((pCVar10->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar10), (uVar3 & 3) != 0))
      {
        local_38 = 8;
      }
      if ((local_14 == (CCharacter *)0x0) && (local_38 < 0)) {
        this_ptr->guns_drawn = 0;
      }
    }
  }
  else {
    this_ptr->guns_drawn = 0;
  }
  local_18 = &(this_ptr->base).inventory;
  local_3c = 0;
  local_28 = &(this_ptr->base).base.model.motion_controller;
  local_2c = 0;
  do {
    if (delta_time <= 0.0) {
LAB_0053f38b:
      if (local_3c == 0) {
        return;
      }
      goto LAB_0053fc23;
    }
    iVar12 = this_ptr->action_pending;
    if ((iVar12 == 1) || ((this_ptr->base).target_actor != (CDemonActor *)0x0)) {
LAB_0053f41f:
      iVar12 = 3;
    }
    else if (iVar12 == 2) {
      iVar12 = 0;
    }
    else if (iVar12 == 3) {
      fVar8 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                        ((CCharacter *)this_ptr,6);
      iVar12 = 6;
      if ((float)0.98999999999999999 < fVar8) {
        fVar8 = delta_time * (float)25 + this_ptr->aim_speed_factor;
        this_ptr->aim_speed_factor = fVar8;
        if (70.0f < fVar8) {
          this_ptr->aim_speed_factor = 70.0f;
        }
        if ((this_ptr->base).player_input.action_state.fire == 0) goto switchD_0053f7b3_caseD_3;
        goto LAB_0053f38b;
      }
    }
    else {
      pCVar7 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(local_18);
      if ((pCVar7 != (CLightGun *)0x0) && ((this_ptr->base).is_wearing_gas_mask == 0))
      goto LAB_0053f41f;
      pCVar7 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(local_18);
      if ((pCVar7 == (CLightGun *)0x0) || ((this_ptr->base).is_wearing_gas_mask != 1)) {
        pCVar7 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(local_18);
        if ((pCVar7 == (CLightGun *)0x0) && ((this_ptr->base).is_wearing_gas_mask == 2)) {
          iVar12 = 10;
        }
        else {
          pCVar7 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(local_18);
          if ((pCVar7 == (CLightGun *)0x0) && ((this_ptr->base).is_wearing_gas_mask == 1))
          goto LAB_0053f41f;
          iVar12 = local_38;
          if (local_38 < 0) {
            pCVar1 = (CCharacter *)this_ptr->weapon;
            if (pCVar1 == local_14) {
              if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_0053f7b3_caseD_3:
                iVar12 = 0;
              }
              else {
                switch(this_ptr->weapon->weapon_type) {
                case 0:
                case 5:
                  iVar12 = 2;
                  break;
                case 1:
                  iVar12 = 4;
                  break;
                case 2:
                  iVar12 = 5;
                  break;
                default:
                  goto switchD_0053f7b3_caseD_3;
                case 4:
                  iVar12 = 7;
                  break;
                case 7:
                  iVar12 = 8;
                }
              }
            }
            else if (pCVar1 == (CCharacter *)0x0) {
              if (local_14 == (CCharacter *)0x0) {
                iVar12 = 0;
              }
              else {
                fVar8 = (local_14->model).transformed_vertices[0x19].y;
                if ((uint)fVar8 < 7) goto joined_r0x0053f88b;
                if (((7 < (uint)fVar8) && (fVar8 != 1.12104e-44)) ||
                   ((pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                                         (&local_14->base,g_CMeleeActorType_01cc56a4.name_hash),
                    pCVar10 != (CDemonActor *)0x0 && (pCVar10[4].orient_matrix.m[0].y != 0.0))))
                goto LAB_0053f41f;
                iVar12 = 0;
              }
            }
            else {
              fVar8 = (pCVar1->model).transformed_vertices[0x19].y;
              if ((uint)fVar8 < 7) {
joined_r0x0053f88b:
                if (fVar8 != 0.0) goto LAB_0053f41f;
                iVar12 = 1;
              }
              else {
                if (((7 < (uint)fVar8) && (fVar8 != 1.12104e-44)) ||
                   ((pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                                         ((CDemonActor *)pCVar1,g_CMeleeActorType_01cc56a4.name_hash
                                         ), pCVar10 != (CDemonActor *)0x0 &&
                    (pCVar10[4].orient_matrix.m[0].y != 0.0)))) goto LAB_0053f41f;
                iVar12 = 0;
              }
            }
          }
        }
      }
      else {
        iVar12 = 10;
      }
    }
    local_24 = (this_ptr->base).base.layer_action_t;
    iVar4 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a500
                      ((CCharacter *)this_ptr,&delta_time,iVar12);
    iVar6 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
            motion_index;
    pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(local_28);
    local_34 = pCVar5->motions + iVar6;
    switch((this_ptr->base).base.layer_action_index) {
    case 6:
      local_1c = (CDynamite *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (&this_ptr->weapon->base,g_CDynamiteActorType_01bca088.name_hash);
      if (((local_1c != (CDynamite *)0x0) &&
          (iVar6 = core_dynamite_cpp_FUN_0046ed80(local_1c), iVar6 == 0)) &&
         ((float)(int)(0xb / (longlong)local_34->frame_count) <=
          (this_ptr->base).base.layer_action_t)) {
        core_dynamite_cpp_CDynamite_lightFuse_FUN_0046ed30(local_1c);
      }
      break;
    case 7:
      if ((this_ptr->action_pending == 3) &&
         ((float)(int)(0xb / (longlong)local_34->frame_count) <=
          (this_ptr->base).base.layer_action_t)) {
        core_stranger_cpp_CStranger_getThrowDirection_FUN_0053f260(this_ptr,&CStack_50);
        local_30 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040d890
                             (&this_ptr->weapon->base,g_CDynamiteActorType_01bca088.name_hash);
        local_20 = local_30;
        if (local_30 != (CCharacter *)0x0) {
          pCVar9 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                             ((CDemonActor *)this_ptr,(CVector3f *)&stack0xffffffa4,&CStack_50);
          pCVar11 = (local_20->model).transformed_vertices + 0x51;
          if (pCVar11 != pCVar9) {
            pCVar11->x = pCVar9->x;
            (local_20->model).transformed_vertices[0x51].y = pCVar9->y;
            (local_20->model).transformed_vertices[0x51].z = pCVar9->z;
          }
          (*(((local_30->base).vtable._uc)->_uc).isGrabbable)(local_30,in_stack_ffffffa4);
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
      if ((((int)local_24 < 0x3f19999a) && (0x3f199999 < (int)(this_ptr->base).base.layer_action_t))
         && (iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0
                               (&this_ptr->weapon->base,"CShotgun"), iVar6 != 0)) {
        (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).applyDamage)
                  ((CCharacter *)this_ptr->weapon,(int)in_stack_ffffffa4,in_stack_ffffffa8);
      }
      break;
    case 0xc:
      if ((((int)local_24 < 0x3ebd70a4) && (0x3ebd70a3 < (int)(this_ptr->base).base.layer_action_t))
         && (pCVar2 = this_ptr->weapon, pCVar2 != (CWeapon *)0x0)) {
        (*((pCVar2->base).vtable._ub)->processMeleeHit)(&pCVar2->base,1);
      }
      break;
    case 0xd:
      if ((((int)local_24 < 0x3f28f5c3) && (0x3f28f5c2 < (int)(this_ptr->base).base.layer_action_t))
         && (pCVar2 = this_ptr->weapon, pCVar2 != (CWeapon *)0x0)) {
        (*((pCVar2->base).vtable._ub)->processMeleeHit)(&pCVar2->base,2);
      }
    }
    if (-1 < iVar4) {
      pCVar1 = (CCharacter *)this_ptr->weapon;
      if (pCVar1 != local_14) {
        if (pCVar1 != (CCharacter *)0x0) {
          fVar8 = (pCVar1->model).transformed_vertices[0x19].y;
          if ((uint)fVar8 < 7) {
            if (fVar8 == 0.0) {
              iVar6 = 1;
            }
            else {
              iVar6 = 3;
            }
          }
          else if (((uint)fVar8 < 8) || (fVar8 == 1.12104e-44)) {
            pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                                ((CDemonActor *)pCVar1,g_CMeleeActorType_01cc56a4.name_hash);
            if ((pCVar10 == (CDemonActor *)0x0) || (pCVar10[4].orient_matrix.m[0].y == 0.0)) {
              iVar6 = 0;
            }
            else {
              iVar6 = 3;
            }
          }
          else {
            iVar6 = 3;
          }
          if (iVar4 == iVar6) {
            (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).kill)
                      ((CCharacter *)this_ptr->weapon,1,(CVector3f *)in_stack_ffffffa4,
                       in_stack_ffffffa8);
            this_ptr->weapon = (CWeapon *)0x0;
            local_2c = 1;
          }
        }
        if (this_ptr->guns_drawn != 0) {
          if (local_14 == (CCharacter *)0x0) {
LAB_0053f520:
            iVar6 = 0;
          }
          else {
            fVar8 = (local_14->model).transformed_vertices[0x19].y;
            if ((uint)fVar8 < 7) {
              if (fVar8 == 0.0) {
                iVar6 = 1;
              }
              else {
                iVar6 = 3;
              }
            }
            else if (((uint)fVar8 < 8) || (fVar8 == 1.12104e-44)) {
              pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                                  (&local_14->base,g_CMeleeActorType_01cc56a4.name_hash);
              if ((pCVar10 == (CDemonActor *)0x0) || (pCVar10[4].orient_matrix.m[0].y == 0.0))
              goto LAB_0053f520;
              iVar6 = 3;
            }
            else {
              iVar6 = 3;
            }
          }
          if (iVar4 == iVar6) {
            this_ptr->weapon = (CWeapon *)local_14;
            if (local_14 != (CCharacter *)0x0) {
              (*(((local_14->base).vtable._uc)->_uc).kill)
                        (local_14,2,(CVector3f *)in_stack_ffffffa4,in_stack_ffffffa8);
            }
            local_3c = 1;
          }
        }
      }
      if ((this_ptr->action_pending == 1) && (iVar4 == 3)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(&this_ptr->base,1);
        this_ptr->action_pending = 0;
      }
      pCVar10 = (this_ptr->base).target_actor;
      if ((pCVar10 != (CDemonActor *)0x0) && (iVar4 == 3)) {
        core_inv_cpp_CInventory_removeItem_FUN_004c07b0(local_18,pCVar10,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
                  (0x01CC9450,(this_ptr->base).target_actor);
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40
                  ((CCharacter *)this_ptr,1,(this_ptr->base).target_actor,0.0);
        iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0
                          ((this_ptr->base).target_actor,"CTrap");
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_28,0x16,1);
          if (this_ptr->action_pending != 0) {
            shape_edittool_cpp_FUN_0046fb40
                      (0x01BCD074,"actionPending = %d\nstranger.cpp line %d",this_ptr->action_pending,
                       0x13ba);
          }
          this_ptr->action_pending = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_28,0x14,1);
          this_ptr->action_pending = 6;
        }
        (this_ptr->base).target_actor = (CDemonActor *)0x0;
      }
      if (iVar4 == 10) {
        pCVar7 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(local_18);
        if (pCVar7 == (CLightGun *)0x0) {
LAB_0053f61d:
          (this_ptr->base).is_wearing_gas_mask = 1;
        }
        else {
          (this_ptr->base).is_wearing_gas_mask = 2;
        }
      }
      else if ((iVar4 == 3) && ((this_ptr->base).is_wearing_gas_mask < 2)) {
        pCVar7 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(local_18);
        if (pCVar7 != (CLightGun *)0x0) goto LAB_0053f61d;
        (this_ptr->base).is_wearing_gas_mask = 0;
      }
      if ((this_ptr->action_pending == 7) && ((iVar4 == 0 || (iVar4 == 8)))) {
        this_ptr->action_pending = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50((CCharacter *)this_ptr,iVar12)
      ;
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
