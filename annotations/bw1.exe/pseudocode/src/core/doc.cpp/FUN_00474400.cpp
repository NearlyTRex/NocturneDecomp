// Name: core_doc.cpp_FUN_00474400
// Address: 00474400
// Address Range: [[00474400, 00474ee8]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00474400(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00474400(CCharacter *param_1,float param_2)

{
  byte *this_ptr;
  float fVar1;
  CGame *pCVar2;
  CLightGun *pCVar3;
  int iVar4;
  uint uVar5;
  CMotionList *pCVar6;
  CDynamite *this_ptr_00;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  int aiStackY_1068 [1013];
  uint uVar10;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_68;
  uint local_5c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  CMotionController *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  CInventory *local_1c;
  float local_18;
  
  bVar9 = 0;
  if ((*(int *)&param_1->field_0x2c98 == 0xe) && (*(int *)&param_1->field_0x2628 == 0)) {
    *(uint *)&param_1->field_0x2c9c = 0;
    *(uint *)&param_1->field_0x2c98 = 0;
  }
  local_44 = -1;
  local_24 = 0;
  if (*(int *)&param_1[2].field_0x7be8 == 0) {
    if (*(int *)&param_1[2].field_0x7c0c != 0) {
      if (*(int *)&param_1->field_0x2628 == 0) {
        local_24 = *(int *)&param_1[2].field_0x7a80;
      }
      else {
        local_24 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(int *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash);
        if ((local_24 == 0) &&
           (uVar5 = (**(code **)(*(int *)(*(int *)&param_1->field_0x2628 + 0x154) + 0x74))
                              (*(int *)&param_1->field_0x2628), (uVar5 & 0xb) != 0)) {
          local_44 = 8;
        }
      }
      if ((local_24 == 0) && (local_44 < 0)) {
        *(uint *)&param_1[2].field_0x7c0c = 0;
      }
    }
  }
  else {
    *(uint *)&param_1[2].field_0x7c0c = 0;
  }
  this_ptr = &param_1[2].field_0x7748;
  pCVar3 = core_inv_cpp_FUN_004f9ed0((CInventory *)this_ptr);
  local_2c = (uint)(pCVar3 != (CLightGun *)0x0);
  iVar4 = core_inv_cpp_FUN_004f9ef0(this_ptr);
  local_28 = (uint)(iVar4 != 0);
  local_38 = (CMotionController *)&param_1->field_0x158;
  local_3c = 0;
  local_1c = (CInventory *)this_ptr;
  do {
    if (param_2 <= 0.0) {
LAB_004744a5:
      if (*(int *)&param_1[2].field_0x7c0c == 0) {
        return;
      }
      goto LAB_00474ea4;
    }
    iVar4 = *(int *)&param_1[2].field_0x7bbc;
    if ((iVar4 == 1) || (*(int *)&param_1[2].field_0x7bec != 0)) {
LAB_00474546:
      local_20 = 3;
      iVar4 = local_20;
    }
    else if (iVar4 == 2) {
      iVar4 = 0;
    }
    else if (iVar4 == 3) {
      local_18 = (float)core_charactr_cpp_FUN_00434590(param_1,6);
      local_20 = 6;
      iVar4 = local_20;
      if ((float)_DAT_005da444 < local_18) {
        fVar1 = param_2 * (float)_DAT_005da43c + *(float *)&param_1[2].field_0x7c1c;
        *(float *)&param_1[2].field_0x7c1c = fVar1;
        if (0x428C0000 < fVar1) {
          *(float *)&param_1[2].field_0x7c1c = 0x428C0000;
        }
        if (*(int *)&param_1[1].field_0x14 != 0) goto LAB_004744a5;
        iVar4 = 0;
      }
    }
    else {
      if ((local_2c != 0) && (*(int *)&param_1[2].field_0x7bb4 == 0)) goto LAB_00474546;
      if ((local_2c == 0) || (*(int *)&param_1[2].field_0x7bb4 != 1)) {
        if ((local_2c == 0) && (*(int *)&param_1[2].field_0x7bb4 == 2)) {
          local_20 = 10;
          iVar4 = local_20;
        }
        else {
          if (((local_2c == 0) && (*(int *)&param_1[2].field_0x7bb4 == 1)) ||
             ((local_28 != 0 && (*(int *)&param_1[2].field_0x7bb8 == 0)))) goto LAB_00474546;
          if ((local_28 == 0) || (*(int *)&param_1[2].field_0x7bb8 != 1)) {
            if ((local_28 == 0) && (*(int *)&param_1[2].field_0x7bb8 == 2)) {
              local_20 = 0xb;
              iVar4 = local_20;
            }
            else {
              if ((local_28 == 0) && (*(int *)&param_1[2].field_0x7bb8 == 1)) goto LAB_00474546;
              if (-1 < local_44) {
                local_20 = local_44;
                iVar4 = local_20;
                goto LAB_0047454e;
              }
              iVar4 = *(int *)&param_1[2].field_0x7c64;
              if (iVar4 != local_24) {
                if (iVar4 == 0) {
                  iVar4 = 0;
                  if (local_24 != 0) {
                    switch(*(uint *)(local_24 + 0x2e0)) {
                    case 0:
                    case 5:
                      iVar4 = 1;
                      break;
                    default:
switchD_004749dc_caseD_1:
                      iVar4 = 3;
                      break;
                    case 7:
                    case 8:
                      iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600
                                        (local_24,g_CMeleeClassInfo.name_hash);
                      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x588) != 0))
                      goto switchD_004749dc_caseD_1;
                      iVar4 = 0;
                    }
                  }
                }
                else {
                  switch(*(uint *)(iVar4 + 0x2e0)) {
                  case 0:
                  case 5:
                    iVar4 = 1;
                    break;
                  default:
switchD_00474a28_caseD_1:
                    iVar4 = 3;
                    break;
                  case 7:
                  case 8:
                    iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600
                                      (iVar4,g_CMeleeClassInfo.name_hash);
                    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x588) != 0))
                    goto switchD_00474a28_caseD_1;
                    iVar4 = 0;
                  }
                }
                goto LAB_0047454e;
              }
              if (*(int *)&param_1[2].field_0x7c64 == 0) {
switchD_00474955_caseD_3:
                iVar4 = 0;
              }
              else {
                switch(*(uint *)(*(int *)&param_1[2].field_0x7c64 + 0x2e0)) {
                case 0:
                case 5:
                  iVar4 = 2;
                  break;
                case 1:
                  iVar4 = 4;
                  break;
                case 2:
                  iVar4 = 5;
                  break;
                default:
                  goto switchD_00474955_caseD_3;
                case 4:
                  iVar4 = 7;
                  break;
                case 7:
                  iVar4 = 8;
                  break;
                case 9:
                case 10:
                  iVar4 = 0xe;
                }
              }
            }
          }
          else {
            local_20 = 0xb;
            iVar4 = local_20;
          }
        }
      }
      else {
        local_20 = 10;
        iVar4 = local_20;
      }
    }
