// Name: FUN_005ada50
// Address: 005ada50
// Address Range: [[005ada50, 005ada5e]]
// Convention: unknown
// Signature: void FUN_005ada50(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005ada50(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x304) = param_2;
  return;
}
