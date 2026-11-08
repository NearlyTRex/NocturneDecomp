// Name: FUN_005c0b85
// Address: 005c0b85
// Address Range: [[005c0b85, 005c0bb9]]
// Convention: unknown
// Signature: void FUN_005c0b85(int param_1,uint param_2)

#include "nocturne.h"

void FUN_005c0b85(int param_1,uint param_2)

{
  byte auStack_8 [4];
  
  param_2 = *(uint *)(param_1 + 0x10) | param_2;
  *(uint *)(param_1 + 0x10) = param_2;
  param_2 = param_2 & *(uint *)(param_1 + 0x14);
  if (param_2 == 0) {
    return;
  }
  FUN_005c40d2(auStack_8,param_2);
  return;
}
