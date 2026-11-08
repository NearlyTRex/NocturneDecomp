// Name: FUN_005a3f40
// Address: 005a3f40
// Address Range: [[005a3f40, 005a3fb2]]
// Convention: unknown
// Signature: void FUN_005a3f40(int param_1)

#include "nocturne.h"

void FUN_005a3f40(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_0059e6a0(param_1);
  uVar2 = FUN_00540e80(*(uint *)(param_1 + 0x113b0),"Bip01 L Finger1",1);
  *(uint *)(param_1 + 0x11850) = uVar2;
  uVar2 = FUN_00540e80(*(uint *)(param_1 + 0x113b0),"Bip01 R Finger1",1);
  iVar1 = param_1 + 0x264;
  *(uint *)(param_1 + 0x11854) = uVar2;
  FUN_005a8030(iVar1,0x100);
  FUN_005a8050(iVar1,param_1);
  FUN_005a80d0(iVar1,0);
  return;
}
