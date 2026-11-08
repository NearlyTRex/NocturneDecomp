// Name: FUN_0059e6a0
// Address: 0059e6a0
// Address Range: [[0059e6a0, 0059e79c]]
// Convention: unknown
// Signature: void FUN_0059e6a0(int param_1)

#include "nocturne.h"

void FUN_0059e6a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1 + 0x2b4;
  FUN_00547480(iVar1);
  FUN_00487eb0(param_1);
  uVar2 = FUN_00547890(iVar1);
  *(uint *)(param_1 + 0x113b0) = uVar2;
  uVar2 = FUN_00547890(iVar1);
  if (*(int *)(param_1 + 0x1137c) == -999) {
    uVar2 = FUN_00540e80(uVar2,"Bip01 Head",1);
    *(uint *)(param_1 + 0x1137c) = uVar2;
  }
  *(uint *)(param_1 + 0x10a80) = *(uint *)(param_1 + 0x11370);
  if (*(int *)(param_1 + 0x113fc) == -999) {
    uVar2 = FUN_00540e80(*(uint *)(param_1 + 0x113b0),"Bip01 Spine1",1);
    *(uint *)(param_1 + 0x113fc) = uVar2;
  }
  if ((*(int *)(param_1 + 0x11418) != 0) && (*(int *)(0x01D182F0 + 0x1008) == 0)) {
    FUN_005a01d0(param_1,param_1 + 0x113d0);
  }
  FUN_0059da70(param_1 + 0x10af8);
  FUN_005b1780(param_1 + 0x2d0c,param_1 + 0x20,param_1 + 0x30,0x41200000,
               *(uint *)(param_1 + 0x2574),param_1 + 0x2b4);
  return;
}
