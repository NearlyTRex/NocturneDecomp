// Name: FUN_00409c40
// Address: 00409c40
// Address Range: [[00409c40, 00409c7d]]
// Convention: unknown
// Signature: void FUN_00409c40(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00409c40(int param_1,uint param_2)

{
  FUN_0040cf80(param_2,param_1);
  FUN_0040cf60(param_2,param_1 + 0x20);
  FUN_0040cf60(param_2,param_1 + 0x30);
  FUN_0040cf40(param_2,*(uint *)(param_1 + 0x70));
  return;
}
