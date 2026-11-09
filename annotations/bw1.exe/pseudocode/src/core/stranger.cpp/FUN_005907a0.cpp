// Name: core_stranger.cpp_FUN_005907a0
// Address: 005907a0
// Address Range: [[005907a0, 005910f8]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_005907a0(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_005907a0(CStranger *this_ptr,float delta_time)

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
  int aiStackY_1060 [1013];
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_60;
  uint local_54;
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
  if ((*(int *)&this_ptr->field_0x2c98 == 0xe) && (*(int *)&this_ptr->field_0x2628 == 0)) {
    *(uint *)&this_ptr->field_0x2c9c = 0;
    *(uint *)&this_ptr->field_0x2c98 = 0;
  }
  local_40 = -1;
  local_24 = 0;
  if (*(int *)&this_ptr->field_0x1ff88 == 0) {
    if (*(int *)&this_ptr->field_0x1ffac != 0) {
      if (*(int *)&this_ptr->field_0x2628 == 0) {
        local_24 = *(int *)&this_ptr->field_0x1fe20;
      }
      else {
        local_24 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(int *)&this_ptr->field_0x2628,g_CWeaponClassInfo.name_hash);
        if ((local_24 == 0) &&
           (uVar5 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x2628 + 0x154) + 0x74))
                              (*(int *)&this_ptr->field_0x2628), (uVar5 & 3) != 0)) {
          local_40 = 8;
        }
      }
      if ((local_24 == 0) && (local_40 < 0)) {
        *(uint *)&this_ptr->field_0x1ffac = 0;
      }
    }
  }
  else {
    *(uint *)&this_ptr->field_0x1ffac = 0;
  }
  local_28 = (CInventory *)&this_ptr->field_0x1fae8;
  local_34 = (CMotionController *)&this_ptr->field_0x158;
  local_38 = 0;
  do {
    if (delta_time <= 0.0) {
      return;
    }
    iVar7 = *(int *)&this_ptr->field_0x1ff5c;
    if ((iVar7 == 1) || (*(int *)&this_ptr->field_0x1ff8c != 0)) {
LAB_0059082a:
      local_1c = 3;
      iVar7 = local_1c;
    }
    else if (iVar7 == 2) {
      iVar7 = 0;
    }
    else if (iVar7 == 3) {
      local_18 = (float)core_charactr_cpp_FUN_00434590(this_ptr,6);
      local_1c = 6;
      iVar7 = local_1c;
      if ((float)_DAT_005f7019 < local_18) {
        fVar1 = delta_time * (float)_DAT_005f7011 + *(float *)&this_ptr->field_0x1ffbc;
        *(float *)&this_ptr->field_0x1ffbc = fVar1;
        if (0x428C0000 < fVar1) {
          *(float *)&this_ptr->field_0x1ffbc = 0x428C0000;
        }
        if (*(int *)&this_ptr->field_0xc1e4 != 0) {
          return;
        }
        iVar7 = 0;
      }
    }
    else {
      pCVar4 = core_inv_cpp_FUN_004f9ed0(local_28);
      if ((pCVar4 != (CLightGun *)0x0) && (*(int *)&this_ptr->field_0x1ff54 == 0))
      goto LAB_0059082a;
      pCVar4 = core_inv_cpp_FUN_004f9ed0(local_28);
      if ((pCVar4 == (CLightGun *)0x0) || (*(int *)&this_ptr->field_0x1ff54 != 1)) {
        pCVar4 = core_inv_cpp_FUN_004f9ed0(local_28);
        if ((pCVar4 == (CLightGun *)0x0) && (*(int *)&this_ptr->field_0x1ff54 == 2)) {
          local_1c = 10;
          iVar7 = local_1c;
        }
        else {
          pCVar4 = core_inv_cpp_FUN_004f9ed0(local_28);
          if ((pCVar4 == (CLightGun *)0x0) && (*(int *)&this_ptr->field_0x1ff54 == 1))
          goto LAB_0059082a;
          if (local_40 < 0) {
            iVar7 = *(int *)&this_ptr->field_0x20004;
            if (iVar7 == local_24) {
              if (*(int *)&this_ptr->field_0x20004 == 0) {
switchD_00590c42_caseD_3:
                iVar7 = 0;
              }
              else {
                switch(*(uint *)(*(int *)&this_ptr->field_0x20004 + 0x2e0)) {
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
                  goto switchD_00590c42_caseD_3;
                case 4:
                  iVar7 = 7;
                  break;
                case 7:
                  iVar7 = 8;
                  break;
                case 9:
                case 10:
                  iVar7 = 0xe;
                }
              }
            }
            else if (iVar7 == 0) {
              iVar7 = 0;
              if (local_24 != 0) {
                uVar5 = *(uint *)(local_24 + 0x2e0);
                if (uVar5 < 7) {
                  if (uVar5 == 0) {
                    iVar7 = 1;
                  }
                  else {
                    local_1c = 3;
                    iVar7 = local_1c;
                  }
                }
                else if ((uVar5 < 8) || (uVar5 == 8)) {
                  iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                                    (local_24,g_CMeleeClassInfo.name_hash);
                  if ((iVar7 == 0) || (*(int *)(iVar7 + 0x588) == 0)) {
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
              uVar5 = *(uint *)(iVar7 + 0x2e0);
              if (uVar5 < 7) {
                if (uVar5 == 0) {
                  iVar7 = 1;
                }
                else {
                  local_1c = 3;
                  iVar7 = local_1c;
                }
              }
              else if ((uVar5 < 8) || (uVar5 == 8)) {
                iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                                  (iVar7,g_CMeleeClassInfo.name_hash);
                if ((iVar7 == 0) || (*(int *)(iVar7 + 0x588) == 0)) {
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
    local_2c = *(int *)&this_ptr->field_0x2c9c;
    local_20 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_004340b0
                         ((CCharacter *)this_ptr,&delta_time,local_1c);
    iVar7 = *(int *)(&this_ptr->field_0x27f4 + *(int *)&this_ptr->field_0x2c98 * 0x38) * 0x120;
    pCVar2 = core_motion_cpp_FUN_00524a00(local_34);
    switch(*(uint *)&this_ptr->field_0x2c98) {
    case 6:
      this_ptr_00 = (CDynamite *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (*(uint *)&this_ptr->field_0x20004,
                               g_CDynamiteClassInfo.name_hash);
      if (((this_ptr_00 != (CDynamite *)0x0) &&
          (iVar3 = core_dynamite_cpp_CDynamite_isFuseLit_FUN_00492690(this_ptr_00), iVar3 == 0)) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(pCVar2 + iVar7 + 0x1c8c)),
         (float)(int)local_18 <= *(float *)&this_ptr->field_0x2c9c)) {
        core_dynamite_cpp_FUN_00492640(this_ptr_00);
      }
      break;
    case 7:
      if ((*(int *)&this_ptr->field_0x1ff5c == 3) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(pCVar2 + iVar7 + 0x1c8c)),
         (float)(int)local_18 <= *(float *)&this_ptr->field_0x2c9c)) {
        core_stranger_cpp_FUN_005906e0(this_ptr);
        local_54 = local_6c;
        *(uint *)((int)&stack0xffffffb0 + (uint)bVar8 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff98 + (uint)bVar8 * -8);
        *(uint *)(&stack0xffffffb4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        local_3c = core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(uint *)&this_ptr->field_0x20004,g_CDynamiteClassInfo.name_hash
                             );
        local_30 = local_3c;
        if (local_3c != 0) {
          core_actor_cpp_FUN_00408ac0(this_ptr,&stack0xffffffac);
          iVar7 = local_30;
          puVar6 = (uint *)(local_30 + 0x57c);
          local_78 = local_60;
          *(uint *)((int)&stack0xffffff8c + (uint)bVar8 * -8) =
               *(uint *)(&stack0xffffffa4 + (uint)bVar8 * -8);
          *(uint *)((int)&stack0xffffff90 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)(&stack0xffffffa8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          if (puVar6 != &stack0xffffff88) {
            *puVar6 = local_78;
            *(uint *)(iVar7 + 0x580) = local_74;
            *(uint *)(iVar7 + 0x584) = local_70;
          }
          (**(code **)(*(int *)(local_3c + 0x154) + 0xe4))(local_3c);
          *(uint *)&this_ptr->field_0x20004 = 0;
        }
        if (*(int *)&this_ptr->field_0x2628 != 0) {
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1,&stack0xffffffac);
        }
        *(uint *)&this_ptr->field_0x1ff5c = 0;
        *(uint *)&this_ptr->field_0x1ffbc = 0x41200000;
      }
      if (1.0 <= *(float *)&this_ptr->field_0x2c9c) {
        *(uint *)&this_ptr->field_0x2c98 = 0;
        *(uint *)&this_ptr->field_0x2c9c = 0;
      }
      break;
    case 8:
      if (((local_2c < 0x3f19999a) && (0x3f199999 < *(int *)&this_ptr->field_0x2c9c)) &&
         (iVar7 = core_actor_cpp_FUN_0040c550
                            (*(CDemonActor **)&this_ptr->field_0x20004,"CShotgun"),
         iVar7 != 0)) {
        (**(code **)(*(int *)(*(int *)&this_ptr->field_0x20004 + 0x154) + 0xd8))
                  (*(int *)&this_ptr->field_0x20004);
      }
      break;
    case 0xc:
      if (((local_2c < 0x3ebd70a4) && (0x3ebd70a3 < *(int *)&this_ptr->field_0x2c9c)) &&
         (iVar7 = *(int *)&this_ptr->field_0x20004, iVar7 != 0)) {
        (**(code **)(*(int *)(iVar7 + 0x154) + 0x78))(iVar7,1);
      }
      break;
    case 0xd:
      if (((local_2c < 0x3f28f5c3) && (0x3f28f5c2 < *(int *)&this_ptr->field_0x2c9c)) &&
         (iVar7 = *(int *)&this_ptr->field_0x20004, iVar7 != 0)) {
        (**(code **)(*(int *)(iVar7 + 0x154) + 0x78))(iVar7,2);
      }
    }
    if (-1 < local_20) {
      iVar7 = *(int *)&this_ptr->field_0x20004;
      if (iVar7 != local_24) {
        if (iVar7 != 0) {
          uVar5 = *(uint *)(iVar7 + 0x2e0);
          if (uVar5 < 7) {
            if (uVar5 == 0) {
              iVar7 = 1;
            }
            else {
              iVar7 = 3;
            }
          }
          else if ((uVar5 < 8) || (uVar5 == 8)) {
            iVar7 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(iVar7,g_CMeleeClassInfo.name_hash);
            if ((iVar7 == 0) || (*(int *)(iVar7 + 0x588) == 0)) {
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
            (**(code **)(*(int *)(*(int *)&this_ptr->field_0x20004 + 0x154) + 0xdc))
                      (*(int *)&this_ptr->field_0x20004,1);
            *(uint *)&this_ptr->field_0x20004 = 0;
          }
        }
        if (*(int *)&this_ptr->field_0x1ffac != 0) {
          if (local_24 == 0) {
LAB_00590922:
            iVar7 = 0;
          }
          else {
            uVar5 = *(uint *)(local_24 + 0x2e0);
            if (uVar5 < 7) {
              if (uVar5 == 0) {
                iVar7 = 1;
              }
              else {
                iVar7 = 3;
              }
            }
            else if ((uVar5 < 8) || (uVar5 == 8)) {
              iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (local_24,g_CMeleeClassInfo.name_hash);
              if ((iVar7 == 0) || (*(int *)(iVar7 + 0x588) == 0)) goto LAB_00590922;
              iVar7 = 3;
            }
            else {
              iVar7 = 3;
            }
          }
          if ((iVar7 == local_20) && (*(int *)&this_ptr->field_0x20004 = local_24, local_24 != 0)) {
            (**(code **)(*(int *)(local_24 + 0x154) + 0xdc))(local_24,2);
          }
        }
      }
      if ((*(int *)&this_ptr->field_0x1ff5c == 1) && (local_20 == 3)) {
        core_hero_cpp_FUN_004ec2c0((CHero *)this_ptr,1);
        *(uint *)&this_ptr->field_0x1ff5c = 0;
      }
      if ((*(CDemonActor **)&this_ptr->field_0x1ff8c != (CDemonActor *)0x0) && (local_20 == 3)) {
        core_inv_cpp_FUN_004f8d00(local_28,*(CDemonActor **)&this_ptr->field_0x1ff8c,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
                  (0x01D2C900,*(CDemonActor **)&this_ptr->field_0x1ff8c);
        core_charactr_cpp_FUN_004325b0(this_ptr,1,*(uint *)&this_ptr->field_0x1ff8c,0,0);
        iVar7 = core_actor_cpp_FUN_0040c550
                          (*(CDemonActor **)&this_ptr->field_0x1ff8c,"CTrap");
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_34,0x21,1);
          if (*(int *)&this_ptr->field_0x1ff5c != 0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       *(int *)&this_ptr->field_0x1ff5c,0x141e);
          }
          *(uint *)&this_ptr->field_0x1ff5c = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_34,0x1f,1);
          *(uint *)&this_ptr->field_0x1ff5c = 6;
        }
        *(uint *)&this_ptr->field_0x1ff8c = 0;
      }
      if (local_20 == 10) {
        pCVar4 = core_inv_cpp_FUN_004f9ed0(local_28);
        if (pCVar4 == (CLightGun *)0x0) {
LAB_00590a23:
          *(uint *)&this_ptr->field_0x1ff54 = 1;
        }
        else {
          *(uint *)&this_ptr->field_0x1ff54 = 2;
        }
      }
      else if ((local_20 == 3) && (*(int *)&this_ptr->field_0x1ff54 < 2)) {
        pCVar4 = core_inv_cpp_FUN_004f9ed0(local_28);
        if (pCVar4 != (CLightGun *)0x0) goto LAB_00590a23;
        *(uint *)&this_ptr->field_0x1ff54 = 0;
      }
      if ((*(int *)&this_ptr->field_0x1ff5c == 7) && ((local_20 == 0 || (local_20 == 8)))) {
        *(uint *)&this_ptr->field_0x1ff5c = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00434610
                ((CCharacter *)this_ptr,local_1c);
    }
    local_38 = local_38 + 1;
    if (1 < local_38) {
      return;
    }
  } while( true );
}
