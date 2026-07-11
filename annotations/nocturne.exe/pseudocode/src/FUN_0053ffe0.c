// Name: FUN_0053ffe0
// Address: 0053ffe0
// Address Range: [[0053ffe0, 005402e5]]
// Convention: unknown
// Signature: void FUN_0053ffe0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053ffe0(int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  *(uint *)(param_1 + 0x1fa9c) = 0;
  if (*(int *)(param_1 + 0xbca0) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x2590) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1faa0) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1fa3c) == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x1fa94);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x24f0);
LAB_0054003e:
    if ((iVar5 != 0) && (uVar2 = (**(code **)(*(int *)(iVar5 + 0x14c) + 0x6c))(iVar5), uVar2 != 0))
    {
      iVar5 = 0;
      while( true ) {
        iVar7 = *(int *)(param_1 + 0x1faa4) + 1;
        *(int *)(param_1 + 0x1faa4) = iVar7;
        if ((iVar7 < 0) || (1 < iVar7)) {
          *(uint *)(param_1 + 0x1faa4) = 0;
        }
        uVar6 = *(int *)(param_1 + 0x1faa4) + 0xc;
        uVar3 = 0;
        if (0xb < uVar6) {
          if (uVar6 < 0xd) {
            uVar3 = 1;
          }
          else if (uVar6 == 0xd) {
            uVar3 = 2;
          }
        }
        if ((uVar3 & uVar2) != 0) break;
        iVar5 = iVar5 + 1;
        if (0x13 < iVar5) {
          return;
        }
      }
      *(uint *)(param_1 + 0x2a88) = 0;
      *(uint *)(param_1 + 0x1faa0) = 7;
      *(int *)(param_1 + 0x2a84) = *(int *)(param_1 + 0x1faa4) + 0xc;
      return;
    }
  }
  else if (*(int *)(iVar5 + 0x2d8) == 7) goto LAB_0054003e;
  if (*(int *)(param_1 + 0x1fa94) == 0) {
    return;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x1fa94) + 0x2d8);
  if (iVar5 == 3) {
    return;
  }
  if ((*(int *)(param_1 + 0x1f59c) == 0) && (iVar5 == 0)) {
    iVar5 = param_1 + 0x1fa50;
    iVar7 = param_1 + 0x1fa70;
    if (*(int *)(param_1 + 0x1fa98) != 0) {
      iVar7 = iVar5;
      iVar5 = param_1 + 0x1fa70;
    }
    if ((*(int *)(iVar7 + 0x1c) == 2) && (*(int *)(iVar5 + 0x1c) != 2)) {
      *(uint *)(param_1 + 0x1fa98) = (uint)(*(int *)(param_1 + 0x1fa98) == 0);
    }
  }
  if (*(int *)(param_1 + 0x1fa94) == 0) {
switchD_005400cd_caseD_3:
    uVar4 = 0;
  }
  else {
    switch(*(uint *)(*(int *)(param_1 + 0x1fa94) + 0x2d8)) {
    case 0:
    case 5:
      uVar4 = 2;
      break;
    case 1:
      uVar4 = 4;
      break;
    case 2:
      uVar4 = 5;
      break;
    default:
      goto switchD_005400cd_caseD_3;
    case 4:
      uVar4 = 7;
      break;
    case 7:
      uVar4 = 8;
    }
  }
  fVar1 = (float)FUN_0042a9d0(param_1,uVar4);
  if ((float)_DAT_00595eb7 <= fVar1) {
    iVar5 = param_1 + 0x1fa50;
    if ((*(int *)(param_1 + 0x1fa98) != 0) && (*(int *)(*(int *)(param_1 + 0x1fa94) + 0x2d8) == 0))
    {
      iVar5 = param_1 + 0x1fa70;
    }
    if (((1.0 <= *(float *)(iVar5 + 0x14)) && (*(float *)(iVar5 + 0x10) <= 0.0)) &&
       (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa94) + 0x14c) + 0xe0))
                          (*(int *)(param_1 + 0x1fa94)), iVar5 != 0)) {
      if (*(int *)(*(int *)(param_1 + 0x1fa94) + 0x2d8) == 0) {
        FUN_0053a660(param_1,*(uint *)(param_1 + 0x1fa98));
        *(uint *)(param_1 + 0x1fa98) = (uint)(*(int *)(param_1 + 0x1fa98) == 0);
      }
      *(uint *)(param_1 + 0x1fa9c) = 0;
      iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa94) + 0x14c) + 0xdc))
                        (*(int *)(param_1 + 0x1fa94));
      if (iVar5 != 0) {
        *(uint *)(param_1 + 0x1fa9c) = 1;
      }
      FUN_0053a660(param_1,0);
      if (*(int *)(*(int *)(param_1 + 0x1fa94) + 0x2d4) == 2) {
        *(uint *)(param_1 + 0x2a88) = 0;
        *(uint *)(param_1 + 0x2a84) = 8;
        return;
      }
    }
  }
  return;
}
