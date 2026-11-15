// Name: core_prye.cpp_CPrye_updateWeaponLayerActions_FUN_00524940
// Address: 00524940
// Address Range: [[00524940, 0052592d]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_updateWeaponLayerActions_FUN_00524940(CPrye *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_updateWeaponLayerActions_FUN_00524940(CPrye *this_ptr,float delta_time)

{
  CWeapon *pCVar1;
  CCharacter *pCVar2;
  CWeapon *actor_ptr;
  CMotionList *pCVar3;
  CDynamite *this_ptr_00;
  int iVar4;
  CDemonActor *pCVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  CVector3f *pCVar9;
  float *pfVar10;
  CInventory *pCVar11;
  byte bVar12;
  float afStackY_1094 [1013];
  CDemonActor *in_stack_ffffff54;
  float in_stack_ffffff58;
  CCharacter *in_stack_ffffff5c;
  char *in_stack_ffffff60;
  float local_9c;
  float fStack_98;
  CVector3f CStack_94;
  CVector3f CStack_88;
  float fStack_7c;
  float afStack_78 [2];
  CVector3f CStack_70;
  CVector3f CStack_64;
  CInventory *local_58;
  CInventory *local_54;
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
  CWeapon *local_24;
  int local_20;
  int local_1c;
  CInventory *pCStack_18;
  int local_14;
  
  bVar12 = 0;
  if (((this_ptr->base).base.layer_action_index == 0x11) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (this_ptr->base).base.layer_action_t = 0.0;
    (this_ptr->base).base.layer_action_index = 0;
  }
  local_44 = 0xffffffff;
  local_28 = (CWeapon *)0x0;
  if ((this_ptr->base).nearby_interactive_actor == (CDemonActor *)0x0) {
    if (this_ptr->guns_drawn == 0) goto LAB_00524997;
    pCVar5 = (this_ptr->base).base.carry_hands[1].carry_actor;
    if (pCVar5 == (CDemonActor *)0x0) {
      local_28 = (this_ptr->base).inventory.selected_weapon;
      if (((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0) &&
         (local_28->number_of_hands_needed == 2)) {
        local_28 = this_ptr->weapon;
      }
    }
    else {
      local_28 = (CWeapon *)
                 core_actor_cpp_castToClassHash_FUN_0040c840(pCVar5,g_CWeaponClassInfo.name_hash);
      if ((local_28 == (CWeapon *)0x0) &&
         (pCVar5 = (this_ptr->base).base.carry_hands[1].carry_actor,
         uVar7 = (*((pCVar5->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar5), (uVar7 & 0xb) != 0))
      {
        iStack_40 = 8;
      }
    }
    if ((local_24 != (CWeapon *)0x0) || (-1 < iStack_40)) goto LAB_00524997;
  }
  this_ptr->guns_drawn = 0;
LAB_00524997:
  pCVar11 = &(this_ptr->base).inventory;
  core_inv_cpp_CInventory_getActiveLightGun_FUN_004dcda0(pCVar11);
  core_inv_cpp_CInventory_getActiveLightGun_FUN_004dcda0(pCVar11);
  local_38 = 0;
  pCStack_34 = &(this_ptr->base).base.model.base;
  local_58 = pCVar11;
  local_54 = pCVar11;
  pCStack_18 = pCVar11;
  do {
    pCVar1 = local_24;
    if (delta_time <= 0.0) {
      return;
    }
    iVar6 = (this_ptr->base).action_pending;
    if ((((iVar6 == 1) || (iVar6 == 8)) || (iVar6 == 9)) ||
       ((this_ptr->base).target_actor != (CDemonActor *)0x0)) {
      local_1c = 3;
      iVar6 = local_1c;
    }
    else if (iVar6 == 2) {
      iVar6 = 0;
    }
    else if (iVar6 == 3) {
      fVar8 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                        ((CCharacter *)this_ptr,6);
      local_1c = 6;
      iVar6 = local_1c;
      if ((float)_DAT_005cd7d7 < fVar8) {
        fVar8 = _DAT_005e350c * delta_time + this_ptr->aim_speed_factor;
        this_ptr->aim_speed_factor = fVar8;
        if (0x41A00000 < fVar8) {
          this_ptr->aim_speed_factor = 0x41A00000;
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          return;
        }
        iVar6 = 0;
      }
    }
    else if (iStack_40 < 0) {
      actor_ptr = this_ptr->weapon;
      if (actor_ptr == local_24) {
        if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_00524e67_caseD_3:
          local_1c = 0;
          iVar6 = local_1c;
        }
        else {
          switch(this_ptr->weapon->weapon_type) {
          case WEAPON_TYPE_GUN:
          case WEAPON_TYPE_FLASHLIGHT:
            iVar6 = 2;
            break;
          case WEAPON_TYPE_SHOTGUN:
            iVar6 = 4;
            break;
          case WEAPON_TYPE_LIGHT_GUN:
            iVar6 = 5;
            break;
          default:
            goto switchD_00524e67_caseD_3;
          case WEAPON_TYPE_TOMMY_GUN:
            iVar6 = 7;
            break;
          case WEAPON_TYPE_MELEE:
          case WEAPON_TYPE_BARON|WEAPON_TYPE_TOMMY_GUN:
            iVar6 = 8;
            break;
          case WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN:
          case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
            iVar6 = 0xe;
            break;
          case WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT:
            iVar6 = 0x11;
            break;
          case WEAPON_TYPE_BARON|WEAPON_TYPE_UNUSED:
            iVar6 = 0x12;
          }
        }
      }
      else if (actor_ptr == (CWeapon *)0x0) {
        iVar6 = 0;
        if (local_24 != (CWeapon *)0x0) {
          switch(local_24->weapon_type) {
          case WEAPON_TYPE_GUN:
          case WEAPON_TYPE_FLASHLIGHT:
            iVar6 = 1;
            break;
          default:
switchD_00524f26_caseD_1:
            iVar6 = 3;
            break;
          case WEAPON_TYPE_MELEE:
          case WEAPON_TYPE_BARON:
            pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (&local_24->base,g_CMeleeClassInfo.name_hash);
            if ((pCVar5 == (CDemonActor *)0x0) || (pCVar5[4].orient_matrix.m[0].z == 0.0)) {
              pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (&pCVar1->base,g_CHolycrossClassInfo.name_hash);
              iVar6 = 0;
              if (pCVar5 != (CDemonActor *)0x0) goto switchD_00524f26_caseD_1;
            }
            else {
              iVar6 = 3;
            }
          }
        }
      }
      else {
        switch(actor_ptr->weapon_type) {
        case WEAPON_TYPE_GUN:
        case WEAPON_TYPE_FLASHLIGHT:
          iVar6 = 1;
          break;
        default:
switchD_00524f8d_caseD_1:
          iVar6 = 3;
          break;
        case WEAPON_TYPE_MELEE:
        case WEAPON_TYPE_BARON:
          pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (&actor_ptr->base,g_CMeleeClassInfo.name_hash);
          if ((pCVar5 == (CDemonActor *)0x0) || (pCVar5[4].orient_matrix.m[0].z == 0.0)) {
            pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (&actor_ptr->base,g_CHolycrossClassInfo.name_hash);
            iVar6 = 0;
            if (pCVar5 != (CDemonActor *)0x0) goto switchD_00524f8d_caseD_1;
          }
          else {
            iVar6 = 3;
          }
        }
      }
    }
    else {
      local_1c = iStack_40;
      iVar6 = local_1c;
    }
    local_1c = iVar6;
    local_28 = (CWeapon *)(this_ptr->base).base.layer_action_t;
    local_20 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_00433580
                         ((CCharacter *)this_ptr,&delta_time,local_1c);
    iVar6 = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
            motion_index;
    pCVar3 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(pCStack_34);
    uVar7 = (this_ptr->base).base.layer_action_index;
    if (uVar7 < 0x10) {
      if (uVar7 < 0xc) {
        if (uVar7 < 7) {
          if (((uVar7 == 6) &&
              (this_ptr_00 = (CDynamite *)
                             core_actor_cpp_castToClassHash_FUN_0040c840
                                       (&this_ptr->weapon->base,g_CDynamiteClassInfo.name_hash),
              this_ptr_00 != (CDynamite *)0x0)) &&
             ((iVar4 = core_dynamite_cpp_CDynamite_isFuseLit_FUN_0047b230(this_ptr_00), iVar4 == 0
              && ((float)(int)(0xb / (longlong)pCVar3->motions[iVar6].frame_count) <=
                  (this_ptr->base).base.layer_action_t)))) {
            core_dynamite_cpp_CDynamite_lightFuse_FUN_0047b1e0(this_ptr_00);
          }
        }
        else if (uVar7 < 8) {
          if (((this_ptr->base).action_pending == 3) &&
             ((float)(int)(0xb / (longlong)pCVar3->motions[iVar6].frame_count) <=
              (this_ptr->base).base.layer_action_t)) {
            core_prye_cpp_CPrye_getThrowDirection_FUN_00524800(this_ptr,&CStack_88);
            fStack_7c = CStack_88.x;
            afStack_78[(uint)bVar12 * -2] = *(float *)((int)&CStack_88 + (uint)bVar12 * -8 + 4);
            afStack_78[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 *(float *)((int)&CStack_88 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            CStack_70.x = fStack_7c;
            *(float *)((int)&CStack_70 + (uint)bVar12 * -8 + 4) = afStack_78[(uint)bVar12 * -2];
            *(float *)((int)&CStack_70 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
                 afStack_78[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            local_2c = (CCharacter *)
                       core_actor_cpp_castToClassHash_FUN_0040c840
                                 (&this_ptr->weapon->base,g_CBindEvilClassInfo.name_hash);
            if (local_2c != (CCharacter *)0x0) {
              core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                        ((CDemonActor *)this_ptr,&CStack_70,&CStack_64);
              in_stack_ffffff60 = (char *)CStack_64.x;
              *(uint *)((int)&stack0xffffff64 + (uint)bVar12 * -8) =
                   *(uint *)((int)&CStack_64 + (uint)bVar12 * -8 + 4);
              *(uint *)((int)&stack0xffffff68 + ((uint)bVar12 * -2 + (uint)bVar12 * -2) * 4) =
                   *(uint *)((int)&CStack_64 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              pCVar9 = (local_2c->model).bone_origins + 0x53;
              if (pCVar9 != (CVector3f *)&stack0xffffff60) {
                pCVar9->x = (float)in_stack_ffffff60;
                (local_2c->model).bone_origins[0x53].y = local_9c;
                (local_2c->model).bone_origins[0x53].z = fStack_98;
              }
              (*(((local_2c->base).vtable._uc)->_uc).isGrabbable)(local_2c,in_stack_ffffff54);
            }
            local_3c = (CCharacter *)
                       core_actor_cpp_castToClassHash_FUN_0040c840
                                 (&this_ptr->weapon->base,g_CDiseaseClassInfo.name_hash);
            local_30 = local_3c;
            if (local_3c != (CCharacter *)0x0) {
              core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                        ((CDemonActor *)this_ptr,&CStack_70,&CStack_94);
              in_stack_ffffff54 = (CDemonActor *)CStack_94.x;
              *(uint *)(&stack0xffffff58 + (uint)bVar12 * -8) =
                   *(uint *)((int)&CStack_94 + (uint)bVar12 * -8 + 4);
              *(uint *)(&stack0xffffff5c + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
                   *(uint *)((int)&CStack_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              pfVar10 = &(local_30->model).bone_origins[0x53].y;
              if (pfVar10 != (float *)&stack0xffffff54) {
                *pfVar10 = (float)in_stack_ffffff54;
                (local_30->model).bone_origins[0x53].z = in_stack_ffffff58;
                (local_30->model).bone_origins[0x54].x = (float)in_stack_ffffff5c;
              }
              (*(((local_3c->base).vtable._uc)->_uc).isGrabbable)(local_3c,in_stack_ffffff54);
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
        }
        else if ((((uVar7 == 8) && (local_48 = 0x3f19999a, (int)local_28 < 0x3f19999a)) &&
                 (0.6 <= (this_ptr->base).base.layer_action_t)) &&
                (iVar6 = core_actor_cpp_isOfClass_FUN_0040c790
                                   (&this_ptr->weapon->base,"CShotgun"), iVar6 != 0)) {
          (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).applyDamage)
                    ((CCharacter *)this_ptr->weapon,(int)in_stack_ffffff54,in_stack_ffffff58);
        }
      }
      else if (uVar7 < 0xd) {
        local_44 = 0x3ebd70a4;
        if ((((int)local_28 < 0x3ebd70a4) && (0.37 <= (this_ptr->base).base.layer_action_t)) &&
           ((this_ptr->weapon != (CWeapon *)0x0 &&
            (pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (&this_ptr->weapon->base,g_CWeaponClassInfo.name_hash),
            pCVar5 != (CDemonActor *)0x0)))) {
          if (*(int *)(pCVar5[4].actor_name + 0xc) == 9) {
            (*((pCVar5->vtable)._ub)->processMeleeHit)(pCVar5,8);
          }
          else {
            (*((pCVar5->vtable)._ub)->processMeleeHit)(pCVar5,1);
          }
        }
      }
      else {
        if ((((this_ptr->base).action_pending == 7) &&
            ((float)_DAT_005cd7e7 <= (this_ptr->base).base.layer_action_t)) &&
           ((pCVar1 = this_ptr->weapon, pCVar1 != (CWeapon *)0x0 &&
            (iVar6 = (*((pCVar1->base).vtable._ub)->processMeleeHit)(&pCVar1->base,2), iVar6 != 0)))
           ) {
          (this_ptr->base).action_pending = 0;
        }
        if ((float)_DAT_005cd7d7 < (this_ptr->base).base.layer_action_t) {
          (this_ptr->base).base.layer_action_t = 1.0;
          (this_ptr->base).action_pending = 0;
          (this_ptr->base).base.layer_action_index = 0xb;
        }
      }
    }
    else if (uVar7 < 0x11) {
      local_4c = 0x3f28f5c3;
      if (((int)local_28 < 0x3f28f5c3) && (0.66 <= (this_ptr->base).base.layer_action_t)) {
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (&this_ptr->weapon->base,g_CWeaponClassInfo.name_hash);
        if (pCVar5 != (CDemonActor *)0x0) {
          if (*(int *)(pCVar5[4].actor_name + 0xc) == 9) {
            iVar6 = 8;
          }
          else {
            iVar6 = 1;
          }
          (*((pCVar5->vtable)._ub)->processMeleeHit)(pCVar5,iVar6);
        }
        pCVar1 = this_ptr->weapon;
        if (pCVar1 != (CWeapon *)0x0) {
          (*((pCVar1->base).vtable._ub)->processMeleeHit)(&pCVar1->base,2);
        }
      }
    }
    else if (uVar7 < 0x1b) {
      if (uVar7 < 0x19) {
        if ((((uVar7 == 0x15) && (local_50 = 0x3f4ccccd, (int)local_28 < 0x3f4ccccd)) &&
            (0.8 <= (this_ptr->base).base.layer_action_t)) &&
           (iVar6 = core_actor_cpp_isOfClass_FUN_0040c790(&this_ptr->weapon->base,"CRifle")
           , iVar6 != 0)) {
          (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).applyDamage)
                    ((CCharacter *)this_ptr->weapon,(int)in_stack_ffffff54,in_stack_ffffff58);
        }
      }
      else if (uVar7 < 0x1a) {
        if ((float)_DAT_005cd7d7 < (this_ptr->base).base.layer_action_t) {
          (this_ptr->base).base.layer_action_t = 1.0;
          (this_ptr->base).base.layer_action_index = 0x1a;
        }
      }
      else if ((this_ptr->base).base.layer_action_t < (float)_DAT_005cd7ef) {
        (this_ptr->base).base.layer_action_t = 1.0;
        (this_ptr->base).base.layer_action_index = 1;
      }
    }
    else if (uVar7 < 0x1c) {
      if (((this_ptr->base).action_pending == 0xb) &&
         ((float)_DAT_005cd7e7 < (this_ptr->base).base.layer_action_t)) {
        pCVar2 = (CCharacter *)this_ptr->weapon;
        if ((pCVar2 != (CCharacter *)0x0) &&
           (iVar6 = (*(((pCVar2->base).vtable._uc)->_uc).canBeGrabbed)
                              (pCVar2,in_stack_ffffff54,(int)in_stack_ffffff58), iVar6 != 0)) {
          in_stack_ffffff5c = (CCharacter *)this_ptr->weapon;
          in_stack_ffffff58 = 7.559836e-39;
          (*(((in_stack_ffffff5c->base).vtable._uc)->_uc).isGrabbable)
                    (in_stack_ffffff5c,(CDemonActor *)in_stack_ffffff60);
        }
        (this_ptr->base).action_pending = 0;
      }
      if ((float)_DAT_005cd7d7 < (this_ptr->base).base.layer_action_t) {
        (this_ptr->base).base.layer_action_t = 1.0;
        (this_ptr->base).action_pending = 0;
        (this_ptr->base).base.layer_action_index = 0xb;
      }
    }
    else if (uVar7 < 0x1f) {
      if (uVar7 == 0x1c) {
        if (((this_ptr->base).action_pending == 10) &&
           ((float)_DAT_005cd7e7 < (this_ptr->base).base.layer_action_t)) {
          pCVar2 = (CCharacter *)this_ptr->weapon;
          if ((pCVar2 != (CCharacter *)0x0) &&
             (iVar6 = (*(((pCVar2->base).vtable._uc)->_uc).canBeGrabbed)
                                (pCVar2,in_stack_ffffff54,(int)in_stack_ffffff58), iVar6 != 0)) {
            in_stack_ffffff5c = (CCharacter *)this_ptr->weapon;
            in_stack_ffffff58 = 7.559631e-39;
            (*(((in_stack_ffffff5c->base).vtable._uc)->_uc).isGrabbable)
                      (in_stack_ffffff5c,(CDemonActor *)in_stack_ffffff60);
          }
          (this_ptr->base).action_pending = 0;
        }
        if ((float)_DAT_005cd7d7 < (this_ptr->base).base.layer_action_t) {
          (this_ptr->base).base.layer_action_t = 1.0;
          (this_ptr->base).action_pending = 0;
          (this_ptr->base).base.layer_action_index = 0xb;
        }
      }
    }
    else if (uVar7 < 0x20) {
      if (((this_ptr->base).action_pending == 0xc) &&
         ((float)_DAT_005cd7e7 < (this_ptr->base).base.layer_action_t)) {
        pCVar2 = (CCharacter *)this_ptr->weapon;
        if ((pCVar2 != (CCharacter *)0x0) &&
           (iVar6 = (*(((pCVar2->base).vtable._uc)->_uc).canBeGrabbed)
                              (pCVar2,in_stack_ffffff54,(int)in_stack_ffffff58), iVar6 != 0)) {
          in_stack_ffffff5c = (CCharacter *)this_ptr->weapon;
          in_stack_ffffff58 = 7.559227e-39;
          (*(((in_stack_ffffff5c->base).vtable._uc)->_uc).isGrabbable)
                    (in_stack_ffffff5c,(CDemonActor *)in_stack_ffffff60);
        }
        (this_ptr->base).action_pending = 0;
      }
      if ((float)_DAT_005cd7d7 < (this_ptr->base).base.layer_action_t) {
        (this_ptr->base).base.layer_action_t = 1.0;
        (this_ptr->base).action_pending = 0;
        (this_ptr->base).base.layer_action_index = 0x1d;
      }
    }
    else if (uVar7 == 0x20) {
      if (((this_ptr->base).action_pending == 0xd) &&
         ((float)_DAT_005cd7df < (this_ptr->base).base.layer_action_t)) {
        pCVar2 = (CCharacter *)this_ptr->weapon;
        if ((pCVar2 != (CCharacter *)0x0) &&
           (iVar6 = (*(((pCVar2->base).vtable._uc)->_uc).canBeGrabbed)
                              (pCVar2,in_stack_ffffff54,(int)in_stack_ffffff58), iVar6 != 0)) {
          in_stack_ffffff5c = (CCharacter *)this_ptr->weapon;
          in_stack_ffffff58 = 7.559429e-39;
          (*(((in_stack_ffffff5c->base).vtable._uc)->_uc).isGrabbable)
                    (in_stack_ffffff5c,(CDemonActor *)in_stack_ffffff60);
        }
        (this_ptr->base).action_pending = 0;
      }
      if ((float)_DAT_005cd7d7 < (this_ptr->base).base.layer_action_t) {
        (this_ptr->base).base.layer_action_t = 1.0;
        (this_ptr->base).action_pending = 0;
        (this_ptr->base).base.layer_action_index = 0x1e;
      }
    }
    if (-1 < local_20) {
      pCVar1 = this_ptr->weapon;
      if (pCVar1 != local_24) {
        if (pCVar1 != (CWeapon *)0x0) {
          switch(pCVar1->weapon_type) {
          case WEAPON_TYPE_GUN:
          case WEAPON_TYPE_FLASHLIGHT:
            iVar6 = 1;
            break;
          default:
switchD_00525735_caseD_1:
            iVar6 = 3;
            break;
          case WEAPON_TYPE_MELEE:
          case WEAPON_TYPE_BARON:
            pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (&pCVar1->base,g_CMeleeClassInfo.name_hash);
            if ((pCVar5 == (CDemonActor *)0x0) || (pCVar5[4].orient_matrix.m[0].z == 0.0)) {
              pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (&pCVar1->base,g_CHolycrossClassInfo.name_hash);
              iVar6 = 0;
              if (pCVar5 != (CDemonActor *)0x0) goto switchD_00525735_caseD_1;
            }
            else {
              iVar6 = 3;
            }
          }
          if (iVar6 == local_20) {
            (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).kill)
                      ((CCharacter *)this_ptr->weapon,1,(CVector3f *)in_stack_ffffff54,
                       in_stack_ffffff58);
            in_stack_ffffff5c = (CCharacter *)this_ptr->weapon;
            in_stack_ffffff58 = 7.557414e-39;
            in_stack_ffffff60 = (char *)g_CSpsClassInfo.name_hash;
            pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                               ((CDemonActor *)in_stack_ffffff5c,g_CSpsClassInfo.name_hash);
            if (pCVar5 != (CDemonActor *)0x0) {
              in_stack_ffffff60 = "UseSPS";
              in_stack_ffffff58 = 7.557448e-39;
              in_stack_ffffff5c = (CCharacter *)0x01C6E360;
              core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS")
              ;
            }
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
        pCVar1 = local_24;
        if (this_ptr->guns_drawn != 0) {
          if (local_24 == (CWeapon *)0x0) {
            iVar6 = 0;
          }
          else {
            switch(local_24->weapon_type) {
            case WEAPON_TYPE_GUN:
            case WEAPON_TYPE_FLASHLIGHT:
              iVar6 = 1;
              break;
            default:
switchD_00525799_caseD_1:
              iVar6 = 3;
              break;
            case WEAPON_TYPE_MELEE:
            case WEAPON_TYPE_BARON:
              pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (&local_24->base,g_CMeleeClassInfo.name_hash);
              if ((pCVar5 == (CDemonActor *)0x0) || (pCVar5[4].orient_matrix.m[0].z == 0.0)) {
                pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                   (&pCVar1->base,g_CHolycrossClassInfo.name_hash);
                iVar6 = 0;
                if (pCVar5 != (CDemonActor *)0x0) goto switchD_00525799_caseD_1;
              }
              else {
                iVar6 = 3;
              }
            }
          }
          if (iVar6 == local_20) {
            pCVar2 = (CCharacter *)this_ptr->weapon;
            if (pCVar2 != (CCharacter *)0x0) {
              (*(((pCVar2->base).vtable._uc)->_uc).kill)
                        (pCVar2,1,(CVector3f *)in_stack_ffffff54,in_stack_ffffff58);
            }
            uVar7 = g_CSpsClassInfo.name_hash;
            this_ptr->weapon = local_24;
            pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840(&local_24->base,uVar7);
            if (pCVar5 != (CDemonActor *)0x0) {
              core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS")
              ;
            }
            pCVar2 = (CCharacter *)this_ptr->weapon;
            if (pCVar2 != (CCharacter *)0x0) {
              (*(((pCVar2->base).vtable._uc)->_uc).kill)
                        (pCVar2,2,(CVector3f *)in_stack_ffffff54,in_stack_ffffff58);
            }
          }
        }
      }
      if (((this_ptr->base).action_pending == 1) && (local_20 == 3)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004d41a0(&this_ptr->base,1);
LAB_00524bde:
        (this_ptr->base).action_pending = 0;
      }
      else {
        if (((this_ptr->base).action_pending == 8) && (local_20 == 3)) {
          if (((this_ptr->weapon == (CWeapon *)0x0) ||
              (this_ptr->weapon->number_of_hands_needed == 1)) &&
             (iVar6 = core_inv_cpp_CInventory_hasItemOfClass_FUN_004dba80
                                (local_54,"CLightActor"), iVar6 != 0)) {
            pCVar11 = pCStack_18;
            for (local_14 = 0; local_14 < pCStack_18->item_count; local_14 = local_14 + 1) {
              pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar11->items[0],DAT_007e1a50);
              if (pCVar5 != (CDemonActor *)0x0) {
                core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0
                          ((CCharacter *)this_ptr,0,(int)pCVar5,0,0);
                pCVar5[0x1a].create_event[0x38] = '\x01';
                pCVar5[0x1a].create_event[0x39] = '\0';
                pCVar5[0x1a].create_event[0x3a] = '\0';
                pCVar5[0x1a].create_event[0x3b] = '\0';
                (this_ptr->base).light_radius = 15.0;
                break;
              }
              pCVar11 = (CInventory *)&pCVar11->owner;
            }
          }
          goto LAB_00524bde;
        }
        if (((this_ptr->base).action_pending == 9) && (local_20 == 3)) {
          pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                             ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007e1a50);
          if (pCVar5 != (CDemonActor *)0x0) {
            pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                               ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007e1a50);
            pCVar5[0x1a].create_event[0x38] = '\0';
            pCVar5[0x1a].create_event[0x39] = '\0';
            pCVar5[0x1a].create_event[0x3a] = '\0';
            pCVar5[0x1a].create_event[0x3b] = '\0';
            (this_ptr->base).base.carry_hands[0].carry_actor = (CDemonActor *)0x0;
            (this_ptr->base).light_radius = 0.0;
          }
          goto LAB_00524bde;
        }
      }
      pCVar5 = (this_ptr->base).target_actor;
      if ((pCVar5 != (CDemonActor *)0x0) && (local_20 == 3)) {
        core_inv_cpp_CInventory_removeItem_FUN_004dbaa0(local_58,pCVar5,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                  (0x01D81080,(this_ptr->base).target_actor);
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0
                  ((CCharacter *)this_ptr,1,(int)(this_ptr->base).target_actor,0,0);
        iVar6 = core_actor_cpp_isOfClass_FUN_0040c790
                          ((this_ptr->base).target_actor,"CTrap");
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_34,0x21,1);
          iVar6 = (this_ptr->base).action_pending;
          if (iVar6 != 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",iVar6,0x172a);
          }
          (this_ptr->base).action_pending = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_34,0x1f,1);
          (this_ptr->base).action_pending = 6;
        }
        (this_ptr->base).target_actor = (CDemonActor *)0x0;
      }
      if (((this_ptr->base).action_pending == 7) && ((local_20 == 0 || (local_20 == 8)))) {
        (this_ptr->base).action_pending = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0
                ((CCharacter *)this_ptr,local_1c);
    }
    local_38 = local_38 + 1;
    if (1 < local_38) {
      return;
    }
  } while( true );
}
