// Name: core_stranger.cpp_CStranger_FUN_005c5270
// Address: 005c5270
// Address Range: [[005c5270, 005c5b68]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c5270()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc2a9 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005c5228 = 005c56fc
//   void* switchdataD_005c524c = 005c5362
//   TerminatedCString s_CShotgun_00653d94
//   TerminatedCString s_CTrap_00653d9d
//   TerminatedCString s_actionPending_d_stranger_00653da3
//   double DOUBLE_00653dcc = 25
//   double DOUBLE_00653dd4 = 0.990000000000000
//   undefined4 DAT_00663744
//   undefined4 DAT_00663748
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   undefined4 g_CDynamiteClassInfo.name_hash
//   CEditorTools g_CEditorToolsPtr
//   undefined4 g_CMeleeClassInfo.name_hash
//   CDemonMission g_CDemonMissionInstance
//   undefined4 g_CWeaponClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370
//   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
//   core_charactr.cpp_CCharacter_FUN_0042e840
//   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   core_dynamite.cpp_FUN_0049cf20
//   core_dynamite.cpp_FUN_0049cf70
//   core_hero.cpp_FUN_004f38d0
//   core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0
//   core_inv.cpp_CInventory_removeItem_FUN_004fea70
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_stranger.cpp_CStranger_FUN_005c51c0
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c5270(undefined4 param_1,
   undefined4 param_2) */

