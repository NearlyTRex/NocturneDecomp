// Name: FUN_005914a0
// Address: 005914a0
// Address Range: [[005914a0, 005917af]]
// Convention: unknown
// Signature: void FUN_005914a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005914a0(int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  *(uint *)(param_1 + 0x2000c) = 0;
  if (*(int *)(param_1 + 0xc1e4) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x26fc) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1ff5c) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1ffac) == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x20004);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x2628);
LAB_005914fe:
    if ((iVar5 != 0) && (uVar2 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x74))(iVar5), uVar2 != 0))
    {
      iVar5 = 0;
      while( true ) {
        iVar7 = *(int *)(param_1 + 0x20010) + 1;
        *(int *)(param_1 + 0x20010) = iVar7;
        if ((iVar7 < 0) || (1 < iVar7)) {
          *(uint *)(param_1 + 0x20010) = 0;
        }
        uVar6 = *(int *)(param_1 + 0x20010) + 0xc;
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
      *(uint *)(param_1 + 0x2c9c) = 0;
      *(uint *)(param_1 + 0x1ff5c) = 7;
      *(int *)(param_1 + 0x2c98) = *(int *)(param_1 + 0x20010) + 0xc;
      return;
    }
  }
  else if (*(int *)(iVar5 + 0x2e0) == 7) goto LAB_005914fe;
  if (*(int *)(param_1 + 0x20004) == 0) {
    return;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x20004) + 0x2e0);
  if (iVar5 == 3) {
    return;
  }
  if ((*(int *)(param_1 + 0x1fae4) == 0) && (iVar5 == 0)) {
    iVar5 = param_1 + 0x1ffc0;
    iVar7 = param_1 + 0x1ffe0;
    if (*(int *)(param_1 + 0x20008) != 0) {
      iVar7 = iVar5;
      iVar5 = param_1 + 0x1ffe0;
    }
    if ((*(int *)(iVar7 + 0x1c) == 2) && (*(int *)(iVar5 + 0x1c) != 2)) {
      *(uint *)(param_1 + 0x20008) = (uint)(*(int *)(param_1 + 0x20008) == 0);
    }
  }
  if (*(int *)(param_1 + 0x20004) == 0) {
switchD_0059158d_caseD_3:
    uVar4 = 0;
  }
  else {
    switch(*(uint *)(*(int *)(param_1 + 0x20004) + 0x2e0)) {
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
      goto switchD_0059158d_caseD_3;
    case 4:
      uVar4 = 7;
      break;
    case 7:
      uVar4 = 8;
      break;
    case 9:
    case 10:
      uVar4 = 0xe;
    }
  }
  fVar1 = (float)FUN_00434590(param_1,uVar4);
  if ((float)_DAT_005f70c1 <= fVar1) {
    iVar5 = param_1 + 0x1ffc0;
    if ((*(int *)(param_1 + 0x20008) != 0) && (*(int *)(*(int *)(param_1 + 0x20004) + 0x2e0) == 0))
    {
      iVar5 = param_1 + 0x1ffe0;
    }
    if (((1.0 <= *(float *)(iVar5 + 0x14)) && (*(float *)(iVar5 + 0x10) <= 0.0)) &&
       (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x20004) + 0x154) + 0xe8))
                          (*(int *)(param_1 + 0x20004)), iVar5 != 0)) {
      if (*(int *)(*(int *)(param_1 + 0x20004) + 0x2e0) == 0) {
        FUN_0058aeb0(param_1,*(uint *)(param_1 + 0x20008));
        *(uint *)(param_1 + 0x20008) = (uint)(*(int *)(param_1 + 0x20008) == 0);
      }
      *(uint *)(param_1 + 0x2000c) = 0;
      iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x20004) + 0x154) + 0xe4))
                        (*(int *)(param_1 + 0x20004));
      if (iVar5 != 0) {
        *(uint *)(param_1 + 0x2000c) = 1;
      }
      FUN_0058aeb0(param_1,0);
      if (*(int *)(*(int *)(param_1 + 0x20004) + 0x2dc) == 2) {
        *(uint *)(param_1 + 0x2c9c) = 0;
        *(uint *)(param_1 + 0x2c98) = 8;
        return;
      }
    }
  }
  return;
}
