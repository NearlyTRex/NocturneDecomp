// Name: FUN_00524940
// Address: 00524940
// Address Range: [[00524940, 0052592d]]
// Convention: unknown
// Signature: void FUN_00524940(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00524940(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int aiStackY_1098 [1013];
  uint uVar7;
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
  int local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int iStack_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  float local_14;
  
  bVar6 = 0;
  if ((*(int *)(param_1 + 0x2f00) == 0x11) && (*(int *)(param_1 + 0x2628) == 0)) {
    *(uint *)(param_1 + 0x2f04) = 0;
    *(uint *)(param_1 + 0x2f00) = 0;
  }
  local_44 = -1;
  local_28 = 0;
  if (*(int *)(param_1 + 0x20ba8) == 0) {
    if (*(int *)(param_1 + 0x20bcc) == 0) goto LAB_00524997;
    if (*(int *)(param_1 + 0x2628) == 0) {
      local_28 = *(int *)(param_1 + 0x20a20);
      if ((*(int *)(param_1 + 0x25b0) != 0) && (*(int *)(local_28 + 0x578) == 2)) {
        local_28 = *(int *)(param_1 + 0x20c24);
      }
    }
    else {
      local_28 = FUN_0040c840(*(int *)(param_1 + 0x2628),_DAT_02d0c150);
      if ((local_28 == 0) &&
         (uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x2628) + 0x154) + 0x74))
                            (*(int *)(param_1 + 0x2628)), (uVar4 & 0xb) != 0)) {
        local_44 = 8;
      }
    }
    if ((local_28 != 0) || (-1 < local_44)) goto LAB_00524997;
  }
  *(int *)(param_1 + 0x20bcc) = local_28;
