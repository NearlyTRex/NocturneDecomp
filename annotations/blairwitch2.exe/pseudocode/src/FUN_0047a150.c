// Name: FUN_0047a150
// Address: 0047a150
// Address Range: [[0047a150, 0047a190]]
// Convention: unknown
// Signature: void FUN_0047a150(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047a150(int param_1)

{
  uint uVar1;
  byte local_68 [100];
  
  *(uint *)(param_1 + 0x6d4) = _DAT_005f5bac;
  FUN_005b7790(local_68,"fuse.wav");
  uVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,local_68);
  *(uint *)(param_1 + 0x6e4) = uVar1;
  return;
}
