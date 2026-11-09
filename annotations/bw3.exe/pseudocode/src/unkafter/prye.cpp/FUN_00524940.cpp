// Name: unkafter_prye.cpp_FUN_00524940
// Address: 00524940
// Address Range: [[00524940, 0052592d]]
// Convention: unknown
// Signature: void unkafter_prye_cpp_FUN_00524940(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_prye_cpp_FUN_00524940(CCharacter *param_1,float param_2)

{
  float fVar1;
  CMotionList *pCVar2;
  CDynamite *this_ptr;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *puVar6;
  byte bVar7;
  CInventory *apCStackY_1098 [1013];
  uint uVar8;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint uStack_98;
  uint local_8c;
  uint local_80;
  uint local_74;
  uint local_68;
  CInventory *local_5c;
  byte *local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int iStack_40;
  int local_3c;
  CMotionController *local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  int iStack_18;
  float local_14;
  
  bVar7 = 0;
  if ((*(int *)&param_1->field_0x2f00 == 0x11) && (*(int *)&param_1->field_0x2628 == 0)) {
    *(uint *)&param_1->field_0x2f04 = 0;
    *(uint *)&param_1->field_0x2f00 = 0;
  }
  local_44 = -1;
  local_28 = 0;
  if (*(int *)&param_1[2].field_0x7010 == 0) {
    if (*(int *)&param_1[2].field_0x7034 == 0) goto LAB_00524997;
    if (*(int *)&param_1->field_0x2628 == 0) {
      local_28 = *(int *)&param_1[2].field_0x6e88;
      if ((*(int *)&param_1->field_0x25b0 != 0) && (*(int *)(local_28 + 0x578) == 2)) {
        local_28 = *(int *)&param_1[2].field_0x708c;
      }
    }
    else {
      local_28 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(int *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash);
      if ((local_28 == 0) &&
         (uVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x2628 + 0x154) + 0x74))
                            (*(int *)&param_1->field_0x2628), (uVar4 & 0xb) != 0)) {
        local_44 = 8;
      }
    }
    if ((local_28 != 0) || (-1 < local_44)) goto LAB_00524997;
  }
  *(int *)&param_1[2].field_0x7034 = local_28;
