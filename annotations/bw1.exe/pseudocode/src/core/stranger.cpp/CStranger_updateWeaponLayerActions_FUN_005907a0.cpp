// Name: core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_005907a0
// Address: 005907a0
// Address Range: [[005907a0, 005910f8]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005907a0(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005907a0(CStranger *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CDemonActor *pCVar2;
  CWeapon *pCVar3;
  float fVar4;
  CMotionList *pCVar5;
  CDynamite *this_ptr_00;
  int iVar6;
  int iVar7;
  CLightGun *pCVar8;
  uint uVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_105c [1013];
  CVector3f *in_stack_ffffff8c;
  float in_stack_ffffff90;
  uint local_6c;
  float fStack_68;
  CVector3f *pCStack_5c;
  float afStack_58 [2];
  CVector3f CStack_50;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  CMotionController *local_30;
  int local_2c;
  float local_28;
  CInventory *local_24;
  CCharacter *local_20;
  int local_1c;
  int local_18;
  float fStack_14;
  
  bVar11 = 0;
  if (((this_ptr->base).base.layer_action_index == 0xe) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (this_ptr->base).base.layer_action_t = 0.0;
    (this_ptr->base).base.layer_action_index = 0;
  }
  local_40 = 0xffffffff;
  local_24 = (CInventory *)0x0;
  if ((this_ptr->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    if (this_ptr->guns_drawn != 0) {
      pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (((pCVar2 != (CDemonActor *)0x0) &&
          (local_24 = (CInventory *)
                      core_actor_cpp_castToClassHash_FUN_0040c600
                                (pCVar2,g_CWeaponClassInfo.name_hash), local_24 == (CInventory *)0x0
          )) && (pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor,
                uVar9 = (*((pCVar2->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar2),
                (uVar9 & 3) != 0)) {
        local_3c = 8;
      }
      if ((local_20 == (CCharacter *)0x0) && (local_3c < 0)) {
        this_ptr->guns_drawn = 0;
      }
    }
  }
  else {
    this_ptr->guns_drawn = 0;
  }
  local_24 = &(this_ptr->base).inventory;
  local_30 = &(this_ptr->base).base.model.base;
  local_34 = 0;
  do {
    if (delta_time <= 0.0) {
      return;
    }
    iVar7 = (this_ptr->base).action_pending;
    if ((iVar7 == 1) || ((this_ptr->base).target_actor != (CDemonActor *)0x0)) {
LAB_0059082a:
      local_18 = 3;
      iVar7 = local_18;
    }
    else if (iVar7 == 2) {
      iVar7 = 0;
    }
    else if (iVar7 == 3) {
      fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                            ((CCharacter *)this_ptr,6);
      local_18 = 6;
      iVar7 = local_18;
      if ((float)_DAT_005f7019 < fStack_14) {
        fVar4 = delta_time * (float)_DAT_005f7011 + this_ptr->aim_speed_factor;
        this_ptr->aim_speed_factor = fVar4;
        if (0x428C0000 < fVar4) {
          this_ptr->aim_speed_factor = 0x428C0000;
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          return;
        }
        iVar7 = 0;
      }
    }
    else {
      pCVar8 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(local_24);
      if ((pCVar8 != (CLightGun *)0x0) && ((this_ptr->base).is_wearing_gas_mask == GAS_MASK_AWAY))
      goto LAB_0059082a;
      pCVar8 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(local_24);
      if ((pCVar8 == (CLightGun *)0x0) || ((this_ptr->base).is_wearing_gas_mask != GAS_MASK_IN_HAND)
         ) {
        pCVar8 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(local_24);
        if ((pCVar8 == (CLightGun *)0x0) &&
           ((this_ptr->base).is_wearing_gas_mask == GAS_MASK_ON_FACE)) {
          local_18 = 10;
          iVar7 = local_18;
        }
        else {
          pCVar8 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(local_24);
          if ((pCVar8 == (CLightGun *)0x0) &&
             ((this_ptr->base).is_wearing_gas_mask == GAS_MASK_IN_HAND)) goto LAB_0059082a;
          if (local_3c < 0) {
            pCVar1 = (CCharacter *)this_ptr->weapon;
            if (pCVar1 == local_20) {
              if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_00590c42_caseD_3:
                iVar7 = 0;
              }
              else {
                switch(this_ptr->weapon->weapon_type) {
                case WEAPON_TYPE_GUN:
                case WEAPON_TYPE_FLASHLIGHT:
                  iVar7 = 2;
                  break;
                case WEAPON_TYPE_SHOTGUN:
                  iVar7 = 4;
                  break;
                case WEAPON_TYPE_LIGHT_GUN:
                  iVar7 = 5;
                  break;
                default:
                  goto switchD_00590c42_caseD_3;
                case WEAPON_TYPE_TOMMY_GUN:
                  iVar7 = 7;
                  break;
                case WEAPON_TYPE_MELEE:
                  iVar7 = 8;
                  break;
                case WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN:
                case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
                  iVar7 = 0xe;
                }
              }
            }
            else if (pCVar1 == (CCharacter *)0x0) {
              iVar7 = 0;
              if (local_20 != (CCharacter *)0x0) {
                fVar4 = (local_20->model).bone_origins[0x19].y;
                if ((uint)fVar4 < 7) {
                  if (fVar4 == 0.0) {
                    iVar7 = 1;
                  }
                  else {
                    local_18 = 3;
                    iVar7 = local_18;
                  }
                }
                else if (((uint)fVar4 < 8) || (fVar4 == 1.12104e-44)) {
                  iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                                    (local_20,g_CMeleeClassInfo.name_hash);
                  if ((iVar7 == 0) || (*(int *)(iVar7 + 0x588) == 0)) {
                    iVar7 = 0;
                  }
                  else {
                    iVar7 = 3;
                  }
                }
                else {
                  local_18 = 3;
                  iVar7 = local_18;
                }
              }
            }
            else {
              fVar4 = (pCVar1->model).bone_origins[0x19].y;
              if ((uint)fVar4 < 7) {
                if (fVar4 == 0.0) {
                  iVar7 = 1;
                }
                else {
                  local_18 = 3;
                  iVar7 = local_18;
                }
              }
              else if (((uint)fVar4 < 8) || (fVar4 == 1.12104e-44)) {
                iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                                  (pCVar1,g_CMeleeClassInfo.name_hash);
                if ((iVar7 == 0) || (*(int *)(iVar7 + 0x588) == 0)) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = 3;
                }
              }
              else {
                local_18 = 3;
                iVar7 = local_18;
              }
            }
          }
          else {
            local_18 = local_3c;
            iVar7 = local_18;
          }
        }
      }
      else {
        local_18 = 10;
        iVar7 = local_18;
      }
    }
    local_18 = iVar7;
    local_28 = (this_ptr->base).base.layer_action_t;
    local_1c = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_004340b0
                         ((CCharacter *)this_ptr,&delta_time,local_18);
    iVar7 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
            motion_index;
    pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(local_30);
    switch((this_ptr->base).base.layer_action_index) {
    case 6:
      this_ptr_00 = (CDynamite *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (this_ptr->weapon,g_CDynamiteClassInfo.name_hash);
      if (((this_ptr_00 != (CDynamite *)0x0) &&
          (iVar6 = core_dynamite_cpp_CDynamite_isFuseLit_FUN_00492690(this_ptr_00), iVar6 == 0)) &&
         (fStack_14 = (float)(0xb / (longlong)pCVar5->motions[iVar7].frame_count),
         (float)(int)fStack_14 <= (this_ptr->base).base.layer_action_t)) {
        core_dynamite_cpp_CDynamite_lightFuse_FUN_00492640(this_ptr_00);
      }
      break;
    case 7:
      if (((this_ptr->base).action_pending == 3) &&
         (fStack_14 = (float)(0xb / (longlong)pCVar5->motions[iVar7].frame_count),
         (float)(int)fStack_14 <= (this_ptr->base).base.layer_action_t)) {
        core_stranger_cpp_FUN_005906e0(this_ptr);
        CStack_50.x = fStack_68;
        *(uint *)((int)&CStack_50 + (uint)bVar11 * -8 + 4) =
             *(uint *)(&stack0xffffff9c + (uint)bVar11 * -8);
        *(uint *)((int)&CStack_50 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             *(uint *)(&stack0xffffffa0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        local_38 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (this_ptr->weapon,g_CDynamiteClassInfo.name_hash);
        local_2c = local_38;
        if (local_38 != 0) {
          core_actor_cpp_FUN_00408ac0(this_ptr,&CStack_50);
          iVar7 = local_2c;
          in_stack_ffffff8c = pCStack_5c;
          puVar10 = (uint *)(local_2c + 0x57c);
          *(float *)(&stack0xffffff90 + (uint)bVar11 * -8) = afStack_58[(uint)bVar11 * -2];
          *(float *)((int)&stack0xffffff94 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
               afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          if (puVar10 != (uint *)&stack0xffffff8c) {
            *puVar10 = in_stack_ffffff8c;
            *(float *)(iVar7 + 0x580) = in_stack_ffffff90;
            *(uint *)(iVar7 + 0x584) = local_6c;
          }
          (**(code **)(*(int *)(local_38 + 0x154) + 0xe4))(local_38);
          this_ptr->weapon = (CWeapon *)0x0;
        }
        if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
          (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                    ((CCharacter *)this_ptr,1,&CStack_50);
        }
        (this_ptr->base).action_pending = 0;
        this_ptr->aim_speed_factor = 0x41200000;
      }
      if (1.0 <= (this_ptr->base).base.layer_action_t) {
        (this_ptr->base).base.layer_action_index = 0;
        (this_ptr->base).base.layer_action_t = 0.0;
      }
      break;
    case 8:
      if ((((int)local_28 < 0x3f19999a) && (0x3f199999 < (int)(this_ptr->base).base.layer_action_t))
         && (iVar7 = core_actor_cpp_isOfClass_FUN_0040c550
                               (&this_ptr->weapon->base,"CShotgun"), iVar7 != 0)) {
        (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).applyDamage)
                  ((CCharacter *)this_ptr->weapon,(int)in_stack_ffffff8c,in_stack_ffffff90);
      }
      break;
    case 0xc:
      if ((((int)local_28 < 0x3ebd70a4) && (0x3ebd70a3 < (int)(this_ptr->base).base.layer_action_t))
         && (pCVar3 = this_ptr->weapon, pCVar3 != (CWeapon *)0x0)) {
        (*((pCVar3->base).vtable._ub)->processMeleeHit)(&pCVar3->base,1);
      }
      break;
    case 0xd:
      if ((((int)local_28 < 0x3f28f5c3) && (0x3f28f5c2 < (int)(this_ptr->base).base.layer_action_t))
         && (pCVar3 = this_ptr->weapon, pCVar3 != (CWeapon *)0x0)) {
        (*((pCVar3->base).vtable._ub)->processMeleeHit)(&pCVar3->base,2);
      }
    }
    if (-1 < local_1c) {
      pCVar1 = (CCharacter *)this_ptr->weapon;
      if (pCVar1 != local_20) {
        if (pCVar1 != (CCharacter *)0x0) {
          fVar4 = (pCVar1->model).bone_origins[0x19].y;
          if ((uint)fVar4 < 7) {
            if (fVar4 == 0.0) {
              iVar7 = 1;
            }
            else {
              iVar7 = 3;
            }
          }
          else if (((uint)fVar4 < 8) || (fVar4 == 1.12104e-44)) {
            iVar7 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar1,g_CMeleeClassInfo.name_hash);
            if ((iVar7 == 0) || (*(int *)(iVar7 + 0x588) == 0)) {
              iVar7 = 0;
            }
            else {
              iVar7 = 3;
            }
          }
          else {
            iVar7 = 3;
          }
          if (iVar7 == local_1c) {
            (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).kill)
                      ((CCharacter *)this_ptr->weapon,1,in_stack_ffffff8c,in_stack_ffffff90);
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
        if (this_ptr->guns_drawn != 0) {
          if (local_20 == (CCharacter *)0x0) {
LAB_00590922:
            iVar7 = 0;
          }
          else {
            fVar4 = (local_20->model).bone_origins[0x19].y;
            if ((uint)fVar4 < 7) {
              if (fVar4 == 0.0) {
                iVar7 = 1;
              }
              else {
                iVar7 = 3;
              }
            }
            else if (((uint)fVar4 < 8) || (fVar4 == 1.12104e-44)) {
              iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (local_20,g_CMeleeClassInfo.name_hash);
              if ((iVar7 == 0) || (*(int *)(iVar7 + 0x588) == 0)) goto LAB_00590922;
              iVar7 = 3;
            }
            else {
              iVar7 = 3;
            }
          }
          if ((iVar7 == local_1c) &&
             (this_ptr->weapon = (CWeapon *)local_20, local_20 != (CCharacter *)0x0)) {
            (*(((local_20->base).vtable._uc)->_uc).kill)
                      (local_20,2,in_stack_ffffff8c,in_stack_ffffff90);
          }
        }
      }
      if (((this_ptr->base).action_pending == 1) && (local_1c == 3)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(&this_ptr->base,1);
        (this_ptr->base).action_pending = 0;
      }
      pCVar2 = (this_ptr->base).target_actor;
      if ((pCVar2 != (CDemonActor *)0x0) && (local_1c == 3)) {
        core_inv_cpp_FUN_004f8d00(local_24,pCVar2,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
                  (0x01D2C900,(this_ptr->base).target_actor);
        core_charactr_cpp_FUN_004325b0(this_ptr,1,(this_ptr->base).target_actor,0,0);
        iVar7 = core_actor_cpp_isOfClass_FUN_0040c550
                          ((this_ptr->base).target_actor,"CTrap");
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_30,0x21,1);
          iVar7 = (this_ptr->base).action_pending;
          if (iVar7 != 0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar7,0x141e);
          }
          (this_ptr->base).action_pending = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_30,0x1f,1);
          (this_ptr->base).action_pending = 6;
        }
        (this_ptr->base).target_actor = (CDemonActor *)0x0;
      }
      if (local_1c == 10) {
        pCVar8 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(local_24);
        if (pCVar8 == (CLightGun *)0x0) {
LAB_00590a23:
          (this_ptr->base).is_wearing_gas_mask = GAS_MASK_IN_HAND;
        }
        else {
          (this_ptr->base).is_wearing_gas_mask = GAS_MASK_ON_FACE;
        }
      }
      else if ((local_1c == 3) && ((int)(this_ptr->base).is_wearing_gas_mask < 2)) {
        pCVar8 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(local_24);
        if (pCVar8 != (CLightGun *)0x0) goto LAB_00590a23;
        (this_ptr->base).is_wearing_gas_mask = GAS_MASK_AWAY;
      }
      if (((this_ptr->base).action_pending == 7) && ((local_1c == 0 || (local_1c == 8)))) {
        (this_ptr->base).action_pending = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00434610
                ((CCharacter *)this_ptr,local_18);
    }
    local_34 = local_34 + 1;
    if (1 < local_34) {
      return;
    }
  } while( true );
}
