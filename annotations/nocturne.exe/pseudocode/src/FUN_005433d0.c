// Name: FUN_005433d0
// Address: 005433d0
// Address Range: [[005433d0, 0054344a]]
// Convention: unknown
// Signature: void FUN_005433d0(int param_1)

#include "nocturne.h"

void FUN_005433d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_004ee9e0(param_1);
  uVar1 = FUN_0051e0a0(param_1 + 0x150);
  uVar2 = FUN_005179d0(uVar1,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0x1f570) = uVar2;
  uVar1 = FUN_005179d0(uVar1,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x24a8) = 0;
  *(uint *)(param_1 + 0x24ec) = 0;
  *(uint *)(param_1 + 0x1f574) = uVar1;
  *(uint *)(param_1 + 0x24a4) = *(uint *)(param_1 + 0x1f570);
  *(uint *)(param_1 + 0x24e8) = *(uint *)(param_1 + 0x1f574);
  return;
}
