// Name: core_doc.cpp_CDoc_updateWeaponLayerActions_FUN_0045bdc0
// Address: 0045bdc0
// Address Range: [[0045bdc0, 0045c958]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_updateWeaponLayerActions_FUN_0045bdc0(CDoc *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_doc_cpp_CDoc_updateWeaponLayerActions_FUN_0045bdc0(CDoc *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CWeapon *pCVar2;
  float fVar3;
  CMotionList *pCVar4;
  int iVar5;
  CLightGun *pCVar6;
  CDemonActor *pCVar7;
  CDynamite *this_ptr_00;
  int iVar8;
  CCross *this_ptr_01;
  CVector3f *pCVar9;
  byte bVar10;
  float afStackY_1060 [1013];
  CDemonActor *in_stack_ffffff88;
  float in_stack_ffffff8c;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f *local_40;
  int local_3c;
  CCharacter *local_38;
  int local_34;
  CMotionController *local_30;
  CCharacter *local_2c;
  float local_28;
  CInventory *local_24;
  int local_20;
  CCharacter *local_1c;
  int local_18;
  float local_14;
  
  bVar10 = 0;
  if (((this_ptr->base).base.layer_action_index == 9) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (this_ptr->base).base.layer_action_t = 0.0;
    (this_ptr->base).base.layer_action_index = 0;
  }
  local_3c = -1;
  local_1c = (CCharacter *)0x0;
  if ((this_ptr->base).nearby_interactive_actor != (CDemonActor *)0x0) {
    this_ptr->guns_drawn = 0;
    goto LAB_0045be11;
  }
  if (this_ptr->guns_drawn == 0) goto LAB_0045be11;
  pCVar7 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if (pCVar7 == (CDemonActor *)0x0) {
    local_1c = (CCharacter *)
               (this_ptr->base).inventories[0].selected_weapons
               [(this_ptr->base).inventories[0].current_group];
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                       ((CDemonActor *)local_1c,g_CMeleeClassInfo.name_hash);
    if (pCVar7 != (CDemonActor *)0x0) {
      local_3c = 6;
    }
LAB_0045c19d:
    if (local_1c != (CCharacter *)0x0) goto LAB_0045be11;
  }
  else {
    pCVar7 = (CLantern *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar7,g_CLanternClassInfo.name_hash);
    if (pCVar7 != (CDemonActor *)0x0) {
      local_1c = (CCharacter *)
                 (this_ptr->base).inventories[0].selected_weapons
                 [(this_ptr->base).inventories[0].current_group];
      goto LAB_0045c19d;
    }
    local_1c = (CCharacter *)0x0;
  }
  if (local_3c < 0) {
    this_ptr->guns_drawn = 0;
  }
