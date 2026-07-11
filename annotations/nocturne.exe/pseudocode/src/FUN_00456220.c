// Name: FUN_00456220
// Address: 00456220
// Address Range: [[00456220, 0045622e]]
// Convention: unknown
// Signature: void FUN_00456220(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00456220(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x9c4) = param_2;
  return;
}