void core_stranger_cpp_CStranger_FUN_005c5270(void)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  CDemonActor *pCVar4;
  CMotionList *pCVar5;
  CDemonActor *pCVar6;
  int iVar7;
  CLightGun *pCVar8;
  uint uVar9;
  CVector3f *pCVar10;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  undefined4 local_40;
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
  
  if ((*(int *)(in_stack_00000004->field13_0x2620 + 0x46c) == 0xe) &&
     (in_stack_00000004->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    in_stack_00000004->field13_0x2620[0x470] = '\0';
    in_stack_00000004->field13_0x2620[0x471] = '\0';
    in_stack_00000004->field13_0x2620[0x472] = '\0';
    in_stack_00000004->field13_0x2620[0x473] = '\0';
    in_stack_00000004->field13_0x2620[0x46c] = '\0';
    in_stack_00000004->field13_0x2620[0x46d] = '\0';
    in_stack_00000004->field13_0x2620[0x46e] = '\0';
    in_stack_00000004->field13_0x2620[0x46f] = '\0';
  }
  local_40 = 0xffffffff;
  local_1c = (CInventory *)0x0;
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) == 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
      pCVar4 = in_stack_00000004->carry_hands[1].carry_actor;
      if (((pCVar4 != (CDemonActor *)0x0) &&
          (local_1c = (CInventory *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCVar4,g_CWeaponClassInfo.name_hash), local_1c == (CInventory *)0x0
          )) && (pCVar4 = in_stack_00000004->carry_hands[1].carry_actor,
                uVar9 = (*pCVar4->vtable->getAllowedMeleeAttackTypes)(pCVar4), (uVar9 & 3) != 0)) {
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
    iVar7 = *(int *)(in_stack_00000004[2].cloth_data + 0x5558);
    if (((iVar7 != 1) && (*(int *)(in_stack_00000004[2].cloth_data + 0x54d4) == 0)) && (iVar7 != 2))
    {
      if (iVar7 == 3) {
        fStack_14 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
        if ((float)DOUBLE_00653dd4 < fStack_14) {
          fVar1 = in_stack_00000008 * (float)DOUBLE_00653dcc +
                  *(float *)(in_stack_00000004[2].cloth_data + 0x5504);
          *(float *)(in_stack_00000004[2].cloth_data + 0x5504) = fVar1;
          if (DAT_00663748 < fVar1) {
            *(float *)(in_stack_00000004[2].cloth_data + 0x5504) = DAT_00663748;
          }
          if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
            return;
          }
          goto switchD_005c56f5_caseD_8;
        }
      }
      else {
        pCVar8 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c);
        if ((((pCVar8 == (CLightGun *)0x0) ||
             (*(int *)(in_stack_00000004[2].cloth_data + 0x54b8) != 0)) &&
            (((pCVar8 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c),
              pCVar8 == (CLightGun *)0x0 ||
              (*(int *)(in_stack_00000004[2].cloth_data + 0x54b8) != 1)) &&
             ((pCVar8 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c),
              pCVar8 != (CLightGun *)0x0 ||
              (*(int *)(in_stack_00000004[2].cloth_data + 0x54b8) != 2)))))) &&
           (((pCVar8 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c),
             pCVar8 != (CLightGun *)0x0 || (*(int *)(in_stack_00000004[2].cloth_data + 0x54b8) != 1)
             ) && (local_3c < 0)))) {
          pCVar4 = *(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c);
          if (pCVar4 == local_18) {
            if (*(int *)(in_stack_00000004[2].cloth_data + 0x554c) == 0) {
switchD_005c56f5_caseD_8:
            }
            else {
              switch(*(undefined4 *)(*(int *)(in_stack_00000004[2].cloth_data + 0x554c) + 0x2e0)) {
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
          else if (pCVar4 != (CDemonActor *)0x0) {
            if (((pCVar4 != (CDemonActor *)0x0) && (fVar1 = pCVar4[2].orient.pitch, 6 < (uint)fVar1)
                ) && (((uint)fVar1 < 8 || (fVar1 == 1.12104e-44)))) {
              core_actor_cpp_castToClassHash_FUN_0040c790(pCVar4,g_CMeleeClassInfo.name_hash);
            }
          }
          else if (((local_18 != (CDemonActor *)0x0) &&
                   (fVar1 = local_18[2].orient.pitch, 6 < (uint)fVar1)) &&
                  (((uint)fVar1 < 8 || (fVar1 == 1.12104e-44)))) {
            core_actor_cpp_castToClassHash_FUN_0040c790(local_18,g_CMeleeClassInfo.name_hash);
          }
        }
      }
    }
    local_20 = *(int *)(in_stack_00000004->field13_0x2620 + 0x470);
    pCVar4 = (CDemonActor *)
             core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370(in_stack_00000004);
    fStack_14 = (float)(*(int *)(in_stack_00000004->field13_0x2620 +
                                *(int *)(in_stack_00000004->field13_0x2620 + 0x46c) * 0x38 + 0x38) *
                       0x54c);
    pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(local_2c);
    local_38 = pCVar5->motions[0].motion_name + (int)fStack_14;
    switch(*(undefined4 *)(in_stack_00000004->field13_0x2620 + 0x46c)) {
    case 6:
      local_24 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c),
                            g_CDynamiteClassInfo.name_hash);
      if ((local_24 != (CDemonActor *)0x0) && (iVar7 = core_dynamite_cpp_FUN_0049cf70(), iVar7 == 0)
         ) {
        lVar2 = 0xb / (longlong)*(int *)(local_38 + 100);
        fStack_14 = (float)lVar2;
        fVar3 = (float)(int)fStack_14;
        fVar1 = *(float *)(in_stack_00000004->field13_0x2620 + 0x470);
        if (fVar3 < fVar1 || (fVar3 == fVar1) != 0) {
          core_dynamite_cpp_FUN_0049cf20
                    (CONCAT22((short)((ulonglong)lVar2 >> 0x10),
                              (ushort)(fVar3 < fVar1) << 8 |
                              (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                              (ushort)(fVar3 == fVar1) << 0xe),
                     (int)(0xb % (longlong)*(int *)(local_38 + 100)),in_stack_00000004,local_24,
                     local_24);
        }
      }
      break;
    case 7:
      if (*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 3) {
        fStack_14 = (float)(0xb / (longlong)*(int *)(local_38 + 100));
        if ((float)(int)fStack_14 <= *(float *)(in_stack_00000004->field13_0x2620 + 0x470)) {
          core_stranger_cpp_CStranger_FUN_005c51c0
                    (&CStack_50,(int)(0xb % (longlong)*(int *)(local_38 + 100)),in_stack_00000004,
                     local_38,in_stack_00000004,&CStack_50);
          local_34 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c),
                                g_CDynamiteClassInfo.name_hash);
          local_28 = local_34;
          if (local_34 != (CDemonActor *)0x0) {
            pCVar10 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                                (&in_stack_00000004->base_actor,&CStack_5c,&CStack_50);
            if ((CVector3f *)(local_28[4].actor_name + 0x1c) != pCVar10) {
              ((CVector3f *)(local_28[4].actor_name + 0x1c))->x = pCVar10->x;
              local_28[4].location.position.x = pCVar10->y;
              local_28[4].location.position.y = pCVar10->z;
            }
            (*local_34->vtable[1].renderTransparent)(local_34);
            in_stack_00000004[2].cloth_data[0x554c] = '\0';
            in_stack_00000004[2].cloth_data[0x554d] = '\0';
            in_stack_00000004[2].cloth_data[0x554e] = '\0';
            in_stack_00000004[2].cloth_data[0x554f] = '\0';
          }
          if (in_stack_00000004->carry_hands[1].carry_actor != (CDemonActor *)0x0) {
            (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)
                      (&in_stack_00000004->base_actor);
          }
          in_stack_00000004[2].cloth_data[0x5558] = '\0';
          in_stack_00000004[2].cloth_data[0x5559] = '\0';
          in_stack_00000004[2].cloth_data[0x555a] = '\0';
          in_stack_00000004[2].cloth_data[0x555b] = '\0';
          *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x5504) = DAT_00663744;
        }
      }
      if (1.0 <= *(float *)(in_stack_00000004->field13_0x2620 + 0x470)) {
        in_stack_00000004->field13_0x2620[0x46c] = '\0';
        in_stack_00000004->field13_0x2620[0x46d] = '\0';
        in_stack_00000004->field13_0x2620[0x46e] = '\0';
        in_stack_00000004->field13_0x2620[0x46f] = '\0';
        in_stack_00000004->field13_0x2620[0x470] = '\0';
        in_stack_00000004->field13_0x2620[0x471] = '\0';
        in_stack_00000004->field13_0x2620[0x472] = '\0';
        in_stack_00000004->field13_0x2620[0x473] = '\0';
      }
      break;
    case 8:
      if (((local_20 < 0x3f19999a) &&
          (0x3f199999 < *(int *)(in_stack_00000004->field13_0x2620 + 0x470))) &&
         (iVar7 = core_actor_cpp_isOfClass_FUN_0040c6d0
                            (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c),
                             "CShotgun"), iVar7 != 0)) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x554c) + 0x154) + 0xec))()
        ;
      }
      break;
    case 0xc:
      if (((local_20 < 0x3ebd70a4) &&
          (0x3ebd70a3 < *(int *)(in_stack_00000004->field13_0x2620 + 0x470))) &&
         (*(int *)(in_stack_00000004[2].cloth_data + 0x554c) != 0)) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x554c) + 0x154) + 0x70))()
        ;
      }
      break;
    case 0xd:
      if (((local_20 < 0x3f28f5c3) &&
          (0x3f28f5c2 < *(int *)(in_stack_00000004->field13_0x2620 + 0x470))) &&
         (*(int *)(in_stack_00000004[2].cloth_data + 0x554c) != 0)) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x554c) + 0x154) + 0x70))()
        ;
      }
    }
    if (-1 < (int)pCVar4) {
      pCVar6 = *(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c);
      if (pCVar6 != local_18) {
        if (pCVar6 != (CDemonActor *)0x0) {
          if (pCVar6 != (CDemonActor *)0x0) {
            fVar1 = pCVar6[2].orient.pitch;
            if ((uint)fVar1 < 7) {
              if (fVar1 == 0.0) {
                pCVar6 = (CDemonActor *)&DAT_00000001;
              }
              else {
                pCVar6 = (CDemonActor *)0x3;
              }
            }
            else if (((uint)fVar1 < 8) || (fVar1 == 1.12104e-44)) {
              pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                                 (pCVar6,g_CMeleeClassInfo.name_hash);
              if ((pCVar6 == (CDemonActor *)0x0) || (pCVar6[4].location.position.z == 0.0)) {
                pCVar6 = (CDemonActor *)0x0;
              }
              else {
                pCVar6 = (CDemonActor *)0x3;
              }
            }
            else {
              pCVar6 = (CDemonActor *)0x3;
            }
          }
          if (pCVar4 == pCVar6) {
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
            pCVar6 = (CDemonActor *)0x0;
          }
          else {
            fVar1 = local_18[2].orient.pitch;
            if ((uint)fVar1 < 7) {
              if (fVar1 == 0.0) {
                pCVar6 = (CDemonActor *)&DAT_00000001;
              }
              else {
                pCVar6 = (CDemonActor *)0x3;
              }
            }
            else if (((uint)fVar1 < 8) || (fVar1 == 1.12104e-44)) {
              pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                                 (local_18,g_CMeleeClassInfo.name_hash);
              if ((pCVar6 == (CDemonActor *)0x0) || (pCVar6[4].location.position.z == 0.0))
              goto LAB_005c53f2;
              pCVar6 = (CDemonActor *)0x3;
            }
            else {
              pCVar6 = (CDemonActor *)0x3;
            }
          }
          if ((pCVar4 == pCVar6) &&
             (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c) = local_18,
             local_18 != (CDemonActor *)0x0)) {
            (*local_18->vtable[1].process)(local_18);
          }
        }
      }
      if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 1) &&
         (pCVar4 == (CDemonActor *)0x3)) {
        core_hero_cpp_FUN_004f38d0();
        in_stack_00000004[2].cloth_data[0x5558] = '\0';
        in_stack_00000004[2].cloth_data[0x5559] = '\0';
        in_stack_00000004[2].cloth_data[0x555a] = '\0';
        in_stack_00000004[2].cloth_data[0x555b] = '\0';
      }
      if ((*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54d4) != (CDemonActor *)0x0) &&
         (pCVar4 == (CDemonActor *)0x3)) {
        core_inv_cpp_CInventory_removeItem_FUN_004fea70
                  (local_1c,*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54d4),0);
        core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(in_stack_00000004);
        iVar7 = core_actor_cpp_isOfClass_FUN_0040c6d0
                          (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54d4),
                           "CTrap");
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_2c);
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
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_2c);
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
      if (pCVar4 == (CDemonActor *)0xa) {
        pCVar8 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c);
        if (pCVar8 == (CLightGun *)0x0) {
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
      else if ((pCVar4 == (CDemonActor *)0x3) &&
              (*(int *)(in_stack_00000004[2].cloth_data + 0x54b8) < 2)) {
        pCVar8 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(local_1c);
        if (pCVar8 != (CLightGun *)0x0) goto LAB_005c54e8;
        in_stack_00000004[2].cloth_data[0x54b8] = '\0';
        in_stack_00000004[2].cloth_data[0x54b9] = '\0';
        in_stack_00000004[2].cloth_data[0x54ba] = '\0';
        in_stack_00000004[2].cloth_data[0x54bb] = '\0';
      }
      if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 7) &&
         ((pCVar4 == (CDemonActor *)0x0 || (pCVar4 == (CDemonActor *)&DAT_00000008)))) {
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


// Assembly code:
// 005c5270: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c5270
// 005c5271: PUSH ESI
// 005c5272: PUSH EDI
// 005c5273: PUSH EBP
// 005c5274: MOV EBP,ESP
// 005c5276: SUB ESP,0x4c
// 005c5279: AND ESP,0xfffffff8
// 005c527c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c527f: CMP dword ptr [EBX + 0x2a8c],0xe
// 005c5286: JNZ 0x005c529e
//   XREF to: 005c529e (CONDITIONAL_JUMP)
// 005c5288: MOV ECX,dword ptr [EBX + 0x24f8]
// 005c528e: TEST ECX,ECX
// 005c5290: JNZ 0x005c529e
//   XREF to: 005c529e (CONDITIONAL_JUMP)
// 005c5292: MOV dword ptr [EBX + 0x2a90],ECX
// 005c5298: MOV dword ptr [EBX + 0x2a8c],ECX
// 005c529e: MOV EDI,0xffffffff
//   Label: LAB_005c529e
// 005c52a3: MOV EAX,dword ptr [EBX + 0x1fbb0]
// 005c52a9: XOR ESI,ESI
// 005c52ab: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 005c52af: MOV dword ptr [ESP + 0x44],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005c52b3: TEST EAX,EAX
// 005c52b5: JZ 0x005c5530
//   XREF to: 005c5530 (CONDITIONAL_JUMP)
// 005c52bb: MOV dword ptr [EBX + 0x1fbd4],ESI
// 005c52c1: LEA EAX,[EBX + 0x1f738]
//   Label: LAB_005c52c1
// 005c52c7: XOR ESI,ESI
// 005c52c9: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005c52cd: LEA EAX,[EBX + 0x158]
// 005c52d3: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 005c52d7: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005c52db: FLD float ptr [EBP + 0x18]
//   Label: LAB_005c52db
//   XREF to: Stack[0x8] (READ)
// 005c52de: FLDZ
// 005c52e0: FCOMPP
// 005c52e2: FNSTSW AX
// 005c52e4: SAHF
// 005c52e5: JNC 0x005c5529
//   XREF to: 005c5529 (CONDITIONAL_JUMP)
// 005c52eb: MOV EDI,dword ptr [EBX + 0x1fc38]
// 005c52f1: CMP EDI,0x1
// 005c52f4: JNZ 0x005c55b2
//   XREF to: 005c55b2 (CONDITIONAL_JUMP)
// 005c52fa: MOV ESI,0x3
//   Label: LAB_005c52fa
// 005c52ff: MOV EAX,dword ptr [EBX + 0x2a90]
//   Label: LAB_005c52ff
// 005c5305: PUSH ESI
// 005c5306: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005c530a: LEA EAX,[EBP + 0x18]
//   XREF to: Stack[0x8] (DATA)
// 005c530d: PUSH EAX
// 005c530e: PUSH EBX
// 005c530f: CALL core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370
//   XREF to: 0042e370 (UNCONDITIONAL_CALL)
// 005c5314: MOV EDX,dword ptr [EBX + 0x2a8c]
// 005c531a: MOV EDI,EAX
// 005c531c: IMUL EAX,EDX,0x38
// 005c531f: IMUL EAX,dword ptr [EBX + EAX*0x1 + 0x2658],0x54c
// 005c532a: ADD ESP,0xc
// 005c532d: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c5331: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 005c5335: PUSH EAX
// 005c5336: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 005c533b: ADD ESP,0x4
// 005c533e: ADD EAX,0x968
// 005c5343: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 005c5347: ADD EDX,EAX
// 005c5349: MOV EAX,dword ptr [EBX + 0x2a8c]
// 005c534f: SUB EAX,0x6
// 005c5352: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 005c5356: CMP EAX,0x7
// 005c5359: JA 0x005c5391
//   XREF to: 005c5391 (CONDITIONAL_JUMP)
// 005c535b: JMP dword ptr [EAX*0x4 + 0x5c524c]
//   Label: switchD
//   XREF to: 005c5362 (COMPUTED_JUMP)
//   XREF to: 005c5391 (COMPUTED_JUMP)
//   XREF to: 005c5820 (COMPUTED_JUMP)
//   XREF to: 005c5939 (COMPUTED_JUMP)
//   XREF to: 005c598e (COMPUTED_JUMP)
//   XREF to: 005c59ce (COMPUTED_JUMP)
//   XREF to: 005c524c (DATA)
// 005c5362: MOV EDX,dword ptr [0x02ceed20]
//   Label: caseD_0
//   XREF to: 02ceed20 (READ)
// 005c5368: PUSH EDX
// 005c5369: MOV ECX,dword ptr [EBX + 0x1fc2c]
// 005c536f: PUSH ECX
// 005c5370: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c5375: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005c5379: ADD ESP,0x8
// 005c537c: TEST EAX,EAX
// 005c537e: JZ 0x005c5391
//   XREF to: 005c5391 (CONDITIONAL_JUMP)
// 005c5380: PUSH EAX
// 005c5381: CALL core_dynamite.cpp_FUN_0049cf70
//   XREF to: 0049cf70 (UNCONDITIONAL_CALL)
// 005c5386: ADD ESP,0x4
// 005c5389: TEST EAX,EAX
// 005c538b: JZ 0x005c57e6
//   XREF to: 005c57e6 (CONDITIONAL_JUMP)
// 005c5391: TEST EDI,EDI
//   Label: caseD_5
// 005c5393: JL 0x005c5517
//   XREF to: 005c5517 (CONDITIONAL_JUMP)
// 005c5399: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 005c539d: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c53a3: CMP EAX,EDX
// 005c53a5: JZ 0x005c5418
//   XREF to: 005c5418 (CONDITIONAL_JUMP)
// 005c53ab: TEST EAX,EAX
// 005c53ad: JZ 0x005c53dd
//   XREF to: 005c53dd (CONDITIONAL_JUMP)
// 005c53af: MOV EDX,EAX
// 005c53b1: JNZ 0x005c5a45
//   XREF to: 005c5a45 (CONDITIONAL_JUMP)
// 005c53b7: CMP EDI,EAX
//   Label: LAB_005c53b7
// 005c53b9: JNZ 0x005c53dd
//   XREF to: 005c53dd (CONDITIONAL_JUMP)
// 005c53bb: PUSH 0x1
// 005c53bd: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c53c3: PUSH EAX
// 005c53c4: MOV EDX,dword ptr [EAX + 0x154]
// 005c53ca: CALL dword ptr [EDX + 0xf0]
// 005c53d0: ADD ESP,0x8
// 005c53d3: MOV dword ptr [EBX + 0x1fc2c],0x0
// 005c53dd: CMP dword ptr [EBX + 0x1fbd4],0x0
//   Label: LAB_005c53dd
// 005c53e4: JZ 0x005c5418
//   XREF to: 005c5418 (CONDITIONAL_JUMP)
// 005c53e6: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 005c53ea: TEST EDX,EDX
// 005c53ec: JNZ 0x005c5aa8
//   XREF to: 005c5aa8 (CONDITIONAL_JUMP)
// 005c53f2: XOR EAX,EAX
//   Label: LAB_005c53f2
// 005c53f4: CMP EDI,EAX
//   Label: LAB_005c53f4
// 005c53f6: JNZ 0x005c5418
//   XREF to: 005c5418 (CONDITIONAL_JUMP)
// 005c53f8: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 005c53fc: MOV dword ptr [EBX + 0x1fc2c],EAX
// 005c5402: TEST EAX,EAX
// 005c5404: JZ 0x005c5418
//   XREF to: 005c5418 (CONDITIONAL_JUMP)
// 005c5406: PUSH 0x2
// 005c5408: MOV EDX,dword ptr [EAX + 0x154]
// 005c540e: PUSH EAX
// 005c540f: CALL dword ptr [EDX + 0xf0]
// 005c5415: ADD ESP,0x8
// 005c5418: MOV EAX,dword ptr [EBX + 0x1fc38]
//   Label: LAB_005c5418
// 005c541e: CMP EAX,0x1
// 005c5421: JNZ 0x005c543c
//   XREF to: 005c543c (CONDITIONAL_JUMP)
// 005c5423: CMP EDI,0x3
// 005c5426: JNZ 0x005c543c
//   XREF to: 005c543c (CONDITIONAL_JUMP)
// 005c5428: PUSH EAX
// 005c5429: PUSH EBX
// 005c542a: CALL core_hero.cpp_FUN_004f38d0
//   XREF to: 004f38d0 (UNCONDITIONAL_CALL)
// 005c542f: ADD ESP,0x8
// 005c5432: MOV dword ptr [EBX + 0x1fc38],0x0
// 005c543c: MOV EDX,dword ptr [EBX + 0x1fbb4]
//   Label: LAB_005c543c
// 005c5442: TEST EDX,EDX
// 005c5444: JZ 0x005c54ca
//   XREF to: 005c54ca (CONDITIONAL_JUMP)
// 005c544a: CMP EDI,0x3
// 005c544d: JNZ 0x005c54ca
//   XREF to: 005c54ca (CONDITIONAL_JUMP)
// 005c544f: PUSH 0x0
// 005c5451: PUSH EDX
// 005c5452: MOV EAX,dword ptr [ESP + 0x48]
// 005c5456: PUSH EAX
// 005c5457: CALL core_inv.cpp_CInventory_removeItem_FUN_004fea70
//   XREF to: 004fea70 (UNCONDITIONAL_CALL)
// 005c545c: ADD ESP,0xc
// 005c545f: MOV EDX,dword ptr [EBX + 0x1fbb4]
// 005c5465: PUSH EDX
// 005c5466: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005c546c: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 005c546d: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 005c5472: ADD ESP,0x8
// 005c5475: MOV EAX,dword ptr [EBX + 0x1fbb4]
// 005c547b: PUSH 0x0
// 005c547d: PUSH EAX
// 005c547e: PUSH 0x1
// 005c5480: PUSH EBX
// 005c5481: CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)
// 005c5486: ADD ESP,0x10
// 005c5489: PUSH 0x653d9d
//   XREF to: 00653d9d (DATA)
// 005c548e: MOV EDX,dword ptr [EBX + 0x1fbb4]
// 005c5494: PUSH EDX
// 005c5495: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005c549a: ADD ESP,0x8
// 005c549d: TEST EAX,EAX
// 005c549f: JZ 0x005c5ad2
//   XREF to: 005c5ad2 (CONDITIONAL_JUMP)
// 005c54a5: PUSH 0x1
// 005c54a7: PUSH 0x14
// 005c54a9: MOV EAX,dword ptr [ESP + 0x38]
// 005c54ad: PUSH EAX
// 005c54ae: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c54b3: ADD ESP,0xc
// 005c54b6: MOV dword ptr [EBX + 0x1fc38],0x6
// 005c54c0: MOV dword ptr [EBX + 0x1fbb4],0x0
//   Label: LAB_005c54c0
// 005c54ca: CMP EDI,0xa
//   Label: LAB_005c54ca
// 005c54cd: JNZ 0x005c5b25
//   XREF to: 005c5b25 (CONDITIONAL_JUMP)
// 005c54d3: MOV EAX,dword ptr [ESP + 0x40]
// 005c54d7: PUSH EAX
// 005c54d8: CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0
//   XREF to: 004ffab0 (UNCONDITIONAL_CALL)
// 005c54dd: ADD ESP,0x4
// 005c54e0: TEST EAX,EAX
// 005c54e2: JNZ 0x005c5b16
//   XREF to: 005c5b16 (CONDITIONAL_JUMP)
// 005c54e8: MOV dword ptr [EBX + 0x1fb98],0x1
//   Label: LAB_005c54e8
// 005c54f2: CMP dword ptr [EBX + 0x1fc38],0x7
//   Label: LAB_005c54f2
// 005c54f9: JNZ 0x005c550d
//   XREF to: 005c550d (CONDITIONAL_JUMP)
// 005c54fb: TEST EDI,EDI
// 005c54fd: JNZ 0x005c5b5b
//   XREF to: 005c5b5b (CONDITIONAL_JUMP)
// 005c5503: MOV dword ptr [EBX + 0x1fc38],0x0
//   Label: LAB_005c5503
// 005c550d: PUSH ESI
//   Label: LAB_005c550d
// 005c550e: PUSH EBX
// 005c550f: CALL core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
//   XREF to: 0042e8c0 (UNCONDITIONAL_CALL)
// 005c5514: ADD ESP,0x8
// 005c5517: MOV ECX,dword ptr [ESP + 0x2c]
//   Label: LAB_005c5517
//   XREF to: Stack[-0x34] (READ)
// 005c551b: INC ECX
// 005c551c: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 005c5520: CMP ECX,0x2
// 005c5523: JL 0x005c52db
//   XREF to: 005c52db (CONDITIONAL_JUMP)
// 005c5529: MOV ESP,EBP
//   Label: LAB_005c5529
// 005c552b: POP EBP
// 005c552c: POP EDI
// 005c552d: POP ESI
// 005c552e: POP EBX
// 005c552f: RET
// 005c5530: CMP dword ptr [EBX + 0x1fbd4],0x0
//   Label: LAB_005c5530
// 005c5537: JZ 0x005c52c1
//   XREF to: 005c52c1 (CONDITIONAL_JUMP)
// 005c553d: MOV ECX,dword ptr [EBX + 0x24f8]
// 005c5543: TEST ECX,ECX
// 005c5545: JNZ 0x005c5579
//   XREF to: 005c5579 (CONDITIONAL_JUMP)
// 005c5547: LEA EAX,[EBX + 0x1f738]
// 005c554d: MOV EAX,dword ptr [EAX + 0x330]
// 005c5553: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c5557: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_005c5557
//   XREF to: Stack[-0x1c] (READ)
// 005c555b: TEST EDX,EDX
// 005c555d: JNZ 0x005c52c1
//   XREF to: 005c52c1 (CONDITIONAL_JUMP)
// 005c5563: CMP dword ptr [ESP + 0x20],0x0
//   XREF to: Stack[-0x40] (READ)
// 005c5568: JGE 0x005c52c1
//   XREF to: 005c52c1 (CONDITIONAL_JUMP)
// 005c556e: MOV dword ptr [EBX + 0x1fbd4],EDX
// 005c5574: JMP 0x005c52c1
//   XREF to: 005c52c1 (UNCONDITIONAL_JUMP)
// 005c5579: MOV ESI,dword ptr [0x03f95d78]
//   Label: LAB_005c5579
//   XREF to: 03f95d78 (READ)
// 005c557f: PUSH ESI
// 005c5580: PUSH ECX
// 005c5581: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c5586: ADD ESP,0x8
// 005c5589: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c558d: TEST EAX,EAX
// 005c558f: JNZ 0x005c5557
//   XREF to: 005c5557 (CONDITIONAL_JUMP)
// 005c5591: MOV EAX,dword ptr [EBX + 0x24f8]
// 005c5597: PUSH EAX
// 005c5598: MOV EDX,dword ptr [EAX + 0x154]
// 005c559e: CALL dword ptr [EDX + 0x6c]
// 005c55a1: ADD ESP,0x4
// 005c55a4: TEST AL,0x3
// 005c55a6: JZ 0x005c5557
//   XREF to: 005c5557 (CONDITIONAL_JUMP)
// 005c55a8: MOV dword ptr [ESP + 0x20],0x8
// 005c55b0: JMP 0x005c5557
//   XREF to: 005c5557 (UNCONDITIONAL_JUMP)
// 005c55b2: CMP dword ptr [EBX + 0x1fbb4],0x0
//   Label: LAB_005c55b2
// 005c55b9: JNZ 0x005c52fa
//   XREF to: 005c52fa (CONDITIONAL_JUMP)
// 005c55bf: CMP EDI,0x2
// 005c55c2: JNZ 0x005c55cb
//   XREF to: 005c55cb (CONDITIONAL_JUMP)
// 005c55c4: XOR ESI,ESI
// 005c55c6: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c55cb: CMP EDI,0x3
//   Label: LAB_005c55cb
// 005c55ce: JNZ 0x005c5637
//   XREF to: 005c5637 (CONDITIONAL_JUMP)
// 005c55d0: MOV ESI,0x6
// 005c55d5: PUSH ESI
// 005c55d6: PUSH EBX
// 005c55d7: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c55dc: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c55e0: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 005c55e4: ADD ESP,0x8
// 005c55e7: FCOMP double ptr [0x00653dd4]
//   XREF to: 00653dd4 (READ)
// 005c55ed: FNSTSW AX
// 005c55ef: SAHF
// 005c55f0: JBE 0x005c52ff
//   XREF to: 005c52ff (CONDITIONAL_JUMP)
// 005c55f6: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c55f9: FMUL double ptr [0x00653dcc]
//   XREF to: 00653dcc (READ)
// 005c55ff: FADD float ptr [EBX + 0x1fbe4]
// 005c5605: FST float ptr [EBX + 0x1fbe4]
// 005c560b: FCOMP float ptr [0x00663748]
//   XREF to: 00663748 (READ)
// 005c5611: FNSTSW AX
// 005c5613: SAHF
// 005c5614: JA 0x005c562a
//   XREF to: 005c562a (CONDITIONAL_JUMP)
// 005c5616: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_005c5616
// 005c561d: JNZ 0x005c5529
//   XREF to: 005c5529 (CONDITIONAL_JUMP)
// 005c5623: XOR ESI,ESI
//   Label: caseD_8
// 005c5625: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c562a: MOV EAX,[0x00663748]
//   Label: LAB_005c562a
//   XREF to: 00663748 (READ)
// 005c562f: MOV dword ptr [EBX + 0x1fbe4],EAX
// 005c5635: JMP 0x005c5616
//   XREF to: 005c5616 (UNCONDITIONAL_JUMP)
// 005c5637: MOV ESI,dword ptr [ESP + 0x40]
//   Label: LAB_005c5637
//   XREF to: Stack[-0x20] (READ)
// 005c563b: PUSH ESI
// 005c563c: CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0
//   XREF to: 004ffab0 (UNCONDITIONAL_CALL)
// 005c5641: ADD ESP,0x4
// 005c5644: TEST EAX,EAX
// 005c5646: JZ 0x005c5655
//   XREF to: 005c5655 (CONDITIONAL_JUMP)
// 005c5648: CMP dword ptr [EBX + 0x1fb98],0x0
// 005c564f: JZ 0x005c52fa
//   XREF to: 005c52fa (CONDITIONAL_JUMP)
// 005c5655: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_005c5655
//   XREF to: Stack[-0x20] (READ)
// 005c5659: PUSH EAX
// 005c565a: CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0
//   XREF to: 004ffab0 (UNCONDITIONAL_CALL)
// 005c565f: ADD ESP,0x4
// 005c5662: TEST EAX,EAX
// 005c5664: JZ 0x005c5679
//   XREF to: 005c5679 (CONDITIONAL_JUMP)
// 005c5666: CMP dword ptr [EBX + 0x1fb98],0x1
// 005c566d: JNZ 0x005c5679
//   XREF to: 005c5679 (CONDITIONAL_JUMP)
// 005c566f: MOV ESI,0xa
// 005c5674: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c5679: MOV ECX,dword ptr [ESP + 0x40]
//   Label: LAB_005c5679
//   XREF to: Stack[-0x20] (READ)
// 005c567d: PUSH ECX
// 005c567e: CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0
//   XREF to: 004ffab0 (UNCONDITIONAL_CALL)
// 005c5683: ADD ESP,0x4
// 005c5686: TEST EAX,EAX
// 005c5688: JNZ 0x005c569d
//   XREF to: 005c569d (CONDITIONAL_JUMP)
// 005c568a: CMP dword ptr [EBX + 0x1fb98],0x2
// 005c5691: JNZ 0x005c569d
//   XREF to: 005c569d (CONDITIONAL_JUMP)
// 005c5693: MOV ESI,0xa
// 005c5698: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c569d: MOV EDI,dword ptr [ESP + 0x40]
//   Label: LAB_005c569d
//   XREF to: Stack[-0x20] (READ)
// 005c56a1: PUSH EDI
// 005c56a2: CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0
//   XREF to: 004ffab0 (UNCONDITIONAL_CALL)
// 005c56a7: ADD ESP,0x4
// 005c56aa: TEST EAX,EAX
// 005c56ac: JNZ 0x005c56bb
//   XREF to: 005c56bb (CONDITIONAL_JUMP)
// 005c56ae: CMP dword ptr [EBX + 0x1fb98],0x1
// 005c56b5: JZ 0x005c52fa
//   XREF to: 005c52fa (CONDITIONAL_JUMP)
// 005c56bb: MOV EDX,dword ptr [ESP + 0x20]
//   Label: LAB_005c56bb
//   XREF to: Stack[-0x40] (READ)
// 005c56bf: TEST EDX,EDX
// 005c56c1: JL 0x005c56ca
//   XREF to: 005c56ca (CONDITIONAL_JUMP)
// 005c56c3: MOV ESI,EDX
// 005c56c5: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c56ca: MOV ECX,dword ptr [ESP + 0x44]
//   Label: LAB_005c56ca
//   XREF to: Stack[-0x1c] (READ)
// 005c56ce: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c56d4: CMP EAX,ECX
// 005c56d6: JNZ 0x005c572e
//   XREF to: 005c572e (CONDITIONAL_JUMP)
// 005c56d8: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c56de: TEST EAX,EAX
// 005c56e0: JZ 0x005c5623
//   XREF to: 005c5623 (CONDITIONAL_JUMP)
// 005c56e6: MOV EAX,dword ptr [EAX + 0x2e0]
// 005c56ec: CMP EAX,0x8
// 005c56ef: JA 0x005c5623
//   XREF to: 005c5623 (CONDITIONAL_JUMP)
// 005c56f5: JMP dword ptr [EAX*0x4 + 0x5c5228]
//   Label: switchD
//   XREF to: 005c5623 (COMPUTED_JUMP)
//   XREF to: 005c56fc (COMPUTED_JUMP)
//   XREF to: 005c5706 (COMPUTED_JUMP)
//   XREF to: 005c5710 (COMPUTED_JUMP)
//   XREF to: 005c571a (COMPUTED_JUMP)
//   XREF to: 005c5724 (COMPUTED_JUMP)
//   XREF to: 005c5228 (DATA)
// 005c56fc: MOV ESI,0x2
//   Label: caseD_5
// 005c5701: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c5706: MOV ESI,0x4
//   Label: caseD_1
// 005c570b: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c5710: MOV ESI,0x7
//   Label: caseD_4
// 005c5715: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c571a: MOV ESI,0x5
//   Label: caseD_2
// 005c571f: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c5724: MOV ESI,0x8
//   Label: caseD_7
// 005c5729: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c572e: TEST EAX,EAX
//   Label: LAB_005c572e
// 005c5730: JNZ 0x005c5791
//   XREF to: 005c5791 (CONDITIONAL_JUMP)
// 005c5732: MOV EAX,ECX
// 005c5734: TEST ECX,ECX
// 005c5736: JNZ 0x005c5771
//   XREF to: 005c5771 (CONDITIONAL_JUMP)
// 005c5738: XOR ESI,ESI
// 005c573a: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c573f: MOV ESI,0x1
//   Label: LAB_005c573f
// 005c5744: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c5749: MOV ESI,dword ptr [0x02f0d928]
//   Label: LAB_005c5749
//   XREF to: 02f0d928 (READ)
// 005c574f: PUSH ESI
// 005c5750: PUSH EAX
// 005c5751: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c5756: ADD ESP,0x8
// 005c5759: TEST EAX,EAX
// 005c575b: JZ 0x005c576a
//   XREF to: 005c576a (CONDITIONAL_JUMP)
// 005c575d: CMP dword ptr [EAX + 0x588],0x0
// 005c5764: JNZ 0x005c52fa
//   XREF to: 005c52fa (CONDITIONAL_JUMP)
// 005c576a: XOR ESI,ESI
//   Label: LAB_005c576a
// 005c576c: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c5771: MOV ESI,dword ptr [ECX + 0x2e0]
//   Label: LAB_005c5771
// 005c5777: CMP ESI,0x7
// 005c577a: JNC 0x005c5785
//   XREF to: 005c5785 (CONDITIONAL_JUMP)
// 005c577c: TEST ESI,ESI
// 005c577e: JZ 0x005c573f
//   XREF to: 005c573f (CONDITIONAL_JUMP)
// 005c5780: JMP 0x005c52fa
//   XREF to: 005c52fa (UNCONDITIONAL_JUMP)
// 005c5785: JBE 0x005c5749
//   Label: LAB_005c5785
//   XREF to: 005c5749 (CONDITIONAL_JUMP)
// 005c5787: CMP ESI,0x8
// 005c578a: JZ 0x005c5749
//   XREF to: 005c5749 (CONDITIONAL_JUMP)
// 005c578c: JMP 0x005c52fa
//   XREF to: 005c52fa (UNCONDITIONAL_JUMP)
// 005c5791: JNZ 0x005c57c2
//   Label: LAB_005c5791
//   XREF to: 005c57c2 (CONDITIONAL_JUMP)
// 005c5793: XOR ESI,ESI
// 005c5795: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c579a: MOV EDI,dword ptr [0x02f0d928]
//   Label: LAB_005c579a
//   XREF to: 02f0d928 (READ)
// 005c57a0: PUSH EDI
// 005c57a1: PUSH EAX
// 005c57a2: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c57a7: ADD ESP,0x8
// 005c57aa: TEST EAX,EAX
// 005c57ac: JZ 0x005c57bb
//   XREF to: 005c57bb (CONDITIONAL_JUMP)
// 005c57ae: CMP dword ptr [EAX + 0x588],0x0
// 005c57b5: JNZ 0x005c52fa
//   XREF to: 005c52fa (CONDITIONAL_JUMP)
// 005c57bb: XOR ESI,ESI
//   Label: LAB_005c57bb
// 005c57bd: JMP 0x005c52ff
//   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
// 005c57c2: MOV ESI,dword ptr [EAX + 0x2e0]
//   Label: LAB_005c57c2
// 005c57c8: CMP ESI,0x7
// 005c57cb: JNC 0x005c57da
//   XREF to: 005c57da (CONDITIONAL_JUMP)
// 005c57cd: TEST ESI,ESI
// 005c57cf: JZ 0x005c573f
//   XREF to: 005c573f (CONDITIONAL_JUMP)
// 005c57d5: JMP 0x005c52fa
//   XREF to: 005c52fa (UNCONDITIONAL_JUMP)
// 005c57da: JBE 0x005c579a
//   Label: LAB_005c57da
//   XREF to: 005c579a (CONDITIONAL_JUMP)
// 005c57dc: CMP ESI,0x8
// 005c57df: JZ 0x005c579a
//   XREF to: 005c579a (CONDITIONAL_JUMP)
// 005c57e1: JMP 0x005c52fa
//   XREF to: 005c52fa (UNCONDITIONAL_JUMP)
// 005c57e6: MOV EAX,0xb
//   Label: LAB_005c57e6
// 005c57eb: MOV EDX,EAX
// 005c57ed: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (READ)
// 005c57f1: SAR EDX,0x1f
// 005c57f4: IDIV dword ptr [ECX + 0x64]
// 005c57f7: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c57fb: FILD dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 005c57ff: FCOMP float ptr [EBX + 0x2a90]
// 005c5805: FNSTSW AX
// 005c5807: SAHF
// 005c5808: JA 0x005c5391
//   XREF to: 005c5391 (CONDITIONAL_JUMP)
// 005c580e: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 005c5812: PUSH ECX
// 005c5813: CALL core_dynamite.cpp_FUN_0049cf20
//   XREF to: 0049cf20 (UNCONDITIONAL_CALL)
// 005c5818: ADD ESP,0x4
// 005c581b: JMP 0x005c5391
//   XREF to: 005c5391 (UNCONDITIONAL_JUMP)
// 005c5820: CMP dword ptr [EBX + 0x1fc38],0x3
//   Label: caseD_1
// 005c5827: JNZ 0x005c590d
//   XREF to: 005c590d (CONDITIONAL_JUMP)
// 005c582d: MOV EAX,0xb
// 005c5832: MOV EDX,EAX
// 005c5834: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (READ)
// 005c5838: SAR EDX,0x1f
// 005c583b: IDIV dword ptr [ECX + 0x64]
// 005c583e: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c5842: FILD dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 005c5846: FCOMP float ptr [EBX + 0x2a90]
// 005c584c: FNSTSW AX
// 005c584e: SAHF
// 005c584f: JA 0x005c590d
//   XREF to: 005c590d (CONDITIONAL_JUMP)
// 005c5855: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 005c5859: PUSH EAX
// 005c585a: PUSH EBX
// 005c585b: CALL core_stranger.cpp_CStranger_FUN_005c51c0
//   XREF to: 005c51c0 (UNCONDITIONAL_CALL)
// 005c5860: ADD ESP,0x8
// 005c5863: MOV ECX,dword ptr [0x02ceed20]
//   XREF to: 02ceed20 (READ)
// 005c5869: PUSH ECX
// 005c586a: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c5870: PUSH EAX
// 005c5871: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c5876: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005c587a: ADD ESP,0x8
// 005c587d: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005c5881: TEST EAX,EAX
// 005c5883: JZ 0x005c58d8
//   XREF to: 005c58d8 (CONDITIONAL_JUMP)
// 005c5885: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 005c5889: PUSH EAX
// 005c588a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x60] (DATA)
// 005c588e: PUSH EAX
// 005c588f: PUSH EBX
// 005c5890: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005c5895: ADD ESP,0xc
// 005c5898: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 005c589c: ADD EDX,0x57c
// 005c58a2: CMP EDX,EAX
// 005c58a4: JZ 0x005c58b6
//   XREF to: 005c58b6 (CONDITIONAL_JUMP)
// 005c58a6: MOV ECX,dword ptr [EAX]
// 005c58a8: MOV dword ptr [EDX],ECX
// 005c58aa: MOV ECX,dword ptr [EAX + 0x4]
// 005c58ad: MOV dword ptr [EDX + 0x4],ECX
// 005c58b0: MOV ECX,dword ptr [EAX + 0x8]
// 005c58b3: MOV dword ptr [EDX + 0x8],ECX
// 005c58b6: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_005c58b6
//   XREF to: Stack[-0x38] (READ)
// 005c58ba: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 005c58be: PUSH ECX
// 005c58bf: MOV EAX,dword ptr [EAX + 0x154]
// 005c58c5: CALL dword ptr [EAX + 0xf8]
// 005c58cb: ADD ESP,0x4
// 005c58ce: MOV dword ptr [EBX + 0x1fc2c],0x0
// 005c58d8: CMP dword ptr [EBX + 0x24f8],0x0
//   Label: LAB_005c58d8
// 005c58df: JZ 0x005c58f8
//   XREF to: 005c58f8 (CONDITIONAL_JUMP)
// 005c58e1: LEA EDX,[ESP + 0xc]
// 005c58e5: PUSH EDX
// 005c58e6: PUSH 0x1
// 005c58e8: MOV EAX,dword ptr [EBX + 0x154]
// 005c58ee: PUSH EBX
// 005c58ef: CALL dword ptr [EAX + 0x13c]
// 005c58f5: ADD ESP,0xc
// 005c58f8: MOV dword ptr [EBX + 0x1fc38],0x0
//   Label: LAB_005c58f8
// 005c5902: MOV EAX,[0x00663744]
//   XREF to: 00663744 (READ)
// 005c5907: MOV dword ptr [EBX + 0x1fbe4],EAX
// 005c590d: FLD float ptr [EBX + 0x2a90]
//   Label: LAB_005c590d
// 005c5913: FLD1
// 005c5915: FCOMPP
// 005c5917: FNSTSW AX
// 005c5919: SAHF
// 005c591a: JA 0x005c5391
//   XREF to: 005c5391 (CONDITIONAL_JUMP)
// 005c5920: MOV dword ptr [EBX + 0x2a8c],0x0
// 005c592a: MOV dword ptr [EBX + 0x2a90],0x0
// 005c5934: JMP 0x005c5391
//   XREF to: 005c5391 (UNCONDITIONAL_JUMP)
// 005c5939: CMP dword ptr [ESP + 0x3c],0x3f19999a
//   Label: caseD_2
//   XREF to: Stack[-0x24] (READ)
// 005c5941: JGE 0x005c5391
//   XREF to: 005c5391 (CONDITIONAL_JUMP)
// 005c5947: CMP dword ptr [EBX + 0x2a90],0x3f19999a
// 005c5951: JL 0x005c5391
//   XREF to: 005c5391 (CONDITIONAL_JUMP)
// 005c5957: PUSH 0x653d94
//   XREF to: 00653d94 (DATA)
// 005c595c: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c5962: PUSH EAX
// 005c5963: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005c5968: ADD ESP,0x8
// 005c596b: TEST EAX,EAX
// 005c596d: JZ 0x005c5391
//   XREF to: 005c5391 (CONDITIONAL_JUMP)
// 005c5973: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c5979: PUSH EAX
// 005c597a: MOV EDX,dword ptr [EAX + 0x154]
// 005c5980: CALL dword ptr [EDX + 0xec]
// 005c5986: ADD ESP,0x4
// 005c5989: JMP 0x005c5391
//   XREF to: 005c5391 (UNCONDITIONAL_JUMP)
// 005c598e: CMP dword ptr [ESP + 0x3c],0x3ebd70a4
//   Label: caseD_6
//   XREF to: Stack[-0x24] (READ)
// 005c5996: JGE 0x005c5391
//   XREF to: 005c5391 (CONDITIONAL_JUMP)
// 005c599c: CMP dword ptr [EBX + 0x2a90],0x3ebd70a4
// 005c59a6: JL 0x005c5391
//   XREF to: 005c5391 (CONDITIONAL_JUMP)
// 005c59ac: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c59b2: TEST EAX,EAX
// 005c59b4: JZ 0x005c5391
//   XREF to: 005c5391 (CONDITIONAL_JUMP)
// 005c59ba: PUSH 0x1
// 005c59bc: MOV EDX,dword ptr [EAX + 0x154]
// 005c59c2: PUSH EAX
// 005c59c3: CALL dword ptr [EDX + 0x70]
// 005c59c6: ADD ESP,0x8
// 005c59c9: JMP 0x005c5391
//   XREF to: 005c5391 (UNCONDITIONAL_JUMP)
// 005c59ce: CMP dword ptr [ESP + 0x3c],0x3f28f5c3
//   Label: caseD_7
//   XREF to: Stack[-0x24] (READ)
// 005c59d6: JGE 0x005c5391
//   XREF to: 005c5391 (CONDITIONAL_JUMP)
// 005c59dc: CMP dword ptr [EBX + 0x2a90],0x3f28f5c3
// 005c59e6: JL 0x005c5391
//   XREF to: 005c5391 (CONDITIONAL_JUMP)
// 005c59ec: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005c59f2: TEST EAX,EAX
// 005c59f4: JZ 0x005c5391
//   XREF to: 005c5391 (CONDITIONAL_JUMP)
// 005c59fa: PUSH 0x2
// 005c59fc: MOV EDX,dword ptr [EAX + 0x154]
// 005c5a02: PUSH EAX
// 005c5a03: CALL dword ptr [EDX + 0x70]
// 005c5a06: ADD ESP,0x8
// 005c5a09: JMP 0x005c5391
//   XREF to: 005c5391 (UNCONDITIONAL_JUMP)
// 005c5a0e: MOV EAX,0x1
//   Label: LAB_005c5a0e
// 005c5a13: JMP 0x005c53b7
//   XREF to: 005c53b7 (UNCONDITIONAL_JUMP)
// 005c5a18: MOV EAX,[0x02f0d928]
//   Label: LAB_005c5a18
//   XREF to: 02f0d928 (READ)
// 005c5a1d: PUSH EAX
// 005c5a1e: PUSH EDX
// 005c5a1f: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c5a24: ADD ESP,0x8
// 005c5a27: TEST EAX,EAX
// 005c5a29: JZ 0x005c5a3e
//   XREF to: 005c5a3e (CONDITIONAL_JUMP)
// 005c5a2b: CMP dword ptr [EAX + 0x588],0x0
// 005c5a32: JZ 0x005c5a3e
//   XREF to: 005c5a3e (CONDITIONAL_JUMP)
// 005c5a34: MOV EAX,0x3
// 005c5a39: JMP 0x005c53b7
//   XREF to: 005c53b7 (UNCONDITIONAL_JUMP)
// 005c5a3e: XOR EAX,EAX
//   Label: LAB_005c5a3e
// 005c5a40: JMP 0x005c53b7
//   XREF to: 005c53b7 (UNCONDITIONAL_JUMP)
// 005c5a45: MOV EAX,dword ptr [EAX + 0x2e0]
//   Label: LAB_005c5a45
// 005c5a4b: CMP EAX,0x7
// 005c5a4e: JNC 0x005c5a5e
//   XREF to: 005c5a5e (CONDITIONAL_JUMP)
// 005c5a50: TEST EAX,EAX
// 005c5a52: JZ 0x005c5a0e
//   XREF to: 005c5a0e (CONDITIONAL_JUMP)
// 005c5a54: MOV EAX,0x3
// 005c5a59: JMP 0x005c53b7
//   XREF to: 005c53b7 (UNCONDITIONAL_JUMP)
// 005c5a5e: JBE 0x005c5a18
//   Label: LAB_005c5a5e
//   XREF to: 005c5a18 (CONDITIONAL_JUMP)
// 005c5a60: CMP EAX,0x8
// 005c5a63: JZ 0x005c5a18
//   XREF to: 005c5a18 (CONDITIONAL_JUMP)
// 005c5a65: MOV EAX,0x3
// 005c5a6a: JMP 0x005c53b7
//   XREF to: 005c53b7 (UNCONDITIONAL_JUMP)
// 005c5a6f: MOV EAX,0x1
//   Label: LAB_005c5a6f
// 005c5a74: JMP 0x005c53f4
//   XREF to: 005c53f4 (UNCONDITIONAL_JUMP)
// 005c5a79: MOV ECX,dword ptr [0x02f0d928]
//   Label: LAB_005c5a79
//   XREF to: 02f0d928 (READ)
// 005c5a7f: PUSH ECX
// 005c5a80: PUSH EDX
// 005c5a81: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c5a86: ADD ESP,0x8
// 005c5a89: TEST EAX,EAX
// 005c5a8b: JZ 0x005c53f2
//   XREF to: 005c53f2 (CONDITIONAL_JUMP)
// 005c5a91: CMP dword ptr [EAX + 0x588],0x0
// 005c5a98: JZ 0x005c53f2
//   XREF to: 005c53f2 (CONDITIONAL_JUMP)
// 005c5a9e: MOV EAX,0x3
// 005c5aa3: JMP 0x005c53f4
//   XREF to: 005c53f4 (UNCONDITIONAL_JUMP)
// 005c5aa8: MOV EAX,dword ptr [EDX + 0x2e0]
//   Label: LAB_005c5aa8
// 005c5aae: CMP EAX,0x7
// 005c5ab1: JNC 0x005c5ac1
//   XREF to: 005c5ac1 (CONDITIONAL_JUMP)
// 005c5ab3: TEST EAX,EAX
// 005c5ab5: JZ 0x005c5a6f
//   XREF to: 005c5a6f (CONDITIONAL_JUMP)
// 005c5ab7: MOV EAX,0x3
// 005c5abc: JMP 0x005c53f4
//   XREF to: 005c53f4 (UNCONDITIONAL_JUMP)
// 005c5ac1: JBE 0x005c5a79
//   Label: LAB_005c5ac1
//   XREF to: 005c5a79 (CONDITIONAL_JUMP)
// 005c5ac3: CMP EAX,0x8
// 005c5ac6: JZ 0x005c5a79
//   XREF to: 005c5a79 (CONDITIONAL_JUMP)
// 005c5ac8: MOV EAX,0x3
// 005c5acd: JMP 0x005c53f4
//   XREF to: 005c53f4 (UNCONDITIONAL_JUMP)
// 005c5ad2: PUSH 0x1
//   Label: LAB_005c5ad2
// 005c5ad4: PUSH 0x16
// 005c5ad6: MOV ECX,dword ptr [ESP + 0x38]
// 005c5ada: PUSH ECX
// 005c5adb: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c5ae0: MOV EAX,dword ptr [EBX + 0x1fc38]
// 005c5ae6: ADD ESP,0xc
// 005c5ae9: TEST EAX,EAX
// 005c5aeb: JZ 0x005c5b07
//   XREF to: 005c5b07 (CONDITIONAL_JUMP)
// 005c5aed: PUSH 0x13b4
// 005c5af2: PUSH EAX
// 005c5af3: PUSH 0x653da3
//   XREF to: 00653da3 (DATA)
// 005c5af8: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005c5afe: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005c5aff: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 005c5b04: ADD ESP,0x10
// 005c5b07: MOV dword ptr [EBX + 0x1fc38],0x2
//   Label: LAB_005c5b07
// 005c5b11: JMP 0x005c54c0
//   XREF to: 005c54c0 (UNCONDITIONAL_JUMP)
// 005c5b16: MOV dword ptr [EBX + 0x1fb98],0x2
//   Label: LAB_005c5b16
// 005c5b20: JMP 0x005c54f2
//   XREF to: 005c54f2 (UNCONDITIONAL_JUMP)
// 005c5b25: CMP EDI,0x3
//   Label: LAB_005c5b25
// 005c5b28: JNZ 0x005c54f2
//   XREF to: 005c54f2 (CONDITIONAL_JUMP)
// 005c5b2e: CMP dword ptr [EBX + 0x1fb98],0x2
// 005c5b35: JGE 0x005c54f2
//   XREF to: 005c54f2 (CONDITIONAL_JUMP)
// 005c5b3b: MOV ECX,dword ptr [ESP + 0x40]
// 005c5b3f: PUSH ECX
// 005c5b40: CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0
//   XREF to: 004ffab0 (UNCONDITIONAL_CALL)
// 005c5b45: ADD ESP,0x4
// 005c5b48: TEST EAX,EAX
// 005c5b4a: JNZ 0x005c54e8
//   XREF to: 005c54e8 (CONDITIONAL_JUMP)
// 005c5b50: MOV dword ptr [EBX + 0x1fb98],EAX
// 005c5b56: JMP 0x005c54f2
//   XREF to: 005c54f2 (UNCONDITIONAL_JUMP)
// 005c5b5b: CMP EDI,0x8
//   Label: LAB_005c5b5b
// 005c5b5e: JZ 0x005c5503
//   XREF to: 005c5503 (CONDITIONAL_JUMP)
// 005c5b64: JMP 0x005c550d
//   XREF to: 005c550d (UNCONDITIONAL_JUMP)
