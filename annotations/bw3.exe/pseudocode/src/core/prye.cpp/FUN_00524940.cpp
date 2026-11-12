// Name: core_prye.cpp_FUN_00524940
// Address: 00524940
// Address Range: [[00524940, 0052592d]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_00524940(CHero *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_00524940(CHero *param_1,float param_2)

{
  CWeapon *pCVar1;
  float fVar2;
  CDemonActor *pCVar3;
  CWeapon *pCVar4;
  CMotionList *pCVar5;
  CDynamite *this_ptr;
  int iVar6;
  int iVar7;
  uint uVar8;
  CInventory *pCVar9;
  byte bVar10;
  CInventory *apCStackY_1098 [1013];
  uint uVar11;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint uStack_98;
  float local_8c;
  float afStack_88 [5];
  CVector3f local_74;
  uint local_68;
  CInventory *apCStack_64 [4];
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int iStack_40;
  int local_3c;
  CMotionController *local_38;
  int iStack_34;
  int local_30;
  float local_2c;
  CWeapon *local_28;
  int local_24;
  int local_20;
  CInventory *local_1c;
  int iStack_18;
  float local_14;
  
  bVar10 = 0;
  if (((param_1->base).layer_action_index == 0x11) &&
     ((param_1->base).carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (param_1->base).layer_action_t = 0.0;
    (param_1->base).layer_action_index = 0;
  }
  local_44 = -1;
  local_28 = (CWeapon *)0x0;
  if (param_1->nearby_interactive_actor == (CDemonActor *)0x0) {
    if (*(int *)param_1[1].base.base.actor_name == 0) goto LAB_00524997;
    pCVar3 = (param_1->base).carry_hands[1].carry_actor;
    if (pCVar3 == (CDemonActor *)0x0) {
      local_28 = (param_1->inventory).selected_weapon;
      if (((param_1->base).carry_hands[0].carry_actor != (CDemonActor *)0x0) &&
         (local_28->number_of_hands_needed == 2)) {
        local_28 = (CWeapon *)param_1[1].base.base.orient_matrix.m[2].y;
      }
    }
    else {
      local_28 = (CWeapon *)
                 core_actor_cpp_castToClassHash_FUN_0040c840(pCVar3,g_CWeaponClassInfo.name_hash);
      if ((local_28 == (CWeapon *)0x0) &&
         (pCVar3 = (param_1->base).carry_hands[1].carry_actor,
         uVar8 = (*((pCVar3->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar3), (uVar8 & 0xb) != 0))
      {
        local_44 = 8;
      }
    }
    if ((local_28 != (CWeapon *)0x0) || (-1 < local_44)) goto LAB_00524997;
  }
  *(CWeapon **)param_1[1].base.base.actor_name = local_28;
LAB_00524997:
  pCVar9 = &param_1->inventory;
  core_inv_cpp_FUN_004dcda0(pCVar9);
  core_inv_cpp_FUN_004dcda0(pCVar9);
  local_3c = 0;
  local_38 = &(param_1->base).model.base;
  apCStack_64[2] = pCVar9;
  apCStack_64[3] = pCVar9;
  local_1c = pCVar9;
  do {
    pCVar1 = local_28;
    if (param_2 <= 0.0) {
      return;
    }
    iVar7 = param_1->action_pending;
    if ((((iVar7 == 1) || (iVar7 == 8)) || (iVar7 == 9)) ||
       (param_1->target_actor != (CDemonActor *)0x0)) {
      local_20 = 3;
      iVar7 = local_20;
    }
    else if (iVar7 == 2) {
      iVar7 = 0;
    }
    else if (iVar7 == 3) {
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                           (&param_1->base,6);
      local_20 = 6;
      iVar7 = local_20;
      if ((float)_DAT_005cd7d7 < local_14) {
        fVar2 = _DAT_005e350c * param_2 + *(float *)(param_1[1].base.base.actor_name + 0x10);
        *(float *)(param_1[1].base.base.actor_name + 0x10) = fVar2;
        if (0x41A00000 < fVar2) {
          *(float *)(param_1[1].base.base.actor_name + 0x10) = 0x41A00000;
        }
        if ((param_1->player_input).action_state.fire != 0) {
          return;
        }
        iVar7 = 0;
      }
    }
    else if (local_44 < 0) {
      pCVar4 = (CWeapon *)param_1[1].base.base.orient_matrix.m[2].y;
      if (pCVar4 == local_28) {
        fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
        if (fVar2 == 0.0) {
switchD_00524e67_caseD_3:
          local_20 = 0;
          iVar7 = local_20;
        }
        else {
          switch(*(uint *)((int)fVar2 + 0x2e0)) {
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
            goto switchD_00524e67_caseD_3;
          case 4:
            iVar7 = 7;
            break;
          case 7:
          case 0xc:
            iVar7 = 8;
            break;
          case 9:
          case 10:
            iVar7 = 0xe;
            break;
          case 0xd:
            iVar7 = 0x11;
            break;
          case 0xe:
            iVar7 = 0x12;
          }
        }
      }
      else if (pCVar4 == (CWeapon *)0x0) {
        iVar7 = 0;
        if (local_28 != (CWeapon *)0x0) {
          switch(local_28->weapon_type) {
          case WEAPON_TYPE_GUN:
          case WEAPON_TYPE_FLASHLIGHT:
            iVar7 = 1;
            break;
          default:
switchD_00524f26_caseD_1:
            iVar7 = 3;
            break;
          case WEAPON_TYPE_MELEE:
          case WEAPON_TYPE_BARON:
            iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (local_28,g_CMeleeClassInfo.name_hash);
            if ((iVar7 == 0) || (*(int *)(iVar7 + 0x5a4) == 0)) {
              iVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar1,g_CHolycrossClassInfo.name_hash);
              iVar7 = 0;
              if (iVar6 != 0) goto switchD_00524f26_caseD_1;
            }
            else {
              iVar7 = 3;
            }
          }
        }
      }
      else {
        switch(pCVar4->weapon_type) {
        case WEAPON_TYPE_GUN:
        case WEAPON_TYPE_FLASHLIGHT:
          iVar7 = 1;
          break;
        default:
switchD_00524f8d_caseD_1:
          iVar7 = 3;
          break;
        case WEAPON_TYPE_MELEE:
        case WEAPON_TYPE_BARON:
          iVar7 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar4,g_CMeleeClassInfo.name_hash);
          if ((iVar7 == 0) || (*(int *)(iVar7 + 0x5a4) == 0)) {
            iVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (pCVar4,g_CHolycrossClassInfo.name_hash);
            iVar7 = 0;
            if (iVar6 != 0) goto switchD_00524f8d_caseD_1;
          }
          else {
            iVar7 = 3;
          }
        }
      }
    }
    else {
      local_20 = local_44;
      iVar7 = local_20;
    }
    local_20 = iVar7;
    local_2c = (param_1->base).layer_action_t;
    local_24 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_00433580
                         (&param_1->base,&param_2,local_20);
    iVar7 = (param_1->base).layer_actions[(param_1->base).layer_action_index].motion_index;
    pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(local_38);
    uVar8 = (param_1->base).layer_action_index;
    if (uVar8 < 0x10) {
      if (uVar8 < 0xc) {
        if (uVar8 < 7) {
          if (((uVar8 == 6) &&
              (this_ptr = (CDynamite *)
                          core_actor_cpp_castToClassHash_FUN_0040c840
                                    (param_1[1].base.base.orient_matrix.m[2].y,
                                     g_CDynamiteClassInfo.name_hash), this_ptr != (CDynamite *)0x0))
             && ((iVar6 = core_dynamite_cpp_FUN_0047b230(this_ptr), iVar6 == 0 &&
                 (local_14 = (float)(0xb / (longlong)pCVar5->motions[iVar7].frame_count),
                 (float)(int)local_14 <= (param_1->base).layer_action_t)))) {
            core_dynamite_cpp_CDynamite_lightFuse_FUN_0047b1e0(this_ptr);
          }
        }
        else if (uVar8 < 8) {
          if ((param_1->action_pending == 3) &&
             (local_14 = (float)(0xb / (longlong)pCVar5->motions[iVar7].frame_count),
             (float)(int)local_14 <= (param_1->base).layer_action_t)) {
            core_prye_cpp_FUN_00524800(param_1);
            afStack_88[2] = local_8c;
            afStack_88[(uint)bVar10 * 0xfffffffe + 3] = afStack_88[(uint)bVar10 * -2];
            afStack_88[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 4] =
                 afStack_88[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 1];
            local_74.x = afStack_88[2];
            *(float *)((int)&local_74 + (uint)bVar10 * -8 + 4) =
                 afStack_88[(uint)bVar10 * 0xfffffffe + 3];
            *(float *)((int)&local_74 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 afStack_88[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 4];
            local_30 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (param_1[1].base.base.orient_matrix.m[2].y,
                                  g_CBindEvilClassInfo.name_hash);
            if (local_30 != 0) {
              core_actor_cpp_FUN_00408b00(param_1,&local_74);
              local_a4 = local_68;
              *(CInventory **)((int)&stack0xffffff60 + (uint)bVar10 * -8) =
                   apCStack_64[(uint)bVar10 * -2];
              *(CInventory **)((int)&stack0xffffff64 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
                   apCStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              if ((uint *)(local_30 + 0x594) != &stack0xffffff5c) {
                *(uint *)(local_30 + 0x594) = local_a4;
                *(uint *)(local_30 + 0x598) = local_a0;
                *(uint *)(local_30 + 0x59c) = local_9c;
              }
              (**(code **)(*(int *)(local_30 + 0x154) + 0xe4))(local_30);
            }
            iStack_40 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (param_1[1].base.base.orient_matrix.m[2].y,
                                   g_CDiseaseClassInfo.name_hash);
            iStack_34 = iStack_40;
            if (iStack_40 != 0) {
              core_actor_cpp_FUN_00408b00(param_1,&local_74);
              uStack_b0 = uStack_98;
              *(uint *)((int)&stack0xffffff54 + (uint)bVar10 * -8) =
                   *(uint *)(&stack0xffffff6c + (uint)bVar10 * -8);
              *(uint *)((int)&stack0xffffff58 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
                   *(uint *)(&stack0xffffff70 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
              if ((uint *)(iStack_34 + 0x598) != &stack0xffffff50) {
                *(uint *)(iStack_34 + 0x598) = uStack_b0;
                *(uint *)(iStack_34 + 0x59c) = uStack_ac;
                *(uint *)(iStack_34 + 0x5a0) = uStack_a8;
              }
              (**(code **)(*(int *)(iStack_40 + 0x154) + 0xe4))(iStack_40);
            }
            if ((param_1->base).carry_hands[1].carry_actor != (CDemonActor *)0x0) {
              (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                        (&param_1->base,1,&local_74);
            }
            param_1->action_pending = 0;
            *(uint *)(param_1[1].base.base.actor_name + 0x10) = 0x41200000;
          }
          if (1.0 <= (param_1->base).layer_action_t) {
            (param_1->base).layer_action_index = 0;
            (param_1->base).layer_action_t = 0.0;
          }
        }
        else if ((((uVar8 == 8) && (local_4c = 0x3f19999a, (int)local_2c < 0x3f19999a)) &&
                 (0.6 <= (param_1->base).layer_action_t)) &&
                (iVar7 = core_actor_cpp_isOfClass_FUN_0040c790
                                   ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                                    "CShotgun"), iVar7 != 0)) {
          fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
          (**(code **)(*(int *)((int)fVar2 + 0x154) + 0xd8))(fVar2);
        }
      }
      else if (uVar8 < 0xd) {
        local_48 = 0x3ebd70a4;
        if ((((int)local_2c < 0x3ebd70a4) && (0.37 <= (param_1->base).layer_action_t)) &&
           ((fVar2 = param_1[1].base.base.orient_matrix.m[2].y, fVar2 != 0.0 &&
            (iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840(fVar2,g_CWeaponClassInfo.name_hash)
            , iVar7 != 0)))) {
          if (*(int *)(iVar7 + 0x56c) == 9) {
            (**(code **)(*(int *)(iVar7 + 0x154) + 0x78))(iVar7,8);
          }
          else {
            (**(code **)(*(int *)(iVar7 + 0x154) + 0x78))(iVar7,1);
          }
        }
      }
      else {
        if (((param_1->action_pending == 7) &&
            ((float)_DAT_005cd7e7 <= (param_1->base).layer_action_t)) &&
           ((fVar2 = param_1[1].base.base.orient_matrix.m[2].y, fVar2 != 0.0 &&
            (iVar7 = (**(code **)(*(int *)((int)fVar2 + 0x154) + 0x78))(fVar2,2), iVar7 != 0)))) {
          param_1->action_pending = 0;
        }
        if ((float)_DAT_005cd7d7 < (param_1->base).layer_action_t) {
          (param_1->base).layer_action_t = 1.0;
          param_1->action_pending = 0;
          (param_1->base).layer_action_index = 0xb;
        }
      }
    }
    else if (uVar8 < 0x11) {
      local_50 = 0x3f28f5c3;
      if (((int)local_2c < 0x3f28f5c3) && (0.66 <= (param_1->base).layer_action_t)) {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (param_1[1].base.base.orient_matrix.m[2].y,g_CWeaponClassInfo.name_hash);
        if (iVar7 != 0) {
          if (*(int *)(iVar7 + 0x56c) == 9) {
            uVar11 = 8;
          }
          else {
            uVar11 = 1;
          }
          (**(code **)(*(int *)(iVar7 + 0x154) + 0x78))(iVar7,uVar11);
        }
        fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
        if (fVar2 != 0.0) {
          (**(code **)(*(int *)((int)fVar2 + 0x154) + 0x78))(fVar2,2);
        }
      }
    }
    else if (uVar8 < 0x1b) {
      if (uVar8 < 0x19) {
        if ((((uVar8 == 0x15) && (local_54 = 0x3f4ccccd, (int)local_2c < 0x3f4ccccd)) &&
            (0.8 <= (param_1->base).layer_action_t)) &&
           (iVar7 = core_actor_cpp_isOfClass_FUN_0040c790
                              ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                               "CRifle"), iVar7 != 0)) {
          fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
          (**(code **)(*(int *)((int)fVar2 + 0x154) + 0xd8))(fVar2);
        }
      }
      else if (uVar8 < 0x1a) {
        if ((float)_DAT_005cd7d7 < (param_1->base).layer_action_t) {
          (param_1->base).layer_action_t = 1.0;
          (param_1->base).layer_action_index = 0x1a;
        }
      }
      else if ((param_1->base).layer_action_t < (float)_DAT_005cd7ef) {
        (param_1->base).layer_action_t = 1.0;
        (param_1->base).layer_action_index = 1;
      }
    }
    else if (uVar8 < 0x1c) {
      if ((param_1->action_pending == 0xb) &&
         ((float)_DAT_005cd7e7 < (param_1->base).layer_action_t)) {
        fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
        if ((fVar2 != 0.0) &&
           (iVar7 = (**(code **)(*(int *)((int)fVar2 + 0x154) + 0xe8))(fVar2), iVar7 != 0)) {
          fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
          (**(code **)(*(int *)((int)fVar2 + 0x154) + 0xe4))(fVar2);
        }
        param_1->action_pending = 0;
      }
      if ((float)_DAT_005cd7d7 < (param_1->base).layer_action_t) {
        (param_1->base).layer_action_t = 1.0;
        param_1->action_pending = 0;
        (param_1->base).layer_action_index = 0xb;
      }
    }
    else if (uVar8 < 0x1f) {
      if (uVar8 == 0x1c) {
        if ((param_1->action_pending == 10) &&
           ((float)_DAT_005cd7e7 < (param_1->base).layer_action_t)) {
          fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
          if ((fVar2 != 0.0) &&
             (iVar7 = (**(code **)(*(int *)((int)fVar2 + 0x154) + 0xe8))(fVar2), iVar7 != 0)) {
            fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
            (**(code **)(*(int *)((int)fVar2 + 0x154) + 0xe4))(fVar2);
          }
          param_1->action_pending = 0;
        }
        if ((float)_DAT_005cd7d7 < (param_1->base).layer_action_t) {
          (param_1->base).layer_action_t = 1.0;
          param_1->action_pending = 0;
          (param_1->base).layer_action_index = 0xb;
        }
      }
    }
    else if (uVar8 < 0x20) {
      if ((param_1->action_pending == 0xc) &&
         ((float)_DAT_005cd7e7 < (param_1->base).layer_action_t)) {
        fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
        if ((fVar2 != 0.0) &&
           (iVar7 = (**(code **)(*(int *)((int)fVar2 + 0x154) + 0xe8))(fVar2), iVar7 != 0)) {
          fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
          (**(code **)(*(int *)((int)fVar2 + 0x154) + 0xe4))(fVar2);
        }
        param_1->action_pending = 0;
      }
      if ((float)_DAT_005cd7d7 < (param_1->base).layer_action_t) {
        (param_1->base).layer_action_t = 1.0;
        param_1->action_pending = 0;
        (param_1->base).layer_action_index = 0x1d;
      }
    }
    else if (uVar8 == 0x20) {
      if ((param_1->action_pending == 0xd) &&
         ((float)_DAT_005cd7df < (param_1->base).layer_action_t)) {
        fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
        if ((fVar2 != 0.0) &&
           (iVar7 = (**(code **)(*(int *)((int)fVar2 + 0x154) + 0xe8))(fVar2), iVar7 != 0)) {
          fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
          (**(code **)(*(int *)((int)fVar2 + 0x154) + 0xe4))(fVar2);
        }
        param_1->action_pending = 0;
      }
      if ((float)_DAT_005cd7d7 < (param_1->base).layer_action_t) {
        (param_1->base).layer_action_t = 1.0;
        param_1->action_pending = 0;
        (param_1->base).layer_action_index = 0x1e;
      }
    }
    if (-1 < local_24) {
      pCVar1 = (CWeapon *)param_1[1].base.base.orient_matrix.m[2].y;
      if (pCVar1 != local_28) {
        if (pCVar1 != (CWeapon *)0x0) {
          switch(pCVar1->weapon_type) {
          case WEAPON_TYPE_GUN:
          case WEAPON_TYPE_FLASHLIGHT:
            iVar7 = 1;
            break;
          default:
switchD_00525735_caseD_1:
            iVar7 = 3;
            break;
          case WEAPON_TYPE_MELEE:
          case WEAPON_TYPE_BARON:
            iVar7 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,g_CMeleeClassInfo.name_hash);
            if ((iVar7 == 0) || (*(int *)(iVar7 + 0x5a4) == 0)) {
              iVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar1,g_CHolycrossClassInfo.name_hash);
              iVar7 = 0;
              if (iVar6 != 0) goto switchD_00525735_caseD_1;
            }
            else {
              iVar7 = 3;
            }
          }
          if (iVar7 == local_24) {
            fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
            (**(code **)(*(int *)((int)fVar2 + 0x154) + 0xdc))(fVar2,1);
            iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (param_1[1].base.base.orient_matrix.m[2].y,g_CSpsClassInfo.name_hash);
            if (iVar7 != 0) {
              core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS")
              ;
            }
            param_1[1].base.base.orient_matrix.m[2].y = 0.0;
          }
        }
        pCVar1 = local_28;
        if (*(int *)param_1[1].base.base.actor_name != 0) {
          if (local_28 == (CWeapon *)0x0) {
            iVar7 = 0;
          }
          else {
            switch(local_28->weapon_type) {
            case WEAPON_TYPE_GUN:
            case WEAPON_TYPE_FLASHLIGHT:
              iVar7 = 1;
              break;
            default:
switchD_00525799_caseD_1:
              iVar7 = 3;
              break;
            case WEAPON_TYPE_MELEE:
            case WEAPON_TYPE_BARON:
              iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (local_28,g_CMeleeClassInfo.name_hash);
              if ((iVar7 == 0) || (*(int *)(iVar7 + 0x5a4) == 0)) {
                iVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (pCVar1,g_CHolycrossClassInfo.name_hash);
                iVar7 = 0;
                if (iVar6 != 0) goto switchD_00525799_caseD_1;
              }
              else {
                iVar7 = 3;
              }
            }
          }
          if (iVar7 == local_24) {
            fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
            if (fVar2 != 0.0) {
              (**(code **)(*(int *)((int)fVar2 + 0x154) + 0xdc))(fVar2,1);
            }
            uVar8 = g_CSpsClassInfo.name_hash;
            param_1[1].base.base.orient_matrix.m[2].y = (float)local_28;
            iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840(local_28,uVar8);
            if (iVar7 != 0) {
              core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS")
              ;
            }
            fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
            if (fVar2 != 0.0) {
              (**(code **)(*(int *)((int)fVar2 + 0x154) + 0xdc))(fVar2,2);
            }
          }
        }
      }
      if ((param_1->action_pending == 1) && (local_24 == 3)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004d41a0(param_1,1);
LAB_00524bde:
        param_1->action_pending = 0;
      }
      else {
        if ((param_1->action_pending == 8) && (local_24 == 3)) {
          fVar2 = param_1[1].base.base.orient_matrix.m[2].y;
          if (((fVar2 == 0.0) || (*(int *)((int)fVar2 + 0x578) == 1)) &&
             (iVar7 = core_inv_cpp_FUN_004dba80(apCStack_64[3],"CLightActor"), iVar7 != 0))
          {
            pCVar9 = local_1c;
            for (iStack_18 = 0; iStack_18 < local_1c->item_count; iStack_18 = iStack_18 + 1) {
              iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar9->items[0],DAT_007e1a50);
              if (iVar7 != 0) {
                core_charactr_cpp_FUN_004319d0(param_1,0,iVar7,0,0);
                *(uint *)(iVar7 + 0x23a0) = 1;
                param_1->light_radius = 15.0;
                break;
              }
              pCVar9 = (CInventory *)&pCVar9->owner;
            }
          }
          goto LAB_00524bde;
        }
        if ((param_1->action_pending == 9) && (local_24 == 3)) {
          iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                            ((param_1->base).carry_hands[0].carry_actor,DAT_007e1a50);
          if (iVar7 != 0) {
            iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                              ((param_1->base).carry_hands[0].carry_actor,DAT_007e1a50);
            *(uint *)(iVar7 + 0x23a0) = 0;
            (param_1->base).carry_hands[0].carry_actor = (CDemonActor *)0x0;
            param_1->light_radius = 0.0;
          }
          goto LAB_00524bde;
        }
      }
      if ((param_1->target_actor != (CDemonActor *)0x0) && (local_24 == 3)) {
        core_inv_cpp_CInventory_removeItem_FUN_004dbaa0(apCStack_64[2],param_1->target_actor,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                  (0x01D81080,param_1->target_actor);
        core_charactr_cpp_FUN_004319d0(param_1,1,param_1->target_actor,0,0);
        iVar7 = core_actor_cpp_isOfClass_FUN_0040c790(param_1->target_actor,"CTrap");
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(local_38,0x21,1);
          if (param_1->action_pending != 0) {
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",param_1->action_pending
                       ,0x172a);
          }
          param_1->action_pending = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(local_38,0x1f,1);
          param_1->action_pending = 6;
        }
        param_1->target_actor = (CDemonActor *)0x0;
      }
      if ((param_1->action_pending == 7) && ((local_24 == 0 || (local_24 == 8)))) {
        param_1->action_pending = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0(&param_1->base,local_20);
    }
    local_3c = local_3c + 1;
    if (1 < local_3c) {
      return;
    }
  } while( true );
}
