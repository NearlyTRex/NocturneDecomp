// Name: FUN_0045d2c0
// Address: 0045d2c0
// Address Range: [[0045d2c0, 0045d6b2]]
// Convention: unknown
// Signature: void FUN_0045d2c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045d2c0(int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
  if ((*(int *)(param_1 + 0x10a74) != 0) && (*(int *)(param_1 + 0x25640) == 0)) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x25698);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x2698);
LAB_0045d323:
    if ((iVar4 != 0) && (iVar5 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x7c))(iVar4), iVar5 != 0))
    {
      iVar4 = FUN_0040c8f0(iVar4,_DAT_02661f38);
      if (iVar4 == 0) {
        return;
      }
      if (*(int *)(iVar4 + 0x43c) == 6) {
        iVar7 = 0;
        do {
          iVar6 = *(int *)(param_1 + 0x256a8) + 1;
          *(int *)(param_1 + 0x256a8) = iVar6;
          if ((iVar6 < 0) || (1 < iVar6)) {
            *(uint *)(param_1 + 0x256a8) = 0;
          }
          uVar2 = *(int *)(param_1 + 0x256a8) + 4;
          if (uVar2 < 5) {
            if (uVar2 == 4) {
LAB_0045d483:
              if (iVar5 != 0) {
                *(int *)(param_1 + 0x2d04) = *(int *)(param_1 + 0x256a8) + 4;
                uVar3 = 0x0264B290;
                *(uint *)(param_1 + 0x2d08) = 0;
                *(uint *)(param_1 + 0x256a4) = 7;
                FUN_0055ae50(uVar3,param_1,"?swordswing0?.wav" + 1,param_1 + 0x20);
                return;
              }
            }
          }
          else if ((uVar2 < 6) || (uVar2 == 6)) goto LAB_0045d483;
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0x14);
      }
      if (*(int *)(iVar4 + 0x43c) == 8) {
        *(uint *)(param_1 + 0x2d08) = 0;
        *(uint *)(param_1 + 0x256a4) = 7;
        *(uint *)(param_1 + 0x2d04) = 7;
        return;
      }
      if (*(int *)(iVar4 + 0x43c) != 0xd) {
        return;
      }
      *(uint *)(param_1 + 0x2d08) = 0;
      *(uint *)(param_1 + 0x256a4) = 7;
      *(uint *)(param_1 + 0x2d04) = 8;
      return;
    }
  }
  else {
    iVar5 = *(int *)(iVar4 + 0x43c);
    if ((((iVar5 == 7) || (iVar5 == 6)) || (iVar5 == 8)) || (iVar5 == 0xd)) goto LAB_0045d323;
  }
  if (*(int *)(param_1 + 0x25698) == 0) {
    return;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x25698) + 0x43c);
  if (iVar4 == 3) {
    return;
  }
  if ((*(int *)(param_1 + 0x24378) == 0) && (iVar4 == 0)) {
    iVar4 = param_1 + 0x25654;
    iVar5 = param_1 + 0x25674;
    if (*(int *)(param_1 + 0x2569c) != 0) {
      iVar5 = iVar4;
      iVar4 = param_1 + 0x25674;
    }
    if ((*(int *)(iVar5 + 0x1c) == 2) && (*(int *)(iVar4 + 0x1c) != 2)) {
      *(uint *)(param_1 + 0x2569c) = (uint)(*(int *)(param_1 + 0x2569c) == 0);
    }
  }
  *(uint *)(param_1 + 0x2569c) = 1;
  if (*(int *)(param_1 + 0x25698) == 0) {
switchD_0045d3bc_caseD_3:
    uVar3 = 0;
  }
  else {
    switch(*(uint *)(*(int *)(param_1 + 0x25698) + 0x43c)) {
    case 0:
    case 5:
      uVar3 = 2;
      break;
    case 1:
      uVar3 = 0xb;
      break;
    case 2:
      uVar3 = 9;
      break;
    default:
      goto switchD_0045d3bc_caseD_3;
    case 4:
      uVar3 = 10;
      break;
    case 6:
    case 7:
    case 8:
    case 0xd:
      uVar3 = 6;
      break;
    case 10:
    case 0xb:
      uVar3 = 0xe;
    }
  }
  fVar1 = (float)FUN_0042a5a0(param_1,uVar3);
  if (((((float)_DAT_005d07f7 <= fVar1) &&
       (fVar1 = (float)FUN_0042a5a0(param_1,0x12), fVar1 <= (float)_DAT_005d07ff)) &&
      (1.0 <= *(float *)(param_1 + 0x25688))) &&
     ((*(float *)(param_1 + 0x25684) <= 0.0 &&
      (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x25698) + 0x2b0) + 0xf0))
                         (*(int *)(param_1 + 0x25698)), iVar4 != 0)))) {
    *(uint *)(param_1 + 0x256a0) = 0;
    iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x25698) + 0x2b0) + 0xec))
                      (*(int *)(param_1 + 0x25698));
    if (iVar4 != 0) {
      *(uint *)(param_1 + 0x256a0) = 1;
      return;
    }
    iVar4 = param_1 + 0x2437c;
    iVar5 = 0;
    for (iVar7 = 0; iVar7 < *(int *)(param_1 + 0x2438c); iVar7 = iVar7 + 1) {
      if (*(int *)(param_1 + 0x247e4) == *(int *)(iVar4 + 0x46c)) {
        uVar3 = *(uint *)(iVar4 + 0x14);
      }
      else {
        uVar3 = 0;
      }
      iVar5 = FUN_0040c8f0(uVar3,DAT_007bc3a4);
      if (iVar5 != 0) break;
      iVar4 = iVar4 + 4;
    }
    if ((iVar5 != 0) && (iVar4 = FUN_0040e450(iVar5,param_1), iVar4 != 0)) {
      *(uint *)(*(int *)(param_1 + 0x25698) + 0x6c4) = 6;
      *(uint *)(param_1 + 0x2d04) = 0xf;
      *(uint *)(param_1 + 0x2d08) = 0;
      return;
    }
  }
  return;
}
