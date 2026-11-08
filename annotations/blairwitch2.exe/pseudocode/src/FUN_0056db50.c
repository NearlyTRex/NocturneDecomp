// Name: FUN_0056db50
// Address: 0056db50
// Address Range: [[0056db50, 0056e4ad]]
// Convention: unknown
// Signature: void FUN_0056db50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056db50(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  byte bVar7;
  uint auStackY_1060 [1013];
  uint local_78;
  uint local_6c;
  uint local_60;
  uint local_5c [7];
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
  if ((*(int *)(param_1 + 0x2d04) == 0xe) && (*(int *)(param_1 + 0x2698) == 0)) {
    *(uint *)(param_1 + 0x2d08) = 0;
    *(uint *)(param_1 + 0x2d04) = 0;
  }
  local_40 = -1;
  local_24 = 0;
  if (*(int *)(param_1 + 0x25618) == 0) {
    if (*(int *)(param_1 + 0x25640) != 0) {
      if (*(int *)(param_1 + 0x2698) == 0) {
        local_24 = *(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4);
      }
      else {
        local_24 = FUN_0040c8f0(*(int *)(param_1 + 0x2698),_DAT_02661f38);
        if ((local_24 == 0) &&
           (uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x2698) + 0x2b0) + 0x7c))
                              (*(int *)(param_1 + 0x2698)), (uVar4 & 3) != 0)) {
          local_40 = 8;
        }
      }
      if ((local_24 == 0) && (local_40 < 0)) {
        *(uint *)(param_1 + 0x25640) = 0;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x25640) = 0;
  }
  local_28 = param_1 + 0x2437c;
  local_34 = param_1 + 0x2b4;
  local_38 = 0;
  do {
    if (param_2 <= 0.0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x256a4);
    if ((iVar6 == 1) || (*(int *)(param_1 + 0x2561c) != 0)) {
LAB_0056dbda:
      local_1c = 3;
      iVar6 = local_1c;
    }
    else if (iVar6 == 2) {
      iVar6 = 0;
    }
    else if (iVar6 == 3) {
      local_18 = (float)FUN_0042a5a0(param_1,6);
      local_1c = 6;
      iVar6 = local_1c;
      if ((float)_DAT_005ebda5 < local_18) {
        fVar1 = param_2 * (float)_DAT_005ebd9d + *(float *)(param_1 + 0x25650);
        *(float *)(param_1 + 0x25650) = fVar1;
        if (0x428C0000 < fVar1) {
          *(float *)(param_1 + 0x25650) = 0x428C0000;
        }
        if (*(int *)(param_1 + 0x10a74) != 0) {
          return;
        }
        iVar6 = 0;
      }
    }
    else {
      iVar6 = FUN_004dccb0(local_28);
      if ((iVar6 != 0) && (*(int *)(param_1 + 0x255e8) == 0)) goto LAB_0056dbda;
      iVar6 = FUN_004dccb0(local_28);
      if ((iVar6 == 0) || (*(int *)(param_1 + 0x255e8) != 1)) {
        iVar6 = FUN_004dccb0(local_28);
        if ((iVar6 == 0) && (*(int *)(param_1 + 0x255e8) == 2)) {
          local_1c = 10;
          iVar6 = local_1c;
        }
        else {
          iVar6 = FUN_004dccb0(local_28);
          if ((iVar6 == 0) && (*(int *)(param_1 + 0x255e8) == 1)) goto LAB_0056dbda;
          if (local_40 < 0) {
            iVar6 = *(int *)(param_1 + 0x25698);
            if (iVar6 == local_24) {
              if (*(int *)(param_1 + 0x25698) == 0) {
switchD_0056dff9_caseD_3:
                iVar6 = 0;
              }
              else {
                switch(*(uint *)(*(int *)(param_1 + 0x25698) + 0x43c)) {
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
                  goto switchD_0056dff9_caseD_3;
                case 4:
                  iVar6 = 7;
                  break;
                case 7:
                  iVar6 = 8;
                }
              }
            }
            else if (iVar6 == 0) {
              iVar6 = 0;
              if (local_24 != 0) {
                uVar4 = *(uint *)(local_24 + 0x43c);
                if (uVar4 < 7) {
                  if (uVar4 == 0) {
                    iVar6 = 1;
                  }
                  else {
                    local_1c = 3;
                    iVar6 = local_1c;
                  }
                }
                else if ((uVar4 < 8) || (uVar4 == 9)) {
                  iVar6 = FUN_0040c8f0(local_24,_DAT_01d0557c);
                  if ((iVar6 == 0) || (*(int *)(iVar6 + 0x6e4) == 0)) {
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
              uVar4 = *(uint *)(iVar6 + 0x43c);
              if (uVar4 < 7) {
                if (uVar4 == 0) {
                  iVar6 = 1;
                }
                else {
                  local_1c = 3;
                  iVar6 = local_1c;
                }
              }
              else if ((uVar4 < 8) || (uVar4 == 9)) {
                iVar6 = FUN_0040c8f0(iVar6,_DAT_01d0557c);
                if ((iVar6 == 0) || (*(int *)(iVar6 + 0x6e4) == 0)) {
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
    local_30 = *(int *)(param_1 + 0x2d08);
    local_20 = FUN_0042a0c0(param_1,&param_2,local_1c);
    iVar6 = *(int *)(param_1 + 0x2860 + *(int *)(param_1 + 0x2d04) * 0x38);
    iVar2 = FUN_00503860(local_34);
    iVar6 = iVar6 * 0x118 + iVar2 + 0x1c28;
    switch(*(uint *)(param_1 + 0x2d04)) {
    case 6:
      iVar2 = FUN_0040c8f0(*(uint *)(param_1 + 0x25698),_DAT_01c225d8);
      if (((iVar2 != 0) && (iVar3 = FUN_0047a1a0(iVar2), iVar3 == 0)) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(iVar6 + 100)),
         (float)(int)local_18 <= *(float *)(param_1 + 0x2d08))) {
        FUN_0047a150(iVar2);
      }
      break;
    case 7:
      if ((*(int *)(param_1 + 0x256a4) == 3) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(iVar6 + 100)),
         (float)(int)local_18 <= *(float *)(param_1 + 0x2d08))) {
        FUN_0056da90(param_1);
        local_78 = local_5c[2];
        *(uint *)((int)&stack0xffffff8c + (uint)bVar7 * 0xfffffffe * 4) =
             local_5c[(uint)bVar7 * 0xfffffffe + 3];
        *(uint *)(&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             local_5c[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 4];
        local_3c = FUN_0040c8f0(*(uint *)(param_1 + 0x25698),_DAT_01c225d8);
        local_2c = local_3c;
        if (local_3c != 0) {
          FUN_00408cf0(param_1,&stack0xffffff88);
          iVar6 = local_2c;
          puVar5 = (uint *)(local_2c + 0x6d8);
          local_60 = local_6c;
          *(uint *)((int)local_5c + (uint)bVar7 * -8) =
               *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8);
          local_5c[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 1] =
               *(uint *)(&stack0xffffff9c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          if (puVar5 != &local_60) {
            *puVar5 = local_60;
            *(uint *)(iVar6 + 0x6dc) = local_5c[0];
            *(uint *)(iVar6 + 0x6e0) = local_5c[1];
          }
          (**(code **)(*(int *)(local_3c + 0x2b0) + 0xec))(local_3c);
          *(uint *)(param_1 + 0x25698) = 0;
        }
        if (*(int *)(param_1 + 0x2698) != 0) {
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,&stack0xffffff88);
        }
        *(uint *)(param_1 + 0x256a4) = 0;
        *(uint *)(param_1 + 0x25650) = 0x41200000;
      }
      if (1.0 <= *(float *)(param_1 + 0x2d08)) {
        *(uint *)(param_1 + 0x2d04) = 0;
        *(uint *)(param_1 + 0x2d08) = 0;
      }
      break;
    case 8:
      if (((local_30 < 0x3f19999a) && (0x3f199999 < *(int *)(param_1 + 0x2d08))) &&
         (iVar6 = FUN_0040c840(*(uint *)(param_1 + 0x25698),"CShotgun"), iVar6 != 0))
      {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x25698) + 0x2b0) + 0xe0))
                  (*(int *)(param_1 + 0x25698));
      }
      break;
    case 0xc:
      if (((local_30 < 0x3ebd70a4) && (0x3ebd70a3 < *(int *)(param_1 + 0x2d08))) &&
         (iVar6 = *(int *)(param_1 + 0x25698), iVar6 != 0)) {
        (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x80))(iVar6,1);
      }
      break;
    case 0xd:
      if (((local_30 < 0x3f28f5c3) && (0x3f28f5c2 < *(int *)(param_1 + 0x2d08))) &&
         (iVar6 = *(int *)(param_1 + 0x25698), iVar6 != 0)) {
        (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x80))(iVar6,2);
      }
    }
    if (-1 < local_20) {
      iVar6 = *(int *)(param_1 + 0x25698);
      if (iVar6 != local_24) {
        if (iVar6 != 0) {
          uVar4 = *(uint *)(iVar6 + 0x43c);
          if (uVar4 < 7) {
            if (uVar4 == 0) {
              iVar6 = 1;
            }
            else {
              iVar6 = 3;
            }
          }
          else if ((uVar4 < 8) || (uVar4 == 9)) {
            iVar6 = FUN_0040c8f0(iVar6,_DAT_01d0557c);
            if ((iVar6 == 0) || (*(int *)(iVar6 + 0x6e4) == 0)) {
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
            (**(code **)(*(int *)(*(int *)(param_1 + 0x25698) + 0x2b0) + 0xe4))
                      (*(int *)(param_1 + 0x25698),1);
            *(uint *)(param_1 + 0x25698) = 0;
          }
        }
        if (*(int *)(param_1 + 0x25640) != 0) {
          if (local_24 == 0) {
LAB_0056dcd2:
            iVar6 = 0;
          }
          else {
            uVar4 = *(uint *)(local_24 + 0x43c);
            if (uVar4 < 7) {
              if (uVar4 == 0) {
                iVar6 = 1;
              }
              else {
                iVar6 = 3;
              }
            }
            else if ((uVar4 < 8) || (uVar4 == 9)) {
              iVar6 = FUN_0040c8f0(local_24,_DAT_01d0557c);
              if ((iVar6 == 0) || (*(int *)(iVar6 + 0x6e4) == 0)) goto LAB_0056dcd2;
              iVar6 = 3;
            }
            else {
              iVar6 = 3;
            }
          }
          if ((iVar6 == local_20) && (*(int *)(param_1 + 0x25698) = local_24, local_24 != 0)) {
            (**(code **)(*(int *)(local_24 + 0x2b0) + 0xe4))(local_24,2);
          }
        }
      }
      if ((*(int *)(param_1 + 0x256a4) == 1) && (local_20 == 3)) {
        FUN_004cff90(param_1,1);
        *(uint *)(param_1 + 0x256a4) = 0;
      }
      if ((*(int *)(param_1 + 0x2561c) != 0) && (local_20 == 3)) {
        FUN_004db8e0(local_28,*(int *)(param_1 + 0x2561c),0);
        FUN_004fc200(0x01D182F0,*(uint *)(param_1 + 0x2561c));
        FUN_00428b10(param_1,1,*(uint *)(param_1 + 0x2561c),0,0);
        iVar6 = FUN_0040c840(*(uint *)(param_1 + 0x2561c),"CTrap");
        if (iVar6 == 0) {
          FUN_00503620(local_34,0x16,1);
          if (*(int *)(param_1 + 0x256a4) != 0) {
            FUN_0047bdf0(0x01C25594,"actionPending = %d\nstranger.cpp line %d",
                         *(int *)(param_1 + 0x256a4),0x13a9);
          }
          *(uint *)(param_1 + 0x256a4) = 2;
        }
        else {
          FUN_00503620(local_34,0x14,1);
          *(uint *)(param_1 + 0x256a4) = 6;
        }
        *(uint *)(param_1 + 0x2561c) = 0;
      }
      if (local_20 == 10) {
        iVar6 = FUN_004dccb0(local_28);
        if (iVar6 == 0) {
LAB_0056ddd3:
          *(uint *)(param_1 + 0x255e8) = 1;
        }
        else {
          *(uint *)(param_1 + 0x255e8) = 2;
        }
      }
      else if ((local_20 == 3) && (*(int *)(param_1 + 0x255e8) < 2)) {
        iVar6 = FUN_004dccb0(local_28);
        if (iVar6 != 0) goto LAB_0056ddd3;
        *(uint *)(param_1 + 0x255e8) = 0;
      }
      if ((*(int *)(param_1 + 0x256a4) == 7) && ((local_20 == 0 || (local_20 == 8)))) {
        *(uint *)(param_1 + 0x256a4) = 0;
      }
      FUN_0042a620(param_1,local_1c);
    }
    local_38 = local_38 + 1;
    if (1 < local_38) {
      return;
    }
  } while( true );
}