LAB_0045be11:
  local_24 = (this_ptr->base).inventories;
  local_30 = &(this_ptr->base).base.model.base;
  local_40 = &(this_ptr->base).base.base.location.position;
  local_34 = 0;
  do {
    if (delta_time <= 0.0) {
      return;
    }
    iVar5 = this_ptr->action_pending;
    if (iVar5 == 1) {
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(local_30,0x13);
      if ((float)0.10000000000000001 <= local_14) {
        local_18 = 0;
        iVar5 = local_18;
      }
      else {
LAB_0045be77:
        local_18 = 5;
        iVar5 = local_18;
      }
    }
    else if ((this_ptr->base).target_actor == (CDemonActor *)0x0) {
      if (iVar5 == 2) {
        local_18 = 6;
        iVar5 = local_18;
      }
      else if (iVar5 == 3) {
        local_18 = 4;
        local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                             ((CCharacter *)this_ptr,4);
        iVar5 = local_18;
        if ((float)0.98999999999999999 < local_14) {
          fVar3 = delta_time * (float)25 + this_ptr->aim_speed_factor;
          this_ptr->aim_speed_factor = fVar3;
          if (70.0f < fVar3) {
            this_ptr->aim_speed_factor = 70.0f;
          }
          if ((this_ptr->base).player_input.action_state.fire != 0) {
            return;
          }
          iVar5 = 0;
        }
      }
      else {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_24);
        if ((pCVar6 == (CLightGun *)0x0) || ((this_ptr->base).is_wearing_gas_mask != GAS_MASK_AWAY))
        {
          pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_24);
          if ((pCVar6 == (CLightGun *)0x0) ||
             ((this_ptr->base).is_wearing_gas_mask != GAS_MASK_IN_HAND)) {
            pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_24);
            if ((pCVar6 == (CLightGun *)0x0) &&
               ((this_ptr->base).is_wearing_gas_mask == GAS_MASK_ON_FACE)) {
              local_18 = 8;
              iVar5 = local_18;
            }
            else {
              pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_24);
              if ((pCVar6 == (CLightGun *)0x0) &&
                 ((this_ptr->base).is_wearing_gas_mask == GAS_MASK_IN_HAND)) {
                local_18 = 3;
                iVar5 = local_18;
              }
              else if (local_3c < 0) {
                pCVar1 = (CCharacter *)this_ptr->weapon;
                if (pCVar1 == local_1c) {
                  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_0045c465_caseD_3:
                    iVar5 = 0;
                  }
                  else {
                    switch(this_ptr->weapon->weapon_type) {
                    case WEAPON_TYPE_GUN:
                    case WEAPON_TYPE_FLASHLIGHT:
                      iVar5 = 2;
                      break;
                    case WEAPON_TYPE_SHOTGUN:
                      iVar5 = 0xb;
                      break;
                    case WEAPON_TYPE_LIGHT_GUN:
                      iVar5 = 9;
                      break;
                    default:
                      goto switchD_0045c465_caseD_3;
                    case WEAPON_TYPE_TOMMY_GUN:
                      iVar5 = 10;
                      break;
                    case WEAPON_TYPE_UNUSED:
                    case WEAPON_TYPE_MELEE:
                    case WEAPON_TYPE_BARON:
                    case WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT:
                      iVar5 = 6;
                      break;
                    case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
                    case WEAPON_TYPE_BARON|WEAPON_TYPE_DYNAMITE:
                      iVar5 = 0xe;
                    }
                  }
                }
                else if (pCVar1 == (CCharacter *)0x0) {
                  iVar5 = 0;
                  if (local_1c != (CCharacter *)0x0) {
                    switch((local_1c->model).bone_origins[0x19].y) {
                    case 0.0:
                    case 7.00649e-45:
                    case 1.68156e-44:
                      iVar5 = 1;
                      break;
                    default:
                      iVar5 = 3;
                      break;
                    case 8.40779e-45:
                    case 9.80909e-45:
                    case 1.12104e-44:
                    case 1.26117e-44:
                    case 1.82169e-44:
                      pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                         (&local_1c->base,g_CMeleeClassInfo.name_hash);
                      if ((pCVar7 == (CDemonActor *)0x0) ||
                         (pCVar7[2].particle_systems[0].fade_end == 0.0)) {
                        iVar5 = 0;
                      }
                      else {
                        iVar5 = 5;
                      }
                    }
                  }
                }
                else {
                  switch((pCVar1->model).bone_origins[0x19].y) {
                  case 0.0:
                  case 7.00649e-45:
                  case 1.68156e-44:
                    iVar5 = 1;
                    break;
                  default:
                    iVar5 = 3;
                    break;
                  case 8.40779e-45:
                  case 9.80909e-45:
                  case 1.12104e-44:
                  case 1.26117e-44:
                  case 1.82169e-44:
                    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                       ((CDemonActor *)pCVar1,g_CMeleeClassInfo.name_hash);
                    if ((pCVar7 == (CDemonActor *)0x0) ||
                       (pCVar7[2].particle_systems[0].fade_end == 0.0)) {
                      iVar5 = 0;
                    }
                    else {
                      iVar5 = 5;
                    }
                  }
                }
              }
              else {
                pCVar1 = (CCharacter *)this_ptr->weapon;
                if (pCVar1 == (CCharacter *)0x0) {
                  iVar5 = local_18;
                  if (((local_1c != (CCharacter *)0x0) && (this_ptr->guns_drawn != 0)) &&
                     (iVar5 = 0, local_1c != (CCharacter *)0x0)) {
                    switch((local_1c->model).bone_origins[0x19].y) {
                    case 0.0:
                    case 7.00649e-45:
                    case 1.68156e-44:
                      iVar5 = 1;
                      break;
                    default:
                      iVar5 = 3;
                      break;
                    case 8.40779e-45:
                    case 9.80909e-45:
                    case 1.12104e-44:
                    case 1.26117e-44:
                    case 1.82169e-44:
                      pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                         (&local_1c->base,g_CMeleeClassInfo.name_hash);
                      if ((pCVar7 == (CDemonActor *)0x0) ||
                         (pCVar7[2].particle_systems[0].fade_end == 0.0)) {
                        iVar5 = 0;
                      }
                      else {
                        iVar5 = 5;
                      }
                    }
                  }
                }
                else if (pCVar1 == local_1c) {
                  local_18 = local_3c;
                  iVar5 = local_18;
                }
                else {
                  iVar5 = 0;
                  if (pCVar1 != (CCharacter *)0x0) {
                    switch((pCVar1->model).bone_origins[0x19].y) {
                    case 0.0:
                    case 7.00649e-45:
                    case 1.68156e-44:
                      iVar5 = 1;
                      break;
                    default:
                      iVar5 = 3;
                      break;
                    case 8.40779e-45:
                    case 9.80909e-45:
                    case 1.12104e-44:
                    case 1.26117e-44:
                    case 1.82169e-44:
                      pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                         ((CDemonActor *)pCVar1,g_CMeleeClassInfo.name_hash);
                      if ((pCVar7 == (CDemonActor *)0x0) ||
                         (pCVar7[2].particle_systems[0].fade_end == 0.0)) {
                        iVar5 = 0;
                      }
                      else {
                        iVar5 = 5;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            local_18 = 8;
            iVar5 = local_18;
          }
        }
        else {
          local_18 = 3;
          iVar5 = local_18;
        }
      }
    }
    else if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
      if (this_ptr->guns_drawn == 0) goto LAB_0045be77;
      local_18 = 6;
      iVar5 = local_18;
    }
    else {
      local_18 = 0;
      iVar5 = local_18;
    }
    local_18 = iVar5;
    local_28 = (this_ptr->base).base.layer_action_t;
    local_20 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a0c0
                         ((CCharacter *)this_ptr,&delta_time,local_18);
    iVar5 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
            motion_index;
    pCVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(local_30);
    switch((this_ptr->base).base.layer_action_index) {
    case 4:
    case 5:
    case 6:
      if ((((int)local_28 < 0x3e99999a) && (0x3e999999 < (int)(this_ptr->base).base.layer_action_t))
         && (pCVar2 = this_ptr->weapon, pCVar2 != (CWeapon *)0x0)) {
        (*((pCVar2->base).vtable._ub)->processMeleeHit)(&pCVar2->base,2);
      }
      if ((((int)local_28 < 0x3ecccccd) && (0x3ecccccc < (int)(this_ptr->base).base.layer_action_t))
         && (pCVar2 = this_ptr->weapon, pCVar2 != (CWeapon *)0x0)) {
        (*((pCVar2->base).vtable._ub)->processMeleeHit)(&pCVar2->base,2);
      }
      if ((((int)local_28 < 0x3f000000) && (0x3effffff < (int)(this_ptr->base).base.layer_action_t))
         && (pCVar2 = this_ptr->weapon, pCVar2 != (CWeapon *)0x0)) {
        (*((pCVar2->base).vtable._ub)->processMeleeHit)(&pCVar2->base,2);
      }
      break;
    case 7:
      if ((((int)local_28 < 0x3f333333) && (0x3f333332 < (int)(this_ptr->base).base.layer_action_t))
         && (pCVar2 = this_ptr->weapon, pCVar2 != (CWeapon *)0x0)) {
        (*((pCVar2->base).vtable._ub)->processMeleeHit)(&pCVar2->base,2);
      }
      if (((int)local_28 < 0x3e99999a) && (0x3e999999 < (int)(this_ptr->base).base.layer_action_t))
      {
        core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                  (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"axeswing0?.wav",local_40);
      }
      break;
    case 8:
      if ((((int)local_28 < 0x3e99999a) && (0x3e999999 < (int)(this_ptr->base).base.layer_action_t))
         && (this_ptr_01 = (CCross *)
                           core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (&this_ptr->weapon->base,g_CCrossClassInfo.name_hash),
            this_ptr_01 != (CCross *)0x0)) {
        core_cross_cpp_CCross_activate_FUN_005a6cf0(this_ptr_01);
      }
      break;
    case 0xc:
      this_ptr_00 = (CDynamite *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (&this_ptr->weapon->base,g_CDynamiteClassInfo.name_hash);
      if (((this_ptr_00 != (CDynamite *)0x0) &&
          (iVar8 = core_dynamite_cpp_CDynamite_isFuseLit_FUN_0047a1a0(this_ptr_00), iVar8 == 0)) &&
         (local_14 = (float)(0xb / (longlong)pCVar4->motions[iVar5].frame_count),
         (float)(int)local_14 <= (this_ptr->base).base.layer_action_t)) {
        core_dynamite_cpp_CDynamite_lightFuse_FUN_0047a150(this_ptr_00);
      }
      break;
    case 0xd:
      if ((this_ptr->action_pending == 3) &&
         (local_14 = (float)(0xb / (longlong)pCVar4->motions[iVar5].frame_count),
         (float)(int)local_14 <= (this_ptr->base).base.layer_action_t)) {
        core_doc_cpp_CDoc_getThrowDirection_FUN_0045bba0(this_ptr,(CVector3f *)&stack0xffffff88);
        local_60.x = (float)in_stack_ffffff88;
        *(uint *)((int)&local_60 + (uint)bVar10 * -8 + 4) =
             *(uint *)(&stack0xffffff8c + (uint)bVar10 * -8);
        *(uint *)((int)&local_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)(&stack0xffffff90 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        local_38 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (&this_ptr->weapon->base,g_CDynamiteClassInfo.name_hash);
        local_2c = local_38;
        if (local_38 != (CCharacter *)0x0) {
          core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                    ((CDemonActor *)this_ptr,&local_60,&local_54);
          local_6c = local_54.x;
          (&stack0xffffff98)[(uint)bVar10 * 0xfffffffe] =
               (float)*(uint *)((int)&local_54 + (uint)bVar10 * -8 + 4);
          *(uint *)((int)&stack0xffffff9c + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
               *(uint *)((int)&local_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          pCVar9 = (local_2c->model).bone_origins + 0x51;
          if (pCVar9 != (CVector3f *)&stack0xffffff94) {
            pCVar9->x = local_6c;
            (local_2c->model).bone_origins[0x51].y = local_68;
            (local_2c->model).bone_origins[0x51].z = local_64;
          }
          (*(((local_38->base).vtable._uc)->_uc).isGrabbable)(local_38,in_stack_ffffff88);
          this_ptr->weapon = (CWeapon *)0x0;
        }
        if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
          (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                    ((CCharacter *)this_ptr,1,&local_60);
        }
        this_ptr->action_pending = 0;
        this_ptr->aim_speed_factor = 10.0f;
      }
      if (1.0 <= (this_ptr->base).base.layer_action_t) {
        (this_ptr->base).base.layer_action_index = 0;
        (this_ptr->base).base.layer_action_t = 0.0;
      }
    }
    if (-1 < local_20) {
      pCVar1 = (CCharacter *)this_ptr->weapon;
      if (pCVar1 != local_1c) {
        if (pCVar1 != (CCharacter *)0x0) {
          switch((pCVar1->model).bone_origins[0x19].y) {
          case 0.0:
          case 7.00649e-45:
          case 1.68156e-44:
            iVar5 = 1;
            break;
          default:
            iVar5 = 3;
            break;
          case 8.40779e-45:
          case 9.80909e-45:
          case 1.12104e-44:
          case 1.26117e-44:
          case 1.82169e-44:
            pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                               ((CDemonActor *)pCVar1,g_CMeleeClassInfo.name_hash);
            if ((pCVar7 == (CDemonActor *)0x0) || (pCVar7[2].particle_systems[0].fade_end == 0.0)) {
              iVar5 = 0;
            }
            else {
              iVar5 = 5;
            }
          }
          if (iVar5 == local_20) {
            (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).kill)
                      ((CCharacter *)this_ptr->weapon,1,(CVector3f *)in_stack_ffffff88,
                       in_stack_ffffff8c);
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
        if (this_ptr->guns_drawn != 0) {
          if (local_1c == (CCharacter *)0x0) {
LAB_0045bfdc:
            iVar5 = 0;
          }
          else {
            switch((local_1c->model).bone_origins[0x19].y) {
            case 0.0:
            case 7.00649e-45:
            case 1.68156e-44:
              iVar5 = 1;
              break;
            default:
              iVar5 = 3;
              break;
            case 8.40779e-45:
            case 9.80909e-45:
            case 1.12104e-44:
            case 1.26117e-44:
            case 1.82169e-44:
              pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                 (&local_1c->base,g_CMeleeClassInfo.name_hash);
              if ((pCVar7 == (CDemonActor *)0x0) || (pCVar7[2].particle_systems[0].fade_end == 0.0))
              goto LAB_0045bfdc;
              iVar5 = 5;
            }
          }
          if ((iVar5 == local_20) &&
             (this_ptr->weapon = (CWeapon *)local_1c, local_1c != (CCharacter *)0x0)) {
            (*(((local_1c->base).vtable._uc)->_uc).kill)
                      (local_1c,2,(CVector3f *)in_stack_ffffff88,in_stack_ffffff8c);
          }
        }
      }
      if ((this_ptr->action_pending == 1) && (local_20 == 5)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004cff90(&this_ptr->base,1);
        this_ptr->action_pending = 0;
      }
      pCVar7 = (this_ptr->base).target_actor;
      if (pCVar7 != (CDemonActor *)0x0) {
        if (local_20 != 0) {
          if (local_20 == 5) {
            core_inv_cpp_CInventory_removeItem_FUN_004db8e0(local_24,pCVar7,0);
            core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                      (g_CDemonMission_PTR_00618170,(this_ptr->base).target_actor);
            core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10
                      ((CCharacter *)this_ptr,1,(this_ptr->base).target_actor,0.0,(CMatrix3x4f *)0x0
                      );
          }
          else if (local_20 == 6) {
            core_inv_cpp_CInventory_removeItem_FUN_004db8e0(local_24,pCVar7,0);
            core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                      (g_CDemonMission_PTR_00618170,(this_ptr->base).target_actor);
            core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10
                      ((CCharacter *)this_ptr,1,(this_ptr->base).target_actor,0.0,(CMatrix3x4f *)0x0
                      );
            this_ptr->weapon = (CWeapon *)0x0;
            this_ptr->guns_drawn = 0;
            (this_ptr->base).base.layer_action_index = 2;
            (this_ptr->base).base.layer_action_t = 0.0;
          }
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_30,0x14,1);
        this_ptr->action_pending = 6;
        (this_ptr->base).target_actor = (CDemonActor *)0x0;
      }
      if (local_20 == 8) {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_24);
        if (pCVar6 == (CLightGun *)0x0) {
LAB_0045c087:
          (this_ptr->base).is_wearing_gas_mask = GAS_MASK_IN_HAND;
        }
        else {
          (this_ptr->base).is_wearing_gas_mask = GAS_MASK_ON_FACE;
        }
      }
      else if ((local_20 == 3) && ((int)(this_ptr->base).is_wearing_gas_mask < 2)) {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_24);
        if (pCVar6 != (CLightGun *)0x0) goto LAB_0045c087;
        (this_ptr->base).is_wearing_gas_mask = GAS_MASK_AWAY;
      }
      if ((this_ptr->action_pending == 7) && (local_20 == 6)) {
        this_ptr->action_pending = 0;
      }
      iVar5 = (this_ptr->base).base.layer_action_index;
      if ((((3 < iVar5) && (iVar5 < 9)) && (this_ptr->action_pending == 0)) &&
         ((this_ptr->base).base.layer_action_t == 1.0)) {
        (this_ptr->base).base.layer_action_index = 3;
        (this_ptr->base).base.layer_action_t = 1.0;
      }
      if ((((this_ptr->base).base.layer_action_index == 0) &&
          (ABS((this_ptr->base).base.layer_action_t) == 0.0)) && (this_ptr->guns_drawn == 0)) {
        (this_ptr->base).base.layer_action_index = 2;
        (this_ptr->base).base.layer_action_t = 0.0;
      }
      if (((this_ptr->base).base.layer_action_index == 0xf) &&
         ((this_ptr->base).base.layer_action_t == 1.0)) {
        (this_ptr->base).base.layer_action_index = 1;
        (this_ptr->base).base.layer_action_t = 1.0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042a620
                ((CCharacter *)this_ptr,local_18);
    }
    local_34 = local_34 + 1;
    if (1 < local_34) {
      return;
    }
  } while( true );
}
