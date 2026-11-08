// Name: FUN_00433c60
// Address: 00433c60
// Address Range: [[00433c60, 00433ccc]]
// Convention: unknown
// Signature: void FUN_00433c60(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00433c60(int param_1,uint param_2)

{
  uint uVar1;
  
  FUN_00409c40(param_1,param_2);
  FUN_0040cf40(param_2,*(uint *)(param_1 + 0x2538));
  if (*(char *)(param_1 + 0x24a8) == '\0') {
    return;
  }
  FUN_0040cf80(param_2,(char *)(param_1 + 0x24a8));
  uVar1 = FUN_00524770(param_1 + 0x158);
  FUN_0040cf80(param_2,uVar1);
  FUN_0040cf40(param_2,*(uint *)(param_1 + 0x160));
  return;
}
