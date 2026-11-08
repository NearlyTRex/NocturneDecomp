// Name: FUN_00474400
// Address: 00474400
// Address Range: [[00474400, 00474ee8]]
// Convention: unknown
// Signature: void FUN_00474400(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00474400(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  int aiStackY_1068 [1013];
  uint uVar8;
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
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar7 = 0;
  if ((*(int *)(param_1 + 0x2c98) == 0xe) && (*(int *)(param_1 + 0x2628) == 0)) {
    *(uint *)(param_1 + 0x2c9c) = 0;
    *(uint *)(param_1 + 0x2c98) = 0;
  }
  local_44 = -1;
  local_24 = 0;
  if (*(int *)(param_1 + 0x1ff88) == 0) {
    if (*(int *)(param_1 + 0x1ffac) != 0) {
      if (*(int *)(param_1 + 0x2628) == 0) {
        local_24 = *(int *)(param_1 + 0x1fe20);
      }
      else {
        local_24 = FUN_0040c600(*(int *)(param_1 + 0x2628),_DAT_02c99770);
        if ((local_24 == 0) &&
           (uVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x2628) + 0x154) + 0x74))
                              (*(int *)(param_1 + 0x2628)), (uVar3 & 0xb) != 0)) {
          local_44 = 8;
        }
      }
      if ((local_24 == 0) && (local_44 < 0)) {
        *(uint *)(param_1 + 0x1ffac) = 0;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x1ffac) = 0;
  }
  iVar5 = param_1 + 0x1fae8;
  iVar2 = FUN_004f9ed0(iVar5);
  local_2c = (uint)(iVar2 != 0);
  iVar2 = FUN_004f9ef0(iVar5);
  local_28 = (uint)(iVar2 != 0);
  local_38 = param_1 + 0x158;
  local_3c = 0;
  local_1c = iVar5;
  do {
    if (param_2 <= 0.0) {
LAB_004744a5:
      if (*(int *)(param_1 + 0x1ffac) == 0) {
        return;
      }
      goto LAB_00474ea4;
    }
    iVar5 = *(int *)(param_1 + 0x1ff5c);
    if ((iVar5 == 1) || (*(int *)(param_1 + 0x1ff8c) != 0)) {
LAB_00474546:
      local_20 = 3;
      iVar5 = local_20;
    }
    else if (iVar5 == 2) {
      iVar5 = 0;
    }
    else if (iVar5 == 3) {
      local_18 = (float)FUN_00434590(param_1,6);
      local_20 = 6;
      iVar5 = local_20;
      if ((float)_DAT_005da444 < local_18) {
        fVar1 = param_2 * (float)_DAT_005da43c + *(float *)(param_1 + 0x1ffbc);
        *(float *)(param_1 + 0x1ffbc) = fVar1;
        if (0x428C0000 < fVar1) {
          *(float *)(param_1 + 0x1ffbc) = 0x428C0000;
        }
        if (*(int *)(param_1 + 0xc1e4) != 0) goto LAB_004744a5;
        iVar5 = 0;
      }
    }
    else {
      if ((local_2c != 0) && (*(int *)(param_1 + 0x1ff54) == 0)) goto LAB_00474546;
      if ((local_2c == 0) || (*(int *)(param_1 + 0x1ff54) != 1)) {
        if ((local_2c == 0) && (*(int *)(param_1 + 0x1ff54) == 2)) {
          local_20 = 10;
          iVar5 = local_20;
        }
        else {
          if (((local_2c == 0) && (*(int *)(param_1 + 0x1ff54) == 1)) ||
             ((local_28 != 0 && (*(int *)(param_1 + 0x1ff58) == 0)))) goto LAB_00474546;
          if ((local_28 == 0) || (*(int *)(param_1 + 0x1ff58) != 1)) {
            if ((local_28 == 0) && (*(int *)(param_1 + 0x1ff58) == 2)) {
              local_20 = 0xb;
              iVar5 = local_20;
            }
            else {
              if ((local_28 == 0) && (*(int *)(param_1 + 0x1ff58) == 1)) goto LAB_00474546;
              if (-1 < local_44) {
                local_20 = local_44;
                iVar5 = local_20;
                goto LAB_0047454e;
              }
              iVar5 = *(int *)(param_1 + 0x20004);
              if (iVar5 != local_24) {
                if (iVar5 == 0) {
                  iVar5 = 0;
                  if (local_24 != 0) {
                    switch(*(uint *)(local_24 + 0x2e0)) {
                    case 0:
                    case 5:
                      iVar5 = 1;
                      break;
                    default:
switchD_004749dc_caseD_1:
                      iVar5 = 3;
                      break;
                    case 7:
                    case 8:
                      iVar5 = FUN_0040c600(local_24,_DAT_01d1e2dc);
                      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x588) != 0))
                      goto switchD_004749dc_caseD_1;
                      iVar5 = 0;
                    }
                  }
                }
                else {
                  switch(*(uint *)(iVar5 + 0x2e0)) {
                  case 0:
                  case 5:
                    iVar5 = 1;
                    break;
                  default:
switchD_00474a28_caseD_1:
                    iVar5 = 3;
                    break;
                  case 7:
                  case 8:
                    iVar5 = FUN_0040c600(iVar5,_DAT_01d1e2dc);
                    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x588) != 0))
                    goto switchD_00474a28_caseD_1;
                    iVar5 = 0;
                  }
                }
                goto LAB_0047454e;
              }
              if (*(int *)(param_1 + 0x20004) == 0) {
switchD_00474955_caseD_3:
                iVar5 = 0;
              }
              else {
                switch(*(uint *)(*(int *)(param_1 + 0x20004) + 0x2e0)) {
                case 0:
                case 5:
                  iVar5 = 2;
                  break;
                case 1:
                  iVar5 = 4;
                  break;
                case 2:
                  iVar5 = 5;
                  break;
                default:
                  goto switchD_00474955_caseD_3;
                case 4:
                  iVar5 = 7;
                  break;
                case 7:
                  iVar5 = 8;
                  break;
                case 9:
                case 10:
                  iVar5 = 0xe;
                }
              }
            }
          }
          else {
            local_20 = 0xb;
            iVar5 = local_20;
          }
        }
      }
      else {
        local_20 = 10;
        iVar5 = local_20;
      }
    }
