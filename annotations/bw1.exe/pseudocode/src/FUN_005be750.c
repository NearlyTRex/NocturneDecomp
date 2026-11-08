// Name: FUN_005be750
// Address: 005be750
// Address Range: [[005be750, 005be966]]
// Convention: unknown
// Signature: void FUN_005be750(int param_1,int param_2)

#include "nocturne.h"

void FUN_005be750(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  FUN_005be480(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
  *(float *)(param_1 + 0x2538) = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc33c) * 4) == 0) {
    *(uint *)(param_1 + 0x2538) = 0;
  }
  *(uint *)(param_1 + 0xc1e4) = 0x3f99999a;
  if (0.0 < *(float *)(param_1 + 0x2538)) {
    FUN_005247c0(param_1 + 0x158,4,1);
    if (*(float *)(param_1 + 0xc340) <= 0.0) {
      *(uint *)(param_1 + 0xc340) = 0x40000000;
      iVar1 = FUN_005735a0(*(uint *)(param_1 + 0xc348));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0xc2f4) != 0) {
          uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"f-zombie-hit?.wav");
          *(uint *)(param_1 + 0xc348) = uVar3;
          FUN_004a0f00(param_1,param_2);
          return;
        }
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"zom-s0?.wav");
        *(uint *)(param_1 + 0xc348) = uVar3;
        FUN_004a0f00(param_1,param_2);
        return;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar1 = FUN_00524770(param_1 + 0x158);
    if ((*(int *)(iVar1 + 0x24) != 8) && (*(int *)(iVar1 + 0x24) != 7)) {
      FUN_005bdfa0(param_1);
      uVar3 = 6;
      if ((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc33c) * 4) == 0) &&
         ((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc32c) * 4) != 0 ||
          (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc324) * 4) != 0)))) {
        uVar2 = FUN_00524a00(param_1 + 0x158,"@lookForHead" + 1,0);
        iVar1 = FUN_005240c0(uVar2);
        if (-1 < iVar1) {
          uVar3 = 9;
        }
      }
      FUN_005247c0(param_1 + 0x158,uVar3,1);
      FUN_00573a80(*(uint *)(param_1 + 0xc348));
      if (*(int *)(param_1 + 0xc2f4) == 0) {
        pcVar4 = "zom-d0?.wav";
      }
      else {
        pcVar4 = "f-zombie-die?.wav";
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar4);
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
    }
  }
  FUN_004a0f00(param_1,param_2);
  return;
}