LAB_0047454e:
    local_20 = iVar4;
    local_30 = *(int *)&param_1->field_0x2c9c;
    local_48 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_004340b0
                         (param_1,&param_2,local_20);
    iVar4 = *(int *)(&param_1->field_0x27f4 + *(int *)&param_1->field_0x2c98 * 0x38) * 0x120;
    pCVar6 = core_motion_cpp_FUN_00524a00(local_38);
    switch(*(uint *)&param_1->field_0x2c98) {
    case 6:
      this_ptr_00 = (CDynamite *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (*(uint *)&param_1[2].field_0x7c64,
                               g_CDynamiteClassInfo.name_hash);
      if (((this_ptr_00 != (CDynamite *)0x0) &&
          (iVar7 = core_dynamite_cpp_CDynamite_isFuseLit_FUN_00492690(this_ptr_00), iVar7 == 0)) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(pCVar6 + iVar4 + 0x1c8c)),
         (float)(int)local_18 <= *(float *)&param_1->field_0x2c9c)) {
        core_dynamite_cpp_FUN_00492640(this_ptr_00);
      }
      break;
    case 7:
      if ((*(int *)&param_1[2].field_0x7bbc == 3) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(pCVar6 + iVar4 + 0x1c8c)),
         (float)(int)local_18 <= *(float *)&param_1->field_0x2c9c)) {
        core_doc_cpp_FUN_004742a0(param_1);
        local_74 = local_68;
        *(uint *)((int)&stack0xffffff90 + (uint)bVar9 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff9c + (uint)bVar9 * -8);
        *(uint *)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             *(uint *)(&stack0xffffffa0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        local_40 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(uint *)&param_1[2].field_0x7c64,g_CDynamiteClassInfo.name_hash
                             );
        local_34 = local_40;
        if (local_40 != 0) {
          core_actor_cpp_FUN_00408ac0(param_1,&stack0xffffff8c);
          iVar4 = local_34;
          puVar8 = (uint *)(local_34 + 0x57c);
          local_80 = local_5c;
          *(uint *)((int)&stack0xffffff84 + (uint)bVar9 * -8) =
               *(uint *)(&stack0xffffffa8 + (uint)bVar9 * -8);
          *(uint *)((int)&stack0xffffff88 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
               *(uint *)(&stack0xffffffac + (uint)bVar9 * -8 + (uint)bVar9 * -8);
          if (puVar8 != &stack0xffffff80) {
            *puVar8 = local_80;
            *(uint *)(iVar4 + 0x580) = local_7c;
            *(uint *)(iVar4 + 0x584) = local_78;
          }
          (**(code **)(*(int *)(local_40 + 0x154) + 0xe4))(local_40);
          *(uint *)&param_1[2].field_0x7c64 = 0;
        }
        if (*(int *)&param_1->field_0x2628 != 0) {
          (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1,&stack0xffffff8c);
        }
        *(uint *)&param_1[2].field_0x7bbc = 0;
        *(uint *)&param_1[2].field_0x7c1c = 0x41200000;
      }
      if (1.0 <= *(float *)&param_1->field_0x2c9c) {
        *(uint *)&param_1->field_0x2c98 = 0;
        *(uint *)&param_1->field_0x2c9c = 0;
      }
      break;
    case 8:
      if (((local_30 < 0x3f19999a) && (0x3f199999 < *(int *)&param_1->field_0x2c9c)) &&
         (iVar4 = core_actor_cpp_FUN_0040c550
                            (*(CDemonActor **)&param_1[2].field_0x7c64,"CShotgun"),
         iVar4 != 0)) {
        (**(code **)(*(int *)(*(int *)&param_1[2].field_0x7c64 + 0x154) + 0xd8))
                  (*(int *)&param_1[2].field_0x7c64);
      }
      break;
    case 0xc:
      if (((local_30 < 0x3ebd70a4) && (0x3ebd70a3 < *(int *)&param_1->field_0x2c9c)) &&
         ((*(int *)&param_1[2].field_0x7c64 != 0 &&
          (iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(int *)&param_1[2].field_0x7c64,g_CWeaponClassInfo.name_hash),
          iVar4 != 0)))) {
        if (*(int *)(iVar4 + 0x56c) == 9) {
          (**(code **)(*(int *)(iVar4 + 0x154) + 0x78))(iVar4,8);
        }
        else {
          (**(code **)(*(int *)(iVar4 + 0x154) + 0x78))(iVar4,1);
        }
      }
      break;
    case 0xd:
      if ((local_30 < 0x3f000000) && (0x3effffff < *(int *)&param_1->field_0x2c9c)) {
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)&param_1[2].field_0x7c64,g_CWeaponClassInfo.name_hash);
        if (iVar4 != 0) {
          if (*(int *)(iVar4 + 0x56c) == 9) {
            uVar10 = 8;
          }
          else {
            uVar10 = 1;
          }
          (**(code **)(*(int *)(iVar4 + 0x154) + 0x78))(iVar4,uVar10);
        }
        iVar4 = *(int *)&param_1[2].field_0x7c64;
        if (iVar4 != 0) {
          (**(code **)(*(int *)(iVar4 + 0x154) + 0x78))(iVar4,2);
        }
      }
      break;
    case 0x12:
      if (((local_30 < 0x3f4ccccd) && (0x3f4ccccc < *(int *)&param_1->field_0x2c9c)) &&
         (iVar4 = core_actor_cpp_FUN_0040c550
                            (*(CDemonActor **)&param_1[2].field_0x7c64,"CRifle"),
         iVar4 != 0)) {
        (**(code **)(*(int *)(*(int *)&param_1[2].field_0x7c64 + 0x154) + 0xd8))
                  (*(int *)&param_1[2].field_0x7c64);
      }
    }
    if (-1 < local_48) {
      iVar4 = *(int *)&param_1[2].field_0x7c64;
      if (iVar4 != local_24) {
        if (iVar4 != 0) {
          switch(*(uint *)(iVar4 + 0x2e0)) {
          case 0:
          case 5:
            iVar4 = 1;
            break;
          default:
switchD_00474d6b_caseD_1:
            iVar4 = 3;
            break;
          case 7:
          case 8:
            iVar4 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(iVar4,g_CMeleeClassInfo.name_hash);
            if ((iVar4 != 0) && (*(int *)(iVar4 + 0x588) != 0)) goto switchD_00474d6b_caseD_1;
            iVar4 = 0;
          }
          if (iVar4 == local_48) {
            (**(code **)(*(int *)(*(int *)&param_1[2].field_0x7c64 + 0x154) + 0xdc))
                      (*(int *)&param_1[2].field_0x7c64,1);
            *(uint *)&param_1[2].field_0x7c64 = 0;
          }
        }
        if (*(int *)&param_1[2].field_0x7c0c != 0) {
          if (local_24 == 0) {
LAB_0047463c:
            iVar4 = 0;
          }
          else {
            switch(*(uint *)(local_24 + 0x2e0)) {
            case 0:
            case 5:
              iVar4 = 1;
              break;
            case 7:
            case 8:
              iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (local_24,g_CMeleeClassInfo.name_hash);
              if ((iVar4 == 0) || (*(int *)(iVar4 + 0x588) == 0)) goto LAB_0047463c;
            default:
              iVar4 = 3;
            }
          }
          if ((iVar4 == local_48) && (*(int *)&param_1[2].field_0x7c64 = local_24, local_24 != 0)) {
            (**(code **)(*(int *)(local_24 + 0x154) + 0xdc))(local_24,2);
          }
        }
      }
      if ((*(int *)&param_1[2].field_0x7bbc == 1) && (local_48 == 3)) {
        core_hero_cpp_FUN_004ec2c0((CHero *)param_1,1);
        *(uint *)&param_1[2].field_0x7bbc = 0;
      }
      if ((*(CDemonActor **)&param_1[2].field_0x7bec != (CDemonActor *)0x0) && (local_48 == 3)) {
        core_inv_cpp_FUN_004f8d00(local_1c,*(CDemonActor **)&param_1[2].field_0x7bec,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
                  (0x01D2C900,*(CDemonActor **)&param_1[2].field_0x7bec);
        core_charactr_cpp_FUN_004325b0(param_1,1,*(uint *)&param_1[2].field_0x7bec,0,0);
        iVar4 = core_actor_cpp_FUN_0040c550
                          (*(CDemonActor **)&param_1[2].field_0x7bec,"CTrap");
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_38,0x19,1);
          if (*(int *)&param_1[2].field_0x7bbc != 0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",
                       *(int *)&param_1[2].field_0x7bbc,0x146a);
          }
          *(uint *)&param_1[2].field_0x7bbc = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_38,0x17,1);
          *(uint *)&param_1[2].field_0x7bbc = 6;
        }
        *(uint *)&param_1[2].field_0x7bec = 0;
      }
      if (local_48 == 10) {
        if (local_2c == 0) {
          *(uint *)&param_1[2].field_0x7bb4 = 1;
        }
        else {
          *(uint *)&param_1[2].field_0x7bb4 = 2;
        }
      }
      else if ((local_48 == 3) && (*(int *)&param_1[2].field_0x7bb4 < 2)) {
        if (local_2c == 0) {
          *(uint *)&param_1[2].field_0x7bb4 = 0;
        }
        else {
          *(uint *)&param_1[2].field_0x7bb4 = 1;
        }
      }
      pCVar2 = g_CGamePtr;
      if (local_48 == 0xb) {
        if (local_28 == 0) {
          *(uint *)&param_1[2].field_0x7bb8 = 1;
        }
        else {
          *(uint *)&param_1[2].field_0x7bb8 = 2;
        }
        (*(code *)**(uint **)&pCVar2->field_0xb00)(pCVar2,local_28 != 0);
      }
      else if ((local_48 == 3) && (*(int *)&param_1[2].field_0x7bb8 < 2)) {
        if (local_28 == 0) {
          *(uint *)&param_1[2].field_0x7bb8 = 0;
        }
        else {
          *(uint *)&param_1[2].field_0x7bb8 = 1;
        }
      }
      if ((*(int *)&param_1[2].field_0x7bbc == 7) && ((local_48 == 0 || (local_48 == 8)))) {
        *(uint *)&param_1[2].field_0x7bbc = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00434610(param_1,local_20);
    }
    local_3c = local_3c + 1;
  } while (local_3c < 2);
  if (*(int *)&param_1[2].field_0x7c0c == 0) {
    return;
  }
LAB_00474ea4:
  iVar4 = core_actor_cpp_FUN_0040c550
                    (*(CDemonActor **)&param_1[2].field_0x7c64,"CFlashlight");
  if ((iVar4 != 0) && (*(int *)&g_CGamePtr->field_0x264 == 0)) {
    *(uint *)&g_CGamePtr->field_0x264 = 1;
    return;
  }
  return;
}