LAB_0047454e:
    local_20 = iVar5;
    local_30 = *(int *)(param_1 + 0x2c9c);
    local_48 = FUN_004340b0(param_1,&param_2,local_20);
    iVar5 = *(int *)(param_1 + 0x27f4 + *(int *)(param_1 + 0x2c98) * 0x38);
    iVar2 = FUN_00524a00(local_38);
    iVar5 = iVar5 * 0x120 + iVar2 + 0x1c28;
    switch(*(uint *)(param_1 + 0x2c98)) {
    case 6:
      iVar2 = FUN_0040c600(*(uint *)(param_1 + 0x20004),_DAT_01c3db94);
      if (((iVar2 != 0) && (iVar4 = FUN_00492690(iVar2), iVar4 == 0)) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(iVar5 + 100)),
         (float)(int)local_18 <= *(float *)(param_1 + 0x2c9c))) {
        FUN_00492640(iVar2);
      }
      break;
    case 7:
      if ((*(int *)(param_1 + 0x1ff5c) == 3) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(iVar5 + 100)),
         (float)(int)local_18 <= *(float *)(param_1 + 0x2c9c))) {
        FUN_004742a0(param_1);
        local_74 = local_68;
        *(uint *)((int)&stack0xffffff90 + (uint)bVar7 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff9c + (uint)bVar7 * -8);
        *(uint *)(&stack0xffffff94 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffffa0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        local_40 = FUN_0040c600(*(uint *)(param_1 + 0x20004),_DAT_01c3db94);
        local_34 = local_40;
        if (local_40 != 0) {
          FUN_00408ac0(param_1,&stack0xffffff8c);
          iVar5 = local_34;
          puVar6 = (uint *)(local_34 + 0x57c);
          local_80 = local_5c;
          *(uint *)((int)&stack0xffffff84 + (uint)bVar7 * -8) =
               *(uint *)(&stack0xffffffa8 + (uint)bVar7 * -8);
          *(uint *)((int)&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)(&stack0xffffffac + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          if (puVar6 != &stack0xffffff80) {
            *puVar6 = local_80;
            *(uint *)(iVar5 + 0x580) = local_7c;
            *(uint *)(iVar5 + 0x584) = local_78;
          }
          (**(code **)(*(int *)(local_40 + 0x154) + 0xe4))(local_40);
          *(uint *)(param_1 + 0x20004) = 0;
        }
        if (*(int *)(param_1 + 0x2628) != 0) {
          (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,&stack0xffffff8c);
        }
        *(uint *)(param_1 + 0x1ff5c) = 0;
        *(uint *)(param_1 + 0x1ffbc) = 0x41200000;
      }
      if (1.0 <= *(float *)(param_1 + 0x2c9c)) {
        *(uint *)(param_1 + 0x2c98) = 0;
        *(uint *)(param_1 + 0x2c9c) = 0;
      }
      break;
    case 8:
      if (((local_30 < 0x3f19999a) && (0x3f199999 < *(int *)(param_1 + 0x2c9c))) &&
         (iVar5 = FUN_0040c550(*(uint *)(param_1 + 0x20004),"CShotgun"), iVar5 != 0))
      {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x20004) + 0x154) + 0xd8))
                  (*(int *)(param_1 + 0x20004));
      }
      break;
    case 0xc:
      if (((local_30 < 0x3ebd70a4) && (0x3ebd70a3 < *(int *)(param_1 + 0x2c9c))) &&
         ((*(int *)(param_1 + 0x20004) != 0 &&
          (iVar5 = FUN_0040c600(*(int *)(param_1 + 0x20004),_DAT_02c99770), iVar5 != 0)))) {
        if (*(int *)(iVar5 + 0x56c) == 9) {
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,8);
        }
        else {
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,1);
        }
      }
      break;
    case 0xd:
      if ((local_30 < 0x3f000000) && (0x3effffff < *(int *)(param_1 + 0x2c9c))) {
        iVar5 = FUN_0040c600(*(uint *)(param_1 + 0x20004),_DAT_02c99770);
        if (iVar5 != 0) {
          if (*(int *)(iVar5 + 0x56c) == 9) {
            uVar8 = 8;
          }
          else {
            uVar8 = 1;
          }
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,uVar8);
        }
        iVar5 = *(int *)(param_1 + 0x20004);
        if (iVar5 != 0) {
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,2);
        }
      }
      break;
    case 0x12:
      if (((local_30 < 0x3f4ccccd) && (0x3f4ccccc < *(int *)(param_1 + 0x2c9c))) &&
         (iVar5 = FUN_0040c550(*(uint *)(param_1 + 0x20004),"CRifle"), iVar5 != 0)) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x20004) + 0x154) + 0xd8))
                  (*(int *)(param_1 + 0x20004));
      }
    }
    if (-1 < local_48) {
      iVar5 = *(int *)(param_1 + 0x20004);
      if (iVar5 != local_24) {
        if (iVar5 != 0) {
          switch(*(uint *)(iVar5 + 0x2e0)) {
          case 0:
          case 5:
            iVar5 = 1;
            break;
          default:
switchD_00474d6b_caseD_1:
            iVar5 = 3;
            break;
          case 7:
          case 8:
            iVar5 = FUN_0040c600(iVar5,_DAT_01d1e2dc);
            if ((iVar5 != 0) && (*(int *)(iVar5 + 0x588) != 0)) goto switchD_00474d6b_caseD_1;
            iVar5 = 0;
          }
          if (iVar5 == local_48) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0x20004) + 0x154) + 0xdc))
                      (*(int *)(param_1 + 0x20004),1);
            *(uint *)(param_1 + 0x20004) = 0;
          }
        }
        if (*(int *)(param_1 + 0x1ffac) != 0) {
          if (local_24 == 0) {
LAB_0047463c:
            iVar5 = 0;
          }
          else {
            switch(*(uint *)(local_24 + 0x2e0)) {
            case 0:
            case 5:
              iVar5 = 1;
              break;
            case 7:
            case 8:
              iVar5 = FUN_0040c600(local_24,_DAT_01d1e2dc);
              if ((iVar5 == 0) || (*(int *)(iVar5 + 0x588) == 0)) goto LAB_0047463c;
            default:
              iVar5 = 3;
            }
          }
          if ((iVar5 == local_48) && (*(int *)(param_1 + 0x20004) = local_24, local_24 != 0)) {
            (**(code **)(*(int *)(local_24 + 0x154) + 0xdc))(local_24,2);
          }
        }
      }
      if ((*(int *)(param_1 + 0x1ff5c) == 1) && (local_48 == 3)) {
        FUN_004ec2c0(param_1,1);
        *(uint *)(param_1 + 0x1ff5c) = 0;
      }
      if ((*(int *)(param_1 + 0x1ff8c) != 0) && (local_48 == 3)) {
        FUN_004f8d00(local_1c,*(int *)(param_1 + 0x1ff8c),0);
        FUN_0051b160(0x01D2C900,*(uint *)(param_1 + 0x1ff8c));
        FUN_004325b0(param_1,1,*(uint *)(param_1 + 0x1ff8c),0,0);
        iVar5 = FUN_0040c550(*(uint *)(param_1 + 0x1ff8c),"CTrap");
        if (iVar5 == 0) {
          FUN_005247c0(local_38,0x19,1);
          if (*(int *)(param_1 + 0x1ff5c) != 0) {
            FUN_00494340(0x01C3EB54,"actionPending = %d\ndoc.cpp line %d",*(int *)(param_1 + 0x1ff5c)
                         ,0x146a);
          }
          *(uint *)(param_1 + 0x1ff5c) = 2;
        }
        else {
          FUN_005247c0(local_38,0x17,1);
          *(uint *)(param_1 + 0x1ff5c) = 6;
        }
        *(uint *)(param_1 + 0x1ff8c) = 0;
      }
      if (local_48 == 10) {
        if (local_2c == 0) {
          *(uint *)(param_1 + 0x1ff54) = 1;
        }
        else {
          *(uint *)(param_1 + 0x1ff54) = 2;
        }
      }
      else if ((local_48 == 3) && (*(int *)(param_1 + 0x1ff54) < 2)) {
        if (local_2c == 0) {
          *(uint *)(param_1 + 0x1ff54) = 0;
        }
        else {
          *(uint *)(param_1 + 0x1ff54) = 1;
        }
      }
      iVar5 = 0x01CCF390;
      if (local_48 == 0xb) {
        if (local_28 == 0) {
          *(uint *)(param_1 + 0x1ff58) = 1;
        }
        else {
          *(uint *)(param_1 + 0x1ff58) = 2;
        }
        (*(code *)**(uint **)(iVar5 + 0xb00))(iVar5,local_28 != 0);
      }
      else if ((local_48 == 3) && (*(int *)(param_1 + 0x1ff58) < 2)) {
        if (local_28 == 0) {
          *(uint *)(param_1 + 0x1ff58) = 0;
        }
        else {
          *(uint *)(param_1 + 0x1ff58) = 1;
        }
      }
      if ((*(int *)(param_1 + 0x1ff5c) == 7) && ((local_48 == 0 || (local_48 == 8)))) {
        *(uint *)(param_1 + 0x1ff5c) = 0;
      }
      FUN_00434610(param_1,local_20);
    }
    local_3c = local_3c + 1;
  } while (local_3c < 2);
  if (*(int *)(param_1 + 0x1ffac) == 0) {
    return;
  }
LAB_00474ea4:
  iVar5 = FUN_0040c550(*(uint *)(param_1 + 0x20004),"CFlashlight");
  if ((iVar5 != 0) && (*(int *)(0x01CCF390 + 0x264) == 0)) {
    *(uint *)(0x01CCF390 + 0x264) = 1;
    return;
  }
  return;
}
