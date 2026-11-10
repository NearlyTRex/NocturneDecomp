// Name: unkafter_prye.cpp_FUN_00524940
// Address: 00524940
// Address Range: [[00524940, 0052592d]]
// Convention: unknown
// Signature: void unkafter_prye_cpp_FUN_00524940(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_prye_cpp_FUN_00524940(CCharacter *param_1,float param_2)

{
  float fVar1;
  CDemonActor *item_to_remove;
  float fVar2;
  CFlame *pCVar3;
  CMotionList *pCVar4;
  CDynamite *this_ptr;
  int iVar5;
  uint uVar6;
  int iVar7;
  CInventory *pCVar8;
  byte bVar9;
  CInventory *apCStackY_1098 [1013];
  uint uVar10;
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
  float local_28;
  int local_24;
  int local_20;
  CInventory *local_1c;
  int iStack_18;
  float local_14;
  
  bVar9 = 0;
  if ((param_1->layer_action_index == 0x11) && (*(int *)&param_1->field_0x2628 == 0)) {
    param_1->layer_action_t = 0.0;
    param_1->layer_action_index = 0;
  }
  local_44 = -1;
  local_28 = 0.0;
  if (param_1[2].flames[0x15].base.orient_matrix.m[0].y == 0.0) {
    if (param_1[2].flames[0x15].base.health == 0) goto LAB_00524997;
    if (*(int *)&param_1->field_0x2628 == 0) {
      local_28 = param_1[2].flames[0x14].flame_size.y;
      if ((*(int *)&param_1->field_0x25b0 != 0) && (*(int *)((int)local_28 + 0x578) == 2)) {
        local_28 = *(float *)(param_1[2].flames[0x15].base.create_event + 0x44);
      }
    }
    else {
      local_28 = (float)core_actor_cpp_castToClassHash_FUN_0040c840
                                  (*(int *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash);
      if ((local_28 == 0.0) &&
         (uVar6 = (**(code **)(*(int *)(*(int *)&param_1->field_0x2628 + 0x154) + 0x74))
                            (*(int *)&param_1->field_0x2628), (uVar6 & 0xb) != 0)) {
        local_44 = 8;
      }
    }
    if ((local_28 != 0.0) || (-1 < local_44)) goto LAB_00524997;
  }
  param_1[2].flames[0x15].base.health = (int)local_28;
LAB_00524997:
  pCVar8 = (CInventory *)(param_1[2].flames[0x13].base.create_event + 0x50);
  core_inv_cpp_FUN_004dcda0(pCVar8);
  core_inv_cpp_FUN_004dcda0(pCVar8);
  local_3c = 0;
  local_38 = &(param_1->model).base;
  apCStack_64[2] = pCVar8;
  apCStack_64[3] = pCVar8;
  local_1c = pCVar8;
  do {
    fVar1 = local_28;
    if (param_2 <= 0.0) {
      return;
    }
    iVar7 = param_1[2].flames[0x14].render_corona;
    if ((((iVar7 == 1) || (iVar7 == 8)) || (iVar7 == 9)) ||
       (param_1[2].flames[0x15].base.orient_matrix.m[0].z != 0.0)) {
      local_20 = 3;
      iVar7 = local_20;
    }
    else if (iVar7 == 2) {
      iVar7 = 0;
    }
    else if (iVar7 == 3) {
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,6);
      local_20 = 6;
      iVar7 = local_20;
      if ((float)_DAT_005cd7d7 < local_14) {
        fVar1 = _DAT_005e350c * param_2 + param_1[2].flames[0x15].base.create_prob;
        param_1[2].flames[0x15].base.create_prob = fVar1;
        if (0x41A00000 < fVar1) {
          param_1[2].flames[0x15].base.create_prob = 0x41A00000;
        }
        if (*(int *)(param_1[1].base.actor_name + 0x14) != 0) {
          return;
        }
        iVar7 = 0;
      }
    }
    else if (local_44 < 0) {
      fVar2 = *(float *)(param_1[2].flames[0x15].base.create_event + 0x44);
      if (fVar2 == local_28) {
        iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
        if (iVar7 == 0) {
switchD_00524e67_caseD_3:
          local_20 = 0;
          iVar7 = local_20;
        }
        else {
          switch(*(uint *)(iVar7 + 0x2e0)) {
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
      else if (fVar2 == 0.0) {
        iVar7 = 0;
        if (local_28 != 0.0) {
          switch(*(uint *)((int)local_28 + 0x2e0)) {
          case 0:
          case 5:
            iVar7 = 1;
            break;
          default:
switchD_00524f26_caseD_1:
            iVar7 = 3;
            break;
          case 7:
          case 8:
            iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (local_28,g_CMeleeClassInfo.name_hash);
            if ((iVar7 == 0) || (*(int *)(iVar7 + 0x5a4) == 0)) {
              iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (fVar1,g_CHolycrossClassInfo.name_hash);
              iVar7 = 0;
              if (iVar5 != 0) goto switchD_00524f26_caseD_1;
            }
            else {
              iVar7 = 3;
            }
          }
        }
      }
      else {
        switch(*(uint *)((int)fVar2 + 0x2e0)) {
        case 0:
        case 5:
          iVar7 = 1;
          break;
        default:
switchD_00524f8d_caseD_1:
          iVar7 = 3;
          break;
        case 7:
        case 8:
          iVar7 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(fVar2,g_CMeleeClassInfo.name_hash);
          if ((iVar7 == 0) || (*(int *)(iVar7 + 0x5a4) == 0)) {
            iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (fVar2,g_CHolycrossClassInfo.name_hash);
            iVar7 = 0;
            if (iVar5 != 0) goto switchD_00524f8d_caseD_1;
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
    local_2c = param_1->layer_action_t;
    local_24 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_00433580
                         (param_1,&param_2,local_20);
    iVar7 = *(int *)(param_1->layer_actions + param_1->layer_action_index * 0x38 + 0x2c) * 0x120;
    pCVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(local_38);
    uVar6 = param_1->layer_action_index;
    if (uVar6 < 0x10) {
      if (uVar6 < 0xc) {
        if (uVar6 < 7) {
          if (((uVar6 == 6) &&
              (this_ptr = (CDynamite *)
                          core_actor_cpp_castToClassHash_FUN_0040c840
                                    (*(uint *)
                                      (param_1[2].flames[0x15].base.create_event + 0x44),
                                     g_CDynamiteClassInfo.name_hash), this_ptr != (CDynamite *)0x0))
             && ((iVar5 = core_dynamite_cpp_FUN_0047b230(this_ptr), iVar5 == 0 &&
                 (local_14 = (float)(0xb / (longlong)*(int *)(pCVar4 + iVar7 + 0x1c8c)),
                 (float)(int)local_14 <= param_1->layer_action_t)))) {
            core_dynamite_cpp_CDynamite_lightFuse_FUN_0047b1e0(this_ptr);
          }
        }
        else if (uVar6 < 8) {
          if ((param_1[2].flames[0x14].render_corona == 3) &&
             (local_14 = (float)(0xb / (longlong)*(int *)(pCVar4 + iVar7 + 0x1c8c)),
             (float)(int)local_14 <= param_1->layer_action_t)) {
            unkafter_prye_cpp_FUN_00524800(param_1);
            afStack_88[2] = local_8c;
            afStack_88[(uint)bVar9 * 0xfffffffe + 3] = afStack_88[(uint)bVar9 * -2];
            afStack_88[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 4] =
                 afStack_88[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 1];
            local_74.x = afStack_88[2];
            *(float *)((int)&local_74 + (uint)bVar9 * -8 + 4) =
                 afStack_88[(uint)bVar9 * 0xfffffffe + 3];
            *(float *)((int)&local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                 afStack_88[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 4];
            local_30 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (*(uint *)(param_1[2].flames[0x15].base.create_event + 0x44),
                                  g_CBindEvilClassInfo.name_hash);
            if (local_30 != 0) {
              core_actor_cpp_FUN_00408b00(param_1,&local_74);
              local_a4 = local_68;
              *(CInventory **)((int)&stack0xffffff60 + (uint)bVar9 * -8) =
                   apCStack_64[(uint)bVar9 * -2];
              *(CInventory **)((int)&stack0xffffff64 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                   apCStack_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              if ((uint *)(local_30 + 0x594) != &stack0xffffff5c) {
                *(uint *)(local_30 + 0x594) = local_a4;
                *(uint *)(local_30 + 0x598) = local_a0;
                *(uint *)(local_30 + 0x59c) = local_9c;
              }
              (**(code **)(*(int *)(local_30 + 0x154) + 0xe4))(local_30);
            }
            iStack_40 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (*(uint *)(param_1[2].flames[0x15].base.create_event + 0x44)
                                   ,g_CDiseaseClassInfo.name_hash);
            iStack_34 = iStack_40;
            if (iStack_40 != 0) {
              core_actor_cpp_FUN_00408b00(param_1,&local_74);
              uStack_b0 = uStack_98;
              *(uint *)((int)&stack0xffffff54 + (uint)bVar9 * -8) =
                   *(uint *)(&stack0xffffff6c + (uint)bVar9 * -8);
              *(uint *)((int)&stack0xffffff58 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                   *(uint *)(&stack0xffffff70 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
              if ((uint *)(iStack_34 + 0x598) != &stack0xffffff50) {
                *(uint *)(iStack_34 + 0x598) = uStack_b0;
                *(uint *)(iStack_34 + 0x59c) = uStack_ac;
                *(uint *)(iStack_34 + 0x5a0) = uStack_a8;
              }
              (**(code **)(*(int *)(iStack_40 + 0x154) + 0xe4))(iStack_40);
            }
            if (*(int *)&param_1->field_0x2628 != 0) {
              (*(((param_1->base).vtable._uc)->_uc).dropCarriedObject)(param_1,1,&local_74);
            }
            param_1[2].flames[0x14].render_corona = 0;
            param_1[2].flames[0x15].base.create_prob = 0x41200000;
          }
          if (1.0 <= param_1->layer_action_t) {
            param_1->layer_action_index = 0;
            param_1->layer_action_t = 0.0;
          }
        }
        else if ((((uVar6 == 8) && (local_4c = 0x3f19999a, (int)local_2c < 0x3f19999a)) &&
                 (0.6 <= param_1->layer_action_t)) &&
                (iVar7 = core_actor_cpp_isOfClass_FUN_0040c790
                                   (*(CDemonActor **)
                                     (param_1[2].flames[0x15].base.create_event + 0x44),
                                    "CShotgun"), iVar7 != 0)) {
          iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
          (**(code **)(*(int *)(iVar7 + 0x154) + 0xd8))(iVar7);
        }
      }
      else if (uVar6 < 0xd) {
        local_48 = 0x3ebd70a4;
        if ((((int)local_2c < 0x3ebd70a4) && (0.37 <= param_1->layer_action_t)) &&
           ((iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44), iVar7 != 0 &&
            (iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar7,g_CWeaponClassInfo.name_hash)
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
        if (((param_1[2].flames[0x14].render_corona == 7) &&
            ((float)_DAT_005cd7e7 <= param_1->layer_action_t)) &&
           ((iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44), iVar7 != 0 &&
            (iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x78))(iVar7,2), iVar7 != 0)))) {
          param_1[2].flames[0x14].render_corona = 0;
        }
        if ((float)_DAT_005cd7d7 < param_1->layer_action_t) {
          param_1->layer_action_t = 1.0;
          param_1[2].flames[0x14].render_corona = 0;
          param_1->layer_action_index = 0xb;
        }
      }
    }
    else if (uVar6 < 0x11) {
      local_50 = 0x3f28f5c3;
      if (((int)local_2c < 0x3f28f5c3) && (0.66 <= param_1->layer_action_t)) {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)(param_1[2].flames[0x15].base.create_event + 0x44),
                           g_CWeaponClassInfo.name_hash);
        if (iVar7 != 0) {
          if (*(int *)(iVar7 + 0x56c) == 9) {
            uVar10 = 8;
          }
          else {
            uVar10 = 1;
          }
          (**(code **)(*(int *)(iVar7 + 0x154) + 0x78))(iVar7,uVar10);
        }
        iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
        if (iVar7 != 0) {
          (**(code **)(*(int *)(iVar7 + 0x154) + 0x78))(iVar7,2);
        }
      }
    }
    else if (uVar6 < 0x1b) {
      if (uVar6 < 0x19) {
        if ((((uVar6 == 0x15) && (local_54 = 0x3f4ccccd, (int)local_2c < 0x3f4ccccd)) &&
            (0.8 <= param_1->layer_action_t)) &&
           (iVar7 = core_actor_cpp_isOfClass_FUN_0040c790
                              (*(CDemonActor **)(param_1[2].flames[0x15].base.create_event + 0x44),
                               "CRifle"), iVar7 != 0)) {
          iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
          (**(code **)(*(int *)(iVar7 + 0x154) + 0xd8))(iVar7);
        }
      }
      else if (uVar6 < 0x1a) {
        if ((float)_DAT_005cd7d7 < param_1->layer_action_t) {
          param_1->layer_action_t = 1.0;
          param_1->layer_action_index = 0x1a;
        }
      }
      else if (param_1->layer_action_t < (float)_DAT_005cd7ef) {
        param_1->layer_action_t = 1.0;
        param_1->layer_action_index = 1;
      }
    }
    else if (uVar6 < 0x1c) {
      if ((param_1[2].flames[0x14].render_corona == 0xb) &&
         ((float)_DAT_005cd7e7 < param_1->layer_action_t)) {
        iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
        if ((iVar7 != 0) &&
           (iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0xe8))(iVar7), iVar7 != 0)) {
          iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
          (**(code **)(*(int *)(iVar7 + 0x154) + 0xe4))(iVar7);
        }
        param_1[2].flames[0x14].render_corona = 0;
      }
      if ((float)_DAT_005cd7d7 < param_1->layer_action_t) {
        param_1->layer_action_t = 1.0;
        param_1[2].flames[0x14].render_corona = 0;
        param_1->layer_action_index = 0xb;
      }
    }
    else if (uVar6 < 0x1f) {
      if (uVar6 == 0x1c) {
        if ((param_1[2].flames[0x14].render_corona == 10) &&
           ((float)_DAT_005cd7e7 < param_1->layer_action_t)) {
          iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
          if ((iVar7 != 0) &&
             (iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0xe8))(iVar7), iVar7 != 0)) {
            iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
            (**(code **)(*(int *)(iVar7 + 0x154) + 0xe4))(iVar7);
          }
          param_1[2].flames[0x14].render_corona = 0;
        }
        if ((float)_DAT_005cd7d7 < param_1->layer_action_t) {
          param_1->layer_action_t = 1.0;
          param_1[2].flames[0x14].render_corona = 0;
          param_1->layer_action_index = 0xb;
        }
      }
    }
    else if (uVar6 < 0x20) {
      if ((param_1[2].flames[0x14].render_corona == 0xc) &&
         ((float)_DAT_005cd7e7 < param_1->layer_action_t)) {
        iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
        if ((iVar7 != 0) &&
           (iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0xe8))(iVar7), iVar7 != 0)) {
          iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
          (**(code **)(*(int *)(iVar7 + 0x154) + 0xe4))(iVar7);
        }
        param_1[2].flames[0x14].render_corona = 0;
      }
      if ((float)_DAT_005cd7d7 < param_1->layer_action_t) {
        param_1->layer_action_t = 1.0;
        param_1[2].flames[0x14].render_corona = 0;
        param_1->layer_action_index = 0x1d;
      }
    }
    else if (uVar6 == 0x20) {
      if ((param_1[2].flames[0x14].render_corona == 0xd) &&
         ((float)_DAT_005cd7df < param_1->layer_action_t)) {
        iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
        if ((iVar7 != 0) &&
           (iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0xe8))(iVar7), iVar7 != 0)) {
          iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
          (**(code **)(*(int *)(iVar7 + 0x154) + 0xe4))(iVar7);
        }
        param_1[2].flames[0x14].render_corona = 0;
      }
      if ((float)_DAT_005cd7d7 < param_1->layer_action_t) {
        param_1->layer_action_t = 1.0;
        param_1[2].flames[0x14].render_corona = 0;
        param_1->layer_action_index = 0x1e;
      }
    }
    if (-1 < local_24) {
      fVar1 = *(float *)(param_1[2].flames[0x15].base.create_event + 0x44);
      if (fVar1 != local_28) {
        if (fVar1 != 0.0) {
          switch(*(uint *)((int)fVar1 + 0x2e0)) {
          case 0:
          case 5:
            iVar7 = 1;
            break;
          default:
switchD_00525735_caseD_1:
            iVar7 = 3;
            break;
          case 7:
          case 8:
            iVar7 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(fVar1,g_CMeleeClassInfo.name_hash);
            if ((iVar7 == 0) || (*(int *)(iVar7 + 0x5a4) == 0)) {
              iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (fVar1,g_CHolycrossClassInfo.name_hash);
              iVar7 = 0;
              if (iVar5 != 0) goto switchD_00525735_caseD_1;
            }
            else {
              iVar7 = 3;
            }
          }
          if (iVar7 == local_24) {
            iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
            (**(code **)(*(int *)(iVar7 + 0x154) + 0xdc))(iVar7,1);
            iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(uint *)(param_1[2].flames[0x15].base.create_event + 0x44),
                               g_CSpsClassInfo.name_hash);
            if (iVar7 != 0) {
              core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS")
              ;
            }
            pCVar3 = param_1[2].flames + 0x15;
            (pCVar3->base).create_event[0x44] = '\0';
            (pCVar3->base).create_event[0x45] = '\0';
            (pCVar3->base).create_event[0x46] = '\0';
            (pCVar3->base).create_event[0x47] = '\0';
          }
        }
        fVar1 = local_28;
        if (param_1[2].flames[0x15].base.health != 0) {
          if (local_28 == 0.0) {
            iVar7 = 0;
          }
          else {
            switch(*(uint *)((int)local_28 + 0x2e0)) {
            case 0:
            case 5:
              iVar7 = 1;
              break;
            default:
switchD_00525799_caseD_1:
              iVar7 = 3;
              break;
            case 7:
            case 8:
              iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (local_28,g_CMeleeClassInfo.name_hash);
              if ((iVar7 == 0) || (*(int *)(iVar7 + 0x5a4) == 0)) {
                iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (fVar1,g_CHolycrossClassInfo.name_hash);
                iVar7 = 0;
                if (iVar5 != 0) goto switchD_00525799_caseD_1;
              }
              else {
                iVar7 = 3;
              }
            }
          }
          if (iVar7 == local_24) {
            iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
            if (iVar7 != 0) {
              (**(code **)(*(int *)(iVar7 + 0x154) + 0xdc))(iVar7,1);
            }
            uVar6 = g_CSpsClassInfo.name_hash;
            *(float *)(param_1[2].flames[0x15].base.create_event + 0x44) = local_28;
            iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840(local_28,uVar6);
            if (iVar7 != 0) {
              core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS")
              ;
            }
            iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
            if (iVar7 != 0) {
              (**(code **)(*(int *)(iVar7 + 0x154) + 0xdc))(iVar7,2);
            }
          }
        }
      }
      if ((param_1[2].flames[0x14].render_corona == 1) && (local_24 == 3)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004d41a0((CHero *)param_1,1);
LAB_00524bde:
        param_1[2].flames[0x14].render_corona = 0;
      }
      else {
        if ((param_1[2].flames[0x14].render_corona == 8) && (local_24 == 3)) {
          iVar7 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
          if (((iVar7 == 0) || (*(int *)(iVar7 + 0x578) == 1)) &&
             (iVar7 = core_inv_cpp_FUN_004dba80(apCStack_64[3],"CLightActor"), iVar7 != 0))
          {
            pCVar8 = local_1c;
            for (iStack_18 = 0; iStack_18 < *(int *)(local_1c + 0x10); iStack_18 = iStack_18 + 1) {
              iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (*(CPlatform **)(pCVar8 + 0x14),DAT_007e1a50);
              if (iVar7 != 0) {
                core_charactr_cpp_FUN_004319d0(param_1,0,iVar7,0,0);
                *(uint *)(iVar7 + 0x23a0) = 1;
                param_1[2].flames[0x15].base.location.position.x = 15.0;
                break;
              }
              pCVar8 = pCVar8 + 4;
            }
          }
          goto LAB_00524bde;
        }
        if ((param_1[2].flames[0x14].render_corona == 9) && (local_24 == 3)) {
          iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&param_1->field_0x25b0,DAT_007e1a50);
          if (iVar7 != 0) {
            iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(uint *)&param_1->field_0x25b0,DAT_007e1a50);
            *(uint *)(iVar7 + 0x23a0) = 0;
            *(uint *)&param_1->field_0x25b0 = 0;
            param_1[2].flames[0x15].base.location.position.x = 0.0;
          }
          goto LAB_00524bde;
        }
      }
      item_to_remove = (CDemonActor *)param_1[2].flames[0x15].base.orient_matrix.m[0].z;
      if ((item_to_remove != (CDemonActor *)0x0) && (local_24 == 3)) {
        core_inv_cpp_CInventory_removeItem_FUN_004dbaa0(apCStack_64[2],item_to_remove,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                  (0x01D81080,(CDemonActor *)param_1[2].flames[0x15].base.orient_matrix.m[0].z);
        core_charactr_cpp_FUN_004319d0
                  (param_1,1,param_1[2].flames[0x15].base.orient_matrix.m[0].z,0,0);
        iVar7 = core_actor_cpp_isOfClass_FUN_0040c790
                          ((CDemonActor *)param_1[2].flames[0x15].base.orient_matrix.m[0].z,
                           "CTrap");
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(local_38,0x21,1);
          iVar7 = param_1[2].flames[0x14].render_corona;
          if (iVar7 != 0) {
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",iVar7,0x172a);
          }
          param_1[2].flames[0x14].render_corona = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(local_38,0x1f,1);
          param_1[2].flames[0x14].render_corona = 6;
        }
        param_1[2].flames[0x15].base.orient_matrix.m[0].z = 0.0;
      }
      if ((param_1[2].flames[0x14].render_corona == 7) && ((local_24 == 0 || (local_24 == 8)))) {
        param_1[2].flames[0x14].render_corona = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0(param_1,local_20);
    }
    local_3c = local_3c + 1;
    if (1 < local_3c) {
      return;
    }
  } while( true );
}
