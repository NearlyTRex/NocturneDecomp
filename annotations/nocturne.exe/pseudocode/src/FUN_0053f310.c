// Name: FUN_0053f310
// Address: 0053f310
// Address Range: [[0053f310, 0053fc38]]
// Convention: unknown
// Signature: void FUN_0053f310(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0053f84f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053f310(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  byte local_60 [12];
  byte local_54 [20];
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
  int local_18;
  float local_14;
  
  if ((*(int *)(param_1 + 0x2a84) == 0xe) && (*(int *)(param_1 + 0x24f0) == 0)) {
    *(uint *)(param_1 + 0x2a88) = 0;
    *(uint *)(param_1 + 0x2a84) = 0;
  }
  local_3c = -1;
  local_18 = 0;
  if (*(int *)(param_1 + 0x1fa18) == 0) {
    if (*(int *)(param_1 + 0x1fa3c) != 0) {
      if (*(int *)(param_1 + 0x24f0) == 0) {
        local_18 = *(int *)(param_1 + 0x1f8d0);
      }
      else {
        local_18 = FUN_0040d890(*(int *)(param_1 + 0x24f0),_DAT_02ddf9a8);
        if ((local_18 == 0) &&
           (uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x24f0) + 0x14c) + 0x6c))
                              (*(int *)(param_1 + 0x24f0)), (uVar2 & 3) != 0)) {
          local_3c = 8;
        }
      }
      if ((local_18 == 0) && (local_3c < 0)) {
        *(uint *)(param_1 + 0x1fa3c) = 0;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x1fa3c) = 0;
  }
  local_1c = param_1 + 0x1f5a0;
  local_40 = 0;
  local_2c = param_1 + 0x150;
  local_30 = 0;
  do {
    if (param_2 <= 0.0) {
LAB_0053f38b:
      if (local_40 == 0) {
        return;
      }
      goto LAB_0053fc23;
    }
    iVar5 = *(int *)(param_1 + 0x1faa0);
    if ((iVar5 == 1) || (*(int *)(param_1 + 0x1fa1c) != 0)) {
LAB_0053f41f:
      iVar5 = 3;
    }
    else if (iVar5 == 2) {
      iVar5 = 0;
    }
    else if (iVar5 == 3) {
      local_14 = (float)FUN_0042a9d0(param_1,6);
      iVar5 = 6;
      if ((float)_DAT_00595e0f < local_14) {
        fVar1 = param_2 * (float)_DAT_00595e07 + *(float *)(param_1 + 0x1fa4c);
        *(float *)(param_1 + 0x1fa4c) = fVar1;
        if (0x428C0000 < fVar1) {
          *(float *)(param_1 + 0x1fa4c) = 0x428C0000;
        }
        if (*(int *)(param_1 + 0xbca0) == 0) goto switchD_0053f7b3_caseD_3;
        goto LAB_0053f38b;
      }
    }
    else {
      iVar5 = FUN_004c1830(local_1c);
      if ((iVar5 != 0) && (*(int *)(param_1 + 0x1fa00) == 0)) goto LAB_0053f41f;
      iVar5 = FUN_004c1830(local_1c);
      if ((iVar5 == 0) || (*(int *)(param_1 + 0x1fa00) != 1)) {
        iVar5 = FUN_004c1830(local_1c);
        if ((iVar5 == 0) && (*(int *)(param_1 + 0x1fa00) == 2)) {
          iVar5 = 10;
        }
        else {
          iVar5 = FUN_004c1830(local_1c);
          if ((iVar5 == 0) && (*(int *)(param_1 + 0x1fa00) == 1)) goto LAB_0053f41f;
          iVar5 = local_3c;
          if (local_3c < 0) {
            iVar5 = *(int *)(param_1 + 0x1fa94);
            if (iVar5 == local_18) {
              if (*(int *)(param_1 + 0x1fa94) == 0) {
switchD_0053f7b3_caseD_3:
                iVar5 = 0;
              }
              else {
                switch(*(uint *)(*(int *)(param_1 + 0x1fa94) + 0x2d8)) {
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
                  goto switchD_0053f7b3_caseD_3;
                case 4:
                  iVar5 = 7;
                  break;
                case 7:
                  iVar5 = 8;
                }
              }
            }
            else if (iVar5 == 0) {
              if (local_18 == 0) {
                iVar5 = 0;
              }
              else {
                uVar2 = *(uint *)(local_18 + 0x2d8);
                if (uVar2 < 7) goto joined_r0x0053f88b;
                if (((7 < uVar2) && (uVar2 != 8)) ||
                   ((iVar5 = FUN_0040d890(local_18,_DAT_01cc56dc), iVar5 != 0 &&
                    (*(int *)(iVar5 + 0x580) != 0)))) goto LAB_0053f41f;
                iVar5 = 0;
              }
            }
            else {
              uVar2 = *(uint *)(iVar5 + 0x2d8);
              if (uVar2 < 7) {
joined_r0x0053f88b:
                if (uVar2 != 0) goto LAB_0053f41f;
                iVar5 = 1;
              }
              else {
                if (((7 < uVar2) && (uVar2 != 8)) ||
                   ((iVar5 = FUN_0040d890(iVar5,_DAT_01cc56dc), iVar5 != 0 &&
                    (*(int *)(iVar5 + 0x580) != 0)))) goto LAB_0053f41f;
                iVar5 = 0;
              }
            }
          }
        }
      }
      else {
        iVar5 = 10;
      }
    }
    local_28 = *(int *)(param_1 + 0x2a88);
    iVar3 = FUN_0042a500(param_1,&param_2,iVar5);
    local_14 = (float)(*(int *)(param_1 + 0x2650 + *(int *)(param_1 + 0x2a84) * 0x38) * 0x54c);
    iVar4 = FUN_004e1890(local_2c);
    local_38 = (int)local_14 + iVar4 + 0x968;
    switch(*(uint *)(param_1 + 0x2a84)) {
    case 6:
      local_20 = FUN_0040d890(*(uint *)(param_1 + 0x1fa94),_DAT_01bca0c0);
      if (((local_20 != 0) && (iVar4 = FUN_0046ed80(local_20), iVar4 == 0)) &&
         (local_14 = (float)(0xb / (longlong)*(int *)(local_38 + 100)),
         (float)(int)local_14 <= *(float *)(param_1 + 0x2a88))) {
        FUN_0046ed30(local_20);
      }
      break;
    case 7:
      if ((*(int *)(param_1 + 0x1faa0) == 3) &&
         (local_14 = (float)(0xb / (longlong)*(int *)(local_38 + 100)),
         (float)(int)local_14 <= *(float *)(param_1 + 0x2a88))) {
        FUN_0053f260(param_1,local_54);
        local_34 = FUN_0040d890(*(uint *)(param_1 + 0x1fa94),_DAT_01bca0c0);
        local_24 = local_34;
        if (local_34 != 0) {
          puVar6 = (uint *)FUN_0040a200(param_1,local_60,local_54);
          if ((uint *)(local_24 + 0x574) != puVar6) {
            *(uint *)(local_24 + 0x574) = *puVar6;
            *(uint *)(local_24 + 0x578) = puVar6[1];
            *(uint *)(local_24 + 0x57c) = puVar6[2];
          }
          (**(code **)(*(int *)(local_34 + 0x14c) + 0xdc))(local_34);
          *(uint *)(param_1 + 0x1fa94) = 0;
        }
        if (*(int *)(param_1 + 0x24f0) != 0) {
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,local_54);
        }
        *(uint *)(param_1 + 0x1faa0) = 0;
        *(uint *)(param_1 + 0x1fa4c) = 0x41200000;
      }
      if (1.0 <= *(float *)(param_1 + 0x2a88)) {
        *(uint *)(param_1 + 0x2a84) = 0;
        *(uint *)(param_1 + 0x2a88) = 0;
      }
      break;
    case 8:
      if (((local_28 < 0x3f19999a) && (0x3f199999 < *(int *)(param_1 + 0x2a88))) &&
         (iVar4 = FUN_0040d7e0(*(uint *)(param_1 + 0x1fa94),"CShotgun"), iVar4 != 0))
      {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa94) + 0x14c) + 0xd0))
                  (*(int *)(param_1 + 0x1fa94));
      }
      break;
    case 0xc:
      if (((local_28 < 0x3ebd70a4) && (0x3ebd70a3 < *(int *)(param_1 + 0x2a88))) &&
         (iVar4 = *(int *)(param_1 + 0x1fa94), iVar4 != 0)) {
        (**(code **)(*(int *)(iVar4 + 0x14c) + 0x70))(iVar4,1);
      }
      break;
    case 0xd:
      if (((local_28 < 0x3f28f5c3) && (0x3f28f5c2 < *(int *)(param_1 + 0x2a88))) &&
         (iVar4 = *(int *)(param_1 + 0x1fa94), iVar4 != 0)) {
        (**(code **)(*(int *)(iVar4 + 0x14c) + 0x70))(iVar4,2);
      }
    }
    if (-1 < iVar3) {
      iVar4 = *(int *)(param_1 + 0x1fa94);
      if (iVar4 != local_18) {
        if (iVar4 != 0) {
          uVar2 = *(uint *)(iVar4 + 0x2d8);
          if (uVar2 < 7) {
            if (uVar2 == 0) {
              iVar4 = 1;
            }
            else {
              iVar4 = 3;
            }
          }
          else if ((uVar2 < 8) || (uVar2 == 8)) {
            iVar4 = FUN_0040d890(iVar4,_DAT_01cc56dc);
            if ((iVar4 == 0) || (*(int *)(iVar4 + 0x580) == 0)) {
              iVar4 = 0;
            }
            else {
              iVar4 = 3;
            }
          }
          else {
            iVar4 = 3;
          }
          if (iVar3 == iVar4) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa94) + 0x14c) + 0xd4))
                      (*(int *)(param_1 + 0x1fa94),1);
            *(uint *)(param_1 + 0x1fa94) = 0;
            local_40 = 1;
          }
        }
        if (*(int *)(param_1 + 0x1fa3c) != 0) {
          if (local_18 == 0) {
LAB_0053f520:
            iVar4 = 0;
          }
          else {
            uVar2 = *(uint *)(local_18 + 0x2d8);
            if (uVar2 < 7) {
              if (uVar2 == 0) {
                iVar4 = 1;
              }
              else {
                iVar4 = 3;
              }
            }
            else if ((uVar2 < 8) || (uVar2 == 8)) {
              iVar4 = FUN_0040d890(local_18,_DAT_01cc56dc);
              if ((iVar4 == 0) || (*(int *)(iVar4 + 0x580) == 0)) goto LAB_0053f520;
              iVar4 = 3;
            }
            else {
              iVar4 = 3;
            }
          }
          if (iVar3 == iVar4) {
            *(int *)(param_1 + 0x1fa94) = local_18;
            if (local_18 != 0) {
              (**(code **)(*(int *)(local_18 + 0x14c) + 0xd4))(local_18,2);
            }
            local_40 = 1;
          }
        }
      }
      if ((*(int *)(param_1 + 0x1faa0) == 1) && (iVar3 == 3)) {
        FUN_004b5c70(param_1,1);
        *(uint *)(param_1 + 0x1faa0) = 0;
      }
      if ((*(int *)(param_1 + 0x1fa1c) != 0) && (iVar3 == 3)) {
        FUN_004c07b0(local_1c,*(int *)(param_1 + 0x1fa1c),0);
        FUN_004d8c60(0x01CC9450,*(uint *)(param_1 + 0x1fa1c));
        FUN_00428f40(param_1,1,*(uint *)(param_1 + 0x1fa1c),0);
        iVar4 = FUN_0040d7e0(*(uint *)(param_1 + 0x1fa1c),"CTrap");
        if (iVar4 == 0) {
          FUN_004e16b0(local_2c,0x16,1);
          if (*(int *)(param_1 + 0x1faa0) != 0) {
            FUN_0046fb40(0x01BCD074,"actionPending = %d\nstranger.cpp line %d",
                         *(int *)(param_1 + 0x1faa0),0x13ba);
          }
          *(uint *)(param_1 + 0x1faa0) = 2;
        }
        else {
          FUN_004e16b0(local_2c,0x14,1);
          *(uint *)(param_1 + 0x1faa0) = 6;
        }
        *(uint *)(param_1 + 0x1fa1c) = 0;
      }
      if (iVar3 == 10) {
        iVar4 = FUN_004c1830(local_1c);
        if (iVar4 == 0) {
LAB_0053f61d:
          *(uint *)(param_1 + 0x1fa00) = 1;
        }
        else {
          *(uint *)(param_1 + 0x1fa00) = 2;
        }
      }
      else if ((iVar3 == 3) && (*(int *)(param_1 + 0x1fa00) < 2)) {
        iVar4 = FUN_004c1830(local_1c);
        if (iVar4 != 0) goto LAB_0053f61d;
        *(uint *)(param_1 + 0x1fa00) = 0;
      }
      if ((*(int *)(param_1 + 0x1faa0) == 7) && ((iVar3 == 0 || (iVar3 == 8)))) {
        *(uint *)(param_1 + 0x1faa0) = 0;
      }
      FUN_0042aa50(param_1,iVar5);
    }
    local_30 = local_30 + 1;
  } while (local_30 < 2);
  if (local_40 == 0) {
    return;
  }
LAB_0053fc23:
  FUN_004940d0(0x01C70F74);
  return;
}
