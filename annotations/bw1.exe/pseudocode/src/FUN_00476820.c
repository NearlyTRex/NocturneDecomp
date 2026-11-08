// Name: FUN_00476820
// Address: 00476820
// Address Range: [[00476820, 00476877]]
// Convention: unknown
// Signature: void FUN_00476820(int param_1)

#include "nocturne.h"

void FUN_00476820(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00569b20(param_1 + 0x158);
  uVar1 = FUN_00569f30(param_1 + 0x158);
  uVar2 = FUN_005634f0(uVar1,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0xc268) = uVar2;
  uVar1 = FUN_005634f0(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xc26c) = uVar1;
  FUN_004a0510(param_1);
  return;
}
