// Name: FUN_004c9400
// Address: 004c9400
// Address Range: [[004c9400, 004c97c1]]
// Convention: unknown
// Signature: void FUN_004c9400(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c9400(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  byte auStack_78 [100];
  float fStack_14;
  
  FUN_00556be0(*(uint *)(param_1 + 0xd0a4));
  if ((*(int *)(param_1 + 0xd0b4) != 0) &&
     (iVar1 = FUN_004fc070(param_1 + 0x158), *(int *)(iVar1 + 0x24) == 0)) {
    *(uint *)(param_1 + 0xd0b8) = 0x41f00000;
    *(uint *)(param_1 + 0xd0b4) = 0;
    *(uint *)(param_1 + 0xd0bc) = 1;
    *(uint *)(param_1 + 0xd0c0) = 0x3f800000;
    if ((uint *)(param_1 + 0xd0c4) != (uint *)(param_1 + 0x20)) {
      *(uint *)(param_1 + 0xd0c4) = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0xd0c8) = *(uint *)(param_1 + 0x24);
      *(uint *)(param_1 + 0xd0cc) = *(uint *)(param_1 + 0x28);
    }
    FUN_00441ff0(PTR_DAT_005f1690,"@go berzerk\n" + 1);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    *(uint *)(param_1 + 0xd0b0) = 0x40800000;
  }
  FUN_004c9140(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0xcde4);
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0xf4))(iVar1), iVar1 == param_1)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf0))(*(int *)(param_1 + 0xcde4));
  }
  *(float *)(param_1 + 0x2538) = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0a0) * 4) == 0) {
    *(uint *)(param_1 + 0x2538) = 0;
  }
  if (*(float *)(param_1 + 0x2538) <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    if (*(int *)(param_1 + 0xce54) != 0) {
      FUN_0042ff70(param_1);
      FUN_00489b80(param_1,param_2);
      return;
    }
    iVar1 = FUN_004fc070(param_1 + 0x158);
    if ((*(int *)(iVar1 + 0x24) != 10) && (*(int *)(iVar1 + 0x24) != 9)) {
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0a0) * 4) == 0) {
        *(uint *)(param_1 + 0xd070) = 0;
      }
      else {
        *(int *)(param_1 + 0xd070) = *(int *)(param_1 + 0xd070) + -1;
      }
      uVar3 = 6;
      if (*(int *)(param_1 + 0x3284) < 1) {
        iVar1 = FUN_0040cf40(0x3f000000);
        if (iVar1 != 0) {
          uVar3 = 7;
        }
      }
      else {
        iVar2 = 0;
        iVar1 = param_1;
        if (0 < *(int *)(param_1 + 0x3284)) {
          do {
            if (*(int *)(iVar1 + 0x3288) == *(int *)(param_1 + 0xd09c)) {
              uVar3 = 8;
              break;
            }
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + 0x38;
          } while (iVar2 < *(int *)(param_1 + 0x3284));
        }
      }
      FUN_004fc0d0(param_1 + 0x158,uVar3,1);
      iVar1 = FUN_00556700(*(uint *)(param_1 + 0xd0ac));
      if (iVar1 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"ghoul-die-!-?.wav @1.6");
        *(uint *)(param_1 + 0xd0ac) = uVar3;
      }
      fStack_14 = (float)FUN_0040ce40(0x40800000,0x41200000);
      fVar4 = (float10)fStack_14 * (float10)_DAT_005c440d;
      *(uint *)(param_1 + 0xd060) = 0xa0000;
      iVar1 = FUN_005a3120(0x32,0x41c80000);
      *(int *)(param_1 + 0xd05c) = (int)ROUND(fVar4);
      (**(code **)(iVar1 + 0xa8))(param_1);
    }
  }
  else {
    iVar1 = FUN_004fc070(param_1 + 0x158);
    iVar1 = *(int *)(iVar1 + 0x24);
    if (((iVar1 == 0) || (iVar1 == 0xb || (iVar1 == 0xc || iVar1 == 2))) ||
       (iVar1 = FUN_0040cf40(0x3e800000), iVar1 != 0)) {
      iVar1 = FUN_0040cf40(0x3f000000,1);
      FUN_004fc0d0(param_1 + 0x158,(iVar1 == 0) + '\x03');
    }
    else {
      uVar3 = FUN_0040cea0(1,2);
      FUN_005a28c0(auStack_78,"guul flinch%d",uVar3);
      uVar3 = FUN_004fc310(param_1 + 0x158,auStack_78,1);
      uVar3 = FUN_004fb9c0(uVar3);
      *(uint *)(param_1 + 0xd068) = 0x3f800000;
      *(uint *)(param_1 + 0xd06c) = uVar3;
    }
    iVar1 = FUN_00556700(*(uint *)(param_1 + 0xd0a8));
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"ghoul-mad-!-?.wav");
      *(uint *)(param_1 + 0xd0a8) = uVar3;
      FUN_00489b80(param_1,param_2);
      return;
    }
  }
  FUN_00489b80(param_1,param_2);
  return;
}
