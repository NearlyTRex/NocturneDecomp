// Name: FUN_00500080
// Address: 00500080
// Address Range: [[00500080, 00500205]]
// Convention: unknown
// Signature: void FUN_00500080(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00500080(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00551050(*(uint *)(param_1 + 0x10b98));
  FUN_00551050(*(uint *)(param_1 + 0x10b90));
  FUN_004ffcc0(param_1,param_2);
  if ((*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10ba0) * 4) == 0) &&
     (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10ba8) * 4) == 0)) {
    *(uint *)(param_2 + 4) = 0x461c3f9a;
  }
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  iVar3 = param_1 + 0x2b4;
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar2 = FUN_005035c0(iVar3);
    if ((*(int *)(iVar2 + 0x24) != 5) && (*(int *)(iVar2 + 0x24) != 4)) {
      FUN_00503620(iVar3,4,1);
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,0);
      if (*(int *)(param_1 + 0x10b94) == 0) {
        FUN_00551050(*(uint *)(param_1 + 0x10b8c));
        uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                          (param_1,"@mobster-die-?.wav" + 1);
        *(uint *)(param_1 + 0x10b94) = 1;
        *(uint *)(param_1 + 0x10b8c) = uVar4;
        FUN_00488890(param_1,param_2);
        return;
      }
    }
    goto LAB_00500145;
  }
  iVar2 = FUN_0040c8f0(*(uint *)(param_2 + 0x34),_DAT_02653574);
  if (iVar2 == 0) {
LAB_00500121:
    FUN_00503620(iVar3,3,1);
  }
  else {
    iVar2 = FUN_0040d060(0x3f000000);
    if (iVar2 != 0) goto LAB_00500121;
  }
  iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b8c));
  if (iVar3 == 0) {
    uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"mobster-hit-?.wav");
    *(uint *)(param_1 + 0x10b8c) = uVar4;
    FUN_00488890(param_1,param_2);
    return;
  }
LAB_00500145:
  FUN_00488890(param_1,param_2);
  return;
}
