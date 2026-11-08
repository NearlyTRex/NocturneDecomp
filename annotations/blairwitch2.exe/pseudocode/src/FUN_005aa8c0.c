// Name: FUN_005aa8c0
// Address: 005aa8c0
// Address Range: [[005aa8c0, 005aa967]]
// Convention: unknown
// Signature: void FUN_005aa8c0(int param_1)

#include "nocturne.h"

void FUN_005aa8c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_0059e6a0(param_1);
  uVar2 = FUN_00540e80(*(uint *)(param_1 + 0x113b0),"Bip01 Head",1);
  *(uint *)(param_1 + 0x11850) = uVar2;
  uVar2 = FUN_00540e80(*(uint *)(param_1 + 0x113b0),"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x11854) = uVar2;
  iVar1 = param_1 + 0x154;
  *(uint *)(param_1 + 0x10a24) = *(uint *)(param_1 + 0x11850);
  FUN_005a8030(iVar1,0x100);
  FUN_005a8050(iVar1,param_1);
  FUN_005a80d0(iVar1,0);
  iVar1 = param_1 + 0x264;
  FUN_005a8030(iVar1,0x100);
  FUN_005a8050(iVar1,param_1);
  FUN_005a80d0(iVar1,0);
  return;
}
