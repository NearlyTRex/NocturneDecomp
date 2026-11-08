// Name: FUN_0056e850
// Address: 0056e850
// Address Range: [[0056e850, 0056eb55]]
// Convention: unknown
// Signature: void FUN_0056e850(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056e850(int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  *(uint *)(param_1 + 0x256a0) = 0;
  if (*(int *)(param_1 + 0x10a74) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x276c) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x256a4) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x25640) == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x25698);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x2698);
LAB_0056e8ae:
    if ((iVar5 != 0) && (uVar2 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x7c))(iVar5), uVar2 != 0))
    {
      iVar5 = 0;
      while( true ) {
        iVar7 = *(int *)(param_1 + 0x256a8) + 1;
        *(int *)(param_1 + 0x256a8) = iVar7;
        if ((iVar7 < 0) || (1 < iVar7)) {
          *(uint *)(param_1 + 0x256a8) = 0;
        }
        uVar6 = *(int *)(param_1 + 0x256a8) + 0xc;
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
      *(uint *)(param_1 + 0x2d08) = 0;
      *(uint *)(param_1 + 0x256a4) = 7;
      *(int *)(param_1 + 0x2d04) = *(int *)(param_1 + 0x256a8) + 0xc;
      return;
    }
  }
  else if (*(int *)(iVar5 + 0x43c) == 7) goto LAB_0056e8ae;
  if (*(int *)(param_1 + 0x25698) == 0) {
    return;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x25698) + 0x43c);
  if (iVar5 == 3) {
    return;
  }
  if ((*(int *)(param_1 + 0x24378) == 0) && (iVar5 == 0)) {
    iVar5 = param_1 + 0x25654;
    iVar7 = param_1 + 0x25674;
    if (*(int *)(param_1 + 0x2569c) != 0) {
      iVar7 = iVar5;
      iVar5 = param_1 + 0x25674;
    }
    if ((*(int *)(iVar7 + 0x1c) == 2) && (*(int *)(iVar5 + 0x1c) != 2)) {
      *(uint *)(param_1 + 0x2569c) = (uint)(*(int *)(param_1 + 0x2569c) == 0);
    }
  }
  if (*(int *)(param_1 + 0x25698) == 0) {
switchD_0056e93d_caseD_3:
    uVar4 = 0;
  }
  else {
    switch(*(uint *)(*(int *)(param_1 + 0x25698) + 0x43c)) {
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
      goto switchD_0056e93d_caseD_3;
    case 4:
      uVar4 = 7;
      break;
    case 7:
      uVar4 = 8;
    }
  }
  fVar1 = (float)FUN_0042a5a0(param_1,uVar4);
  if ((float)_DAT_005ebe4d <= fVar1) {
    iVar5 = param_1 + 0x25654;
    if ((*(int *)(param_1 + 0x2569c) != 0) && (*(int *)(*(int *)(param_1 + 0x25698) + 0x43c) == 0))
    {
      iVar5 = param_1 + 0x25674;
    }
    if (((1.0 <= *(float *)(iVar5 + 0x14)) && (*(float *)(iVar5 + 0x10) <= 0.0)) &&
       (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x25698) + 0x2b0) + 0xf0))
                          (*(int *)(param_1 + 0x25698)), iVar5 != 0)) {
      if (*(int *)(*(int *)(param_1 + 0x25698) + 0x43c) == 0) {
        FUN_005683d0(param_1,*(uint *)(param_1 + 0x2569c));
        *(uint *)(param_1 + 0x2569c) = (uint)(*(int *)(param_1 + 0x2569c) == 0);
      }
      *(uint *)(param_1 + 0x256a0) = 0;
      iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x25698) + 0x2b0) + 0xec))
                        (*(int *)(param_1 + 0x25698));
      if (iVar5 != 0) {
        *(uint *)(param_1 + 0x256a0) = 1;
      }
      FUN_005683d0(param_1,0);
      if (*(int *)(*(int *)(param_1 + 0x25698) + 0x438) == 2) {
        *(uint *)(param_1 + 0x2d08) = 0;
        *(uint *)(param_1 + 0x2d04) = 8;
        return;
      }
    }
  }
  return;
}
