// Name: FUN_0058f990
// Address: 0058f990
// Address Range: [[0058f990, 0058fb11]]
// Convention: unknown
// Signature: void FUN_0058f990(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f990(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00556be0(*(uint *)(param_1 + 0xd0dc));
  FUN_0058f630(param_1,param_2);
  if ((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0e4) * 4) == 0) &&
     (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0ec) * 4) == 0)) {
    *(uint *)(param_2 + 4) = 0x461c3f9a;
  }
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar3 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_004fc070(iVar3);
    if ((*(int *)(iVar2 + 0x24) != 5) && (*(int *)(iVar2 + 0x24) != 4)) {
      *(uint *)(param_1 + 0x2540) = 0;
      FUN_004fc0d0(iVar3,4,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
      if (*(int *)(param_1 + 0xd0d8) == 0) {
        FUN_00556be0(*(uint *)(param_1 + 0xd0d4));
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"@mobster-die-?.wav" + 1);
        *(uint *)(param_1 + 0xd0d8) = 1;
        *(uint *)(param_1 + 0xd0d4) = uVar4;
        FUN_00489b80(param_1,param_2);
        return;
      }
    }
    goto LAB_0058fa47;
  }
  iVar2 = FUN_0040c840(*(uint *)(param_2 + 0x34),_DAT_02cfd794);
  if (iVar2 == 0) {
LAB_0058fa23:
    FUN_004fc0d0(iVar3,3,1);
  }
  else {
    iVar2 = FUN_0040cf40(0x3f000000);
    if (iVar2 != 0) goto LAB_0058fa23;
  }
  iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd0d4));
  if (iVar3 == 0) {
    uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"mobster-hit-?.wav");
    *(uint *)(param_1 + 0xd0d4) = uVar4;
    FUN_00489b80(param_1,param_2);
    return;
  }
LAB_0058fa47:
  FUN_00489b80(param_1,param_2);
  return;
}
