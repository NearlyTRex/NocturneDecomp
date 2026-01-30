// Name: core_stranger.cpp_CStranger_FUN_005c5270
// Address: 005c5270
// Address Range: [[005c5270, 005c5b68]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c5270(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005c5793) */
/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c5270(uint param_1,
   uint param_2) */

void __cdecl core_stranger_cpp_CStranger_FUN_005c5270(void)

{
  float fVar1;
  int iVar2;
  CMotionList *pCVar3;
  int iVar4;
  CLightGun *pCVar5;
  uint uVar6;
  CVector3f *pCVar7;
  CDemonActor *pCVar8;
  CCharacter *in_stack_00000004;
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
  
  if ((*(int *)(in_stack_00000004->unk3 + 0x46c) == 0xe) &&
     (in_stack_00000004->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    in_stack_00000004->unk3[0x470] = '\0';
    in_stack_00000004->unk3[0x471] = '\0';
    in_stack_00000004->unk3[0x472] = '\0';
    in_stack_00000004->unk3[0x473] = '\0';
    in_stack_00000004->unk3[0x46c] = '\0';
    in_stack_00000004->unk3[0x46d] = '\0';
    in_stack_00000004->unk3[0x46e] = '\0';
    in_stack_00000004->unk3[0x46f] = '\0';
  }
  local_40 = 0xffffffff;
  local_1c = (CInventory *)0x0;
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) == 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
      pCVar8 = in_stack_00000004->carry_hands[1].carry_actor;
      if (((pCVar8 != (CDemonActor *)0x0) &&
          (local_1c = (CInventory *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCVar8,g_CWeaponClassInfo.name_hash), local_1c == (CInventory *)0x0
          )) && (pCVar8 = in_stack_00000004->carry_hands[1].carry_actor,
                uVar6 = (*((pCVar8->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar8),
                (uVar6 & 3) != 0)) {
        local_3c = 8;
      }
      if ((local_18 == (CDemonActor *)0x0) && (local_3c < 0)) {
        in_stack_00000004[2].cloth_data[0x54f4] = '\0';
        in_stack_00000004[2].cloth_data[0x54f5] = '\0';
        in_stack_00000004[2].cloth_data[0x54f6] = '\0';
        in_stack_00000004[2].cloth_data[0x54f7] = '\0';
      }
    }
  }
  else {
    in_stack_00000004[2].cloth_data[0x54f4] = '\0';
    in_stack_00000004[2].cloth_data[0x54f5] = '\0';
    in_stack_00000004[2].cloth_data[0x54f6] = '\0';
    in_stack_00000004[2].cloth_data[0x54f7] = '\0';
  }
  local_1c = (CInventory *)(in_stack_00000004[2].cloth_data + 0x5058);
  local_2c = &(in_stack_00000004->model).motion_controller;
  local_30 = 0;
  do {
    if (in_stack_00000008 <= 0.0) {
      return;
    }
    iVar2 = *(int *)(in_stack_00000004[2].cloth_data + 0x5558);
    if (((iVar2 != 1) && (*(int *)(in_stack_00000004[2].cloth_data + 0x54d4) == 0)) && (iVar2 != 2))
    {
      if (iVar2 == 3) {
        fStack_14 = core_charactr_cpp_CCharacter_FUN_0042e840();
        if ((float)0.98999999999999999 < fStack_14) {
          fVar1 = in_stack_00000008 * (float)25 +
                  *(float *)(in_stack_00000004[2].cloth_data + 0x5504);
          *(float *)(in_stack_00000004[2].cloth_data + 0x5504) = fVar1;
          if (70.0f < fVar1) {
            *(float *)(in_stack_00000004[2].cloth_data + 0x5504) = 70.0f;
          }
          if (*(int *)(in_stack_00000004[1].base.actor_name + 0x14) != 0) {
            return;
          }
          goto switchD_005c56f5_caseD_8;
        }
      }
      else {
        pCVar5 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c);
        if ((((pCVar5 == (CLightGun *)0x0) ||
             (*(int *)(in_stack_00000004[2].cloth_data + 0x54b8) != 0)) &&
            (((pCVar5 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c),
              pCVar5 == (CLightGun *)0x0 ||
              (*(int *)(in_stack_00000004[2].cloth_data + 0x54b8) != 1)) &&
             ((pCVar5 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c),
              pCVar5 != (CLightGun *)0x0 ||
              (*(int *)(in_stack_00000004[2].cloth_data + 0x54b8) != 2)))))) &&
           (((pCVar5 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c),
             pCVar5 != (CLightGun *)0x0 || (*(int *)(in_stack_00000004[2].cloth_data + 0x54b8) != 1)
             ) && (local_3c < 0)))) {
          pCVar8 = *(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c);
          if (pCVar8 == local_18) {
            if (*(int *)(in_stack_00000004[2].cloth_data + 0x554c) == 0) {
switchD_005c56f5_caseD_8:
            }
            else {
              switch(*(uint *)(*(int *)(in_stack_00000004[2].cloth_data + 0x554c) + 0x2e0)) {
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
    local_20 = *(int *)(in_stack_00000004->unk3 + 0x470);
    iVar2 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370(in_stack_00000004);
    fStack_14 = (float)(*(int *)(in_stack_00000004->unk3 +
                                *(int *)(in_stack_00000004->unk3 + 0x46c) * 0x38 + 0x38) * 0x54c);
    pCVar3 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(local_2c);
    local_38 = pCVar3->motions[0].motion_name + (int)fStack_14;
    switch(*(uint *)(in_stack_00000004->unk3 + 0x46c)) {
    case 6:
      local_24 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c),
                            g_CDynamiteClassInfo.name_hash);
      if (((local_24 != (CDemonActor *)0x0) &&
          (iVar4 = core_dynamite_cpp_FUN_0049cf70(), iVar4 == 0)) &&
         (fStack_14 = (float)(0xb / (longlong)*(int *)(local_38 + 100)),
         (float)(int)fStack_14 <= *(float *)(in_stack_00000004->unk3 + 0x470))) {
        core_dynamite_cpp_FUN_0049cf20();
      }
      break;
    case 7:
      if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 3) &&
         (fStack_14 = (float)(0xb / (longlong)*(int *)(local_38 + 100)),
         (float)(int)fStack_14 <= *(float *)(in_stack_00000004->unk3 + 0x470))) {
        core_stranger_cpp_CStranger_FUN_005c51c0();
        local_34 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c),
                              g_CDynamiteClassInfo.name_hash);
        local_28 = local_34;
        if (local_34 != (CDemonActor *)0x0) {
          pCVar7 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                             (&in_stack_00000004->base,&CStack_5c,&CStack_50);
          if ((CVector3f *)(local_28[4].actor_name + 0x1c) != pCVar7) {
            ((CVector3f *)(local_28[4].actor_name + 0x1c))->x = pCVar7->x;
            local_28[4].location.position.x = pCVar7->y;
            local_28[4].location.position.y = pCVar7->z;
          }
          (*(((local_34->vtable)._uc)->_uc).cfunc4)();
          in_stack_00000004[2].cloth_data[0x554c] = '\0';
          in_stack_00000004[2].cloth_data[0x554d] = '\0';
          in_stack_00000004[2].cloth_data[0x554e] = '\0';
          in_stack_00000004[2].cloth_data[0x554f] = '\0';
        }
        if (in_stack_00000004->carry_hands[1].carry_actor != (CDemonActor *)0x0) {
          (*(((in_stack_00000004->base).vtable._uc)->_uc).cfunc21)();
        }
        in_stack_00000004[2].cloth_data[0x5558] = '\0';
        in_stack_00000004[2].cloth_data[0x5559] = '\0';
        in_stack_00000004[2].cloth_data[0x555a] = '\0';
        in_stack_00000004[2].cloth_data[0x555b] = '\0';
        *(float *)(in_stack_00000004[2].cloth_data + 0x5504) = 10.0f;
      }
      if (1.0 <= *(float *)(in_stack_00000004->unk3 + 0x470)) {
        in_stack_00000004->unk3[0x46c] = '\0';
        in_stack_00000004->unk3[0x46d] = '\0';
        in_stack_00000004->unk3[0x46e] = '\0';
        in_stack_00000004->unk3[0x46f] = '\0';
        in_stack_00000004->unk3[0x470] = '\0';
        in_stack_00000004->unk3[0x471] = '\0';
        in_stack_00000004->unk3[0x472] = '\0';
        in_stack_00000004->unk3[0x473] = '\0';
      }
      break;
    case 8:
      if (((local_20 < 0x3f19999a) && (0x3f199999 < *(int *)(in_stack_00000004->unk3 + 0x470))) &&
         (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                            (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c),
                             "CShotgun"), iVar4 != 0)) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x554c) + 0x154) + 0xec))()
        ;
      }
      break;
    case 0xc:
      if (((local_20 < 0x3ebd70a4) && (0x3ebd70a3 < *(int *)(in_stack_00000004->unk3 + 0x470))) &&
         (*(int *)(in_stack_00000004[2].cloth_data + 0x554c) != 0)) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x554c) + 0x154) + 0x70))()
        ;
      }
      break;
    case 0xd:
      if (((local_20 < 0x3f28f5c3) && (0x3f28f5c2 < *(int *)(in_stack_00000004->unk3 + 0x470))) &&
         (*(int *)(in_stack_00000004[2].cloth_data + 0x554c) != 0)) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x554c) + 0x154) + 0x70))()
        ;
      }
    }
    if (-1 < iVar2) {
      pCVar8 = *(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c);
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
            (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x554c) + 0x154) + 0xf0
                        ))();
            in_stack_00000004[2].cloth_data[0x554c] = '\0';
            in_stack_00000004[2].cloth_data[0x554d] = '\0';
            in_stack_00000004[2].cloth_data[0x554e] = '\0';
            in_stack_00000004[2].cloth_data[0x554f] = '\0';
          }
        }
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
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
             (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c) = local_18,
             local_18 != (CDemonActor *)0x0)) {
            (*(((local_18->vtable)._uc)->_uc).cfunc2)();
          }
        }
      }
      if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 1) && (iVar2 == 3)) {
        core_hero_cpp_FUN_004f38d0();
        in_stack_00000004[2].cloth_data[0x5558] = '\0';
        in_stack_00000004[2].cloth_data[0x5559] = '\0';
        in_stack_00000004[2].cloth_data[0x555a] = '\0';
        in_stack_00000004[2].cloth_data[0x555b] = '\0';
      }
      if ((*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54d4) != (CDemonActor *)0x0) &&
         (iVar2 == 3)) {
        core_inv_cpp_CInventory_removeItem_FUN_004fea70
                  (local_1c,*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54d4),0);
        core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(in_stack_00000004);
        iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                          (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54d4),
                           "CTrap");
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_2c,0x16,1);
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x5558) != 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       *(int *)(in_stack_00000004[2].cloth_data + 0x5558),0x13b4);
          }
          in_stack_00000004[2].cloth_data[0x5558] = '\x02';
          in_stack_00000004[2].cloth_data[0x5559] = '\0';
          in_stack_00000004[2].cloth_data[0x555a] = '\0';
          in_stack_00000004[2].cloth_data[0x555b] = '\0';
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_2c,0x14,1);
          in_stack_00000004[2].cloth_data[0x5558] = '\x06';
          in_stack_00000004[2].cloth_data[0x5559] = '\0';
          in_stack_00000004[2].cloth_data[0x555a] = '\0';
          in_stack_00000004[2].cloth_data[0x555b] = '\0';
        }
        in_stack_00000004[2].cloth_data[0x54d4] = '\0';
        in_stack_00000004[2].cloth_data[0x54d5] = '\0';
        in_stack_00000004[2].cloth_data[0x54d6] = '\0';
        in_stack_00000004[2].cloth_data[0x54d7] = '\0';
      }
      if (iVar2 == 10) {
        pCVar5 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c);
        if (pCVar5 == (CLightGun *)0x0) {
LAB_005c54e8:
          in_stack_00000004[2].cloth_data[0x54b8] = '\x01';
          in_stack_00000004[2].cloth_data[0x54b9] = '\0';
          in_stack_00000004[2].cloth_data[0x54ba] = '\0';
          in_stack_00000004[2].cloth_data[0x54bb] = '\0';
        }
        else {
          in_stack_00000004[2].cloth_data[0x54b8] = '\x02';
          in_stack_00000004[2].cloth_data[0x54b9] = '\0';
          in_stack_00000004[2].cloth_data[0x54ba] = '\0';
          in_stack_00000004[2].cloth_data[0x54bb] = '\0';
        }
      }
      else if ((iVar2 == 3) && (*(int *)(in_stack_00000004[2].cloth_data + 0x54b8) < 2)) {
        pCVar5 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c);
        if (pCVar5 != (CLightGun *)0x0) goto LAB_005c54e8;
        in_stack_00000004[2].cloth_data[0x54b8] = '\0';
        in_stack_00000004[2].cloth_data[0x54b9] = '\0';
        in_stack_00000004[2].cloth_data[0x54ba] = '\0';
        in_stack_00000004[2].cloth_data[0x54bb] = '\0';
      }
      if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 7) &&
         ((iVar2 == 0 || (iVar2 == 8)))) {
        in_stack_00000004[2].cloth_data[0x5558] = '\0';
        in_stack_00000004[2].cloth_data[0x5559] = '\0';
        in_stack_00000004[2].cloth_data[0x555a] = '\0';
        in_stack_00000004[2].cloth_data[0x555b] = '\0';
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(in_stack_00000004);
    }
    local_30 = local_30 + 1;
    if (1 < local_30) {
      return;
    }
  } while( true );
}
