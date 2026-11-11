// Name: core_doc.cpp_FUN_00474400
// Address: 00474400
// Address Range: [[00474400, 00474ee8]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00474400(CHero *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00474400(CHero *param_1,float param_2)

{
  CHero *pCVar1;
  CInventory *this_ptr;
  CDemonActor *pCVar2;
  CCharacter *pCVar3;
  float fVar4;
  CGame *pCVar5;
  CLightGun *pCVar6;
  int iVar7;
  uint uVar8;
  CMotionList *pCVar9;
  CDynamite *this_ptr_00;
  int iVar10;
  uint *puVar11;
  byte bVar12;
  CVector3f *apCStackY_1064 [1013];
  uint uVar13;
  CVector3f *in_stack_ffffff84;
  float in_stack_ffffff88;
  uint local_74;
  CVector3f CStack_70;
  float fStack_64;
  CVector3f *apCStack_60 [7];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  CMotionController *local_34;
  int local_30;
  float local_2c;
  uint local_28;
  CWeapon *local_24;
  CCharacter *local_20;
  int local_1c;
  CInventory *local_18;
  float fStack_14;
  
  bVar12 = 0;
  if (((param_1->base).layer_action_index == 0xe) &&
     ((param_1->base).carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (param_1->base).layer_action_t = 0.0;
    (param_1->base).layer_action_index = 0;
  }
  local_44 = -1;
  local_24 = (CWeapon *)0x0;
  if (param_1->nearby_interactive_actor == (CDemonActor *)0x0) {
    if (*(int *)param_1[1].base.base.actor_name != 0) {
      pCVar2 = (param_1->base).carry_hands[1].carry_actor;
      if (pCVar2 == (CDemonActor *)0x0) {
        local_24 = (param_1->inventory).selected_weapon;
      }
      else {
        local_24 = (CWeapon *)
                   core_actor_cpp_castToClassHash_FUN_0040c600(pCVar2,g_CWeaponClassInfo.name_hash);
        if ((local_24 == (CWeapon *)0x0) &&
           (pCVar2 = (param_1->base).carry_hands[1].carry_actor,
           uVar8 = (*((pCVar2->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar2), (uVar8 & 0xb) != 0
           )) {
          local_40 = 8;
        }
      }
      if ((local_20 == (CCharacter *)0x0) && (local_40 < 0)) {
        pCVar1 = param_1 + 1;
        (pCVar1->base).base.actor_name[0] = '\0';
        (pCVar1->base).base.actor_name[1] = '\0';
        (pCVar1->base).base.actor_name[2] = '\0';
        (pCVar1->base).base.actor_name[3] = '\0';
      }
    }
  }
  else {
    pCVar1 = param_1 + 1;
    (pCVar1->base).base.actor_name[0] = '\0';
    (pCVar1->base).base.actor_name[1] = '\0';
    (pCVar1->base).base.actor_name[2] = '\0';
    (pCVar1->base).base.actor_name[3] = '\0';
  }
  this_ptr = &param_1->inventory;
  pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(this_ptr);
  local_28 = (uint)(pCVar6 != (CLightGun *)0x0);
  iVar7 = core_inv_cpp_FUN_004f9ef0(this_ptr);
  local_24 = (CWeapon *)(uint)(iVar7 != 0);
  local_34 = &(param_1->base).model.base;
  local_38 = 0;
  local_18 = this_ptr;
  do {
    if (param_2 <= 0.0) {
LAB_004744a5:
      if (*(int *)param_1[1].base.base.actor_name == 0) {
        return;
      }
      goto LAB_00474ea4;
    }
    iVar7 = param_1->action_pending;
    if ((iVar7 == 1) || (param_1->target_actor != (CDemonActor *)0x0)) {
LAB_00474546:
      local_1c = 3;
      iVar7 = local_1c;
    }
    else if (iVar7 == 2) {
      iVar7 = 0;
    }
    else if (iVar7 == 3) {
      fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                            (&param_1->base,6);
      local_1c = 6;
      iVar7 = local_1c;
      if ((float)_DAT_005da444 < fStack_14) {
        fVar4 = param_2 * (float)_DAT_005da43c + *(float *)(param_1[1].base.base.actor_name + 0x10);
        *(float *)(param_1[1].base.base.actor_name + 0x10) = fVar4;
        if (0x428C0000 < fVar4) {
          *(float *)(param_1[1].base.base.actor_name + 0x10) = 0x428C0000;
        }
        if ((param_1->player_input).action_state.fire != 0) goto LAB_004744a5;
        iVar7 = 0;
      }
    }
    else {
      if ((local_28 != 0) && (param_1->is_wearing_gas_mask == GAS_MASK_AWAY)) goto LAB_00474546;
      if ((local_28 == 0) || (param_1->is_wearing_gas_mask != GAS_MASK_IN_HAND)) {
        if ((local_28 == 0) && (param_1->is_wearing_gas_mask == GAS_MASK_ON_FACE)) {
          local_1c = 10;
          iVar7 = local_1c;
        }
        else {
          if (((local_28 == 0) && (param_1->is_wearing_gas_mask == GAS_MASK_IN_HAND)) ||
             ((local_24 != (CWeapon *)0x0 && (param_1->is_wearing_goggles == 0))))
          goto LAB_00474546;
          if ((local_24 == (CWeapon *)0x0) || (param_1->is_wearing_goggles != 1)) {
            if ((local_24 == (CWeapon *)0x0) && (param_1->is_wearing_goggles == 2)) {
              local_1c = 0xb;
              iVar7 = local_1c;
            }
            else {
              if ((local_24 == (CWeapon *)0x0) && (param_1->is_wearing_goggles == 1))
              goto LAB_00474546;
              if (-1 < local_40) {
                local_1c = local_40;
                iVar7 = local_1c;
                goto LAB_0047454e;
              }
              pCVar3 = (CCharacter *)param_1[1].base.base.orient_matrix.m[2].y;
              if (pCVar3 != local_20) {
                if (pCVar3 == (CCharacter *)0x0) {
                  iVar7 = 0;
                  if (local_20 != (CCharacter *)0x0) {
                    switch((local_20->model).bone_origins[0x19].y) {
                    case 0.0:
                    case 7.00649e-45:
                      iVar7 = 1;
                      break;
                    default:
switchD_004749dc_caseD_1:
                      iVar7 = 3;
                      break;
                    case 9.80909e-45:
                    case 1.12104e-44:
                      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                                        (local_20,g_CMeleeClassInfo.name_hash);
                      if ((iVar7 != 0) && (*(int *)(iVar7 + 0x588) != 0))
                      goto switchD_004749dc_caseD_1;
                      iVar7 = 0;
                    }
                  }
                }
                else {
                  switch((pCVar3->model).bone_origins[0x19].y) {
                  case 0.0:
                  case 7.00649e-45:
                    iVar7 = 1;
                    break;
                  default:
switchD_00474a28_caseD_1:
                    iVar7 = 3;
                    break;
                  case 9.80909e-45:
                  case 1.12104e-44:
                    iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                                      (pCVar3,g_CMeleeClassInfo.name_hash);
                    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x588) != 0))
                    goto switchD_00474a28_caseD_1;
                    iVar7 = 0;
                  }
                }
                goto LAB_0047454e;
              }
              fVar4 = param_1[1].base.base.orient_matrix.m[2].y;
              if (fVar4 == 0.0) {
switchD_00474955_caseD_3:
                iVar7 = 0;
              }
              else {
                switch(*(uint *)((int)fVar4 + 0x2e0)) {
                case 0:
                case 5:
                  iVar7 = 2;
                  break;
                case 1:
                  iVar7 = 4;
                  break;
                case 2:
                  iVar7 = 5;
                  break;
                default:
                  goto switchD_00474955_caseD_3;
                case 4:
                  iVar7 = 7;
                  break;
                case 7:
                  iVar7 = 8;
                  break;
                case 9:
                case 10:
                  iVar7 = 0xe;
                }
              }
            }
          }
          else {
            local_1c = 0xb;
            iVar7 = local_1c;
          }
        }
      }
      else {
        local_1c = 10;
        iVar7 = local_1c;
      }
    }
LAB_0047454e:
    local_1c = iVar7;
    local_2c = (param_1->base).layer_action_t;
    local_44 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_004340b0
                         (&param_1->base,&param_2,local_1c);
    iVar7 = (param_1->base).layer_actions[(param_1->base).layer_action_index].motion_index;
    pCVar9 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(local_34);
    switch((param_1->base).layer_action_index) {
    case 6:
      this_ptr_00 = (CDynamite *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (param_1[1].base.base.orient_matrix.m[2].y,
                               g_CDynamiteClassInfo.name_hash);
      if (((this_ptr_00 != (CDynamite *)0x0) &&
          (iVar10 = core_dynamite_cpp_CDynamite_isFuseLit_FUN_00492690(this_ptr_00), iVar10 == 0))
         && (fStack_14 = (float)(0xb / (longlong)pCVar9->motions[iVar7].frame_count),
            (float)(int)fStack_14 <= (param_1->base).layer_action_t)) {
        core_dynamite_cpp_CDynamite_lightFuse_FUN_00492640(this_ptr_00);
      }
      break;
    case 7:
      if ((param_1->action_pending == 3) &&
         (fStack_14 = (float)(0xb / (longlong)pCVar9->motions[iVar7].frame_count),
         (float)(int)fStack_14 <= (param_1->base).layer_action_t)) {
        core_doc_cpp_FUN_004742a0(param_1);
        CStack_70.x = fStack_64;
        *(CVector3f **)((int)&CStack_70 + (uint)bVar12 * -8 + 4) = apCStack_60[(uint)bVar12 * -2];
        *(CVector3f **)((int)&CStack_70 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             apCStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        local_3c = core_actor_cpp_castToClassHash_FUN_0040c600
                             (param_1[1].base.base.orient_matrix.m[2].y,
                              g_CDynamiteClassInfo.name_hash);
        local_30 = local_3c;
        if (local_3c != 0) {
          core_actor_cpp_FUN_00408ac0(param_1,&CStack_70);
          iVar7 = local_30;
          in_stack_ffffff84 = apCStack_60[2];
          puVar11 = (uint *)(local_30 + 0x57c);
          *(CVector3f **)(&stack0xffffff88 + (uint)bVar12 * -8) = apCStack_60[(uint)bVar12 * -2 + 3]
          ;
          *(CVector3f **)((int)&stack0xffffff8c + ((uint)bVar12 * -2 + (uint)bVar12 * -2) * 4) =
               apCStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          if (puVar11 != (uint *)&stack0xffffff84) {
            *puVar11 = in_stack_ffffff84;
            *(float *)(iVar7 + 0x580) = in_stack_ffffff88;
            *(uint *)(iVar7 + 0x584) = local_74;
          }
          (**(code **)(*(int *)(local_3c + 0x154) + 0xe4))(local_3c);
          param_1[1].base.base.orient_matrix.m[2].y = 0.0;
        }
        if ((param_1->base).carry_hands[1].carry_actor != (CDemonActor *)0x0) {
          (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)(&param_1->base,1,&CStack_70)
          ;
        }
        param_1->action_pending = 0;
        *(uint *)(param_1[1].base.base.actor_name + 0x10) = 0x41200000;
      }
      if (1.0 <= (param_1->base).layer_action_t) {
        (param_1->base).layer_action_index = 0;
        (param_1->base).layer_action_t = 0.0;
      }
      break;
    case 8:
      if ((((int)local_2c < 0x3f19999a) && (0x3f199999 < (int)(param_1->base).layer_action_t)) &&
         (iVar7 = core_actor_cpp_isOfClass_FUN_0040c550
                            ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                             "CShotgun"), iVar7 != 0)) {
        fVar4 = param_1[1].base.base.orient_matrix.m[2].y;
        (**(code **)(*(int *)((int)fVar4 + 0x154) + 0xd8))(fVar4);
      }
      break;
    case 0xc:
      if ((((int)local_2c < 0x3ebd70a4) && (0x3ebd70a3 < (int)(param_1->base).layer_action_t)) &&
         ((fVar4 = param_1[1].base.base.orient_matrix.m[2].y, fVar4 != 0.0 &&
          (iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600(fVar4,g_CWeaponClassInfo.name_hash),
          iVar7 != 0)))) {
        if (*(int *)(iVar7 + 0x56c) == 9) {
          (**(code **)(*(int *)(iVar7 + 0x154) + 0x78))(iVar7,8);
        }
        else {
          (**(code **)(*(int *)(iVar7 + 0x154) + 0x78))(iVar7,1);
        }
      }
      break;
    case 0xd:
      if (((int)local_2c < 0x3f000000) && (0x3effffff < (int)(param_1->base).layer_action_t)) {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (param_1[1].base.base.orient_matrix.m[2].y,g_CWeaponClassInfo.name_hash);
        if (iVar7 != 0) {
          if (*(int *)(iVar7 + 0x56c) == 9) {
            uVar13 = 8;
          }
          else {
            uVar13 = 1;
          }
          (**(code **)(*(int *)(iVar7 + 0x154) + 0x78))(iVar7,uVar13);
        }
        fVar4 = param_1[1].base.base.orient_matrix.m[2].y;
        if (fVar4 != 0.0) {
          (**(code **)(*(int *)((int)fVar4 + 0x154) + 0x78))(fVar4,2);
        }
      }
      break;
    case 0x12:
      if ((((int)local_2c < 0x3f4ccccd) && (0x3f4ccccc < (int)(param_1->base).layer_action_t)) &&
         (iVar7 = core_actor_cpp_isOfClass_FUN_0040c550
                            ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                             "CRifle"), iVar7 != 0)) {
        fVar4 = param_1[1].base.base.orient_matrix.m[2].y;
        (**(code **)(*(int *)((int)fVar4 + 0x154) + 0xd8))(fVar4);
      }
    }
    if (-1 < local_44) {
      pCVar3 = (CCharacter *)param_1[1].base.base.orient_matrix.m[2].y;
      if (pCVar3 != local_20) {
        if (pCVar3 != (CCharacter *)0x0) {
          switch((pCVar3->model).bone_origins[0x19].y) {
          case 0.0:
          case 7.00649e-45:
            iVar7 = 1;
            break;
          default:
switchD_00474d6b_caseD_1:
            iVar7 = 3;
            break;
          case 9.80909e-45:
          case 1.12104e-44:
            iVar7 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar3,g_CMeleeClassInfo.name_hash);
            if ((iVar7 != 0) && (*(int *)(iVar7 + 0x588) != 0)) goto switchD_00474d6b_caseD_1;
            iVar7 = 0;
          }
          if (iVar7 == local_44) {
            fVar4 = param_1[1].base.base.orient_matrix.m[2].y;
            (**(code **)(*(int *)((int)fVar4 + 0x154) + 0xdc))(fVar4,1);
            param_1[1].base.base.orient_matrix.m[2].y = 0.0;
          }
        }
        if (*(int *)param_1[1].base.base.actor_name != 0) {
          if (local_20 == (CCharacter *)0x0) {
LAB_0047463c:
            iVar7 = 0;
          }
          else {
            switch((local_20->model).bone_origins[0x19].y) {
            case 0.0:
            case 7.00649e-45:
              iVar7 = 1;
              break;
            case 9.80909e-45:
            case 1.12104e-44:
              iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (local_20,g_CMeleeClassInfo.name_hash);
              if ((iVar7 == 0) || (*(int *)(iVar7 + 0x588) == 0)) goto LAB_0047463c;
            default:
              iVar7 = 3;
            }
          }
          if ((iVar7 == local_44) &&
             (param_1[1].base.base.orient_matrix.m[2].y = (float)local_20,
             local_20 != (CCharacter *)0x0)) {
            (*(((local_20->base).vtable._uc)->_uc).kill)
                      (local_20,2,in_stack_ffffff84,in_stack_ffffff88);
          }
        }
      }
      if ((param_1->action_pending == 1) && (local_44 == 3)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(param_1,1);
        param_1->action_pending = 0;
      }
      if ((param_1->target_actor != (CDemonActor *)0x0) && (local_44 == 3)) {
        core_inv_cpp_FUN_004f8d00(local_18,param_1->target_actor,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
                  (0x01D2C900,param_1->target_actor);
        core_charactr_cpp_FUN_004325b0(param_1,1,param_1->target_actor,0,0);
        iVar7 = core_actor_cpp_isOfClass_FUN_0040c550(param_1->target_actor,"CTrap");
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_34,0x19,1);
          if (param_1->action_pending != 0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",param_1->action_pending,
                       0x146a);
          }
          param_1->action_pending = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_34,0x17,1);
          param_1->action_pending = 6;
        }
        param_1->target_actor = (CDemonActor *)0x0;
      }
      if (local_44 == 10) {
        if (local_28 == 0) {
          param_1->is_wearing_gas_mask = GAS_MASK_IN_HAND;
        }
        else {
          param_1->is_wearing_gas_mask = GAS_MASK_ON_FACE;
        }
      }
      else if ((local_44 == 3) && ((int)param_1->is_wearing_gas_mask < 2)) {
        if (local_28 == 0) {
          param_1->is_wearing_gas_mask = GAS_MASK_AWAY;
        }
        else {
          param_1->is_wearing_gas_mask = GAS_MASK_IN_HAND;
        }
      }
      pCVar5 = g_CGamePtr;
      if (local_44 == 0xb) {
        if (local_24 == (CWeapon *)0x0) {
          param_1->is_wearing_goggles = 1;
        }
        else {
          param_1->is_wearing_goggles = 2;
        }
        (**(code **)pCVar5->vtable)(pCVar5,local_24 != (CWeapon *)0x0);
      }
      else if ((local_44 == 3) && (param_1->is_wearing_goggles < 2)) {
        if (local_24 == (CWeapon *)0x0) {
          param_1->is_wearing_goggles = 0;
        }
        else {
          param_1->is_wearing_goggles = 1;
        }
      }
      if ((param_1->action_pending == 7) && ((local_44 == 0 || (local_44 == 8)))) {
        param_1->action_pending = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00434610(&param_1->base,local_1c);
    }
    local_38 = local_38 + 1;
  } while (local_38 < 2);
  if (*(int *)param_1[1].base.base.actor_name == 0) {
    return;
  }
LAB_00474ea4:
  iVar7 = core_actor_cpp_isOfClass_FUN_0040c550
                    ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,"CFlashlight"
                    );
  if ((iVar7 != 0) && (g_CGamePtr->flashlight_active == 0)) {
    g_CGamePtr->flashlight_active = 1;
    return;
  }
  return;
}
