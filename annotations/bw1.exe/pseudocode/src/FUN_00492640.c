// Name: FUN_00492640
// Address: 00492640
// Address Range: [[00492640, 00492680]]
// Convention: unknown
// Signature: void FUN_00492640(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00492640(int param_1)

{
  uint uVar1;
  byte local_68 [100];
  
  *(uint *)(param_1 + 0x578) = _DAT_005ff6bc;
  FUN_005bfb40(local_68,"fuse.wav");
  uVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,local_68);
  *(uint *)(param_1 + 0x588) = uVar1;
  return;
}
