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
  CHero *pCVar1;
  CMotionList *pCVar2;
  CDynamite *this_ptr;
  int iVar3;
  CDemonActor *pCVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  CDemonActor *pCVar8;
  CVector3f *pCVar9;
  float *pfVar10;
  CInventory *pCVar11;
  byte bVar12;
  float afStackY_1094 [18];
  CInventory *apCStackY_104c [995];
  CDemonActor *in_stack_ffffff54;
  float afStack_a8 [4];
  float fStack_98;
  CDemonActor *pCStack_94;
  float afStack_90 [5];
  float fStack_7c;
  CVector3f CStack_70;
  float fStack_64;
  CInventory *apCStack_60 [4];
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int iStack_40;
  CCharacter *local_3c;
  int local_38;
  CMotionController *pCStack_34;
  CCharacter *local_30;
  CCharacter *local_2c;
  CWeapon *local_28;
  CDemonActor *local_24;
  int local_20;
  int local_1c;
  CInventory *pCStack_18;
  int local_14;
  
  bVar12 = 0;
  if (((param_1->base).layer_action_index == 0x11) &&
     ((param_1->base).carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (param_1->base).layer_action_t = 0.0;
    (param_1->base).layer_action_index = 0;
  }
  local_44 = 0xffffffff;
  local_28 = (CWeapon *)0x0;
  if (param_1->nearby_interactive_actor == (CDemonActor *)0x0) {
    if (*(int *)param_1[1].base.base.actor_name == 0) goto LAB_00524997;
    pCVar4 = (param_1->base).carry_hands[1].carry_actor;
    if (pCVar4 == (CDemonActor *)0x0) {
      local_28 = (param_1->inventory).selected_weapon;
      if (((param_1->base).carry_hands[0].carry_actor != (CDemonActor *)0x0) &&
         (local_28->number_of_hands_needed == 2)) {
        local_28 = (CWeapon *)param_1[1].base.base.orient_matrix.m[2].y;
      }
    }
    else {
      local_28 = (CWeapon *)
                 core_actor_cpp_castToClassHash_FUN_0040c840(pCVar4,g_CWeaponClassInfo.name_hash);
      if ((local_28 == (CWeapon *)0x0) &&
         (pCVar4 = (param_1->base).carry_hands[1].carry_actor,
         uVar6 = (*((pCVar4->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar4), (uVar6 & 0xb) != 0))
      {
        iStack_40 = 8;
      }
    }
    if ((local_24 != (CDemonActor *)0x0) || (-1 < iStack_40)) goto LAB_00524997;
  }
  pCVar1 = param_1 + 1;
  (pCVar1->base).base.actor_name[0] = '\0';
  (pCVar1->base).base.actor_name[1] = '\0';
  (pCVar1->base).base.actor_name[2] = '\0';
  (pCVar1->base).base.actor_name[3] = '\0';
LAB_00524997:
  pCVar11 = &param_1->inventory;
  core_inv_cpp_FUN_004dcda0(pCVar11);
  core_inv_cpp_FUN_004dcda0(pCVar11);
  local_38 = 0;
  pCStack_34 = &(param_1->base).model.base;
  apCStack_60[2] = pCVar11;
  apCStack_60[3] = pCVar11;
  pCStack_18 = pCVar11;
  do {
    pCVar4 = local_24;
    if (param_2 <= 0.0) {
      return;
    }
    iVar5 = param_1->action_pending;
    if ((((iVar5 == 1) || (iVar5 == 8)) || (iVar5 == 9)) ||
       (param_1->target_actor != (CDemonActor *)0x0)) {
      local_1c = 3;
      iVar5 = local_1c;
    }
    else if (iVar5 == 2) {
      iVar5 = 0;
    }
    else if (iVar5 == 3) {
      fVar7 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(&param_1->base,6);
      local_1c = 6;
      iVar5 = local_1c;
      if ((float)_DAT_005cd7d7 < fVar7) {
        fVar7 = _DAT_005e350c * param_2 + *(float *)(param_1[1].base.base.actor_name + 0x10);
        *(float *)(param_1[1].base.base.actor_name + 0x10) = fVar7;
        if (0x41A00000 < fVar7) {
          *(float *)(param_1[1].base.base.actor_name + 0x10) = 0x41A00000;
        }
        if ((param_1->player_input).action_state.fire != 0) {
          return;
        }
        iVar5 = 0;
      }
    }
    else if (iStack_40 < 0) {
      pCVar8 = (CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y;
      if (pCVar8 == local_24) {
        fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
        if (fVar7 == 0.0) {
switchD_00524e67_caseD_3:
          local_1c = 0;
          iVar5 = local_1c;
        }
        else {
          switch(*(uint *)((int)fVar7 + 0x2e0)) {
          case 0:
          case 5:
            iVar5 = 2;
            break;
          case 1:
            iVar5 = 4;
            break;
          case 2:
            iVar5 = 5;
            break;
          default:
            goto switchD_00524e67_caseD_3;
          case 4:
            iVar5 = 7;
            break;
          case 7:
          case 0xc:
            iVar5 = 8;
            break;
          case 9:
          case 10:
            iVar5 = 0xe;
            break;
          case 0xd:
            iVar5 = 0x11;
            break;
          case 0xe:
            iVar5 = 0x12;
          }
        }
      }
      else if (pCVar8 == (CDemonActor *)0x0) {
        iVar5 = 0;
        if (local_24 != (CDemonActor *)0x0) {
          switch(local_24[2].orient.vec.x) {
          case 0.0:
          case 7.00649e-45:
            iVar5 = 1;
            break;
          default:
switchD_00524f26_caseD_1:
            iVar5 = 3;
            break;
          case 9.80909e-45:
          case 1.12104e-44:
            pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (local_24,g_CMeleeClassInfo.name_hash);
            if ((pCVar8 == (CDemonActor *)0x0) || (pCVar8[4].orient_matrix.m[0].z == 0.0)) {
              pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (pCVar4,g_CHolycrossClassInfo.name_hash);
              iVar5 = 0;
              if (pCVar4 != (CDemonActor *)0x0) goto switchD_00524f26_caseD_1;
            }
            else {
              iVar5 = 3;
            }
          }
        }
      }
      else {
        switch(pCVar8[2].orient.vec.x) {
        case 0.0:
        case 7.00649e-45:
          iVar5 = 1;
          break;
        default:
switchD_00524f8d_caseD_1:
          iVar5 = 3;
          break;
        case 9.80909e-45:
        case 1.12104e-44:
          pCVar4 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar8,g_CMeleeClassInfo.name_hash);
          if ((pCVar4 == (CDemonActor *)0x0) || (pCVar4[4].orient_matrix.m[0].z == 0.0)) {
            pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (pCVar8,g_CHolycrossClassInfo.name_hash);
            iVar5 = 0;
            if (pCVar4 != (CDemonActor *)0x0) goto switchD_00524f8d_caseD_1;
          }
          else {
            iVar5 = 3;
          }
        }
      }
    }
    else {
      local_1c = iStack_40;
      iVar5 = local_1c;
    }
    local_1c = iVar5;
    local_28 = (CWeapon *)(param_1->base).layer_action_t;
    local_20 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_00433580
                         (&param_1->base,&param_2,local_1c);
    iVar5 = (param_1->base).layer_actions[(param_1->base).layer_action_index].motion_index;
    pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(pCStack_34);
    uVar6 = (param_1->base).layer_action_index;
    if (uVar6 < 0x10) {
      if (uVar6 < 0xc) {
        if (uVar6 < 7) {
          if (((uVar6 == 6) &&
              (this_ptr = (CDynamite *)
                          core_actor_cpp_castToClassHash_FUN_0040c840
                                    ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                                     g_CDynamiteClassInfo.name_hash), this_ptr != (CDynamite *)0x0))
             && ((iVar3 = core_dynamite_cpp_FUN_0047b230(this_ptr), iVar3 == 0 &&
                 ((float)(int)(0xb / (longlong)pCVar2->motions[iVar5].frame_count) <=
                  (param_1->base).layer_action_t)))) {
            core_dynamite_cpp_CDynamite_lightFuse_FUN_0047b1e0(this_ptr);
          }
        }
        else if (uVar6 < 8) {
          if ((param_1->action_pending == 3) &&
             ((float)(int)(0xb / (longlong)pCVar2->motions[iVar5].frame_count) <=
              (param_1->base).layer_action_t)) {
            core_prye_cpp_FUN_00524800(param_1);
            fStack_7c = afStack_90[2];
            afStack_90[(uint)bVar12 * -2 + 6] = afStack_90[(uint)bVar12 * -2 + 3];
            afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
                 afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
            CStack_70.x = fStack_7c;
            *(float *)((int)&CStack_70 + (uint)bVar12 * -8 + 4) = afStack_90[(uint)bVar12 * -2 + 6];
            *(float *)((int)&CStack_70 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
                 afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
            local_2c = (CCharacter *)
                       core_actor_cpp_castToClassHash_FUN_0040c840
                                 ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                                  g_CBindEvilClassInfo.name_hash);
            if (local_2c != (CCharacter *)0x0) {
              core_actor_cpp_FUN_00408b00(param_1,&CStack_70);
              afStack_a8[2] = fStack_64;
              afStack_a8[(uint)bVar12 * -2 + 3] = (float)apCStack_60[(uint)bVar12 * -2];
              afStack_a8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
                   (float)apCStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
              pCVar9 = (local_2c->model).bone_origins + 0x53;
              if (pCVar9 != (CVector3f *)(afStack_a8 + 2)) {
                pCVar9->x = afStack_a8[2];
                (local_2c->model).bone_origins[0x53].y = afStack_a8[3];
                (local_2c->model).bone_origins[0x53].z = fStack_98;
              }
              (*(((local_2c->base).vtable._uc)->_uc).isGrabbable)(local_2c,in_stack_ffffff54);
            }
            local_3c = (CCharacter *)
                       core_actor_cpp_castToClassHash_FUN_0040c840
                                 ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                                  g_CDiseaseClassInfo.name_hash);
            local_30 = local_3c;
            if (local_3c != (CCharacter *)0x0) {
              core_actor_cpp_FUN_00408b00(param_1,&CStack_70);
              in_stack_ffffff54 = pCStack_94;
              afStack_a8[(uint)bVar12 * -2] = afStack_90[(uint)bVar12 * -2];
              afStack_a8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                   afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
              pfVar10 = &(local_30->model).bone_origins[0x53].y;
              if (pfVar10 != (float *)&stack0xffffff54) {
                *pfVar10 = (float)in_stack_ffffff54;
                (local_30->model).bone_origins[0x53].z = afStack_a8[0];
                (local_30->model).bone_origins[0x54].x = afStack_a8[1];
              }
              (*(((local_3c->base).vtable._uc)->_uc).isGrabbable)(local_3c,in_stack_ffffff54);
            }
            if ((param_1->base).carry_hands[1].carry_actor != (CDemonActor *)0x0) {
              (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                        (&param_1->base,1,&CStack_70);
            }
            param_1->action_pending = 0;
            *(uint *)(param_1[1].base.base.actor_name + 0x10) = 0x41200000;
          }
          if (1.0 <= (param_1->base).layer_action_t) {
            (param_1->base).layer_action_index = 0;
            (param_1->base).layer_action_t = 0.0;
          }
        }
        else if ((((uVar6 == 8) && (local_48 = 0x3f19999a, (int)local_28 < 0x3f19999a)) &&
                 (0.6 <= (param_1->base).layer_action_t)) &&
                (iVar5 = core_actor_cpp_isOfClass_FUN_0040c790
                                   ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                                    "CShotgun"), iVar5 != 0)) {
          fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
          (**(code **)(*(int *)((int)fVar7 + 0x154) + 0xd8))(fVar7);
        }
      }
      else if (uVar6 < 0xd) {
        local_44 = 0x3ebd70a4;
        if ((((int)local_28 < 0x3ebd70a4) && (0.37 <= (param_1->base).layer_action_t)) &&
           ((pCVar4 = (CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
            pCVar4 != (CDemonActor *)0x0 &&
            (pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar4,g_CWeaponClassInfo.name_hash), pCVar4 != (CDemonActor *)0x0)
            ))) {
          if (*(int *)(pCVar4[4].actor_name + 0xc) == 9) {
            (*((pCVar4->vtable)._ub)->processMeleeHit)(pCVar4,8);
          }
          else {
            (*((pCVar4->vtable)._ub)->processMeleeHit)(pCVar4,1);
          }
        }
      }
      else {
        if (((param_1->action_pending == 7) &&
            ((float)_DAT_005cd7e7 <= (param_1->base).layer_action_t)) &&
           ((fVar7 = param_1[1].base.base.orient_matrix.m[2].y, fVar7 != 0.0 &&
            (iVar5 = (**(code **)(*(int *)((int)fVar7 + 0x154) + 0x78))(fVar7,2), iVar5 != 0)))) {
          param_1->action_pending = 0;
        }
        if ((float)_DAT_005cd7d7 < (param_1->base).layer_action_t) {
          (param_1->base).layer_action_t = 1.0;
          param_1->action_pending = 0;
          (param_1->base).layer_action_index = 0xb;
        }
      }
    }
    else if (uVar6 < 0x11) {
      local_4c = 0x3f28f5c3;
      if (((int)local_28 < 0x3f28f5c3) && (0.66 <= (param_1->base).layer_action_t)) {
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                           ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                            g_CWeaponClassInfo.name_hash);
        if (pCVar4 != (CDemonActor *)0x0) {
          if (*(int *)(pCVar4[4].actor_name + 0xc) == 9) {
            iVar5 = 8;
          }
          else {
            iVar5 = 1;
          }
          (*((pCVar4->vtable)._ub)->processMeleeHit)(pCVar4,iVar5);
        }
        fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
        if (fVar7 != 0.0) {
          (**(code **)(*(int *)((int)fVar7 + 0x154) + 0x78))(fVar7,2);
        }
      }
    }
    else if (uVar6 < 0x1b) {
      if (uVar6 < 0x19) {
        if ((((uVar6 == 0x15) && (local_50 = 0x3f4ccccd, (int)local_28 < 0x3f4ccccd)) &&
            (0.8 <= (param_1->base).layer_action_t)) &&
           (iVar5 = core_actor_cpp_isOfClass_FUN_0040c790
                              ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                               "CRifle"), iVar5 != 0)) {
          fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
          (**(code **)(*(int *)((int)fVar7 + 0x154) + 0xd8))(fVar7);
        }
      }
      else if (uVar6 < 0x1a) {
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
    else if (uVar6 < 0x1c) {
      if ((param_1->action_pending == 0xb) &&
         ((float)_DAT_005cd7e7 < (param_1->base).layer_action_t)) {
        fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
        if ((fVar7 != 0.0) &&
           (iVar5 = (**(code **)(*(int *)((int)fVar7 + 0x154) + 0xe8))(fVar7), iVar5 != 0)) {
          fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
          (**(code **)(*(int *)((int)fVar7 + 0x154) + 0xe4))(fVar7);
        }
        param_1->action_pending = 0;
      }
      if ((float)_DAT_005cd7d7 < (param_1->base).layer_action_t) {
        (param_1->base).layer_action_t = 1.0;
        param_1->action_pending = 0;
        (param_1->base).layer_action_index = 0xb;
      }
    }
    else if (uVar6 < 0x1f) {
      if (uVar6 == 0x1c) {
        if ((param_1->action_pending == 10) &&
           ((float)_DAT_005cd7e7 < (param_1->base).layer_action_t)) {
          fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
          if ((fVar7 != 0.0) &&
             (iVar5 = (**(code **)(*(int *)((int)fVar7 + 0x154) + 0xe8))(fVar7), iVar5 != 0)) {
            fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
            (**(code **)(*(int *)((int)fVar7 + 0x154) + 0xe4))(fVar7);
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
    else if (uVar6 < 0x20) {
      if ((param_1->action_pending == 0xc) &&
         ((float)_DAT_005cd7e7 < (param_1->base).layer_action_t)) {
        fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
        if ((fVar7 != 0.0) &&
           (iVar5 = (**(code **)(*(int *)((int)fVar7 + 0x154) + 0xe8))(fVar7), iVar5 != 0)) {
          fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
          (**(code **)(*(int *)((int)fVar7 + 0x154) + 0xe4))(fVar7);
        }
        param_1->action_pending = 0;
      }
      if ((float)_DAT_005cd7d7 < (param_1->base).layer_action_t) {
        (param_1->base).layer_action_t = 1.0;
        param_1->action_pending = 0;
        (param_1->base).layer_action_index = 0x1d;
      }
    }
    else if (uVar6 == 0x20) {
      if ((param_1->action_pending == 0xd) &&
         ((float)_DAT_005cd7df < (param_1->base).layer_action_t)) {
        fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
        if ((fVar7 != 0.0) &&
           (iVar5 = (**(code **)(*(int *)((int)fVar7 + 0x154) + 0xe8))(fVar7), iVar5 != 0)) {
          fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
          (**(code **)(*(int *)((int)fVar7 + 0x154) + 0xe4))(fVar7);
        }
        param_1->action_pending = 0;
      }
      if ((float)_DAT_005cd7d7 < (param_1->base).layer_action_t) {
        (param_1->base).layer_action_t = 1.0;
        param_1->action_pending = 0;
        (param_1->base).layer_action_index = 0x1e;
      }
    }
    if (-1 < local_20) {
      pCVar4 = (CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y;
      if (pCVar4 != local_24) {
        if (pCVar4 != (CDemonActor *)0x0) {
          switch(pCVar4[2].orient.vec.x) {
          case 0.0:
          case 7.00649e-45:
            iVar5 = 1;
            break;
          default:
switchD_00525735_caseD_1:
            iVar5 = 3;
            break;
          case 9.80909e-45:
          case 1.12104e-44:
            pCVar8 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar4,g_CMeleeClassInfo.name_hash)
            ;
            if ((pCVar8 == (CDemonActor *)0x0) || (pCVar8[4].orient_matrix.m[0].z == 0.0)) {
              pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (pCVar4,g_CHolycrossClassInfo.name_hash);
              iVar5 = 0;
              if (pCVar4 != (CDemonActor *)0x0) goto switchD_00525735_caseD_1;
            }
            else {
              iVar5 = 3;
            }
          }
          if (iVar5 == local_20) {
            fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
            (**(code **)(*(int *)((int)fVar7 + 0x154) + 0xdc))(fVar7,1);
            pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                               ((CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y,
                                g_CSpsClassInfo.name_hash);
            if (pCVar4 != (CDemonActor *)0x0) {
              core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS")
              ;
            }
            param_1[1].base.base.orient_matrix.m[2].y = 0.0;
          }
        }
        pCVar4 = local_24;
        if (*(int *)param_1[1].base.base.actor_name != 0) {
          if (local_24 == (CDemonActor *)0x0) {
            iVar5 = 0;
          }
          else {
            switch(local_24[2].orient.vec.x) {
            case 0.0:
            case 7.00649e-45:
              iVar5 = 1;
              break;
            default:
switchD_00525799_caseD_1:
              iVar5 = 3;
              break;
            case 9.80909e-45:
            case 1.12104e-44:
              pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (local_24,g_CMeleeClassInfo.name_hash);
              if ((pCVar8 == (CDemonActor *)0x0) || (pCVar8[4].orient_matrix.m[0].z == 0.0)) {
                pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                   (pCVar4,g_CHolycrossClassInfo.name_hash);
                iVar5 = 0;
                if (pCVar4 != (CDemonActor *)0x0) goto switchD_00525799_caseD_1;
              }
              else {
                iVar5 = 3;
              }
            }
          }
          if (iVar5 == local_20) {
            fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
            if (fVar7 != 0.0) {
              (**(code **)(*(int *)((int)fVar7 + 0x154) + 0xdc))(fVar7,1);
            }
            uVar6 = g_CSpsClassInfo.name_hash;
            param_1[1].base.base.orient_matrix.m[2].y = (float)local_24;
            pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840(local_24,uVar6);
            if (pCVar4 != (CDemonActor *)0x0) {
              core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS")
              ;
            }
            fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
            if (fVar7 != 0.0) {
              (**(code **)(*(int *)((int)fVar7 + 0x154) + 0xdc))(fVar7,2);
            }
          }
        }
      }
      if ((param_1->action_pending == 1) && (local_20 == 3)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004d41a0(param_1,1);
LAB_00524bde:
        param_1->action_pending = 0;
      }
      else {
        if ((param_1->action_pending == 8) && (local_20 == 3)) {
          fVar7 = param_1[1].base.base.orient_matrix.m[2].y;
          if (((fVar7 == 0.0) || (*(int *)((int)fVar7 + 0x578) == 1)) &&
             (iVar5 = core_inv_cpp_FUN_004dba80(apCStack_60[3],"CLightActor"), iVar5 != 0))
          {
            pCVar11 = pCStack_18;
            for (local_14 = 0; local_14 < pCStack_18->item_count; local_14 = local_14 + 1) {
              pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar11->items[0],DAT_007e1a50);
              if (pCVar4 != (CDemonActor *)0x0) {
                core_charactr_cpp_FUN_004319d0(param_1,0,pCVar4,0,0);
                pCVar4[0x1a].create_event[0x38] = '\x01';
                pCVar4[0x1a].create_event[0x39] = '\0';
                pCVar4[0x1a].create_event[0x3a] = '\0';
                pCVar4[0x1a].create_event[0x3b] = '\0';
                param_1->light_radius = 15.0;
                break;
              }
              pCVar11 = (CInventory *)&pCVar11->owner;
            }
          }
          goto LAB_00524bde;
        }
        if ((param_1->action_pending == 9) && (local_20 == 3)) {
          pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                             ((param_1->base).carry_hands[0].carry_actor,DAT_007e1a50);
          if (pCVar4 != (CDemonActor *)0x0) {
            pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                               ((param_1->base).carry_hands[0].carry_actor,DAT_007e1a50);
            pCVar4[0x1a].create_event[0x38] = '\0';
            pCVar4[0x1a].create_event[0x39] = '\0';
            pCVar4[0x1a].create_event[0x3a] = '\0';
            pCVar4[0x1a].create_event[0x3b] = '\0';
            (param_1->base).carry_hands[0].carry_actor = (CDemonActor *)0x0;
            param_1->light_radius = 0.0;
          }
          goto LAB_00524bde;
        }
      }
      if ((param_1->target_actor != (CDemonActor *)0x0) && (local_20 == 3)) {
        core_inv_cpp_CInventory_removeItem_FUN_004dbaa0(apCStack_60[2],param_1->target_actor,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                  (0x01D81080,param_1->target_actor);
        core_charactr_cpp_FUN_004319d0(param_1,1,param_1->target_actor,0,0);
        iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(param_1->target_actor,"CTrap");
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_34,0x21,1);
          if (param_1->action_pending != 0) {
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",param_1->action_pending
                       ,0x172a);
          }
          param_1->action_pending = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_34,0x1f,1);
          param_1->action_pending = 6;
        }
        param_1->target_actor = (CDemonActor *)0x0;
      }
      if ((param_1->action_pending == 7) && ((local_20 == 0 || (local_20 == 8)))) {
        param_1->action_pending = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0(&param_1->base,local_1c);
    }
    local_38 = local_38 + 1;
    if (1 < local_38) {
      return;
    }
  } while( true );
}