LAB_00524997:
  puVar6 = &param_1[2].field_0x6b50;
  core_inv_cpp_FUN_004dcda0(puVar6);
  core_inv_cpp_FUN_004dcda0(puVar6);
  local_3c = 0;
  local_38 = (CMotionController *)&param_1->field_0x158;
  local_5c = (CInventory *)puVar6;
  local_58 = puVar6;
  local_1c = puVar6;
  do {
    iVar5 = local_28;
    if (param_2 <= 0.0) {
      return;
    }
    iVar3 = *(int *)&param_1[2].field_0x6fcc;
    if ((((iVar3 == 1) || (iVar3 == 8)) || (iVar3 == 9)) || (*(int *)&param_1[2].field_0x7014 != 0))
    {
      local_20 = 3;
      iVar3 = local_20;
    }
    else if (iVar3 == 2) {
      iVar3 = 0;
    }
    else if (iVar3 == 3) {
      local_14 = (float)core_charactr_cpp_FUN_00433a60(param_1,6);
      local_20 = 6;
      iVar3 = local_20;
      if ((float)_DAT_005cd7d7 < local_14) {
        fVar1 = _DAT_005e350c * param_2 + *(float *)&param_1[2].field_0x7044;
        *(float *)&param_1[2].field_0x7044 = fVar1;
        if (0x41A00000 < fVar1) {
          *(float *)&param_1[2].field_0x7044 = 0x41A00000;
        }
        if (*(int *)&param_1[1].field_0x14 != 0) {
          return;
        }
        iVar3 = 0;
      }
    }
    else if (local_44 < 0) {
      iVar3 = *(int *)&param_1[2].field_0x708c;
      if (iVar3 == local_28) {
        if (*(int *)&param_1[2].field_0x708c == 0) {
switchD_00524e67_caseD_3:
          local_20 = 0;
          iVar3 = local_20;
        }
        else {
          switch(*(uint *)(*(int *)&param_1[2].field_0x708c + 0x2e0)) {
          case 0:
          case 5:
            iVar3 = 2;
            break;
          case 1:
            iVar3 = 4;
            break;
          case 2:
            iVar3 = 5;
            break;
          default:
            goto switchD_00524e67_caseD_3;
          case 4:
            iVar3 = 7;
            break;
          case 7:
          case 0xc:
            iVar3 = 8;
            break;
          case 9:
          case 10:
            iVar3 = 0xe;
            break;
          case 0xd:
            iVar3 = 0x11;
            break;
          case 0xe:
            iVar3 = 0x12;
          }
        }
      }
      else if (iVar3 == 0) {
        iVar3 = 0;
        if (local_28 != 0) {
          switch(*(uint *)(local_28 + 0x2e0)) {
          case 0:
          case 5:
            iVar3 = 1;
            break;
          default:
switchD_00524f26_caseD_1:
            iVar3 = 3;
            break;
          case 7:
          case 8:
            iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (local_28,g_CMeleeClassInfo.name_hash);
            if ((iVar3 == 0) || (*(int *)(iVar3 + 0x5a4) == 0)) {
              iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (iVar5,g_CHolycrossClassInfo.name_hash);
              iVar3 = 0;
              if (iVar5 != 0) goto switchD_00524f26_caseD_1;
            }
            else {
              iVar3 = 3;
            }
          }
        }
      }
      else {
        switch(*(uint *)(iVar3 + 0x2e0)) {
        case 0:
        case 5:
          iVar3 = 1;
          break;
        default:
switchD_00524f8d_caseD_1:
          iVar3 = 3;
          break;
        case 7:
        case 8:
          iVar5 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(iVar3,g_CMeleeClassInfo.name_hash);
          if ((iVar5 == 0) || (*(int *)(iVar5 + 0x5a4) == 0)) {
            iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (iVar3,g_CHolycrossClassInfo.name_hash);
            iVar3 = 0;
            if (iVar5 != 0) goto switchD_00524f8d_caseD_1;
          }
          else {
            iVar3 = 3;
          }
        }
      }
    }
    else {
      local_20 = local_44;
      iVar3 = local_20;
    }
    local_20 = iVar3;
    local_2c = *(int *)&param_1->field_0x2f04;
    local_24 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_00433580
                         (param_1,&param_2,local_20);
    iVar5 = *(int *)(&param_1->field_0x27f4 + *(int *)&param_1->field_0x2f00 * 0x38) * 0x120;
    pCVar2 = core_motion_cpp_FUN_004fc310(local_38);
    uVar4 = *(uint *)&param_1->field_0x2f00;
    if (uVar4 < 0x10) {
      if (uVar4 < 0xc) {
        if (uVar4 < 7) {
          if (((uVar4 == 6) &&
              (this_ptr = (CDynamite *)
                          core_actor_cpp_castToClassHash_FUN_0040c840
                                    (*(uint *)&param_1[2].field_0x708c,
                                     g_CDynamiteClassInfo.name_hash), this_ptr != (CDynamite *)0x0))
             && ((iVar3 = core_dynamite_cpp_FUN_0047b230(this_ptr), iVar3 == 0 &&
                 (local_14 = (float)(0xb / (longlong)*(int *)(pCVar2 + iVar5 + 0x1c8c)),
                 (float)(int)local_14 <= *(float *)&param_1->field_0x2f04)))) {
            core_dynamite_cpp_FUN_0047b1e0(this_ptr);
          }
        }
        else if (uVar4 < 8) {
          if ((*(int *)&param_1[2].field_0x6fcc == 3) &&
             (local_14 = (float)(0xb / (longlong)*(int *)(pCVar2 + iVar5 + 0x1c8c)),
             (float)(int)local_14 <= *(float *)&param_1->field_0x2f04)) {
            unkafter_prye_cpp_FUN_00524800(param_1);
            local_80 = local_8c;
            *(uint *)(&stack0xffffff84 + (uint)bVar7 * -8) =
                 *(uint *)(&stack0xffffff78 + (uint)bVar7 * -8);
            *(uint *)(&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                 *(uint *)(&stack0xffffff7c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            local_74 = local_80;
            *(uint *)((int)&stack0xffffff90 + (uint)bVar7 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xffffff84 + (uint)bVar7 * -8);
            *(uint *)(&stack0xffffff94 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                 *(uint *)(&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            local_30 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (*(uint *)&param_1[2].field_0x708c,
                                  g_CBindEvilClassInfo.name_hash);
            if (local_30 != 0) {
              core_actor_cpp_FUN_00408b00(param_1,&stack0xffffff8c);
              local_a4 = local_68;
              *(uint *)((int)&stack0xffffff60 + (uint)bVar7 * -8) =
                   *(uint *)(&stack0xffffff9c + (uint)bVar7 * -8);
              *(uint *)((int)&stack0xffffff64 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                   *(uint *)(&stack0xffffffa0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
              if ((uint *)(local_30 + 0x594) != &stack0xffffff5c) {
                *(uint *)(local_30 + 0x594) = local_a4;
                *(uint *)(local_30 + 0x598) = local_a0;
                *(uint *)(local_30 + 0x59c) = local_9c;
              }
              (**(code **)(*(int *)(local_30 + 0x154) + 0xe4))(local_30);
            }
            iStack_40 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (*(uint *)&param_1[2].field_0x708c,
                                   g_CDiseaseClassInfo.name_hash);
            iStack_34 = iStack_40;
            if (iStack_40 != 0) {
              core_actor_cpp_FUN_00408b00(param_1,&stack0xffffff8c);
              uStack_b0 = uStack_98;
              *(uint *)((int)&stack0xffffff54 + (uint)bVar7 * -8) =
                   *(uint *)(&stack0xffffff6c + (uint)bVar7 * -8);
              *(uint *)((int)&stack0xffffff58 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                   *(uint *)(&stack0xffffff70 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
              if ((uint *)(iStack_34 + 0x598) != &stack0xffffff50) {
                *(uint *)(iStack_34 + 0x598) = uStack_b0;
                *(uint *)(iStack_34 + 0x59c) = uStack_ac;
                *(uint *)(iStack_34 + 0x5a0) = uStack_a8;
              }
              (**(code **)(*(int *)(iStack_40 + 0x154) + 0xe4))(iStack_40);
            }
            if (*(int *)&param_1->field_0x2628 != 0) {
              (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1,&stack0xffffff8c);
            }
            *(uint *)&param_1[2].field_0x6fcc = 0;
            *(uint *)&param_1[2].field_0x7044 = 0x41200000;
          }
          if (1.0 <= *(float *)&param_1->field_0x2f04) {
            *(uint *)&param_1->field_0x2f00 = 0;
            *(uint *)&param_1->field_0x2f04 = 0;
          }
        }
        else if ((((uVar4 == 8) && (local_4c = 0x3f19999a, local_2c < 0x3f19999a)) &&
                 (0.6 <= *(float *)&param_1->field_0x2f04)) &&
                (iVar5 = core_actor_cpp_FUN_0040c790
                                   (*(CDemonActor **)&param_1[2].field_0x708c,"CShotgun"),
                iVar5 != 0)) {
          (**(code **)(*(int *)(*(int *)&param_1[2].field_0x708c + 0x154) + 0xd8))
                    (*(int *)&param_1[2].field_0x708c);
        }
      }
      else if (uVar4 < 0xd) {
        local_48 = 0x3ebd70a4;
        if (((local_2c < 0x3ebd70a4) && (0.37 <= *(float *)&param_1->field_0x2f04)) &&
           ((*(int *)&param_1[2].field_0x708c != 0 &&
            (iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (*(int *)&param_1[2].field_0x708c,g_CWeaponClassInfo.name_hash),
            iVar5 != 0)))) {
          if (*(int *)(iVar5 + 0x56c) == 9) {
            (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,8);
          }
          else {
            (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,1);
          }
        }
      }
      else {
        if (((*(int *)&param_1[2].field_0x6fcc == 7) &&
            ((float)_DAT_005cd7e7 <= *(float *)&param_1->field_0x2f04)) &&
           ((iVar5 = *(int *)&param_1[2].field_0x708c, iVar5 != 0 &&
            (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,2), iVar5 != 0)))) {
          *(uint *)&param_1[2].field_0x6fcc = 0;
        }
        if ((float)_DAT_005cd7d7 < *(float *)&param_1->field_0x2f04) {
          *(uint *)&param_1->field_0x2f04 = 0x3f800000;
          *(uint *)&param_1[2].field_0x6fcc = 0;
          *(uint *)&param_1->field_0x2f00 = 0xb;
        }
      }
    }
    else if (uVar4 < 0x11) {
      local_50 = 0x3f28f5c3;
      if ((local_2c < 0x3f28f5c3) && (0.66 <= *(float *)&param_1->field_0x2f04)) {
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&param_1[2].field_0x708c,g_CWeaponClassInfo.name_hash);
        if (iVar5 != 0) {
          if (*(int *)(iVar5 + 0x56c) == 9) {
            uVar8 = 8;
          }
          else {
            uVar8 = 1;
          }
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,uVar8);
        }
        iVar5 = *(int *)&param_1[2].field_0x708c;
        if (iVar5 != 0) {
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,2);
        }
      }
    }
    else if (uVar4 < 0x1b) {
      if (uVar4 < 0x19) {
        if ((((uVar4 == 0x15) && (local_54 = 0x3f4ccccd, local_2c < 0x3f4ccccd)) &&
            (0.8 <= *(float *)&param_1->field_0x2f04)) &&
           (iVar5 = core_actor_cpp_FUN_0040c790
                              (*(CDemonActor **)&param_1[2].field_0x708c,"CRifle"),
           iVar5 != 0)) {
          (**(code **)(*(int *)(*(int *)&param_1[2].field_0x708c + 0x154) + 0xd8))
                    (*(int *)&param_1[2].field_0x708c);
        }
      }
      else if (uVar4 < 0x1a) {
        if ((float)_DAT_005cd7d7 < *(float *)&param_1->field_0x2f04) {
          *(uint *)&param_1->field_0x2f04 = 0x3f800000;
          *(uint *)&param_1->field_0x2f00 = 0x1a;
        }
      }
      else if (*(float *)&param_1->field_0x2f04 < (float)_DAT_005cd7ef) {
        *(uint *)&param_1->field_0x2f04 = 0x3f800000;
        *(uint *)&param_1->field_0x2f00 = 1;
      }
    }
    else if (uVar4 < 0x1c) {
      if ((*(int *)&param_1[2].field_0x6fcc == 0xb) &&
         ((float)_DAT_005cd7e7 < *(float *)&param_1->field_0x2f04)) {
        iVar5 = *(int *)&param_1[2].field_0x708c;
        if ((iVar5 != 0) &&
           (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe8))(iVar5), iVar5 != 0)) {
          (**(code **)(*(int *)(*(int *)&param_1[2].field_0x708c + 0x154) + 0xe4))
                    (*(int *)&param_1[2].field_0x708c);
        }
        *(uint *)&param_1[2].field_0x6fcc = 0;
      }
      if ((float)_DAT_005cd7d7 < *(float *)&param_1->field_0x2f04) {
        *(uint *)&param_1->field_0x2f04 = 0x3f800000;
        *(uint *)&param_1[2].field_0x6fcc = 0;
        *(uint *)&param_1->field_0x2f00 = 0xb;
      }
    }
    else if (uVar4 < 0x1f) {
      if (uVar4 == 0x1c) {
        if ((*(int *)&param_1[2].field_0x6fcc == 10) &&
           ((float)_DAT_005cd7e7 < *(float *)&param_1->field_0x2f04)) {
          iVar5 = *(int *)&param_1[2].field_0x708c;
          if ((iVar5 != 0) &&
             (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe8))(iVar5), iVar5 != 0)) {
            (**(code **)(*(int *)(*(int *)&param_1[2].field_0x708c + 0x154) + 0xe4))
                      (*(int *)&param_1[2].field_0x708c);
          }
          *(uint *)&param_1[2].field_0x6fcc = 0;
        }
        if ((float)_DAT_005cd7d7 < *(float *)&param_1->field_0x2f04) {
          *(uint *)&param_1->field_0x2f04 = 0x3f800000;
          *(uint *)&param_1[2].field_0x6fcc = 0;
          *(uint *)&param_1->field_0x2f00 = 0xb;
        }
      }
    }
    else if (uVar4 < 0x20) {
      if ((*(int *)&param_1[2].field_0x6fcc == 0xc) &&
         ((float)_DAT_005cd7e7 < *(float *)&param_1->field_0x2f04)) {
        iVar5 = *(int *)&param_1[2].field_0x708c;
        if ((iVar5 != 0) &&
           (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe8))(iVar5), iVar5 != 0)) {
          (**(code **)(*(int *)(*(int *)&param_1[2].field_0x708c + 0x154) + 0xe4))
                    (*(int *)&param_1[2].field_0x708c);
        }
        *(uint *)&param_1[2].field_0x6fcc = 0;
      }
      if ((float)_DAT_005cd7d7 < *(float *)&param_1->field_0x2f04) {
        *(uint *)&param_1->field_0x2f04 = 0x3f800000;
        *(uint *)&param_1[2].field_0x6fcc = 0;
        *(uint *)&param_1->field_0x2f00 = 0x1d;
      }
    }
    else if (uVar4 == 0x20) {
      if ((*(int *)&param_1[2].field_0x6fcc == 0xd) &&
         ((float)_DAT_005cd7df < *(float *)&param_1->field_0x2f04)) {
        iVar5 = *(int *)&param_1[2].field_0x708c;
        if ((iVar5 != 0) &&
           (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe8))(iVar5), iVar5 != 0)) {
          (**(code **)(*(int *)(*(int *)&param_1[2].field_0x708c + 0x154) + 0xe4))
                    (*(int *)&param_1[2].field_0x708c);
        }
        *(uint *)&param_1[2].field_0x6fcc = 0;
      }
      if ((float)_DAT_005cd7d7 < *(float *)&param_1->field_0x2f04) {
        *(uint *)&param_1->field_0x2f04 = 0x3f800000;
        *(uint *)&param_1[2].field_0x6fcc = 0;
        *(uint *)&param_1->field_0x2f00 = 0x1e;
      }
    }
    if (-1 < local_24) {
      iVar5 = *(int *)&param_1[2].field_0x708c;
      if (iVar5 != local_28) {
        if (iVar5 != 0) {
          switch(*(uint *)(iVar5 + 0x2e0)) {
          case 0:
          case 5:
            iVar5 = 1;
            break;
          default:
switchD_00525735_caseD_1:
            iVar5 = 3;
            break;
          case 7:
          case 8:
            iVar3 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(iVar5,g_CMeleeClassInfo.name_hash);
            if ((iVar3 == 0) || (*(int *)(iVar3 + 0x5a4) == 0)) {
              iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (iVar5,g_CHolycrossClassInfo.name_hash);
              iVar5 = 0;
              if (iVar3 != 0) goto switchD_00525735_caseD_1;
            }
            else {
              iVar5 = 3;
            }
          }
          if (iVar5 == local_24) {
            (**(code **)(*(int *)(*(int *)&param_1[2].field_0x708c + 0x154) + 0xdc))
                      (*(int *)&param_1[2].field_0x708c,1);
            iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(uint *)&param_1[2].field_0x708c,g_CSpsClassInfo.name_hash);
            if (iVar5 != 0) {
              core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS")
              ;
            }
            *(uint *)&param_1[2].field_0x708c = 0;
          }
        }
        iVar5 = local_28;
        if (*(int *)&param_1[2].field_0x7034 != 0) {
          if (local_28 == 0) {
            iVar5 = 0;
          }
          else {
            switch(*(uint *)(local_28 + 0x2e0)) {
            case 0:
            case 5:
              iVar5 = 1;
              break;
            default:
switchD_00525799_caseD_1:
              iVar5 = 3;
              break;
            case 7:
            case 8:
              iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (local_28,g_CMeleeClassInfo.name_hash);
              if ((iVar3 == 0) || (*(int *)(iVar3 + 0x5a4) == 0)) {
                iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (iVar5,g_CHolycrossClassInfo.name_hash);
                iVar5 = 0;
                if (iVar3 != 0) goto switchD_00525799_caseD_1;
              }
              else {
                iVar5 = 3;
              }
            }
          }
          if (iVar5 == local_24) {
            iVar5 = *(int *)&param_1[2].field_0x708c;
            if (iVar5 != 0) {
              (**(code **)(*(int *)(iVar5 + 0x154) + 0xdc))(iVar5,1);
            }
            uVar4 = g_CSpsClassInfo.name_hash;
            *(int *)&param_1[2].field_0x708c = local_28;
            iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840(local_28,uVar4);
            if (iVar5 != 0) {
              core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS")
              ;
            }
            iVar5 = *(int *)&param_1[2].field_0x708c;
            if (iVar5 != 0) {
              (**(code **)(*(int *)(iVar5 + 0x154) + 0xdc))(iVar5,2);
            }
          }
        }
      }
      if ((*(int *)&param_1[2].field_0x6fcc == 1) && (local_24 == 3)) {
        core_hero_cpp_FUN_004d41a0((CHero *)param_1,1);
LAB_00524bde:
        *(uint *)&param_1[2].field_0x6fcc = 0;
      }
      else {
        if ((*(int *)&param_1[2].field_0x6fcc == 8) && (local_24 == 3)) {
          if (((*(int *)&param_1[2].field_0x708c == 0) ||
              (*(int *)(*(int *)&param_1[2].field_0x708c + 0x578) == 1)) &&
             (iVar5 = core_inv_cpp_FUN_004dba80(local_58,"CLightActor"), iVar5 != 0)) {
            puVar6 = local_1c;
            for (iStack_18 = 0; iStack_18 < *(int *)(local_1c + 0x10); iStack_18 = iStack_18 + 1) {
              iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (*(uint *)(puVar6 + 0x14),DAT_007e1a50);
              if (iVar5 != 0) {
                core_charactr_cpp_FUN_004319d0(param_1,0,iVar5,0,0);
                *(uint *)(iVar5 + 0x23a0) = 1;
                *(uint *)&param_1[2].field_0x6ff0 = 0x41700000;
                break;
              }
              puVar6 = puVar6 + 4;
            }
          }
          goto LAB_00524bde;
        }
        if ((*(int *)&param_1[2].field_0x6fcc == 9) && (local_24 == 3)) {
          iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&param_1->field_0x25b0,DAT_007e1a50);
          if (iVar5 != 0) {
            iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(uint *)&param_1->field_0x25b0,DAT_007e1a50);
            *(uint *)(iVar5 + 0x23a0) = 0;
            *(uint *)&param_1->field_0x25b0 = 0;
            *(uint *)&param_1[2].field_0x6ff0 = 0;
          }
          goto LAB_00524bde;
        }
      }
      if ((*(CDemonActor **)&param_1[2].field_0x7014 != (CDemonActor *)0x0) && (local_24 == 3)) {
        core_inv_cpp_FUN_004dbaa0(local_5c,*(CDemonActor **)&param_1[2].field_0x7014,0);
        core_mission_cpp_FUN_004f6930(0x01D81080,*(CDemonActor **)&param_1[2].field_0x7014);
        core_charactr_cpp_FUN_004319d0(param_1,1,*(uint *)&param_1[2].field_0x7014,0,0);
        iVar5 = core_actor_cpp_FUN_0040c790
                          (*(CDemonActor **)&param_1[2].field_0x7014,"CTrap");
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(local_38,0x21,1);
          if (*(int *)&param_1[2].field_0x6fcc != 0) {
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",
                       *(int *)&param_1[2].field_0x6fcc,0x172a);
          }
          *(uint *)&param_1[2].field_0x6fcc = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(local_38,0x1f,1);
          *(uint *)&param_1[2].field_0x6fcc = 6;
        }
        *(uint *)&param_1[2].field_0x7014 = 0;
      }
      if ((*(int *)&param_1[2].field_0x6fcc == 7) && ((local_24 == 0 || (local_24 == 8)))) {
        *(uint *)&param_1[2].field_0x6fcc = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0(param_1,local_20);
    }
    local_3c = local_3c + 1;
    if (1 < local_3c) {
      return;
    }
  } while( true );
}
