// Name: FUN_005907a0
// Address: 005907a0
// Address Range: [[005907a0, 005910f8]]
// Convention: unknown
// Signature: void FUN_005907a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005907a0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  byte bVar7;
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
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar7 = 0;
  if ((*(int *)(param_1 + 0x2c98) == 0xe) && (*(int *)(param_1 + 0x2628) == 0)) {
    *(uint *)(param_1 + 0x2c9c) = 0;
    *(uint *)(param_1 + 0x2c98) = 0;
  }
  local_40 = -1;
  local_24 = 0;
  if (*(int *)(param_1 + 0x1ff88) == 0) {
    if (*(int *)(param_1 + 0x1ffac) != 0) {
      if (*(int *)(param_1 + 0x2628) == 0) {
        local_24 = *(int *)(param_1 + 0x1fe20);
      }
      else {
        local_24 = FUN_0040c600(*(int *)(param_1 + 0x2628),_DAT_02c99770);
        if ((local_24 == 0) &&
           (uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x2628) + 0x154) + 0x74))
                              (*(int *)(param_1 + 0x2628)), (uVar4 & 3) != 0)) {
          local_40 = 8;
        }
      }
      if ((local_24 == 0) && (local_40 < 0)) {
        *(uint *)(param_1 + 0x1ffac) = 0;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x1ffac) = 0;
  }
  local_28 = param_1 + 0x1fae8;
  local_34 = param_1 + 0x158;
  local_38 = 0;
  do {
    if (param_2 <= 0.0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x1ff5c);
    if ((iVar6 == 1) || (*(int *)(param_1 + 0x1ff8c) != 0)) {
LAB_0059082a:
      local_1c = 3;
      iVar6 = local_1c;
    }
    else if (iVar6 == 2) {
      iVar6 = 0;
    }
    else if (iVar6 == 3) {
      local_18 = (float)FUN_00434590(param_1,6);
      local_1c = 6;
      iVar6 = local_1c;
      if ((float)_DAT_005f7019 < local_18) {
        fVar1 = param_2 * (float)_DAT_005f7011 + *(float *)(param_1 + 0x1ffbc);
        *(float *)(param_1 + 0x1ffbc) = fVar1;
        if (0x428C0000 < fVar1) {
          *(float *)(param_1 + 0x1ffbc) = 0x428C0000;
        }
        if (*(int *)(param_1 + 0xc1e4) != 0) {
          return;
        }
        iVar6 = 0;
      }
    }
    else {
      iVar6 = FUN_004f9ed0(local_28);
      if ((iVar6 != 0) && (*(int *)(param_1 + 0x1ff54) == 0)) goto LAB_0059082a;
      iVar6 = FUN_004f9ed0(local_28);
      if ((iVar6 == 0) || (*(int *)(param_1 + 0x1ff54) != 1)) {
        iVar6 = FUN_004f9ed0(local_28);
        if ((iVar6 == 0) && (*(int *)(param_1 + 0x1ff54) == 2)) {
          local_1c = 10;
          iVar6 = local_1c;
        }
        else {
          iVar6 = FUN_004f9ed0(local_28);
          if ((iVar6 == 0) && (*(int *)(param_1 + 0x1ff54) == 1)) goto LAB_0059082a;
          if (local_40 < 0) {
            iVar6 = *(int *)(param_1 + 0x20004);
            if (iVar6 == local_24) {
              if (*(int *)(param_1 + 0x20004) == 0) {
switchD_00590c42_caseD_3:
                iVar6 = 0;
              }
              else {
                switch(*(uint *)(*(int *)(param_1 + 0x20004) + 0x2e0)) {
                case 0:
                case 5:
                  iVar6 = 2;
                  break;
                case 1:
                  iVar6 = 4;
                  break;
                case 2:
                  iVar6 = 5;
                  break;
                default:
                  goto switchD_00590c42_caseD_3;
                case 4:
                  iVar6 = 7;
                  break;
                case 7:
                  iVar6 = 8;
                  break;
                case 9:
                case 10:
                  iVar6 = 0xe;
                }
              }
            }
            else if (iVar6 == 0) {
              iVar6 = 0;
              if (local_24 != 0) {
                uVar4 = *(uint *)(local_24 + 0x2e0);
                if (uVar4 < 7) {
                  if (uVar4 == 0) {
                    iVar6 = 1;
                  }
                  else {
                    local_1c = 3;
                    iVar6 = local_1c;
                  }
                }
                else if ((uVar4 < 8) || (uVar4 == 8)) {
                  iVar6 = FUN_0040c600(local_24,_DAT_01d1e2dc);
                  if ((iVar6 == 0) || (*(int *)(iVar6 + 0x588) == 0)) {
                    iVar6 = 0;
                  }
                  else {
                    iVar6 = 3;
                  }
                }
                else {
                  local_1c = 3;
                  iVar6 = local_1c;
                }
              }
            }
            else {
              uVar4 = *(uint *)(iVar6 + 0x2e0);
              if (uVar4 < 7) {
                if (uVar4 == 0) {
                  iVar6 = 1;
                }
                else {
                  local_1c = 3;
                  iVar6 = local_1c;
                }
              }
              else if ((uVar4 < 8) || (uVar4 == 8)) {
                iVar6 = FUN_0040c600(iVar6,_DAT_01d1e2dc);
                if ((iVar6 == 0) || (*(int *)(iVar6 + 0x588) == 0)) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = 3;
                }
              }
              else {
                local_1c = 3;
                iVar6 = local_1c;
              }
            }
          }
          else {
            local_1c = local_40;
            iVar6 = local_1c;
          }
        }
      }
      else {
        local_1c = 10;
        iVar6 = local_1c;
      }
    }
    local_1c = iVar6;
    local_2c = *(int *)(param_1 + 0x2c9c);
    local_20 = FUN_004340b0(param_1,&param_2,local_1c);
    iVar6 = *(int *)(param_1 + 0x27f4 + *(int *)(param_1 + 0x2c98) * 0x38);
    iVar2 = FUN_00524a00(local_34);
    iVar6 = iVar6 * 0x120 + iVar2 + 0x1c28;
    switch(*(uint *)(param_1 + 0x2c98)) {
    case 6:
      iVar2 = FUN_0040c600(*(uint *)(param_1 + 0x20004),_DAT_01c3db94);
      if (((iVar2 != 0) && (iVar3 = FUN_00492690(iVar2), iVar3 == 0)) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(iVar6 + 100)),
         (float)(int)local_18 <= *(float *)(param_1 + 0x2c9c))) {
        FUN_00492640(iVar2);
      }
      break;
    case 7:
      if ((*(int *)(param_1 + 0x1ff5c) == 3) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(iVar6 + 100)),
         (float)(int)local_18 <= *(float *)(param_1 + 0x2c9c))) {
        FUN_005906e0(param_1);
        local_54 = local_6c;
        *(uint *)((int)&stack0xffffffb0 + (uint)bVar7 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8);
        *(uint *)(&stack0xffffffb4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff9c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        local_3c = FUN_0040c600(*(uint *)(param_1 + 0x20004),_DAT_01c3db94);
        local_30 = local_3c;
        if (local_3c != 0) {
          FUN_00408ac0(param_1,&stack0xffffffac);
          iVar6 = local_30;
          puVar5 = (uint *)(local_30 + 0x57c);
          local_78 = local_60;
          *(uint *)((int)&stack0xffffff8c + (uint)bVar7 * -8) =
               *(uint *)(&stack0xffffffa4 + (uint)bVar7 * -8);
          *(uint *)((int)&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          if (puVar5 != &stack0xffffff88) {
            *puVar5 = local_78;
            *(uint *)(iVar6 + 0x580) = local_74;
            *(uint *)(iVar6 + 0x584) = local_70;
          }
          (**(code **)(*(int *)(local_3c + 0x154) + 0xe4))(local_3c);
          *(uint *)(param_1 + 0x20004) = 0;
        }
        if (*(int *)(param_1 + 0x2628) != 0) {
          (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,&stack0xffffffac);
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
      if (((local_2c < 0x3f19999a) && (0x3f199999 < *(int *)(param_1 + 0x2c9c))) &&
         (iVar6 = FUN_0040c550(*(uint *)(param_1 + 0x20004),"CShotgun"), iVar6 != 0))
      {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x20004) + 0x154) + 0xd8))
                  (*(int *)(param_1 + 0x20004));
      }
      break;
    case 0xc:
      if (((local_2c < 0x3ebd70a4) && (0x3ebd70a3 < *(int *)(param_1 + 0x2c9c))) &&
         (iVar6 = *(int *)(param_1 + 0x20004), iVar6 != 0)) {
        (**(code **)(*(int *)(iVar6 + 0x154) + 0x78))(iVar6,1);
      }
      break;
    case 0xd:
      if (((local_2c < 0x3f28f5c3) && (0x3f28f5c2 < *(int *)(param_1 + 0x2c9c))) &&
         (iVar6 = *(int *)(param_1 + 0x20004), iVar6 != 0)) {
        (**(code **)(*(int *)(iVar6 + 0x154) + 0x78))(iVar6,2);
      }
    }
    if (-1 < local_20) {
      iVar6 = *(int *)(param_1 + 0x20004);
      if (iVar6 != local_24) {
        if (iVar6 != 0) {
          uVar4 = *(uint *)(iVar6 + 0x2e0);
          if (uVar4 < 7) {
            if (uVar4 == 0) {
              iVar6 = 1;
            }
            else {
              iVar6 = 3;
            }
          }
          else if ((uVar4 < 8) || (uVar4 == 8)) {
            iVar6 = FUN_0040c600(iVar6,_DAT_01d1e2dc);
            if ((iVar6 == 0) || (*(int *)(iVar6 + 0x588) == 0)) {
              iVar6 = 0;
            }
            else {
              iVar6 = 3;
            }
          }
          else {
            iVar6 = 3;
          }
          if (iVar6 == local_20) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0x20004) + 0x154) + 0xdc))
                      (*(int *)(param_1 + 0x20004),1);
            *(uint *)(param_1 + 0x20004) = 0;
          }
        }
        if (*(int *)(param_1 + 0x1ffac) != 0) {
          if (local_24 == 0) {
LAB_00590922:
            iVar6 = 0;
          }
          else {
            uVar4 = *(uint *)(local_24 + 0x2e0);
            if (uVar4 < 7) {
              if (uVar4 == 0) {
                iVar6 = 1;
              }
              else {
                iVar6 = 3;
              }
            }
            else if ((uVar4 < 8) || (uVar4 == 8)) {
              iVar6 = FUN_0040c600(local_24,_DAT_01d1e2dc);
              if ((iVar6 == 0) || (*(int *)(iVar6 + 0x588) == 0)) goto LAB_00590922;
              iVar6 = 3;
            }
            else {
              iVar6 = 3;
            }
          }
          if ((iVar6 == local_20) && (*(int *)(param_1 + 0x20004) = local_24, local_24 != 0)) {
            (**(code **)(*(int *)(local_24 + 0x154) + 0xdc))(local_24,2);
          }
        }
      }
      if ((*(int *)(param_1 + 0x1ff5c) == 1) && (local_20 == 3)) {
        FUN_004ec2c0(param_1,1);
        *(uint *)(param_1 + 0x1ff5c) = 0;
      }
      if ((*(int *)(param_1 + 0x1ff8c) != 0) && (local_20 == 3)) {
        FUN_004f8d00(local_28,*(int *)(param_1 + 0x1ff8c),0);
        FUN_0051b160(0x01D2C900,*(uint *)(param_1 + 0x1ff8c));
        FUN_004325b0(param_1,1,*(uint *)(param_1 + 0x1ff8c),0,0);
        iVar6 = FUN_0040c550(*(uint *)(param_1 + 0x1ff8c),"CTrap");
        if (iVar6 == 0) {
          FUN_005247c0(local_34,0x21,1);
          if (*(int *)(param_1 + 0x1ff5c) != 0) {
            FUN_00494340(0x01C3EB54,"actionPending = %d\nstranger.cpp line %d",
                         *(int *)(param_1 + 0x1ff5c),0x141e);
          }
          *(uint *)(param_1 + 0x1ff5c) = 2;
        }
        else {
          FUN_005247c0(local_34,0x1f,1);
          *(uint *)(param_1 + 0x1ff5c) = 6;
        }
        *(uint *)(param_1 + 0x1ff8c) = 0;
      }
      if (local_20 == 10) {
        iVar6 = FUN_004f9ed0(local_28);
        if (iVar6 == 0) {
LAB_00590a23:
          *(uint *)(param_1 + 0x1ff54) = 1;
        }
        else {
          *(uint *)(param_1 + 0x1ff54) = 2;
        }
      }
      else if ((local_20 == 3) && (*(int *)(param_1 + 0x1ff54) < 2)) {
        iVar6 = FUN_004f9ed0(local_28);
        if (iVar6 != 0) goto LAB_00590a23;
        *(uint *)(param_1 + 0x1ff54) = 0;
      }
      if ((*(int *)(param_1 + 0x1ff5c) == 7) && ((local_20 == 0 || (local_20 == 8)))) {
        *(uint *)(param_1 + 0x1ff5c) = 0;
      }
      FUN_00434610(param_1,local_1c);
    }
    local_38 = local_38 + 1;
    if (1 < local_38) {
      return;
    }
  } while( true );
}
