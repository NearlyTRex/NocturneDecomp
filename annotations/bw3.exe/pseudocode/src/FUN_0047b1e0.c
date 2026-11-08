// Name: FUN_0047b1e0
// Address: 0047b1e0
// Address Range: [[0047b1e0, 0047b220]]
// Convention: unknown
// Signature: void FUN_0047b1e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047b1e0(int param_1)

{
  uint uVar1;
  byte local_68 [100];
  
  *(uint *)(param_1 + 0x594) = _DAT_005deecc;
  FUN_005a28c0(local_68,"fuse.wav");
  uVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,local_68);
  *(uint *)(param_1 + 0x5a4) = uVar1;
  return;
}
