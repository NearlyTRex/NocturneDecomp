// Name: FUN_005c8e45
// Address: 005c8e45
// Address Range: [[005c8e45, 005c8e79]]
// Convention: unknown
// Signature: void FUN_005c8e45(int param_1,uint param_2)

#include "nocturne.h"

void FUN_005c8e45(int param_1,uint param_2)

{
  byte auStack_8 [4];
  
  param_2 = *(uint *)(param_1 + 0x10) | param_2;
  *(uint *)(param_1 + 0x10) = param_2;
  param_2 = param_2 & *(uint *)(param_1 + 0x14);
  if (param_2 == 0) {
    return;
  }
  FUN_005cc3d2(auStack_8,param_2);
  return;
}
