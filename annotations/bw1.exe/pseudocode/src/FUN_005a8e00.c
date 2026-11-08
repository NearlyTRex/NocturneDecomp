// Name: FUN_005a8e00
// Address: 005a8e00
// Address Range: [[005a8e00, 005a8e0e]]
// Convention: unknown
// Signature: void FUN_005a8e00(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005a8e00(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2d4) = param_2;
  return;
}
