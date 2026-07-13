// Name: FUN_00543180
// Address: 00543180
// Address Range: [[00543180, 005431e4]]
// Convention: unknown
// Signature: void FUN_00543180(int param_1)

#include "nocturne.h"

void FUN_00543180(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_004ee9e0(param_1);
  uVar1 = FUN_0051e0a0(param_1 + 0x150);
  uVar2 = FUN_005179d0(uVar1,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0x1f570) = uVar2;
  uVar1 = FUN_005179d0(uVar1,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x24a8) = 0;
  *(uint *)(param_1 + 0x1f574) = uVar1;
  *(uint *)(param_1 + 0x24a4) = *(uint *)(param_1 + 0x1f570);
  return;
}
