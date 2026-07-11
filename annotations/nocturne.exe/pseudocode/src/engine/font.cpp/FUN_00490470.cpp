// Name: FUN_00490470
// Address: 00490470
// Address Range: [[00490470, 00490916]]
// Convention: unknown
// Signature: void FUN_00490470(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00490470(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte local_16c [300];
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  uint local_20;
  byte *local_1c;
  int local_18;
  byte *local_14;
  
  local_40 = (int *)FUN_00564c18(param_4 * 4);
  if (local_40 == (int *)0x0) {
    _DAT_01cc4800 = "..\\engine\\font.cpp";
    _DAT_01cc4804 = 0x1b9;
    FUN_004c8440("Out of memory");
  }
  iVar3 = 0;
  pbVar4 = *(byte **)(param_1 + 0x144 + param_2 * 4);
  local_20 = *(uint *)(param_1 + 0x3188);
  if (0 < param_3 * param_4) {
    do {
      local_20 = (uint)*pbVar4;
      if (local_20 != *(uint *)(param_1 + 0x3188)) break;
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 1;
      local_20 = *(uint *)(param_1 + 0x3188);
    } while (iVar3 < param_3 * param_4);
  }
  if (local_20 == *(uint *)(param_1 + 0x3188)) {
    FUN_00563c90(local_16c,"No character markers found in font file (%s).",param_2 * 0x50 + param_1 + 4)
    ;
    _DAT_01cc4804 = 0x1ce;
    _DAT_01cc4800 = "..\\engine\\font.cpp";
    FUN_004c8440(local_16c);
  }
  iVar3 = 0;
  pbVar4 = *(byte **)(param_1 + 0x144 + param_2 * 4);
  local_34 = 0;
  piVar2 = local_40;
  if (0 < param_4) {
    do {
      iVar5 = 0;
      pbVar7 = pbVar4;
      if (0 < param_3) {
        do {
          if (*pbVar7 == local_20) {
            local_34 = local_34 + 1;
            *piVar2 = iVar3;
            piVar2 = piVar2 + 1;
            break;
          }
          iVar5 = iVar5 + 1;
          pbVar7 = pbVar7 + 1;
        } while (iVar5 < param_3);
      }
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + param_3;
    } while (iVar3 < param_4);
  }
  local_34 = local_34 + -1;
  local_38 = 0;
  iVar3 = param_5;
  if (0 < local_34) {
    local_2c = param_1 + 4 + param_2 * 0x50;
    local_3c = param_1 + param_2 * 4;
    local_30 = local_40;
    do {
      local_18 = 0;
      local_14 = (byte *)(*(int *)(local_3c + 0x144) + *local_30 * param_3);
      local_24 = local_30;
      local_1c = local_14 + param_3;
      iVar5 = iVar3 * 4 + param_1;
      for (iVar6 = 0; iVar1 = iVar6 - local_28, iVar6 < param_3; iVar6 = iVar6 + 1) {
        if (local_18 == 0) {
          if (*local_14 == local_20) {
            local_18 = 1;
            local_28 = iVar6;
            if (0xff < iVar3) {
              FUN_00563c90(local_16c,"Too many chars: fontfile %s, chars %d",local_2c,iVar3);
              _DAT_01cc4804 = 0x202;
              _DAT_01cc4800 = "..\\engine\\font.cpp";
              FUN_004c8440(local_16c);
            }
            *(byte **)(iVar5 + 0x1d68) = local_1c;
          }
        }
        else if (*local_14 != local_20) {
          *(int *)(iVar5 + 0x2568) = iVar1;
          local_18 = 0;
          if (*(int *)(param_1 + 0x3168) < iVar1) {
            *(int *)(param_1 + 0x3168) = iVar1;
          }
          iVar1 = FUN_00490920(param_1,*(uint *)(iVar5 + 0x1d68),
                               *(uint *)(iVar5 + 0x2568),local_24[1] - (*local_24 + 1),param_3
                              );
          *(int *)(iVar5 + 0x2968) = iVar1;
          if (*(int *)(param_1 + 0x316c) < iVar1) {
            *(int *)(param_1 + 0x316c) = iVar1;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 4;
        }
        local_1c = local_1c + 1;
        local_14 = local_14 + 1;
      }
      if (local_18 == 1) {
        *(int *)(iVar5 + 0x2568) = iVar1;
        if (*(int *)(param_1 + 0x3168) < iVar1) {
          *(int *)(param_1 + 0x3168) = iVar1;
        }
        iVar6 = iVar3 * 4 + param_1;
        iVar5 = FUN_00490920(param_1,*(uint *)(iVar6 + 0x1d68),*(uint *)(iVar6 + 0x2568)
                             ,local_30[1] - (*local_30 + 1),param_3);
        *(int *)(iVar6 + 0x2968) = iVar5;
        if (*(int *)(param_1 + 0x316c) < iVar5) {
          *(int *)(param_1 + 0x316c) = iVar5;
        }
        iVar3 = iVar3 + 1;
      }
      local_30 = local_30 + 1;
      local_38 = local_38 + 1;
    } while (local_38 < local_34);
  }
  if (param_5 < iVar3) {
    iVar5 = param_5 * 4 + param_1;
    do {
      param_5 = param_5 + 1;
      *(int *)(iVar5 + 0x2168) = param_2;
      iVar5 = iVar5 + 4;
    } while (param_5 < iVar3);
  }
  *(uint *)(param_1 + 0x3170) = *(uint *)(param_1 + 0x316c);
  FUN_00564486(local_40);
  return;
}
