// Name: FUN_005abdd0
// Address: 005abdd0
// Address Range: [[005abdd0, 005abe8c]]
// Convention: unknown
// Signature: void FUN_005abdd0(int param_1)

#include "nocturne.h"

void FUN_005abdd0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint auStack_1c [3];
  
  FUN_0059e6a0(param_1);
  uVar1 = FUN_00540e80(*(uint *)(param_1 + 0x113b0),"Dummy01",1);
  iVar2 = *(int *)(param_1 + 0x1185c);
  *(uint *)(param_1 + 0x11850) = uVar1;
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x90))(iVar2,param_1);
  }
  iVar2 = FUN_005b8c30(param_1 + 0x2514,"BDOG.DFM");
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0x10a28) = 1;
    uVar1 = FUN_00540e80(*(uint *)(param_1 + 0x113b0),"Bip01 Head",1);
    *(uint *)(param_1 + 0x10a24) = uVar1;
    if ((uint *)(param_1 + 0x10a3c) != auStack_1c) {
      *(uint *)(param_1 + 0x10a3c) = 0x3f800000;
      *(uint *)(param_1 + 0x10a40) = 0;
      *(uint *)(param_1 + 0x10a44) = 0;
      return;
    }
  }
  return;
}
