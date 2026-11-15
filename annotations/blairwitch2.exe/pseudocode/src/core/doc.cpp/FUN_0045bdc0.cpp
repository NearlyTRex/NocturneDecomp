// Name: core_doc.cpp_FUN_0045bdc0
// Address: 0045bdc0
// Address Range: [[0045bdc0, 0045c958]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0045bdc0(CHero *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0045bdc0(CHero *param_1,float param_2)

{
  CHero *pCVar1;
  CCharacter *pCVar2;
  float fVar3;
  CMotionList *pCVar4;
  int iVar5;
  CLightGun *pCVar6;
  CDemonActor *pCVar7;
  CDynamite *this_ptr;
  int iVar8;
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
  if (((param_1->base).layer_action_index == 9) &&
     ((param_1->base).carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (param_1->base).layer_action_t = 0.0;
    (param_1->base).layer_action_index = 0;
  }
  local_3c = -1;
  local_1c = (CCharacter *)0x0;
  if (param_1->nearby_interactive_actor != (CDemonActor *)0x0) {
    pCVar1 = param_1 + 1;
    (pCVar1->base).base.actor_name[0] = '\0';
    (pCVar1->base).base.actor_name[1] = '\0';
    (pCVar1->base).base.actor_name[2] = '\0';
    (pCVar1->base).base.actor_name[3] = '\0';
    goto LAB_0045be11;
  }
  if (*(int *)param_1[1].base.base.actor_name == 0) goto LAB_0045be11;
  pCVar7 = (param_1->base).carry_hands[1].carry_actor;
  if (pCVar7 == (CDemonActor *)0x0) {
    local_1c = (CCharacter *)
               param_1->inventories[0].selected_weapons[param_1->inventories[0].current_group];
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
                 param_1->inventories[0].selected_weapons[param_1->inventories[0].current_group];
      goto LAB_0045c19d;
    }
    local_1c = (CCharacter *)0x0;
  }
  if (local_3c < 0) {
    pCVar1 = param_1 + 1;
    (pCVar1->base).base.actor_name[0] = '\0';
    (pCVar1->base).base.actor_name[1] = '\0';
    (pCVar1->base).base.actor_name[2] = '\0';
    (pCVar1->base).base.actor_name[3] = '\0';
  }
LAB_0045be11:
  local_24 = param_1->inventories;
  local_30 = &(param_1->base).model.base;
  local_40 = &(param_1->base).base.location.position;
  local_34 = 0;
  do {
    if (param_2 <= 0.0) {
      return;
    }
    iVar5 = param_1[1].base.base.health;
    if (iVar5 == 1) {
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(local_30,0x13);
      if ((float)_DAT_005d065f <= local_14) {
        local_18 = 0;
        iVar5 = local_18;
      }
      else {
LAB_0045be77:
        local_18 = 5;
        iVar5 = local_18;
      }
    }
    else if (param_1->target_actor == (CDemonActor *)0x0) {
      if (iVar5 == 2) {
        local_18 = 6;
        iVar5 = local_18;
      }
      else if (iVar5 == 3) {
        local_18 = 4;
        local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                             (&param_1->base,4);
        iVar5 = local_18;
        if ((float)_DAT_005d0657 < local_14) {
          fVar3 = param_2 * (float)_DAT_005d064f +
                  *(float *)(param_1[1].base.base.actor_name + 0x10);
          *(float *)(param_1[1].base.base.actor_name + 0x10) = fVar3;
          if (0x428C0000 < fVar3) {
            *(float *)(param_1[1].base.base.actor_name + 0x10) = 0x428C0000;
          }
          if ((param_1->player_input).action_state.fire != 0) {
            return;
          }
          iVar5 = 0;
        }
      }
      else {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_24);
        if ((pCVar6 == (CLightGun *)0x0) || (param_1->is_wearing_gas_mask != GAS_MASK_AWAY)) {
          pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_24);
          if ((pCVar6 == (CLightGun *)0x0) || (param_1->is_wearing_gas_mask != GAS_MASK_IN_HAND)) {
            pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_24);
            if ((pCVar6 == (CLightGun *)0x0) && (param_1->is_wearing_gas_mask == GAS_MASK_ON_FACE))
            {
              local_18 = 8;
              iVar5 = local_18;
            }
            else {
              pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_24);
              if ((pCVar6 == (CLightGun *)0x0) && (param_1->is_wearing_gas_mask == GAS_MASK_IN_HAND)
                 ) {
                local_18 = 3;
                iVar5 = local_18;
              }
              else if (local_3c < 0) {
                pCVar2 = (CCharacter *)param_1[1].base.base.orient_matrix.m[2].y;
                if (pCVar2 == local_1c) {
                  fVar3 = param_1[1].base.base.orient_matrix.m[2].y;
                  if (fVar3 == 0.0) {
switchD_0045c465_caseD_3:
                    iVar5 = 0;
                  }
                  else {
                    switch(*(uint *)((int)fVar3 + 0x43c)) {
                    case 0:
                    case 5:
                      iVar5 = 2;
                      break;
                    case 1:
                      iVar5 = 0xb;
                      break;
                    case 2:
                      iVar5 = 9;
                      break;
                    default:
                      goto switchD_0045c465_caseD_3;
                    case 4:
                      iVar5 = 10;
                      break;
                    case 6:
                    case 7:
                    case 8:
                    case 0xd:
                      iVar5 = 6;
                      break;
                    case 10:
                    case 0xb:
                      iVar5 = 0xe;
                    }
                  }
                }
                else if (pCVar2 == (CCharacter *)0x0) {
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
                  switch((pCVar2->model).bone_origins[0x19].y) {
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
                                       ((CDemonActor *)pCVar2,g_CMeleeClassInfo.name_hash);
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
                pCVar2 = (CCharacter *)param_1[1].base.base.orient_matrix.m[2].y;
                if (pCVar2 == (CCharacter *)0x0) {
                  iVar5 = local_18;
                  if (((local_1c != (CCharacter *)0x0) &&
                      (*(int *)param_1[1].base.base.actor_name != 0)) &&
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
                else if (pCVar2 == local_1c) {
                  local_18 = local_3c;
                  iVar5 = local_18;
                }
                else {
                  iVar5 = 0;
                  if (pCVar2 != (CCharacter *)0x0) {
                    switch((pCVar2->model).bone_origins[0x19].y) {
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
                                         ((CDemonActor *)pCVar2,g_CMeleeClassInfo.name_hash);
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
    else if ((param_1->base).carry_hands[1].carry_actor == (CDemonActor *)0x0) {
      if (*(int *)param_1[1].base.base.actor_name == 0) goto LAB_0045be77;
      local_18 = 6;
      iVar5 = local_18;
    }
    else {
      local_18 = 0;
      iVar5 = local_18;
    }
    local_18 = iVar5;
    local_28 = (param_1->base).layer_action_t;
    local_20 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a0c0
                         (&param_1->base,&param_2,local_18);
    iVar5 = (param_1->base).layer_actions[(param_1->base).layer_action_index].motion_index;
    pCVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(local_30);
    switch((param_1->base).layer_action_index) {
    case 4:
    case 5:
    case 6:
      if ((((int)local_28 < 0x3e99999a) && (0x3e999999 < (int)(param_1->base).layer_action_t)) &&
         (fVar3 = param_1[1].base.base.orient_matrix.m[2].y, fVar3 != 0.0)) {
        (**(code **)(*(int *)((int)fVar3 + 0x2b0) + 0x80))(fVar3,2);
      }
      if ((((int)local_28 < 0x3ecccccd) && (0x3ecccccc < (int)(param_1->base).layer_action_t)) &&
         (fVar3 = param_1[1].base.base.orient_matrix.m[2].y, fVar3 != 0.0)) {
        (**(code **)(*(int *)((int)fVar3 + 0x2b0) + 0x80))(fVar3,2);
      }
      if ((((int)local_28 < 0x3f000000) && (0x3effffff < (int)(param_1->base).layer_action_t)) &&
         (fVar3 = param_1[1].base.base.orient_matrix.m[2].y, fVar3 != 0.0)) {
        (**(code **)(*(int *)((int)fVar3 + 0x2b0) + 0x80))(fVar3,2);
      }
      break;
    case 7:
      if ((((int)local_28 < 0x3f333333) && (0x3f333332 < (int)(param_1->base).layer_action_t)) &&
         (fVar3 = param_1[1].base.base.orient_matrix.m[2].y, fVar3 != 0.0)) {
        (**(code **)(*(int *)((int)fVar3 + 0x2b0) + 0x80))(fVar3,2);
      }
      if (((int)local_28 < 0x3e99999a) && (0x3e999999 < (int)(param_1->base).layer_action_t)) {
        core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                  (0x0264B290,(CDemonActor *)param_1,"axeswing0?.wav",local_40);
      }
      break;
    case 8:
      if ((((int)local_28 < 0x3e99999a) && (0x3e999999 < (int)(param_1->base).layer_action_t)) &&
         (pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                              g_CCrossClassInfo.name_hash), pCVar7 != (CDemonActor *)0x0)) {
        core_cross_cpp_FUN_005a6cf0(pCVar7);
      }
      break;
    case 0xc:
      this_ptr = (CDynamite *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                            g_CDynamiteClassInfo.name_hash);
      if (((this_ptr != (CDynamite *)0x0) &&
          (iVar8 = core_dynamite_cpp_CDynamite_isFuseLit_FUN_0047a1a0(this_ptr), iVar8 == 0)) &&
         (local_14 = (float)(0xb / (longlong)pCVar4->motions[iVar5].frame_count),
         (float)(int)local_14 <= (param_1->base).layer_action_t)) {
        core_dynamite_cpp_CDynamite_lightFuse_FUN_0047a150(this_ptr);
      }
      break;
    case 0xd:
      if ((param_1[1].base.base.health == 3) &&
         (local_14 = (float)(0xb / (longlong)pCVar4->motions[iVar5].frame_count),
         (float)(int)local_14 <= (param_1->base).layer_action_t)) {
        core_doc_cpp_FUN_0045bba0(param_1);
        local_60.x = (float)in_stack_ffffff88;
        *(uint *)((int)&local_60 + (uint)bVar10 * -8 + 4) =
             *(uint *)(&stack0xffffff8c + (uint)bVar10 * -8);
        *(uint *)((int)&local_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)(&stack0xffffff90 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        local_38 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                              g_CDynamiteClassInfo.name_hash);
        local_2c = local_38;
        if (local_38 != (CCharacter *)0x0) {
          core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                    ((CDemonActor *)param_1,&local_60,&local_54);
          local_6c = local_54.x;
          (&stack0xffffff98)[(uint)bVar10 * 0xfffffffe] =
               (float)*(uint *)((int)&local_54 + (uint)bVar10 * -8 + 4);
          (&stack0xffffff98)[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               (float)*(uint *)((int)&local_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          pCVar9 = (local_2c->model).bone_origins + 0x51;
          if (pCVar9 != (CVector3f *)&stack0xffffff94) {
            pCVar9->x = local_6c;
            (local_2c->model).bone_origins[0x51].y = local_68;
            (local_2c->model).bone_origins[0x51].z = local_64;
          }
          (*(((local_38->base).vtable._uc)->_uc).isGrabbable)(local_38,in_stack_ffffff88);
          param_1[1].base.base.orient_matrix.m[2].y = 0.0;
        }
        if ((param_1->base).carry_hands[1].carry_actor != (CDemonActor *)0x0) {
          (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)(&param_1->base,1,&local_60);
        }
        param_1[1].base.base.health = 0;
        *(uint *)(param_1[1].base.base.actor_name + 0x10) = 0x41200000;
      }
      if (1.0 <= (param_1->base).layer_action_t) {
        (param_1->base).layer_action_index = 0;
        (param_1->base).layer_action_t = 0.0;
      }
    }
    if (-1 < local_20) {
      pCVar2 = (CCharacter *)param_1[1].base.base.orient_matrix.m[2].y;
      if (pCVar2 != local_1c) {
        if (pCVar2 != (CCharacter *)0x0) {
          switch((pCVar2->model).bone_origins[0x19].y) {
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
                               ((CDemonActor *)pCVar2,g_CMeleeClassInfo.name_hash);
            if ((pCVar7 == (CDemonActor *)0x0) || (pCVar7[2].particle_systems[0].fade_end == 0.0)) {
              iVar5 = 0;
            }
            else {
              iVar5 = 5;
            }
          }
          if (iVar5 == local_20) {
            fVar3 = param_1[1].base.base.orient_matrix.m[2].y;
            (**(code **)(*(int *)((int)fVar3 + 0x2b0) + 0xe4))(fVar3,1);
            param_1[1].base.base.orient_matrix.m[2].y = 0.0;
          }
        }
        if (*(int *)param_1[1].base.base.actor_name != 0) {
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
             (param_1[1].base.base.orient_matrix.m[2].y = (float)local_1c,
             local_1c != (CCharacter *)0x0)) {
            (*(((local_1c->base).vtable._uc)->_uc).kill)
                      (local_1c,2,(CVector3f *)in_stack_ffffff88,in_stack_ffffff8c);
          }
        }
      }
      if ((param_1[1].base.base.health == 1) && (local_20 == 5)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004cff90(param_1,1);
        param_1[1].base.base.health = 0;
      }
      pCVar7 = param_1->target_actor;
      if (pCVar7 != (CDemonActor *)0x0) {
        if (local_20 != 0) {
          if (local_20 == 5) {
            core_inv_cpp_CInventory_removeItem_FUN_004db8e0(local_24,pCVar7,0);
            core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                      (0x01D182F0,param_1->target_actor);
            core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10
                      (&param_1->base,1,(int)param_1->target_actor,0,0);
          }
          else if (local_20 == 6) {
            core_inv_cpp_CInventory_removeItem_FUN_004db8e0(local_24,pCVar7,0);
            core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                      (0x01D182F0,param_1->target_actor);
            core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10
                      (&param_1->base,1,(int)param_1->target_actor,0,0);
            param_1[1].base.base.orient_matrix.m[2].y = 0.0;
            pCVar1 = param_1 + 1;
            (pCVar1->base).base.actor_name[0] = '\0';
            (pCVar1->base).base.actor_name[1] = '\0';
            (pCVar1->base).base.actor_name[2] = '\0';
            (pCVar1->base).base.actor_name[3] = '\0';
            (param_1->base).layer_action_index = 2;
            (param_1->base).layer_action_t = 0.0;
          }
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_30,0x14,1);
        param_1[1].base.base.health = 6;
        param_1->target_actor = (CDemonActor *)0x0;
      }
      if (local_20 == 8) {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_24);
        if (pCVar6 == (CLightGun *)0x0) {
LAB_0045c087:
          param_1->is_wearing_gas_mask = GAS_MASK_IN_HAND;
        }
        else {
          param_1->is_wearing_gas_mask = GAS_MASK_ON_FACE;
        }
      }
      else if ((local_20 == 3) && ((int)param_1->is_wearing_gas_mask < 2)) {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_24);
        if (pCVar6 != (CLightGun *)0x0) goto LAB_0045c087;
        param_1->is_wearing_gas_mask = GAS_MASK_AWAY;
      }
      if ((param_1[1].base.base.health == 7) && (local_20 == 6)) {
        param_1[1].base.base.health = 0;
      }
      iVar5 = (param_1->base).layer_action_index;
      if ((((3 < iVar5) && (iVar5 < 9)) && (param_1[1].base.base.health == 0)) &&
         ((param_1->base).layer_action_t == 1.0)) {
        (param_1->base).layer_action_index = 3;
        (param_1->base).layer_action_t = 1.0;
      }
      if ((((param_1->base).layer_action_index == 0) && (ABS((param_1->base).layer_action_t) == 0.0)
          ) && (*(int *)param_1[1].base.base.actor_name == 0)) {
        (param_1->base).layer_action_index = 2;
        (param_1->base).layer_action_t = 0.0;
      }
      if (((param_1->base).layer_action_index == 0xf) && ((param_1->base).layer_action_t == 1.0)) {
        (param_1->base).layer_action_index = 1;
        (param_1->base).layer_action_t = 1.0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042a620(&param_1->base,local_18);
    }
    local_34 = local_34 + 1;
    if (1 < local_34) {
      return;
    }
  } while( true );
}
