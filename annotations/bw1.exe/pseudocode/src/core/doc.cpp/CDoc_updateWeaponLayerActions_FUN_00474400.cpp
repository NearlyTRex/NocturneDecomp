// Name: core_doc.cpp_CDoc_updateWeaponLayerActions_FUN_00474400
// Address: 00474400
// Address Range: [[00474400, 00474ee8]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_updateWeaponLayerActions_FUN_00474400(CDoc *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_updateWeaponLayerActions_FUN_00474400(CDoc *this_ptr,float delta_time)

{
  CInventory *this_ptr_00;
  CCharacter *pCVar1;
  CWeapon *this_ptr_01;
  float fVar2;
  CGame *pCVar3;
  CLightGun *pCVar4;
  int iVar5;
  uint uVar6;
  CMotionList *pCVar7;
  CDynamite *this_ptr_02;
  int iVar8;
  CDemonActor *pCVar9;
  CVector3f *pCVar10;
  byte bVar11;
  float afStackY_1064 [1013];
  CDemonActor *in_stack_ffffff84;
  float in_stack_ffffff88;
  float local_74;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  int local_44;
  int local_40;
  CCharacter *local_3c;
  int local_38;
  CMotionController *local_34;
  CCharacter *local_30;
  float local_2c;
  uint local_28;
  CWeapon *local_24;
  CCharacter *local_20;
  int local_1c;
  CInventory *local_18;
  float fStack_14;
  
  bVar11 = 0;
  if (((this_ptr->base).base.layer_action_index == 0xe) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (this_ptr->base).base.layer_action_t = 0.0;
    (this_ptr->base).base.layer_action_index = 0;
  }
  local_44 = -1;
  local_24 = (CWeapon *)0x0;
  if ((this_ptr->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    if (this_ptr->guns_drawn != 0) {
      pCVar9 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (pCVar9 == (CDemonActor *)0x0) {
        local_24 = (this_ptr->base).inventory.selected_weapon;
      }
      else {
        local_24 = (CWeapon *)
                   core_actor_cpp_castToClassHash_FUN_0040c600(pCVar9,g_CWeaponClassInfo.name_hash);
        if ((local_24 == (CWeapon *)0x0) &&
           (pCVar9 = (this_ptr->base).base.carry_hands[1].carry_actor,
           uVar6 = (*((pCVar9->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar9), (uVar6 & 0xb) != 0
           )) {
          local_40 = 8;
        }
      }
      if ((local_20 == (CCharacter *)0x0) && (local_40 < 0)) {
        this_ptr->guns_drawn = 0;
      }
    }
  }
  else {
    this_ptr->guns_drawn = 0;
  }
  this_ptr_00 = &(this_ptr->base).inventory;
  pCVar4 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(this_ptr_00);
  local_28 = (uint)(pCVar4 != (CLightGun *)0x0);
  iVar5 = core_inv_cpp_FUN_004f9ef0(this_ptr_00);
  local_24 = (CWeapon *)(uint)(iVar5 != 0);
  local_34 = &(this_ptr->base).base.model.base;
  local_38 = 0;
  local_18 = this_ptr_00;
  do {
    if (delta_time <= 0.0) {
LAB_004744a5:
      if (this_ptr->guns_drawn == 0) {
        return;
      }
      goto LAB_00474ea4;
    }
    iVar5 = (this_ptr->base).action_pending;
    if ((iVar5 == 1) || ((this_ptr->base).target_actor != (CDemonActor *)0x0)) {
LAB_00474546:
      local_1c = 3;
      iVar5 = local_1c;
    }
    else if (iVar5 == 2) {
      iVar5 = 0;
    }
    else if (iVar5 == 3) {
      fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                            ((CCharacter *)this_ptr,6);
      local_1c = 6;
      iVar5 = local_1c;
      if ((float)_DAT_005da444 < fStack_14) {
        fVar2 = delta_time * (float)_DAT_005da43c + this_ptr->aim_speed_factor;
        this_ptr->aim_speed_factor = fVar2;
        if (0x428C0000 < fVar2) {
          this_ptr->aim_speed_factor = 0x428C0000;
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) goto LAB_004744a5;
        iVar5 = 0;
      }
    }
    else {
      if ((local_28 != 0) && ((this_ptr->base).is_wearing_gas_mask == GAS_MASK_AWAY))
      goto LAB_00474546;
      if ((local_28 == 0) || ((this_ptr->base).is_wearing_gas_mask != GAS_MASK_IN_HAND)) {
        if ((local_28 == 0) && ((this_ptr->base).is_wearing_gas_mask == GAS_MASK_ON_FACE)) {
          local_1c = 10;
          iVar5 = local_1c;
        }
        else {
          if (((local_28 == 0) && ((this_ptr->base).is_wearing_gas_mask == GAS_MASK_IN_HAND)) ||
             ((local_24 != (CWeapon *)0x0 && ((this_ptr->base).is_wearing_goggles == 0))))
          goto LAB_00474546;
          if ((local_24 == (CWeapon *)0x0) || ((this_ptr->base).is_wearing_goggles != 1)) {
            if ((local_24 == (CWeapon *)0x0) && ((this_ptr->base).is_wearing_goggles == 2)) {
              local_1c = 0xb;
              iVar5 = local_1c;
            }
            else {
              if ((local_24 == (CWeapon *)0x0) && ((this_ptr->base).is_wearing_goggles == 1))
              goto LAB_00474546;
              if (-1 < local_40) {
                local_1c = local_40;
                iVar5 = local_1c;
                goto LAB_0047454e;
              }
              pCVar1 = (CCharacter *)this_ptr->weapon;
              if (pCVar1 != local_20) {
                if (pCVar1 == (CCharacter *)0x0) {
                  iVar5 = 0;
                  if (local_20 != (CCharacter *)0x0) {
                    switch((local_20->model).bone_origins[0x19].y) {
                    case 0.0:
                    case 7.00649e-45:
                      iVar5 = 1;
                      break;
                    default:
switchD_004749dc_caseD_1:
                      iVar5 = 3;
                      break;
                    case 9.80909e-45:
                    case 1.12104e-44:
                      pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c600
                                         (&local_20->base,g_CMeleeClassInfo.name_hash);
                      if ((pCVar9 != (CDemonActor *)0x0) && (pCVar9[4].location.position.z != 0.0))
                      goto switchD_004749dc_caseD_1;
                      iVar5 = 0;
                    }
                  }
                }
                else {
                  switch((pCVar1->model).bone_origins[0x19].y) {
                  case 0.0:
                  case 7.00649e-45:
                    iVar5 = 1;
                    break;
                  default:
switchD_00474a28_caseD_1:
                    iVar5 = 3;
                    break;
                  case 9.80909e-45:
                  case 1.12104e-44:
                    pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c600
                                       ((CDemonActor *)pCVar1,g_CMeleeClassInfo.name_hash);
                    if ((pCVar9 != (CDemonActor *)0x0) && (pCVar9[4].location.position.z != 0.0))
                    goto switchD_00474a28_caseD_1;
                    iVar5 = 0;
                  }
                }
                goto LAB_0047454e;
              }
              if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_00474955_caseD_3:
                iVar5 = 0;
              }
              else {
                switch(this_ptr->weapon->weapon_type) {
                case WEAPON_TYPE_GUN:
                case WEAPON_TYPE_FLASHLIGHT:
                  iVar5 = 2;
                  break;
                case WEAPON_TYPE_SHOTGUN:
                  iVar5 = 4;
                  break;
                case WEAPON_TYPE_LIGHT_GUN:
                  iVar5 = 5;
                  break;
                default:
                  goto switchD_00474955_caseD_3;
                case WEAPON_TYPE_TOMMY_GUN:
                  iVar5 = 7;
                  break;
                case WEAPON_TYPE_MELEE:
                  iVar5 = 8;
                  break;
                case WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN:
                case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
                  iVar5 = 0xe;
                }
              }
            }
          }
          else {
            local_1c = 0xb;
            iVar5 = local_1c;
          }
        }
      }
      else {
        local_1c = 10;
        iVar5 = local_1c;
      }
    }
LAB_0047454e:
    local_1c = iVar5;
    local_2c = (this_ptr->base).base.layer_action_t;
    local_44 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_004340b0
                         ((CCharacter *)this_ptr,&delta_time,local_1c);
    iVar5 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
            motion_index;
    pCVar7 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(local_34);
    switch((this_ptr->base).base.layer_action_index) {
    case 6:
      this_ptr_02 = (CDynamite *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (&this_ptr->weapon->base,g_CDynamiteClassInfo.name_hash);
      if (((this_ptr_02 != (CDynamite *)0x0) &&
          (iVar8 = core_dynamite_cpp_CDynamite_isFuseLit_FUN_00492690(this_ptr_02), iVar8 == 0)) &&
         (fStack_14 = (float)(0xb / (longlong)pCVar7->motions[iVar5].frame_count),
         (float)(int)fStack_14 <= (this_ptr->base).base.layer_action_t)) {
        core_dynamite_cpp_CDynamite_lightFuse_FUN_00492640(this_ptr_02);
      }
      break;
    case 7:
      if (((this_ptr->base).action_pending == 3) &&
         (fStack_14 = (float)(0xb / (longlong)pCVar7->motions[iVar5].frame_count),
         (float)(int)fStack_14 <= (this_ptr->base).base.layer_action_t)) {
        core_doc_cpp_CDoc_getThrowDirection_FUN_004742a0(this_ptr,&CStack_64);
        CStack_70.x = CStack_64.x;
        *(uint *)((int)&CStack_70 + (uint)bVar11 * -8 + 4) =
             *(uint *)((int)&CStack_64 + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_70 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             *(uint *)((int)&CStack_64 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        local_3c = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             (&this_ptr->weapon->base,g_CDynamiteClassInfo.name_hash);
        local_30 = local_3c;
        if (local_3c != (CCharacter *)0x0) {
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                    ((CDemonActor *)this_ptr,&CStack_70,&CStack_58);
          pCVar1 = local_30;
          in_stack_ffffff84 = (CDemonActor *)CStack_58.x;
          pCVar10 = (local_30->model).bone_origins + 0x51;
          *(uint *)(&stack0xffffff88 + (uint)bVar11 * -8) =
               *(uint *)((int)&CStack_58 + (uint)bVar11 * -8 + 4);
          *(uint *)((int)&stack0xffffff8c + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4) =
               *(uint *)((int)&CStack_58 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          if (pCVar10 != (CVector3f *)&stack0xffffff84) {
            pCVar10->x = (float)in_stack_ffffff84;
            (pCVar1->model).bone_origins[0x51].y = in_stack_ffffff88;
            (pCVar1->model).bone_origins[0x51].z = local_74;
          }
          (*(((local_3c->base).vtable._uc)->_uc).isGrabbable)(local_3c,in_stack_ffffff84);
          this_ptr->weapon = (CWeapon *)0x0;
        }
        if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
          (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                    ((CCharacter *)this_ptr,1,&CStack_70);
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
      if ((((int)local_2c < 0x3f19999a) && (0x3f199999 < (int)(this_ptr->base).base.layer_action_t))
         && (iVar5 = core_actor_cpp_isOfClass_FUN_0040c550
                               (&this_ptr->weapon->base,"CShotgun"), iVar5 != 0)) {
        (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).applyDamage)
                  ((CCharacter *)this_ptr->weapon,(int)in_stack_ffffff84,in_stack_ffffff88);
      }
      break;
    case 0xc:
      if ((((int)local_2c < 0x3ebd70a4) && (0x3ebd70a3 < (int)(this_ptr->base).base.layer_action_t))
         && ((this_ptr->weapon != (CWeapon *)0x0 &&
             (pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c600
                                 (&this_ptr->weapon->base,g_CWeaponClassInfo.name_hash),
             pCVar9 != (CDemonActor *)0x0)))) {
        if (*(int *)(pCVar9[4].actor_name + 0xc) == 9) {
          (*((pCVar9->vtable)._ub)->processMeleeHit)(pCVar9,8);
        }
        else {
          (*((pCVar9->vtable)._ub)->processMeleeHit)(pCVar9,1);
        }
      }
      break;
    case 0xd:
      if (((int)local_2c < 0x3f000000) && (0x3effffff < (int)(this_ptr->base).base.layer_action_t))
      {
        pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c600
                           (&this_ptr->weapon->base,g_CWeaponClassInfo.name_hash);
        if (pCVar9 != (CDemonActor *)0x0) {
          if (*(int *)(pCVar9[4].actor_name + 0xc) == 9) {
            iVar5 = 8;
          }
          else {
            iVar5 = 1;
          }
          (*((pCVar9->vtable)._ub)->processMeleeHit)(pCVar9,iVar5);
        }
        this_ptr_01 = this_ptr->weapon;
        if (this_ptr_01 != (CWeapon *)0x0) {
          (*((this_ptr_01->base).vtable._ub)->processMeleeHit)(&this_ptr_01->base,2);
        }
      }
      break;
    case 0x12:
      if ((((int)local_2c < 0x3f4ccccd) && (0x3f4ccccc < (int)(this_ptr->base).base.layer_action_t))
         && (iVar5 = core_actor_cpp_isOfClass_FUN_0040c550
                               (&this_ptr->weapon->base,"CRifle"), iVar5 != 0)) {
        (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).applyDamage)
                  ((CCharacter *)this_ptr->weapon,(int)in_stack_ffffff84,in_stack_ffffff88);
      }
    }
    if (-1 < local_44) {
      pCVar1 = (CCharacter *)this_ptr->weapon;
      if (pCVar1 != local_20) {
        if (pCVar1 != (CCharacter *)0x0) {
          switch((pCVar1->model).bone_origins[0x19].y) {
          case 0.0:
          case 7.00649e-45:
            iVar5 = 1;
            break;
          default:
switchD_00474d6b_caseD_1:
            iVar5 = 3;
            break;
          case 9.80909e-45:
          case 1.12104e-44:
            pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c600
                               ((CDemonActor *)pCVar1,g_CMeleeClassInfo.name_hash);
            if ((pCVar9 != (CDemonActor *)0x0) && (pCVar9[4].location.position.z != 0.0))
            goto switchD_00474d6b_caseD_1;
            iVar5 = 0;
          }
          if (iVar5 == local_44) {
            (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).kill)
                      ((CCharacter *)this_ptr->weapon,1,(CVector3f *)in_stack_ffffff84,
                       in_stack_ffffff88);
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
        if (this_ptr->guns_drawn != 0) {
          if (local_20 == (CCharacter *)0x0) {
LAB_0047463c:
            iVar5 = 0;
          }
          else {
            switch((local_20->model).bone_origins[0x19].y) {
            case 0.0:
            case 7.00649e-45:
              iVar5 = 1;
              break;
            case 9.80909e-45:
            case 1.12104e-44:
              pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c600
                                 (&local_20->base,g_CMeleeClassInfo.name_hash);
              if ((pCVar9 == (CDemonActor *)0x0) || (pCVar9[4].location.position.z == 0.0))
              goto LAB_0047463c;
            default:
              iVar5 = 3;
            }
          }
          if ((iVar5 == local_44) &&
             (this_ptr->weapon = (CWeapon *)local_20, local_20 != (CCharacter *)0x0)) {
            (*(((local_20->base).vtable._uc)->_uc).kill)
                      (local_20,2,(CVector3f *)in_stack_ffffff84,in_stack_ffffff88);
          }
        }
      }
      if (((this_ptr->base).action_pending == 1) && (local_44 == 3)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(&this_ptr->base,1);
        (this_ptr->base).action_pending = 0;
      }
      pCVar9 = (this_ptr->base).target_actor;
      if ((pCVar9 != (CDemonActor *)0x0) && (local_44 == 3)) {
        core_inv_cpp_CInventory_removeItem_FUN_004f8d00(local_18,pCVar9,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
                  (0x01D2C900,(this_ptr->base).target_actor);
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004325b0
                  ((CCharacter *)this_ptr,1,(this_ptr->base).target_actor,0.0,(CMatrix3x4f *)0x0);
        iVar5 = core_actor_cpp_isOfClass_FUN_0040c550
                          ((this_ptr->base).target_actor,"CTrap");
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_34,0x19,1);
          iVar5 = (this_ptr->base).action_pending;
          if (iVar5 != 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",iVar5,0x146a);
          }
          (this_ptr->base).action_pending = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_34,0x17,1);
          (this_ptr->base).action_pending = 6;
        }
        (this_ptr->base).target_actor = (CDemonActor *)0x0;
      }
      if (local_44 == 10) {
        if (local_28 == 0) {
          (this_ptr->base).is_wearing_gas_mask = GAS_MASK_IN_HAND;
        }
        else {
          (this_ptr->base).is_wearing_gas_mask = GAS_MASK_ON_FACE;
        }
      }
      else if ((local_44 == 3) && ((int)(this_ptr->base).is_wearing_gas_mask < 2)) {
        if (local_28 == 0) {
          (this_ptr->base).is_wearing_gas_mask = GAS_MASK_AWAY;
        }
        else {
          (this_ptr->base).is_wearing_gas_mask = GAS_MASK_IN_HAND;
        }
      }
      pCVar3 = g_CGamePtr;
      if (local_44 == 0xb) {
        if (local_24 == (CWeapon *)0x0) {
          (this_ptr->base).is_wearing_goggles = 1;
        }
        else {
          (this_ptr->base).is_wearing_goggles = 2;
        }
        (**(code **)pCVar3->vtable)(pCVar3,local_24 != (CWeapon *)0x0);
      }
      else if ((local_44 == 3) && ((this_ptr->base).is_wearing_goggles < 2)) {
        if (local_24 == (CWeapon *)0x0) {
          (this_ptr->base).is_wearing_goggles = 0;
        }
        else {
          (this_ptr->base).is_wearing_goggles = 1;
        }
      }
      if (((this_ptr->base).action_pending == 7) && ((local_44 == 0 || (local_44 == 8)))) {
        (this_ptr->base).action_pending = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00434610
                ((CCharacter *)this_ptr,local_1c);
    }
    local_38 = local_38 + 1;
  } while (local_38 < 2);
  if (this_ptr->guns_drawn == 0) {
    return;
  }
LAB_00474ea4:
  iVar5 = core_actor_cpp_isOfClass_FUN_0040c550(&this_ptr->weapon->base,"CFlashlight");
  if ((iVar5 != 0) && (g_CGamePtr->flashlight_active == 0)) {
    g_CGamePtr->flashlight_active = 1;
    return;
  }
  return;
}
