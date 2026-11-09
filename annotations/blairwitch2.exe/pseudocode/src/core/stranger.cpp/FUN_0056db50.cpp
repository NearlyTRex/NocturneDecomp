// Name: core_stranger.cpp_FUN_0056db50
// Address: 0056db50
// Address Range: [[0056db50, 0056e4ad]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_0056db50(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_0056db50(CStranger *this_ptr,float delta_time)

{
  float fVar1;
  CMotionList *pCVar2;
  CDynamite *this_ptr_00;
  int iVar3;
  CLightGun *pCVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  byte bVar8;
  uint auStackY_1060 [1013];
  uint local_78;
  uint local_6c;
  uint local_60;
  uint local_5c [7];
  int local_40;
  int local_3c;
  int local_38;
  CMotionController *local_34;
  int local_30;
  int local_2c;
  CInventory *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar8 = 0;
  if ((*(int *)&this_ptr->field_0x2d04 == 0xe) && (*(int *)&this_ptr->field_0x2698 == 0)) {
    *(uint *)&this_ptr->field_0x2d08 = 0;
    *(uint *)&this_ptr->field_0x2d04 = 0;
  }
  local_40 = -1;
  local_24 = 0;
  if (*(int *)&this_ptr->field_0x25618 == 0) {
    if (*(int *)&this_ptr->field_0x25640 != 0) {
      if (*(int *)&this_ptr->field_0x2698 == 0) {
        local_24 = *(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4);
      }
      else {
        local_24 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(int *)&this_ptr->field_0x2698,g_CWeaponClassInfo.name_hash);
        if ((local_24 == 0) &&
           (uVar5 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x2698 + 0x2b0) + 0x7c))
                              (*(int *)&this_ptr->field_0x2698), (uVar5 & 3) != 0)) {
          local_40 = 8;
        }
      }
      if ((local_24 == 0) && (local_40 < 0)) {
        *(uint *)&this_ptr->field_0x25640 = 0;
      }
    }
  }
  else {
    *(uint *)&this_ptr->field_0x25640 = 0;
  }
  local_28 = (CInventory *)&this_ptr->field_0x2437c;
  local_34 = (CMotionController *)&this_ptr->field_0x2b4;
  local_38 = 0;
  do {
    if (delta_time <= 0.0) {
      return;
    }
    iVar7 = *(int *)&this_ptr->field_0x256a4;
    if ((iVar7 == 1) || (*(int *)&this_ptr->field_0x2561c != 0)) {
LAB_0056dbda:
      local_1c = 3;
      iVar7 = local_1c;
    }
    else if (iVar7 == 2) {
      iVar7 = 0;
    }
    else if (iVar7 == 3) {
      local_18 = (float)core_charactr_cpp_FUN_0042a5a0(this_ptr,6);
      local_1c = 6;
      iVar7 = local_1c;
      if ((float)_DAT_005ebda5 < local_18) {
        fVar1 = delta_time * (float)_DAT_005ebd9d + *(float *)&this_ptr->field_0x25650;
        *(float *)&this_ptr->field_0x25650 = fVar1;
        if (0x428C0000 < fVar1) {
          *(float *)&this_ptr->field_0x25650 = 0x428C0000;
        }
        if (*(int *)&this_ptr->field_0x10a74 != 0) {
          return;
        }
        iVar7 = 0;
      }
    }
    else {
      pCVar4 = core_inv_cpp_FUN_004dccb0(local_28);
      if ((pCVar4 != (CLightGun *)0x0) && (*(int *)&this_ptr->field_0x255e8 == 0))
      goto LAB_0056dbda;
      pCVar4 = core_inv_cpp_FUN_004dccb0(local_28);
      if ((pCVar4 == (CLightGun *)0x0) || (*(int *)&this_ptr->field_0x255e8 != 1)) {
        pCVar4 = core_inv_cpp_FUN_004dccb0(local_28);
        if ((pCVar4 == (CLightGun *)0x0) && (*(int *)&this_ptr->field_0x255e8 == 2)) {
          local_1c = 10;
          iVar7 = local_1c;
        }
        else {
          pCVar4 = core_inv_cpp_FUN_004dccb0(local_28);
          if ((pCVar4 == (CLightGun *)0x0) && (*(int *)&this_ptr->field_0x255e8 == 1))
          goto LAB_0056dbda;
          if (local_40 < 0) {
            iVar7 = *(int *)&this_ptr->field_0x25698;
            if (iVar7 == local_24) {
              if (*(int *)&this_ptr->field_0x25698 == 0) {
switchD_0056dff9_caseD_3:
                iVar7 = 0;
              }
              else {
                switch(*(uint *)(*(int *)&this_ptr->field_0x25698 + 0x43c)) {
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
                  goto switchD_0056dff9_caseD_3;
                case 4:
                  iVar7 = 7;
                  break;
                case 7:
                  iVar7 = 8;
                }
              }
            }
            else if (iVar7 == 0) {
              iVar7 = 0;
              if (local_24 != 0) {
                uVar5 = *(uint *)(local_24 + 0x43c);
                if (uVar5 < 7) {
                  if (uVar5 == 0) {
                    iVar7 = 1;
                  }
                  else {
                    local_1c = 3;
                    iVar7 = local_1c;
                  }
                }
                else if ((uVar5 < 8) || (uVar5 == 9)) {
                  iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                    (local_24,g_CMeleeClassInfo.name_hash);
                  if ((iVar7 == 0) || (*(int *)(iVar7 + 0x6e4) == 0)) {
                    iVar7 = 0;
                  }
                  else {
                    iVar7 = 3;
                  }
                }
                else {
                  local_1c = 3;
                  iVar7 = local_1c;
                }
              }
            }
            else {
              uVar5 = *(uint *)(iVar7 + 0x43c);
              if (uVar5 < 7) {
                if (uVar5 == 0) {
                  iVar7 = 1;
                }
                else {
                  local_1c = 3;
                  iVar7 = local_1c;
                }
              }
              else if ((uVar5 < 8) || (uVar5 == 9)) {
                iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                  (iVar7,g_CMeleeClassInfo.name_hash);
                if ((iVar7 == 0) || (*(int *)(iVar7 + 0x6e4) == 0)) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = 3;
                }
              }
              else {
                local_1c = 3;
                iVar7 = local_1c;
              }
            }
          }
          else {
            local_1c = local_40;
            iVar7 = local_1c;
          }
        }
      }
      else {
        local_1c = 10;
        iVar7 = local_1c;
      }
    }
    local_1c = iVar7;
    local_30 = *(int *)&this_ptr->field_0x2d08;
    local_20 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a0c0
                         ((CCharacter *)this_ptr,&delta_time,local_1c);
    iVar7 = *(int *)(&this_ptr->field_0x2860 + *(int *)&this_ptr->field_0x2d04 * 0x38) * 0x118;
    pCVar2 = core_motion_cpp_FUN_00503860(local_34);
    switch(*(uint *)&this_ptr->field_0x2d04) {
    case 6:
      this_ptr_00 = (CDynamite *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (*(uint *)&this_ptr->field_0x25698,
                               g_CDynamiteClassInfo.name_hash);
      if (((this_ptr_00 != (CDynamite *)0x0) &&
          (iVar3 = core_dynamite_cpp_FUN_0047a1a0(this_ptr_00), iVar3 == 0)) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(pCVar2 + iVar7 + 0x1c8c)),
         (float)(int)local_18 <= *(float *)&this_ptr->field_0x2d08)) {
        core_dynamite_cpp_FUN_0047a150(this_ptr_00);
      }
      break;
    case 7:
      if ((*(int *)&this_ptr->field_0x256a4 == 3) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(pCVar2 + iVar7 + 0x1c8c)),
         (float)(int)local_18 <= *(float *)&this_ptr->field_0x2d08)) {
        core_stranger_cpp_FUN_0056da90(this_ptr);
        local_78 = local_5c[2];
        *(uint *)((int)&stack0xffffff8c + (uint)bVar8 * 0xfffffffe * 4) =
             local_5c[(uint)bVar8 * 0xfffffffe + 3];
        *(uint *)(&stack0xffffff90 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             local_5c[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 4];
        local_3c = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(uint *)&this_ptr->field_0x25698,g_CDynamiteClassInfo.name_hash
                             );
        local_2c = local_3c;
        if (local_3c != 0) {
          core_actor_cpp_FUN_00408cf0(this_ptr,&stack0xffffff88);
          iVar7 = local_2c;
          puVar6 = (uint *)(local_2c + 0x6d8);
          local_60 = local_6c;
          *(uint *)((int)local_5c + (uint)bVar8 * -8) =
               *(uint *)(&stack0xffffff98 + (uint)bVar8 * -8);
          local_5c[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 1] =
               *(uint *)(&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          if (puVar6 != &local_60) {
            *puVar6 = local_60;
            *(uint *)(iVar7 + 0x6dc) = local_5c[0];
            *(uint *)(iVar7 + 0x6e0) = local_5c[1];
          }
          (**(code **)(*(int *)(local_3c + 0x2b0) + 0xec))(local_3c);
          *(uint *)&this_ptr->field_0x25698 = 0;
        }
        if (*(int *)&this_ptr->field_0x2698 != 0) {
          (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,1,&stack0xffffff88);
        }
        *(uint *)&this_ptr->field_0x256a4 = 0;
        *(uint *)&this_ptr->field_0x25650 = 0x41200000;
      }
      if (1.0 <= *(float *)&this_ptr->field_0x2d08) {
        *(uint *)&this_ptr->field_0x2d04 = 0;
        *(uint *)&this_ptr->field_0x2d08 = 0;
      }
      break;
    case 8:
      if (((local_30 < 0x3f19999a) && (0x3f199999 < *(int *)&this_ptr->field_0x2d08)) &&
         (iVar7 = core_actor_cpp_FUN_0040c840
                            (*(CDemonActor **)&this_ptr->field_0x25698,"CShotgun"),
         iVar7 != 0)) {
        (**(code **)(*(int *)(*(int *)&this_ptr->field_0x25698 + 0x2b0) + 0xe0))
                  (*(int *)&this_ptr->field_0x25698);
      }
      break;
    case 0xc:
      if (((local_30 < 0x3ebd70a4) && (0x3ebd70a3 < *(int *)&this_ptr->field_0x2d08)) &&
         (iVar7 = *(int *)&this_ptr->field_0x25698, iVar7 != 0)) {
        (**(code **)(*(int *)(iVar7 + 0x2b0) + 0x80))(iVar7,1);
      }
      break;
    case 0xd:
      if (((local_30 < 0x3f28f5c3) && (0x3f28f5c2 < *(int *)&this_ptr->field_0x2d08)) &&
         (iVar7 = *(int *)&this_ptr->field_0x25698, iVar7 != 0)) {
        (**(code **)(*(int *)(iVar7 + 0x2b0) + 0x80))(iVar7,2);
      }
    }
    if (-1 < local_20) {
      iVar7 = *(int *)&this_ptr->field_0x25698;
      if (iVar7 != local_24) {
        if (iVar7 != 0) {
          uVar5 = *(uint *)(iVar7 + 0x43c);
          if (uVar5 < 7) {
            if (uVar5 == 0) {
              iVar7 = 1;
            }
            else {
              iVar7 = 3;
            }
          }
          else if ((uVar5 < 8) || (uVar5 == 9)) {
            iVar7 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c8f0(iVar7,g_CMeleeClassInfo.name_hash);
            if ((iVar7 == 0) || (*(int *)(iVar7 + 0x6e4) == 0)) {
              iVar7 = 0;
            }
            else {
              iVar7 = 3;
            }
          }
          else {
            iVar7 = 3;
          }
          if (iVar7 == local_20) {
            (**(code **)(*(int *)(*(int *)&this_ptr->field_0x25698 + 0x2b0) + 0xe4))
                      (*(int *)&this_ptr->field_0x25698,1);
            *(uint *)&this_ptr->field_0x25698 = 0;
          }
        }
        if (*(int *)&this_ptr->field_0x25640 != 0) {
          if (local_24 == 0) {
LAB_0056dcd2:
            iVar7 = 0;
          }
          else {
            uVar5 = *(uint *)(local_24 + 0x43c);
            if (uVar5 < 7) {
              if (uVar5 == 0) {
                iVar7 = 1;
              }
              else {
                iVar7 = 3;
              }
            }
            else if ((uVar5 < 8) || (uVar5 == 9)) {
              iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (local_24,g_CMeleeClassInfo.name_hash);
              if ((iVar7 == 0) || (*(int *)(iVar7 + 0x6e4) == 0)) goto LAB_0056dcd2;
              iVar7 = 3;
            }
            else {
              iVar7 = 3;
            }
          }
          if ((iVar7 == local_20) && (*(int *)&this_ptr->field_0x25698 = local_24, local_24 != 0)) {
            (**(code **)(*(int *)(local_24 + 0x2b0) + 0xe4))(local_24,2);
          }
        }
      }
      if ((*(int *)&this_ptr->field_0x256a4 == 1) && (local_20 == 3)) {
        core_hero_cpp_FUN_004cff90(this_ptr,1);
        *(uint *)&this_ptr->field_0x256a4 = 0;
      }
      if ((*(int *)&this_ptr->field_0x2561c != 0) && (local_20 == 3)) {
        core_inv_cpp_FUN_004db8e0(local_28,*(int *)&this_ptr->field_0x2561c,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                  (0x01D182F0,*(CDemonActor **)&this_ptr->field_0x2561c);
        core_charactr_cpp_FUN_00428b10(this_ptr,1,*(uint *)&this_ptr->field_0x2561c,0,0);
        iVar7 = core_actor_cpp_FUN_0040c840
                          (*(CDemonActor **)&this_ptr->field_0x2561c,"CTrap");
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_34,0x16,1);
          if (*(int *)&this_ptr->field_0x256a4 != 0) {
            shape_edittool_cpp_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       *(int *)&this_ptr->field_0x256a4,0x13a9);
          }
          *(uint *)&this_ptr->field_0x256a4 = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_34,0x14,1);
          *(uint *)&this_ptr->field_0x256a4 = 6;
        }
        *(uint *)&this_ptr->field_0x2561c = 0;
      }
      if (local_20 == 10) {
        pCVar4 = core_inv_cpp_FUN_004dccb0(local_28);
        if (pCVar4 == (CLightGun *)0x0) {
LAB_0056ddd3:
          *(uint *)&this_ptr->field_0x255e8 = 1;
        }
        else {
          *(uint *)&this_ptr->field_0x255e8 = 2;
        }
      }
      else if ((local_20 == 3) && (*(int *)&this_ptr->field_0x255e8 < 2)) {
        pCVar4 = core_inv_cpp_FUN_004dccb0(local_28);
        if (pCVar4 != (CLightGun *)0x0) goto LAB_0056ddd3;
        *(uint *)&this_ptr->field_0x255e8 = 0;
      }
      if ((*(int *)&this_ptr->field_0x256a4 == 7) && ((local_20 == 0 || (local_20 == 8)))) {
        *(uint *)&this_ptr->field_0x256a4 = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042a620
                ((CCharacter *)this_ptr,local_1c);
    }
    local_38 = local_38 + 1;
    if (1 < local_38) {
      return;
    }
  } while( true );
}
