// Name: unkafter_stranger.cpp_FUN_0045bdc0
// Address: 0045bdc0
// Address Range: [[0045bdc0, 0045c958]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_0045bdc0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_stranger_cpp_FUN_0045bdc0(CCharacter *param_1,float param_2)

{
  float fVar1;
  CMotionList *pCVar2;
  CLightGun *pCVar3;
  CDynamite *this_ptr;
  int iVar4;
  int iVar5;
  byte bVar6;
  CVector3f *apCStackY_1060 [1013];
  uint local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_54;
  CVector3f *local_40;
  int local_3c;
  int local_38;
  int local_34;
  CMotionController *local_30;
  int local_2c;
  int local_28;
  CInventory *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar6 = 0;
  if ((*(int *)&param_1->field_0x2d04 == 9) && (*(int *)&param_1->field_0x2698 == 0)) {
    *(uint *)&param_1->field_0x2d08 = 0;
    *(uint *)&param_1->field_0x2d04 = 0;
  }
  local_3c = -1;
  local_1c = 0;
  if (*(int *)&param_1[2].field_0x4158 != 0) {
    *(uint *)&param_1[2].field_0x4180 = 0;
    goto LAB_0045be11;
  }
  if (*(int *)&param_1[2].field_0x4180 == 0) goto LAB_0045be11;
  if (*(int *)&param_1->field_0x2698 == 0) {
    local_1c = *(int *)(&param_1[2].field_0x34cc + *(int *)&param_1[2].field_0x3324 * 4);
    iVar5 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c8f0(local_1c,g_CMeleeClassInfo.name_hash);
    if (iVar5 != 0) {
      local_3c = 6;
    }
LAB_0045c19d:
    if (local_1c != 0) goto LAB_0045be11;
  }
  else {
    iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                      (*(int *)&param_1->field_0x2698,g_CLanternClassInfo.name_hash);
    if (iVar5 != 0) {
      local_1c = *(int *)(&param_1[2].field_0x34cc + *(int *)&param_1[2].field_0x3324 * 4);
      goto LAB_0045c19d;
    }
    local_1c = 0;
  }
  if (local_3c < 0) {
    *(uint *)&param_1[2].field_0x4180 = 0;
  }
LAB_0045be11:
  local_24 = (CInventory *)&param_1[2].field_0x2ebc;
  local_30 = (CMotionController *)&param_1->field_0x2b4;
  local_40 = (CVector3f *)&param_1->field_0x20;
  local_34 = 0;
  do {
    if (param_2 <= 0.0) {
      return;
    }
    iVar5 = *(int *)&param_1[2].field_0x41e4;
    if (iVar5 == 1) {
      local_14 = (float)core_motion_cpp_FUN_005038a0(local_30,0x13);
      if ((float)_DAT_005d065f <= local_14) {
        local_18 = 0;
        iVar5 = local_18;
      }
      else {
LAB_0045be77:
        local_18 = 5;
        iVar5 = local_18;
      }
    }
    else if (*(int *)&param_1[2].field_0x415c == 0) {
      if (iVar5 == 2) {
        local_18 = 6;
        iVar5 = local_18;
      }
      else if (iVar5 == 3) {
        local_18 = 4;
        local_14 = (float)core_charactr_cpp_FUN_0042a5a0(param_1,4);
        iVar5 = local_18;
        if ((float)_DAT_005d0657 < local_14) {
          fVar1 = param_2 * (float)_DAT_005d064f + *(float *)&param_1[2].field_0x4190;
          *(float *)&param_1[2].field_0x4190 = fVar1;
          if (0x428C0000 < fVar1) {
            *(float *)&param_1[2].field_0x4190 = 0x428C0000;
          }
          if (*(int *)&param_1[1].field_0x14 != 0) {
            return;
          }
          iVar5 = 0;
        }
      }
      else {
        pCVar3 = core_inv_cpp_FUN_004dccb0(local_24);
        if ((pCVar3 == (CLightGun *)0x0) || (*(int *)&param_1[2].field_0x4128 != 0)) {
          pCVar3 = core_inv_cpp_FUN_004dccb0(local_24);
          if ((pCVar3 == (CLightGun *)0x0) || (*(int *)&param_1[2].field_0x4128 != 1)) {
            pCVar3 = core_inv_cpp_FUN_004dccb0(local_24);
            if ((pCVar3 == (CLightGun *)0x0) && (*(int *)&param_1[2].field_0x4128 == 2)) {
              local_18 = 8;
              iVar5 = local_18;
            }
            else {
              pCVar3 = core_inv_cpp_FUN_004dccb0(local_24);
              if ((pCVar3 == (CLightGun *)0x0) && (*(int *)&param_1[2].field_0x4128 == 1)) {
                local_18 = 3;
                iVar5 = local_18;
              }
              else if (local_3c < 0) {
                iVar5 = *(int *)&param_1[2].field_0x41d8;
                if (iVar5 == local_1c) {
                  if (*(int *)&param_1[2].field_0x41d8 == 0) {
switchD_0045c465_caseD_3:
                    iVar5 = 0;
                  }
                  else {
                    switch(*(uint *)(*(int *)&param_1[2].field_0x41d8 + 0x43c)) {
                    case 0:
                    case 5:
                      iVar5 = 2;
                      break;
                    case 1:
                      iVar5 = 0xb;
                      break;
                    case 2:
                      iVar5 = 9;
                      break;
                    default:
                      goto switchD_0045c465_caseD_3;
                    case 4:
                      iVar5 = 10;
                      break;
                    case 6:
                    case 7:
                    case 8:
                    case 0xd:
                      iVar5 = 6;
                      break;
                    case 10:
                    case 0xb:
                      iVar5 = 0xe;
                    }
                  }
                }
                else if (iVar5 == 0) {
                  iVar5 = 0;
                  if (local_1c != 0) {
                    switch(*(uint *)(local_1c + 0x43c)) {
                    case 0:
                    case 5:
                    case 0xc:
                      iVar5 = 1;
                      break;
                    default:
                      iVar5 = 3;
                      break;
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 0xd:
                      iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                        (local_1c,g_CMeleeClassInfo.name_hash);
                      if ((iVar5 == 0) || (*(int *)(iVar5 + 0x6e4) == 0)) {
                        iVar5 = 0;
                      }
                      else {
                        iVar5 = 5;
                      }
                    }
                  }
                }
                else {
                  switch(*(uint *)(iVar5 + 0x43c)) {
                  case 0:
                  case 5:
                  case 0xc:
                    iVar5 = 1;
                    break;
                  default:
                    iVar5 = 3;
                    break;
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 0xd:
                    iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                      (iVar5,g_CMeleeClassInfo.name_hash);
                    if ((iVar5 == 0) || (*(int *)(iVar5 + 0x6e4) == 0)) {
                      iVar5 = 0;
                    }
                    else {
                      iVar5 = 5;
                    }
                  }
                }
              }
              else {
                iVar4 = *(int *)&param_1[2].field_0x41d8;
                if (iVar4 == 0) {
                  iVar5 = local_18;
                  if (((local_1c != 0) && (*(int *)&param_1[2].field_0x4180 != 0)) &&
                     (iVar5 = 0, local_1c != 0)) {
                    switch(*(uint *)(local_1c + 0x43c)) {
                    case 0:
                    case 5:
                    case 0xc:
                      iVar5 = 1;
                      break;
                    default:
                      iVar5 = 3;
                      break;
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 0xd:
                      iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                        (local_1c,g_CMeleeClassInfo.name_hash);
                      if ((iVar5 == 0) || (*(int *)(iVar5 + 0x6e4) == 0)) {
                        iVar5 = 0;
                      }
                      else {
                        iVar5 = 5;
                      }
                    }
                  }
                }
                else if (iVar4 == local_1c) {
                  local_18 = local_3c;
                  iVar5 = local_18;
                }
                else {
                  iVar5 = 0;
                  if (iVar4 != 0) {
                    switch(*(uint *)(iVar4 + 0x43c)) {
                    case 0:
                    case 5:
                    case 0xc:
                      iVar5 = 1;
                      break;
                    default:
                      iVar5 = 3;
                      break;
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 0xd:
                      iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                        (iVar4,g_CMeleeClassInfo.name_hash);
                      if ((iVar5 == 0) || (*(int *)(iVar5 + 0x6e4) == 0)) {
                        iVar5 = 0;
                      }
                      else {
                        iVar5 = 5;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            local_18 = 8;
            iVar5 = local_18;
          }
        }
        else {
          local_18 = 3;
          iVar5 = local_18;
        }
      }
    }
    else if (*(int *)&param_1->field_0x2698 == 0) {
      if (*(int *)&param_1[2].field_0x4180 == 0) goto LAB_0045be77;
      local_18 = 6;
      iVar5 = local_18;
    }
    else {
      local_18 = 0;
      iVar5 = local_18;
    }
    local_18 = iVar5;
    local_28 = *(int *)&param_1->field_0x2d08;
    local_20 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a0c0
                         (param_1,&param_2,local_18);
    iVar5 = *(int *)(&param_1->field_0x2860 + *(int *)&param_1->field_0x2d04 * 0x38) * 0x118;
    pCVar2 = core_motion_cpp_FUN_00503860(local_30);
    switch(*(uint *)&param_1->field_0x2d04) {
    case 4:
    case 5:
    case 6:
      if (((local_28 < 0x3e99999a) && (0x3e999999 < *(int *)&param_1->field_0x2d08)) &&
         (iVar5 = *(int *)&param_1[2].field_0x41d8, iVar5 != 0)) {
        (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x80))(iVar5,2);
      }
      if (((local_28 < 0x3ecccccd) && (0x3ecccccc < *(int *)&param_1->field_0x2d08)) &&
         (iVar5 = *(int *)&param_1[2].field_0x41d8, iVar5 != 0)) {
        (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x80))(iVar5,2);
      }
      if (((local_28 < 0x3f000000) && (0x3effffff < *(int *)&param_1->field_0x2d08)) &&
         (iVar5 = *(int *)&param_1[2].field_0x41d8, iVar5 != 0)) {
        (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x80))(iVar5,2);
      }
      break;
    case 7:
      if (((local_28 < 0x3f333333) && (0x3f333332 < *(int *)&param_1->field_0x2d08)) &&
         (iVar5 = *(int *)&param_1[2].field_0x41d8, iVar5 != 0)) {
        (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x80))(iVar5,2);
      }
      if ((local_28 < 0x3e99999a) && (0x3e999999 < *(int *)&param_1->field_0x2d08)) {
        core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                  (0x0264B290,(CDemonActor *)param_1,"axeswing0?.wav",local_40);
      }
      break;
    case 8:
      if (((local_28 < 0x3e99999a) && (0x3e999999 < *(int *)&param_1->field_0x2d08)) &&
         (iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)&param_1[2].field_0x41d8,g_CCrossClassInfo.name_hash),
         iVar5 != 0)) {
        unkafter_cross_cpp_FUN_005a6cf0(iVar5);
      }
      break;
    case 0xc:
      this_ptr = (CDynamite *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (*(uint *)&param_1[2].field_0x41d8,g_CDynamiteClassInfo.name_hash);
      if (((this_ptr != (CDynamite *)0x0) &&
          (iVar4 = core_dynamite_cpp_FUN_0047a1a0(this_ptr), iVar4 == 0)) &&
         (local_14 = (float)(0xb / (longlong)*(int *)(pCVar2 + iVar5 + 0x1c8c)),
         (float)(int)local_14 <= *(float *)&param_1->field_0x2d08)) {
        core_dynamite_cpp_FUN_0047a150(this_ptr);
      }
      break;
    case 0xd:
      if ((*(int *)&param_1[2].field_0x41e4 == 3) &&
         (local_14 = (float)(0xb / (longlong)*(int *)(pCVar2 + iVar5 + 0x1c8c)),
         (float)(int)local_14 <= *(float *)&param_1->field_0x2d08)) {
        unkafter_stranger_cpp_FUN_0045bba0(param_1);
        local_60 = local_78;
        *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff8c + (uint)bVar6 * -8);
        *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        local_38 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(uint *)&param_1[2].field_0x41d8,g_CDynamiteClassInfo.name_hash
                             );
        local_2c = local_38;
        if (local_38 != 0) {
          core_actor_cpp_FUN_00408cf0(param_1,&stack0xffffffa0);
          local_6c = local_54;
          *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffffb0 + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          if ((uint *)(local_2c + 0x6d8) != &stack0xffffff94) {
            *(uint *)(local_2c + 0x6d8) = local_6c;
            *(uint *)(local_2c + 0x6dc) = local_68;
            *(uint *)(local_2c + 0x6e0) = local_64;
          }
          (**(code **)(*(int *)(local_38 + 0x2b0) + 0xec))(local_38);
          *(uint *)&param_1[2].field_0x41d8 = 0;
        }
        if (*(int *)&param_1->field_0x2698 != 0) {
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,1,&stack0xffffffa0);
        }
        *(uint *)&param_1[2].field_0x41e4 = 0;
        *(uint *)&param_1[2].field_0x4190 = 0x41200000;
      }
      if (1.0 <= *(float *)&param_1->field_0x2d08) {
        *(uint *)&param_1->field_0x2d04 = 0;
        *(uint *)&param_1->field_0x2d08 = 0;
      }
    }
    if (-1 < local_20) {
      iVar5 = *(int *)&param_1[2].field_0x41d8;
      if (iVar5 != local_1c) {
        if (iVar5 != 0) {
          switch(*(uint *)(iVar5 + 0x43c)) {
          case 0:
          case 5:
          case 0xc:
            iVar5 = 1;
            break;
          default:
            iVar5 = 3;
            break;
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xd:
            iVar5 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c8f0(iVar5,g_CMeleeClassInfo.name_hash);
            if ((iVar5 == 0) || (*(int *)(iVar5 + 0x6e4) == 0)) {
              iVar5 = 0;
            }
            else {
              iVar5 = 5;
            }
          }
          if (iVar5 == local_20) {
            (**(code **)(*(int *)(*(int *)&param_1[2].field_0x41d8 + 0x2b0) + 0xe4))
                      (*(int *)&param_1[2].field_0x41d8,1);
            *(uint *)&param_1[2].field_0x41d8 = 0;
          }
        }
        if (*(int *)&param_1[2].field_0x4180 != 0) {
          if (local_1c == 0) {
LAB_0045bfdc:
            iVar5 = 0;
          }
          else {
            switch(*(uint *)(local_1c + 0x43c)) {
            case 0:
            case 5:
            case 0xc:
              iVar5 = 1;
              break;
            default:
              iVar5 = 3;
              break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xd:
              iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (local_1c,g_CMeleeClassInfo.name_hash);
              if ((iVar5 == 0) || (*(int *)(iVar5 + 0x6e4) == 0)) goto LAB_0045bfdc;
              iVar5 = 5;
            }
          }
          if ((iVar5 == local_20) && (*(int *)&param_1[2].field_0x41d8 = local_1c, local_1c != 0)) {
            (**(code **)(*(int *)(local_1c + 0x2b0) + 0xe4))(local_1c,2);
          }
        }
      }
      if ((*(int *)&param_1[2].field_0x41e4 == 1) && (local_20 == 5)) {
        core_hero_cpp_FUN_004cff90(param_1,1);
        *(uint *)&param_1[2].field_0x41e4 = 0;
      }
      iVar5 = *(int *)&param_1[2].field_0x415c;
      if (iVar5 != 0) {
        if (local_20 != 0) {
          if (local_20 == 5) {
            core_inv_cpp_FUN_004db8e0(local_24,iVar5,0);
            core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                      (0x01D182F0,*(CDemonActor **)&param_1[2].field_0x415c);
            core_charactr_cpp_FUN_00428b10(param_1,1,*(uint *)&param_1[2].field_0x415c,0,0);
          }
          else if (local_20 == 6) {
            core_inv_cpp_FUN_004db8e0(local_24,iVar5,0);
            core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                      (0x01D182F0,*(CDemonActor **)&param_1[2].field_0x415c);
            core_charactr_cpp_FUN_00428b10(param_1,1,*(uint *)&param_1[2].field_0x415c,0,0);
            *(uint *)&param_1[2].field_0x41d8 = 0;
            *(uint *)&param_1[2].field_0x4180 = 0;
            *(uint *)&param_1->field_0x2d04 = 2;
            *(uint *)&param_1->field_0x2d08 = 0;
          }
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_30,0x14,1);
        *(uint *)&param_1[2].field_0x41e4 = 6;
        *(uint *)&param_1[2].field_0x415c = 0;
      }
      if (local_20 == 8) {
        pCVar3 = core_inv_cpp_FUN_004dccb0(local_24);
        if (pCVar3 == (CLightGun *)0x0) {
LAB_0045c087:
          *(uint *)&param_1[2].field_0x4128 = 1;
        }
        else {
          *(uint *)&param_1[2].field_0x4128 = 2;
        }
      }
      else if ((local_20 == 3) && (*(int *)&param_1[2].field_0x4128 < 2)) {
        pCVar3 = core_inv_cpp_FUN_004dccb0(local_24);
        if (pCVar3 != (CLightGun *)0x0) goto LAB_0045c087;
        *(uint *)&param_1[2].field_0x4128 = 0;
      }
      if ((*(int *)&param_1[2].field_0x41e4 == 7) && (local_20 == 6)) {
        *(uint *)&param_1[2].field_0x41e4 = 0;
      }
      if ((((3 < *(int *)&param_1->field_0x2d04) && (*(int *)&param_1->field_0x2d04 < 9)) &&
          (*(int *)&param_1[2].field_0x41e4 == 0)) && (*(int *)&param_1->field_0x2d08 == 0x3f800000)
         ) {
        *(uint *)&param_1->field_0x2d04 = 3;
        *(uint *)&param_1->field_0x2d08 = 0x3f800000;
      }
      if (((*(int *)&param_1->field_0x2d04 == 0) &&
          ((*(uint *)&param_1->field_0x2d08 & 0x7fffffff) == 0)) &&
         (*(int *)&param_1[2].field_0x4180 == 0)) {
        *(uint *)&param_1->field_0x2d04 = 2;
        *(uint *)&param_1->field_0x2d08 = 0;
      }
      if ((*(int *)&param_1->field_0x2d04 == 0xf) && (*(int *)&param_1->field_0x2d08 == 0x3f800000))
      {
        *(uint *)&param_1->field_0x2d04 = 1;
        *(uint *)&param_1->field_0x2d08 = 0x3f800000;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042a620(param_1,local_18);
    }
    local_34 = local_34 + 1;
    if (1 < local_34) {
      return;
    }
  } while( true );
}