LAB_00524997:
  iVar5 = param_1 + 0x206e8;
  FUN_004dcda0(iVar5);
  FUN_004dcda0(iVar5);
  local_3c = 0;
  local_38 = param_1 + 0x158;
  local_5c = iVar5;
  local_58 = iVar5;
  local_1c = iVar5;
  do {
    iVar5 = local_28;
    if (param_2 <= 0.0) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x20b64);
    if ((((iVar2 == 1) || (iVar2 == 8)) || (iVar2 == 9)) || (*(int *)(param_1 + 0x20bac) != 0)) {
      local_20 = 3;
      iVar2 = local_20;
    }
    else if (iVar2 == 2) {
      iVar2 = 0;
    }
    else if (iVar2 == 3) {
      local_14 = (float)FUN_00433a60(param_1,6);
      local_20 = 6;
      iVar2 = local_20;
      if ((float)_DAT_005cd7d7 < local_14) {
        fVar1 = _DAT_005e350c * param_2 + *(float *)(param_1 + 0x20bdc);
        *(float *)(param_1 + 0x20bdc) = fVar1;
        if (0x41A00000 < fVar1) {
          *(float *)(param_1 + 0x20bdc) = 0x41A00000;
        }
        if (*(int *)(param_1 + 0xcde0) != 0) {
          return;
        }
        iVar2 = 0;
      }
    }
    else if (local_44 < 0) {
      iVar2 = *(int *)(param_1 + 0x20c24);
      if (iVar2 == local_28) {
        if (*(int *)(param_1 + 0x20c24) == 0) {
switchD_00524e67_caseD_3:
          local_20 = 0;
          iVar2 = local_20;
        }
        else {
          switch(*(uint *)(*(int *)(param_1 + 0x20c24) + 0x2e0)) {
          case 0:
          case 5:
            iVar2 = 2;
            break;
          case 1:
            iVar2 = 4;
            break;
          case 2:
            iVar2 = 5;
            break;
          default:
            goto switchD_00524e67_caseD_3;
          case 4:
            iVar2 = 7;
            break;
          case 7:
          case 0xc:
            iVar2 = 8;
            break;
          case 9:
          case 10:
            iVar2 = 0xe;
            break;
          case 0xd:
            iVar2 = 0x11;
            break;
          case 0xe:
            iVar2 = 0x12;
          }
        }
      }
      else if (iVar2 == 0) {
        iVar2 = 0;
        if (local_28 != 0) {
          switch(*(uint *)(local_28 + 0x2e0)) {
          case 0:
          case 5:
            iVar2 = 1;
            break;
          default:
switchD_00524f26_caseD_1:
            iVar2 = 3;
            break;
          case 7:
          case 8:
            iVar2 = FUN_0040c840(local_28,_DAT_01d72c08);
            if ((iVar2 == 0) || (*(int *)(iVar2 + 0x5a4) == 0)) {
              iVar5 = FUN_0040c840(iVar5,_DAT_01d5bae8);
              iVar2 = 0;
              if (iVar5 != 0) goto switchD_00524f26_caseD_1;
            }
            else {
              iVar2 = 3;
            }
          }
        }
      }
      else {
        switch(*(uint *)(iVar2 + 0x2e0)) {
        case 0:
        case 5:
          iVar2 = 1;
          break;
        default:
switchD_00524f8d_caseD_1:
          iVar2 = 3;
          break;
        case 7:
        case 8:
          iVar5 = FUN_0040c840(iVar2,_DAT_01d72c08);
          if ((iVar5 == 0) || (*(int *)(iVar5 + 0x5a4) == 0)) {
            iVar5 = FUN_0040c840(iVar2,_DAT_01d5bae8);
            iVar2 = 0;
            if (iVar5 != 0) goto switchD_00524f8d_caseD_1;
          }
          else {
            iVar2 = 3;
          }
        }
      }
    }
    else {
      local_20 = local_44;
      iVar2 = local_20;
    }
    local_20 = iVar2;
    local_2c = *(int *)(param_1 + 0x2f04);
    local_24 = FUN_00433580(param_1,&param_2,local_20);
    iVar5 = *(int *)(param_1 + 0x27f4 + *(int *)(param_1 + 0x2f00) * 0x38);
    iVar2 = FUN_004fc310(local_38);
    iVar5 = iVar5 * 0x120 + iVar2 + 0x1c28;
    uVar4 = *(uint *)(param_1 + 0x2f00);
    if (uVar4 < 0x10) {
      if (uVar4 < 0xc) {
        if (uVar4 < 7) {
          if (((uVar4 == 6) &&
              (iVar2 = FUN_0040c840(*(uint *)(param_1 + 0x20c24),_DAT_01c5a130), iVar2 != 0))
             && ((iVar3 = FUN_0047b230(iVar2), iVar3 == 0 &&
                 (local_14 = (float)(0xb / (longlong)*(int *)(iVar5 + 100)),
                 (float)(int)local_14 <= *(float *)(param_1 + 0x2f04))))) {
            FUN_0047b1e0(iVar2);
          }
        }
        else if (uVar4 < 8) {
          if ((*(int *)(param_1 + 0x20b64) == 3) &&
             (local_14 = (float)(0xb / (longlong)*(int *)(iVar5 + 100)),
             (float)(int)local_14 <= *(float *)(param_1 + 0x2f04))) {
            FUN_00524800(param_1);
            local_80 = local_8c;
            *(uint *)(&stack0xffffff84 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xffffff78 + (uint)bVar6 * -8);
            *(uint *)(&stack0xffffff88 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xffffff7c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            local_74 = local_80;
            *(uint *)((int)&stack0xffffff90 + (uint)bVar6 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xffffff84 + (uint)bVar6 * -8);
            *(uint *)(&stack0xffffff94 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xffffff88 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            local_30 = FUN_0040c840(*(uint *)(param_1 + 0x20c24),DAT_007dff04);
            if (local_30 != 0) {
              FUN_00408b00(param_1,&stack0xffffff8c);
              local_a4 = local_68;
              *(uint *)((int)&stack0xffffff60 + (uint)bVar6 * -8) =
                   *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8);
              *(uint *)((int)&stack0xffffff64 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                   *(uint *)(&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
              if ((uint *)(local_30 + 0x594) != &stack0xffffff5c) {
                *(uint *)(local_30 + 0x594) = local_a4;
                *(uint *)(local_30 + 0x598) = local_a0;
                *(uint *)(local_30 + 0x59c) = local_9c;
              }
              (**(code **)(*(int *)(local_30 + 0x154) + 0xe4))(local_30);
            }
            iStack_40 = FUN_0040c840(*(uint *)(param_1 + 0x20c24),_DAT_01549b0c);
            iStack_34 = iStack_40;
            if (iStack_40 != 0) {
              FUN_00408b00(param_1,&stack0xffffff8c);
              uStack_b0 = uStack_98;
              *(uint *)((int)&stack0xffffff54 + (uint)bVar6 * -8) =
                   *(uint *)(&stack0xffffff6c + (uint)bVar6 * -8);
              *(uint *)((int)&stack0xffffff58 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                   *(uint *)(&stack0xffffff70 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
              if ((uint *)(iStack_34 + 0x598) != &stack0xffffff50) {
                *(uint *)(iStack_34 + 0x598) = uStack_b0;
                *(uint *)(iStack_34 + 0x59c) = uStack_ac;
                *(uint *)(iStack_34 + 0x5a0) = uStack_a8;
              }
              (**(code **)(*(int *)(iStack_40 + 0x154) + 0xe4))(iStack_40);
            }
            if (*(int *)(param_1 + 0x2628) != 0) {
              (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,&stack0xffffff8c);
            }
            *(uint *)(param_1 + 0x20b64) = 0;
            *(uint *)(param_1 + 0x20bdc) = 0x41200000;
          }
          if (1.0 <= *(float *)(param_1 + 0x2f04)) {
            *(uint *)(param_1 + 0x2f00) = 0;
            *(uint *)(param_1 + 0x2f04) = 0;
          }
        }
        else if ((((uVar4 == 8) && (local_4c = 0x3f19999a, local_2c < 0x3f19999a)) &&
                 (0.6 <= *(float *)(param_1 + 0x2f04))) &&
                (iVar5 = FUN_0040c790(*(uint *)(param_1 + 0x20c24),"CShotgun"),
                iVar5 != 0)) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x20c24) + 0x154) + 0xd8))
                    (*(int *)(param_1 + 0x20c24));
        }
      }
      else if (uVar4 < 0xd) {
        local_48 = 0x3ebd70a4;
        if (((local_2c < 0x3ebd70a4) && (0.37 <= *(float *)(param_1 + 0x2f04))) &&
           ((*(int *)(param_1 + 0x20c24) != 0 &&
            (iVar5 = FUN_0040c840(*(int *)(param_1 + 0x20c24),_DAT_02d0c150), iVar5 != 0)))) {
          if (*(int *)(iVar5 + 0x56c) == 9) {
            (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,8);
          }
          else {
            (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,1);
          }
        }
      }
      else {
        if (((*(int *)(param_1 + 0x20b64) == 7) &&
            ((float)_DAT_005cd7e7 <= *(float *)(param_1 + 0x2f04))) &&
           ((iVar5 = *(int *)(param_1 + 0x20c24), iVar5 != 0 &&
            (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,2), iVar5 != 0)))) {
          *(uint *)(param_1 + 0x20b64) = 0;
        }
        if ((float)_DAT_005cd7d7 < *(float *)(param_1 + 0x2f04)) {
          *(uint *)(param_1 + 0x2f04) = 0x3f800000;
          *(uint *)(param_1 + 0x20b64) = 0;
          *(uint *)(param_1 + 0x2f00) = 0xb;
        }
      }
    }
    else if (uVar4 < 0x11) {
      local_50 = 0x3f28f5c3;
      if ((local_2c < 0x3f28f5c3) && (0.66 <= *(float *)(param_1 + 0x2f04))) {
        iVar5 = FUN_0040c840(*(uint *)(param_1 + 0x20c24),_DAT_02d0c150);
        if (iVar5 != 0) {
          if (*(int *)(iVar5 + 0x56c) == 9) {
            uVar7 = 8;
          }
          else {
            uVar7 = 1;
          }
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,uVar7);
        }
        iVar5 = *(int *)(param_1 + 0x20c24);
        if (iVar5 != 0) {
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,2);
        }
      }
    }
    else if (uVar4 < 0x1b) {
      if (uVar4 < 0x19) {
        if ((((uVar4 == 0x15) && (local_54 = 0x3f4ccccd, local_2c < 0x3f4ccccd)) &&
            (0.8 <= *(float *)(param_1 + 0x2f04))) &&
           (iVar5 = FUN_0040c790(*(uint *)(param_1 + 0x20c24),"CRifle"), iVar5 != 0))
        {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x20c24) + 0x154) + 0xd8))
                    (*(int *)(param_1 + 0x20c24));
        }
      }
      else if (uVar4 < 0x1a) {
        if ((float)_DAT_005cd7d7 < *(float *)(param_1 + 0x2f04)) {
          *(uint *)(param_1 + 0x2f04) = 0x3f800000;
          *(uint *)(param_1 + 0x2f00) = 0x1a;
        }
      }
      else if (*(float *)(param_1 + 0x2f04) < (float)_DAT_005cd7ef) {
        *(uint *)(param_1 + 0x2f04) = 0x3f800000;
        *(uint *)(param_1 + 0x2f00) = 1;
      }
    }
    else if (uVar4 < 0x1c) {
      if ((*(int *)(param_1 + 0x20b64) == 0xb) &&
         ((float)_DAT_005cd7e7 < *(float *)(param_1 + 0x2f04))) {
        iVar5 = *(int *)(param_1 + 0x20c24);
        if ((iVar5 != 0) &&
           (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe8))(iVar5), iVar5 != 0)) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x20c24) + 0x154) + 0xe4))
                    (*(int *)(param_1 + 0x20c24));
        }
        *(uint *)(param_1 + 0x20b64) = 0;
      }
      if ((float)_DAT_005cd7d7 < *(float *)(param_1 + 0x2f04)) {
        *(uint *)(param_1 + 0x2f04) = 0x3f800000;
        *(uint *)(param_1 + 0x20b64) = 0;
        *(uint *)(param_1 + 0x2f00) = 0xb;
      }
    }
    else if (uVar4 < 0x1f) {
      if (uVar4 == 0x1c) {
        if ((*(int *)(param_1 + 0x20b64) == 10) &&
           ((float)_DAT_005cd7e7 < *(float *)(param_1 + 0x2f04))) {
          iVar5 = *(int *)(param_1 + 0x20c24);
          if ((iVar5 != 0) &&
             (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe8))(iVar5), iVar5 != 0)) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0x20c24) + 0x154) + 0xe4))
                      (*(int *)(param_1 + 0x20c24));
          }
          *(uint *)(param_1 + 0x20b64) = 0;
        }
        if ((float)_DAT_005cd7d7 < *(float *)(param_1 + 0x2f04)) {
          *(uint *)(param_1 + 0x2f04) = 0x3f800000;
          *(uint *)(param_1 + 0x20b64) = 0;
          *(uint *)(param_1 + 0x2f00) = 0xb;
        }
      }
    }
    else if (uVar4 < 0x20) {
      if ((*(int *)(param_1 + 0x20b64) == 0xc) &&
         ((float)_DAT_005cd7e7 < *(float *)(param_1 + 0x2f04))) {
        iVar5 = *(int *)(param_1 + 0x20c24);
        if ((iVar5 != 0) &&
           (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe8))(iVar5), iVar5 != 0)) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x20c24) + 0x154) + 0xe4))
                    (*(int *)(param_1 + 0x20c24));
        }
        *(uint *)(param_1 + 0x20b64) = 0;
      }
      if ((float)_DAT_005cd7d7 < *(float *)(param_1 + 0x2f04)) {
        *(uint *)(param_1 + 0x2f04) = 0x3f800000;
        *(uint *)(param_1 + 0x20b64) = 0;
        *(uint *)(param_1 + 0x2f00) = 0x1d;
      }
    }
    else if (uVar4 == 0x20) {
      if ((*(int *)(param_1 + 0x20b64) == 0xd) &&
         ((float)_DAT_005cd7df < *(float *)(param_1 + 0x2f04))) {
        iVar5 = *(int *)(param_1 + 0x20c24);
        if ((iVar5 != 0) &&
           (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe8))(iVar5), iVar5 != 0)) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x20c24) + 0x154) + 0xe4))
                    (*(int *)(param_1 + 0x20c24));
        }
        *(uint *)(param_1 + 0x20b64) = 0;
      }
      if ((float)_DAT_005cd7d7 < *(float *)(param_1 + 0x2f04)) {
        *(uint *)(param_1 + 0x2f04) = 0x3f800000;
        *(uint *)(param_1 + 0x20b64) = 0;
        *(uint *)(param_1 + 0x2f00) = 0x1e;
      }
    }
    if (-1 < local_24) {
      iVar5 = *(int *)(param_1 + 0x20c24);
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
            iVar2 = FUN_0040c840(iVar5,_DAT_01d72c08);
            if ((iVar2 == 0) || (*(int *)(iVar2 + 0x5a4) == 0)) {
              iVar2 = FUN_0040c840(iVar5,_DAT_01d5bae8);
              iVar5 = 0;
              if (iVar2 != 0) goto switchD_00525735_caseD_1;
            }
            else {
              iVar5 = 3;
            }
          }
          if (iVar5 == local_24) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0x20c24) + 0x154) + 0xdc))
                      (*(int *)(param_1 + 0x20c24),1);
            iVar5 = FUN_0040c840(*(uint *)(param_1 + 0x20c24),_DAT_02cf61ec);
            if (iVar5 != 0) {
              FUN_0048c150(0x01C6E360,"UseSPS");
            }
            *(uint *)(param_1 + 0x20c24) = 0;
          }
        }
        iVar5 = local_28;
        if (*(int *)(param_1 + 0x20bcc) != 0) {
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
              iVar2 = FUN_0040c840(local_28,_DAT_01d72c08);
              if ((iVar2 == 0) || (*(int *)(iVar2 + 0x5a4) == 0)) {
                iVar2 = FUN_0040c840(iVar5,_DAT_01d5bae8);
                iVar5 = 0;
                if (iVar2 != 0) goto switchD_00525799_caseD_1;
              }
              else {
                iVar5 = 3;
              }
            }
          }
          if (iVar5 == local_24) {
            iVar5 = *(int *)(param_1 + 0x20c24);
            if (iVar5 != 0) {
              (**(code **)(*(int *)(iVar5 + 0x154) + 0xdc))(iVar5,1);
            }
            uVar7 = _DAT_02cf61ec;
            *(int *)(param_1 + 0x20c24) = local_28;
            iVar5 = FUN_0040c840(local_28,uVar7);
            if (iVar5 != 0) {
              FUN_0048c150(0x01C6E360,"UseSPS");
            }
            iVar5 = *(int *)(param_1 + 0x20c24);
            if (iVar5 != 0) {
              (**(code **)(*(int *)(iVar5 + 0x154) + 0xdc))(iVar5,2);
            }
          }
        }
      }
      if ((*(int *)(param_1 + 0x20b64) == 1) && (local_24 == 3)) {
        FUN_004d41a0(param_1,1);
LAB_00524bde:
        *(uint *)(param_1 + 0x20b64) = 0;
      }
      else {
        if ((*(int *)(param_1 + 0x20b64) == 8) && (local_24 == 3)) {
          if (((*(int *)(param_1 + 0x20c24) == 0) ||
              (*(int *)(*(int *)(param_1 + 0x20c24) + 0x578) == 1)) &&
             (iVar5 = FUN_004dba80(local_58,"CLightActor"), iVar5 != 0)) {
            iVar5 = local_1c;
            for (iStack_18 = 0; iStack_18 < *(int *)(local_1c + 0x10); iStack_18 = iStack_18 + 1) {
              iVar2 = FUN_0040c840(*(uint *)(iVar5 + 0x14),DAT_007e1a50);
              if (iVar2 != 0) {
                FUN_004319d0(param_1,0,iVar2,0,0);
                *(uint *)(iVar2 + 0x23a0) = 1;
                *(uint *)(param_1 + 0x20b88) = 0x41700000;
                break;
              }
              iVar5 = iVar5 + 4;
            }
          }
          goto LAB_00524bde;
        }
        if ((*(int *)(param_1 + 0x20b64) == 9) && (local_24 == 3)) {
          iVar5 = FUN_0040c840(*(uint *)(param_1 + 0x25b0),DAT_007e1a50);
          if (iVar5 != 0) {
            iVar5 = FUN_0040c840(*(uint *)(param_1 + 0x25b0),DAT_007e1a50);
            *(uint *)(iVar5 + 0x23a0) = 0;
            *(uint *)(param_1 + 0x25b0) = 0;
            *(uint *)(param_1 + 0x20b88) = 0;
          }
          goto LAB_00524bde;
        }
      }
      if ((*(int *)(param_1 + 0x20bac) != 0) && (local_24 == 3)) {
        FUN_004dbaa0(local_5c,*(int *)(param_1 + 0x20bac),0);
        FUN_004f6930(0x01D81080,*(uint *)(param_1 + 0x20bac));
        FUN_004319d0(param_1,1,*(uint *)(param_1 + 0x20bac),0,0);
        iVar5 = FUN_0040c790(*(uint *)(param_1 + 0x20bac),"CTrap");
        if (iVar5 == 0) {
          FUN_004fc0d0(local_38,0x21,1);
          if (*(int *)(param_1 + 0x20b64) != 0) {
            FUN_0047cee0(0x01C5B0E4,"actionPending = %d\nprye.cpp line %d",
                         *(int *)(param_1 + 0x20b64),0x172a);
          }
          *(uint *)(param_1 + 0x20b64) = 2;
        }
        else {
          FUN_004fc0d0(local_38,0x1f,1);
          *(uint *)(param_1 + 0x20b64) = 6;
        }
        *(uint *)(param_1 + 0x20bac) = 0;
      }
      if ((*(int *)(param_1 + 0x20b64) == 7) && ((local_24 == 0 || (local_24 == 8)))) {
        *(uint *)(param_1 + 0x20b64) = 0;
      }
      FUN_00433ae0(param_1,local_20);
    }
    local_3c = local_3c + 1;
    if (1 < local_3c) {
      return;
    }
  } while( true );
}
