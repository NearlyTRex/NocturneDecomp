// Name: FUN_00433c50
// Address: 00433c50
// Address Range: [[00433c50, 00433c5e]]
// Convention: unknown
// Signature: void FUN_00433c50(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00433c50(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2764) = param_2;
  return;
}
