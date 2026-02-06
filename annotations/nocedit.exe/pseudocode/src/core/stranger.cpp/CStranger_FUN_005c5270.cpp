// Name: core_stranger.cpp_CStranger_FUN_005c5270
// Address: 005c5270
// Address Range: [[005c5270, 005c5b68]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c5270(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005c5793) */

void __cdecl core_stranger_cpp_CStranger_FUN_005c5270(CStranger *this_ptr)

{
  float fVar1;
  int iVar2;
  CMotionList *pCVar3;
  int iVar4;
  CLightGun *pCVar5;
  uint uVar6;
  CVector3f *pCVar7;
  CDemonActor *pCVar8;
  float in_stack_00000008;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  uint local_40;
  int local_3c;
  char *local_38;
  CDemonActor *local_34;
  int local_30;
  CMotionController *local_2c;
  CDemonActor *local_28;
  CDynamite *local_24;
  int local_20;
  CInventory *local_1c;
  CDemonActor *local_18;
  float fStack_14;
  
  if (((this_ptr->base).base.field47_0x2a8c == 0xe) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    (this_ptr->base).base.field48_0x2a90 = 0;
    (this_ptr->base).base.field47_0x2a8c = 0;
  }
  local_40 = 0xffffffff;
  local_1c = (CInventory *)0x0;
  if (*(int *)(this_ptr->base).unk3 == 0) {
    if (this_ptr->guns_drawn != 0) {
      pCVar8 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (((pCVar8 != (CDemonActor *)0x0) &&
          (local_1c = (CInventory *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCVar8,g_CWeaponClassInfo.name_hash), local_1c == (CInventory *)0x0
          )) && (pCVar8 = (this_ptr->base).base.carry_hands[1].carry_actor,
                uVar6 = (*((pCVar8->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar8),
                (uVar6 & 3) != 0)) {
        local_3c = 8;
      }
      if ((local_18 == (CDemonActor *)0x0) && (local_3c < 0)) {
        this_ptr->guns_drawn = 0;
      }
    }
  }
  else {
    this_ptr->guns_drawn = 0;
  }
  local_1c = &(this_ptr->base).inventory;
  local_2c = &(this_ptr->base).base.model.motion_controller;
  local_30 = 0;
  do {
    if (in_stack_00000008 <= 0.0) {
      return;
    }
    iVar2 = this_ptr->action_pending;
    if (((iVar2 != 1) && (*(int *)((this_ptr->base).unk3 + 4) == 0)) && (iVar2 != 2)) {
      if (iVar2 == 3) {
        fStack_14 = core_charactr_cpp_CCharacter_FUN_0042e840((CCharacter *)this_ptr);
        if ((float)0.98999999999999999 < fStack_14) {
          fVar1 = in_stack_00000008 * (float)25 + *(float *)(this_ptr->unk1 + 0xc);
          *(float *)(this_ptr->unk1 + 0xc) = fVar1;
          if (70.0f < fVar1) {
            *(float *)(this_ptr->unk1 + 0xc) = 70.0f;
          }
          if ((this_ptr->base).action_bindings.fire_key != 0) {
            return;
          }
          goto switchD_005c56f5_caseD_8;
        }
      }
      else {
        pCVar5 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c);
        if ((((pCVar5 == (CLightGun *)0x0) || ((this_ptr->base).is_wearing_gas_mask != 0)) &&
            (((pCVar5 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c),
              pCVar5 == (CLightGun *)0x0 || ((this_ptr->base).is_wearing_gas_mask != 1)) &&
             ((pCVar5 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c),
              pCVar5 != (CLightGun *)0x0 || ((this_ptr->base).is_wearing_gas_mask != 2)))))) &&
           (((pCVar5 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c),
             pCVar5 != (CLightGun *)0x0 || ((this_ptr->base).is_wearing_gas_mask != 1)) &&
            (local_3c < 0)))) {
          pCVar8 = *(CDemonActor **)(this_ptr->unk1 + 0x54);
          if (pCVar8 == local_18) {
            if (*(int *)(this_ptr->unk1 + 0x54) == 0) {
switchD_005c56f5_caseD_8:
            }
            else {
              switch(*(uint *)(*(int *)(this_ptr->unk1 + 0x54) + 0x2e0)) {
              case 0:
              case 5:
                break;
              case 1:
                break;
              case 2:
                break;
              default:
                goto switchD_005c56f5_caseD_8;
              case 4:
                break;
              case 7:
              }
            }
          }
          else if (pCVar8 == (CDemonActor *)0x0) {
            if (((local_18 != (CDemonActor *)0x0) &&
                (fVar1 = local_18[2].orient.pitch, 6 < (uint)fVar1)) &&
               (((uint)fVar1 < 8 || (fVar1 == 1.12104e-44)))) {
              core_actor_cpp_castToClassHash_FUN_0040c790(local_18,g_CMeleeClassInfo.name_hash);
            }
          }
          else {
            fVar1 = pCVar8[2].orient.pitch;
            if ((6 < (uint)fVar1) && (((uint)fVar1 < 8 || (fVar1 == 1.12104e-44)))) {
              core_actor_cpp_castToClassHash_FUN_0040c790(pCVar8,g_CMeleeClassInfo.name_hash);
            }
          }
        }
      }
    }
    local_20 = (this_ptr->base).base.field48_0x2a90;
    iVar2 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370((CCharacter *)this_ptr);
    fStack_14 = (float)((this_ptr->base).base.layer_actions[(this_ptr->base).base.field47_0x2a8c].
                        motion_index * 0x54c);
    pCVar3 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(local_2c);
    local_38 = pCVar3->motions[0].motion_name + (int)fStack_14;
    switch((this_ptr->base).base.field47_0x2a8c) {
    case 6:
      local_24 = (CDynamite *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(this_ptr->unk1 + 0x54),g_CDynamiteClassInfo.name_hash)
      ;
      if (((local_24 != (CDynamite *)0x0) &&
          (iVar4 = core_dynamite_cpp_CDynamite_FUN_0049cf70(local_24), iVar4 == 0)) &&
         (fStack_14 = (float)(0xb / (longlong)*(int *)(local_38 + 100)),
         (float)(int)fStack_14 <= (float)(this_ptr->base).base.field48_0x2a90)) {
        core_dynamite_cpp_CDynamite_FUN_0049cf20(local_24);
      }
      break;
    case 7:
      if ((this_ptr->action_pending == 3) &&
         (fStack_14 = (float)(0xb / (longlong)*(int *)(local_38 + 100)),
         (float)(int)fStack_14 <= (float)(this_ptr->base).base.field48_0x2a90)) {
        core_stranger_cpp_CStranger_FUN_005c51c0(this_ptr);
        local_34 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)(this_ptr->unk1 + 0x54),
                              g_CDynamiteClassInfo.name_hash);
        local_28 = local_34;
        if (local_34 != (CDemonActor *)0x0) {
          pCVar7 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                             ((CDemonActor *)this_ptr,&CStack_5c,&CStack_50);
          if ((CVector3f *)(local_28[4].actor_name + 0x1c) != pCVar7) {
            ((CVector3f *)(local_28[4].actor_name + 0x1c))->x = pCVar7->x;
            local_28[4].location.position.x = pCVar7->y;
            local_28[4].location.position.y = pCVar7->z;
          }
          (*(((local_34->vtable)._uc)->_uc).cfunc4)();
          this_ptr->unk1[0x54] = '\0';
          this_ptr->unk1[0x55] = '\0';
          this_ptr->unk1[0x56] = '\0';
          this_ptr->unk1[0x57] = '\0';
        }
        if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
          (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
        }
        this_ptr->action_pending = 0;
        *(float *)(this_ptr->unk1 + 0xc) = 10.0f;
      }
      if (1.0 <= (float)(this_ptr->base).base.field48_0x2a90) {
        (this_ptr->base).base.field47_0x2a8c = 0;
        (this_ptr->base).base.field48_0x2a90 = 0;
      }
      break;
    case 8:
      if (((local_20 < 0x3f19999a) && (0x3f199999 < (this_ptr->base).base.field48_0x2a90)) &&
         (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                            (*(CDemonActor **)(this_ptr->unk1 + 0x54),"CShotgun"),
         iVar4 != 0)) {
        (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x154) + 0xec))();
      }
      break;
    case 0xc:
      if (((local_20 < 0x3ebd70a4) && (0x3ebd70a3 < (this_ptr->base).base.field48_0x2a90)) &&
         (*(int *)(this_ptr->unk1 + 0x54) != 0)) {
        (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x154) + 0x70))();
      }
      break;
    case 0xd:
      if (((local_20 < 0x3f28f5c3) && (0x3f28f5c2 < (this_ptr->base).base.field48_0x2a90)) &&
         (*(int *)(this_ptr->unk1 + 0x54) != 0)) {
        (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x154) + 0x70))();
      }
    }
    if (-1 < iVar2) {
      pCVar8 = *(CDemonActor **)(this_ptr->unk1 + 0x54);
      if (pCVar8 != local_18) {
        if (pCVar8 != (CDemonActor *)0x0) {
          fVar1 = pCVar8[2].orient.pitch;
          if ((uint)fVar1 < 7) {
            if (fVar1 == 0.0) {
              iVar4 = 1;
            }
            else {
              iVar4 = 3;
            }
          }
          else if (((uint)fVar1 < 8) || (fVar1 == 1.12104e-44)) {
            pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar8,g_CMeleeClassInfo.name_hash)
            ;
            if ((pCVar8 == (CDemonActor *)0x0) || (pCVar8[4].location.position.z == 0.0)) {
              iVar4 = 0;
            }
            else {
              iVar4 = 3;
            }
          }
          else {
            iVar4 = 3;
          }
          if (iVar2 == iVar4) {
            (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x154) + 0xf0))();
            this_ptr->unk1[0x54] = '\0';
            this_ptr->unk1[0x55] = '\0';
            this_ptr->unk1[0x56] = '\0';
            this_ptr->unk1[0x57] = '\0';
          }
        }
        if (this_ptr->guns_drawn != 0) {
          if (local_18 == (CDemonActor *)0x0) {
LAB_005c53f2:
            iVar4 = 0;
          }
          else {
            fVar1 = local_18[2].orient.pitch;
            if ((uint)fVar1 < 7) {
              if (fVar1 == 0.0) {
                iVar4 = 1;
              }
              else {
                iVar4 = 3;
              }
            }
            else if (((uint)fVar1 < 8) || (fVar1 == 1.12104e-44)) {
              pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c790
                                 (local_18,g_CMeleeClassInfo.name_hash);
              if ((pCVar8 == (CDemonActor *)0x0) || (pCVar8[4].location.position.z == 0.0))
              goto LAB_005c53f2;
              iVar4 = 3;
            }
            else {
              iVar4 = 3;
            }
          }
          if ((iVar2 == iVar4) &&
             (*(CDemonActor **)(this_ptr->unk1 + 0x54) = local_18, local_18 != (CDemonActor *)0x0))
          {
            (*(((local_18->vtable)._uc)->_uc).cfunc2)();
          }
        }
      }
      if ((this_ptr->action_pending == 1) && (iVar2 == 3)) {
        core_hero_cpp_CHero_FUN_004f38d0(&this_ptr->base);
        this_ptr->action_pending = 0;
      }
      pCVar8 = *(CDemonActor **)((this_ptr->base).unk3 + 4);
      if ((pCVar8 != (CDemonActor *)0x0) && (iVar2 == 3)) {
        core_inv_cpp_CInventory_removeItem_FUN_004fea70(local_1c,pCVar8,0);
        core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0((CCharacter *)this_ptr);
        iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                          (*(CDemonActor **)((this_ptr->base).unk3 + 4),"CTrap");
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_2c,0x16,1);
          if (this_ptr->action_pending != 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       this_ptr->action_pending,0x13b4);
          }
          this_ptr->action_pending = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_2c,0x14,1);
          this_ptr->action_pending = 6;
        }
        (this_ptr->base).unk3[4] = '\0';
        (this_ptr->base).unk3[5] = '\0';
        (this_ptr->base).unk3[6] = '\0';
        (this_ptr->base).unk3[7] = '\0';
      }
      if (iVar2 == 10) {
        pCVar5 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c);
        if (pCVar5 == (CLightGun *)0x0) {
LAB_005c54e8:
          (this_ptr->base).is_wearing_gas_mask = 1;
        }
        else {
          (this_ptr->base).is_wearing_gas_mask = 2;
        }
      }
      else if ((iVar2 == 3) && ((this_ptr->base).is_wearing_gas_mask < 2)) {
        pCVar5 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c);
        if (pCVar5 != (CLightGun *)0x0) goto LAB_005c54e8;
        (this_ptr->base).is_wearing_gas_mask = 0;
      }
      if ((this_ptr->action_pending == 7) && ((iVar2 == 0 || (iVar2 == 8)))) {
        this_ptr->action_pending = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0((CCharacter *)this_ptr);
    }
    local_30 = local_30 + 1;
    if (1 < local_30) {
      return;
    }
  } while( true );
}
