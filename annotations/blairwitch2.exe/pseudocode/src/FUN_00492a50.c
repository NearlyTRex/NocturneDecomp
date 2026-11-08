// Name: FUN_00492a50
// Address: 00492a50
// Address Range: [[00492a50, 00492a5e]]
// Convention: unknown
// Signature: void FUN_00492a50(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00492a50(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x430) = param_2;
  return;
}
