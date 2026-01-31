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
  CHero *pCVar2;
  int iVar3;
  CMotionList *pCVar4;
  int iVar5;
  CLightGun *pCVar6;
  uint uVar7;
  CVector3f *pCVar8;
  CDemonActor *pCVar9;
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
  CDemonActor *local_24;
  int local_20;
  CInventory *local_1c;
  CDemonActor *local_18;
  float fStack_14;
  
  if ((*(int *)((this_ptr->base).base.unk3 + 0x46c) == 0xe) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    pCVar2 = &this_ptr->base;
    (pCVar2->base).unk3[0x470] = '\0';
    (pCVar2->base).unk3[0x471] = '\0';
    (pCVar2->base).unk3[0x472] = '\0';
    (pCVar2->base).unk3[0x473] = '\0';
    pCVar2 = &this_ptr->base;
    (pCVar2->base).unk3[0x46c] = '\0';
    (pCVar2->base).unk3[0x46d] = '\0';
    (pCVar2->base).unk3[0x46e] = '\0';
    (pCVar2->base).unk3[0x46f] = '\0';
  }
  local_40 = 0xffffffff;
  local_1c = (CInventory *)0x0;
  if (*(int *)((this_ptr->base).unk4 + 0x14) == 0) {
    if (this_ptr->guns_drawn != 0) {
      pCVar9 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (((pCVar9 != (CDemonActor *)0x0) &&
          (local_1c = (CInventory *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCVar9,g_CWeaponClassInfo.name_hash), local_1c == (CInventory *)0x0
          )) && (pCVar9 = (this_ptr->base).base.carry_hands[1].carry_actor,
                uVar7 = (*((pCVar9->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar9),
                (uVar7 & 3) != 0)) {
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
    iVar3 = this_ptr->action_pending;
    if (((iVar3 != 1) && (*(int *)((this_ptr->base).unk4 + 0x18) == 0)) && (iVar3 != 2)) {
      if (iVar3 == 3) {
        fStack_14 = core_charactr_cpp_CCharacter_FUN_0042e840((CCharacter *)this_ptr);
        if ((float)0.98999999999999999 < fStack_14) {
          fVar1 = in_stack_00000008 * (float)25 + *(float *)(this_ptr->unk1 + 0xc);
          *(float *)(this_ptr->unk1 + 0xc) = fVar1;
          if (70.0f < fVar1) {
            *(float *)(this_ptr->unk1 + 0xc) = 70.0f;
          }
          if (*(int *)((this_ptr->base).unk2 + 0xc) != 0) {
            return;
          }
          goto switchD_005c56f5_caseD_8;
        }
      }
      else {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c);
        if ((((pCVar6 == (CLightGun *)0x0) || ((this_ptr->base).is_wearing_gas_mask != 0)) &&
            (((pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c),
              pCVar6 == (CLightGun *)0x0 || ((this_ptr->base).is_wearing_gas_mask != 1)) &&
             ((pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c),
              pCVar6 != (CLightGun *)0x0 || ((this_ptr->base).is_wearing_gas_mask != 2)))))) &&
           (((pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c),
             pCVar6 != (CLightGun *)0x0 || ((this_ptr->base).is_wearing_gas_mask != 1)) &&
            (local_3c < 0)))) {
          pCVar9 = *(CDemonActor **)(this_ptr->unk1 + 0x54);
          if (pCVar9 == local_18) {
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
          else if (pCVar9 == (CDemonActor *)0x0) {
            if (((local_18 != (CDemonActor *)0x0) &&
                (fVar1 = local_18[2].orient.pitch, 6 < (uint)fVar1)) &&
               (((uint)fVar1 < 8 || (fVar1 == 1.12104e-44)))) {
              core_actor_cpp_castToClassHash_FUN_0040c790(local_18,g_CMeleeClassInfo.name_hash);
            }
          }
          else {
            fVar1 = pCVar9[2].orient.pitch;
            if ((6 < (uint)fVar1) && (((uint)fVar1 < 8 || (fVar1 == 1.12104e-44)))) {
              core_actor_cpp_castToClassHash_FUN_0040c790(pCVar9,g_CMeleeClassInfo.name_hash);
            }
          }
        }
      }
    }
    local_20 = *(int *)((this_ptr->base).base.unk3 + 0x470);
    iVar3 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370((CCharacter *)this_ptr);
    fStack_14 = (float)(*(int *)((this_ptr->base).base.unk3 +
                                *(int *)((this_ptr->base).base.unk3 + 0x46c) * 0x38 + 0x38) * 0x54c)
    ;
    pCVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(local_2c);
    local_38 = pCVar4->motions[0].motion_name + (int)fStack_14;
    switch(*(uint *)((this_ptr->base).base.unk3 + 0x46c)) {
    case 6:
      local_24 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(this_ptr->unk1 + 0x54),g_CDynamiteClassInfo.name_hash)
      ;
      if (((local_24 != (CDemonActor *)0x0) &&
          (iVar5 = core_dynamite_cpp_FUN_0049cf70(), iVar5 == 0)) &&
         (fStack_14 = (float)(0xb / (longlong)*(int *)(local_38 + 100)),
         (float)(int)fStack_14 <= *(float *)((this_ptr->base).base.unk3 + 0x470))) {
        core_dynamite_cpp_FUN_0049cf20();
      }
      break;
    case 7:
      if ((this_ptr->action_pending == 3) &&
         (fStack_14 = (float)(0xb / (longlong)*(int *)(local_38 + 100)),
         (float)(int)fStack_14 <= *(float *)((this_ptr->base).base.unk3 + 0x470))) {
        core_stranger_cpp_CStranger_FUN_005c51c0(this_ptr);
        local_34 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)(this_ptr->unk1 + 0x54),
                              g_CDynamiteClassInfo.name_hash);
        local_28 = local_34;
        if (local_34 != (CDemonActor *)0x0) {
          pCVar8 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                             ((CDemonActor *)this_ptr,&CStack_5c,&CStack_50);
          if ((CVector3f *)(local_28[4].actor_name + 0x1c) != pCVar8) {
            ((CVector3f *)(local_28[4].actor_name + 0x1c))->x = pCVar8->x;
            local_28[4].location.position.x = pCVar8->y;
            local_28[4].location.position.y = pCVar8->z;
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
      if (1.0 <= *(float *)((this_ptr->base).base.unk3 + 0x470)) {
        pCVar2 = &this_ptr->base;
        (pCVar2->base).unk3[0x46c] = '\0';
        (pCVar2->base).unk3[0x46d] = '\0';
        (pCVar2->base).unk3[0x46e] = '\0';
        (pCVar2->base).unk3[0x46f] = '\0';
        pCVar2 = &this_ptr->base;
        (pCVar2->base).unk3[0x470] = '\0';
        (pCVar2->base).unk3[0x471] = '\0';
        (pCVar2->base).unk3[0x472] = '\0';
        (pCVar2->base).unk3[0x473] = '\0';
      }
      break;
    case 8:
      if (((local_20 < 0x3f19999a) && (0x3f199999 < *(int *)((this_ptr->base).base.unk3 + 0x470)))
         && (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0
                               (*(CDemonActor **)(this_ptr->unk1 + 0x54),"CShotgun"),
            iVar5 != 0)) {
        (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x154) + 0xec))();
      }
      break;
    case 0xc:
      if (((local_20 < 0x3ebd70a4) && (0x3ebd70a3 < *(int *)((this_ptr->base).base.unk3 + 0x470)))
         && (*(int *)(this_ptr->unk1 + 0x54) != 0)) {
        (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x154) + 0x70))();
      }
      break;
    case 0xd:
      if (((local_20 < 0x3f28f5c3) && (0x3f28f5c2 < *(int *)((this_ptr->base).base.unk3 + 0x470)))
         && (*(int *)(this_ptr->unk1 + 0x54) != 0)) {
        (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x154) + 0x70))();
      }
    }
    if (-1 < iVar3) {
      pCVar9 = *(CDemonActor **)(this_ptr->unk1 + 0x54);
      if (pCVar9 != local_18) {
        if (pCVar9 != (CDemonActor *)0x0) {
          fVar1 = pCVar9[2].orient.pitch;
          if ((uint)fVar1 < 7) {
            if (fVar1 == 0.0) {
              iVar5 = 1;
            }
            else {
              iVar5 = 3;
            }
          }
          else if (((uint)fVar1 < 8) || (fVar1 == 1.12104e-44)) {
            pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar9,g_CMeleeClassInfo.name_hash)
            ;
            if ((pCVar9 == (CDemonActor *)0x0) || (pCVar9[4].location.position.z == 0.0)) {
              iVar5 = 0;
            }
            else {
              iVar5 = 3;
            }
          }
          else {
            iVar5 = 3;
          }
          if (iVar3 == iVar5) {
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
            iVar5 = 0;
          }
          else {
            fVar1 = local_18[2].orient.pitch;
            if ((uint)fVar1 < 7) {
              if (fVar1 == 0.0) {
                iVar5 = 1;
              }
              else {
                iVar5 = 3;
              }
            }
            else if (((uint)fVar1 < 8) || (fVar1 == 1.12104e-44)) {
              pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c790
                                 (local_18,g_CMeleeClassInfo.name_hash);
              if ((pCVar9 == (CDemonActor *)0x0) || (pCVar9[4].location.position.z == 0.0))
              goto LAB_005c53f2;
              iVar5 = 3;
            }
            else {
              iVar5 = 3;
            }
          }
          if ((iVar3 == iVar5) &&
             (*(CDemonActor **)(this_ptr->unk1 + 0x54) = local_18, local_18 != (CDemonActor *)0x0))
          {
            (*(((local_18->vtable)._uc)->_uc).cfunc2)();
          }
        }
      }
      if ((this_ptr->action_pending == 1) && (iVar3 == 3)) {
        core_hero_cpp_CHero_FUN_004f38d0(&this_ptr->base);
        this_ptr->action_pending = 0;
      }
      pCVar9 = *(CDemonActor **)((this_ptr->base).unk4 + 0x18);
      if ((pCVar9 != (CDemonActor *)0x0) && (iVar3 == 3)) {
        core_inv_cpp_CInventory_removeItem_FUN_004fea70(local_1c,pCVar9,0);
        core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0((CCharacter *)this_ptr);
        iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0
                          (*(CDemonActor **)((this_ptr->base).unk4 + 0x18),"CTrap");
        if (iVar5 == 0) {
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
        (this_ptr->base).unk4[0x18] = '\0';
        (this_ptr->base).unk4[0x19] = '\0';
        (this_ptr->base).unk4[0x1a] = '\0';
        (this_ptr->base).unk4[0x1b] = '\0';
      }
      if (iVar3 == 10) {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c);
        if (pCVar6 == (CLightGun *)0x0) {
LAB_005c54e8:
          (this_ptr->base).is_wearing_gas_mask = 1;
        }
        else {
          (this_ptr->base).is_wearing_gas_mask = 2;
        }
      }
      else if ((iVar3 == 3) && ((this_ptr->base).is_wearing_gas_mask < 2)) {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c);
        if (pCVar6 != (CLightGun *)0x0) goto LAB_005c54e8;
        (this_ptr->base).is_wearing_gas_mask = 0;
      }
      if ((this_ptr->action_pending == 7) && ((iVar3 == 0 || (iVar3 == 8)))) {
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
