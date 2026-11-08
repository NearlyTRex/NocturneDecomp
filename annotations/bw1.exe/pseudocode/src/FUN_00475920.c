// Name: FUN_00475920
// Address: 00475920
// Address Range: [[00475920, 00475c08]]
// Convention: unknown
// Signature: void FUN_00475920(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00475920(int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
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
LAB_0047597e:
    if ((iVar5 != 0) && (uVar2 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x74))(iVar5), uVar2 != 0))
    {
      iVar5 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x20010) + 1;
        *(int *)(param_1 + 0x20010) = iVar6;
        if ((iVar6 < 0) || (1 < iVar6)) {
          *(uint *)(param_1 + 0x20010) = 0;
        }
        iVar6 = FUN_0040c600(*(uint *)(param_1 + 0x20004),_DAT_02c99770);
        uVar7 = 0;
        uVar3 = *(int *)(param_1 + 0x20010) + 0xc;
        if (0xb < uVar3) {
          if (uVar3 < 0xd) {
            if (iVar6 == 0) goto LAB_00475b04;
            if (*(int *)(*(int *)(param_1 + 0x20004) + 0x56c) == 9) {
              uVar7 = 8;
            }
            else {
              uVar7 = 1;
            }
          }
          else if (uVar3 == 0xd) {
LAB_00475b04:
            uVar7 = 2;
          }
        }
        if ((uVar7 & uVar2) != 0) {
          *(uint *)(param_1 + 0x2c9c) = 0;
          *(uint *)(param_1 + 0x1ff5c) = 7;
          *(int *)(param_1 + 0x2c98) = *(int *)(param_1 + 0x20010) + 0xc;
          return;
        }
        iVar5 = iVar5 + 1;
        if (0x13 < iVar5) {
          return;
        }
      } while( true );
    }
  }
  else if (*(int *)(iVar5 + 0x2e0) == 7) goto LAB_0047597e;
  if (*(int *)(param_1 + 0x20004) == 0) {
    return;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x20004) + 0x2e0);
  if (iVar5 == 3) {
    return;
  }
  if ((*(int *)(param_1 + 0x1fae4) == 0) && (iVar5 == 0)) {
    iVar5 = param_1 + 0x1ffc0;
    iVar6 = param_1 + 0x1ffe0;
    if (*(int *)(param_1 + 0x20008) != 0) {
      iVar6 = iVar5;
      iVar5 = param_1 + 0x1ffe0;
    }
    if ((*(int *)(iVar6 + 0x1c) == 2) && (*(int *)(iVar5 + 0x1c) != 2)) {
      *(uint *)(param_1 + 0x20008) = (uint)(*(int *)(param_1 + 0x20008) == 0);
    }
  }
  if (*(int *)(param_1 + 0x20004) == 0) {
switchD_00475a0b_caseD_3:
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
      goto switchD_00475a0b_caseD_3;
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
  if (((((float)_DAT_005da5c4 <= fVar1) && (1.0 <= *(float *)(param_1 + 0x1ffd4))) &&
      (*(float *)(param_1 + 0x1ffd0) <= 0.0)) &&
     (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x20004) + 0x154) + 0xe8))
                        (*(int *)(param_1 + 0x20004)), iVar5 != 0)) {
    *(uint *)(param_1 + 0x2000c) = 0;
    iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x20004) + 0x154) + 0xe4))
                      (*(int *)(param_1 + 0x20004));
    if (iVar5 != 0) {
      *(uint *)(param_1 + 0x2000c) = 1;
    }
    FUN_0046f610(param_1,0);
    if (*(int *)(*(int *)(param_1 + 0x20004) + 0x2dc) == 3) {
      *(uint *)(param_1 + 0x2c9c) = 0;
      *(uint *)(param_1 + 0x2c98) = 0x12;
      return;
    }
  }
  return;
}
