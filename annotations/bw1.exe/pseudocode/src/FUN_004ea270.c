// Name: FUN_004ea270
// Address: 004ea270
// Address Range: [[004ea270, 004ea27e]]
// Convention: unknown
// Signature: void FUN_004ea270(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004ea270(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x1ffac) = param_2;
  return;
}
