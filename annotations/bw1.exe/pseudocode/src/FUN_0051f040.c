// Name: FUN_0051f040
// Address: 0051f040
// Address Range: [[0051f040, 0051f1c5]]
// Convention: unknown
// Signature: void FUN_0051f040(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051f040(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00573a80(*(uint *)(param_1 + 0xc308));
  FUN_00573a80(*(uint *)(param_1 + 0xc300));
  FUN_0051ec80(param_1,param_2);
  if ((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc310) * 4) == 0) &&
     (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc318) * 4) == 0)) {
    *(uint *)(param_2 + 4) = 0x461c3f9a;
  }
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar3 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_00524770(iVar3);
    if ((*(int *)(iVar2 + 0x24) != 5) && (*(int *)(iVar2 + 0x24) != 4)) {
      FUN_005247c0(iVar3,4,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
      if (*(int *)(param_1 + 0xc304) == 0) {
        FUN_00573a80(*(uint *)(param_1 + 0xc2fc));
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"@mobster-die-?.wav" + 1);
        *(uint *)(param_1 + 0xc304) = 1;
        *(uint *)(param_1 + 0xc2fc) = uVar4;
        FUN_004a0f00(param_1,param_2);
        return;
      }
    }
    goto LAB_0051f105;
  }
  iVar2 = FUN_0040c600(*(uint *)(param_2 + 0x34),_DAT_02c8ad44);
  if (iVar2 == 0) {
LAB_0051f0e1:
    FUN_005247c0(iVar3,3,1);
  }
  else {
    iVar2 = FUN_0040cd00(0x3f000000);
    if (iVar2 != 0) goto LAB_0051f0e1;
  }
  iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc2fc));
  if (iVar3 == 0) {
    uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"mobster-hit-?.wav");
    *(uint *)(param_1 + 0xc2fc) = uVar4;
    FUN_004a0f00(param_1,param_2);
    return;
  }
LAB_0051f105:
  FUN_004a0f00(param_1,param_2);
  return;
}
