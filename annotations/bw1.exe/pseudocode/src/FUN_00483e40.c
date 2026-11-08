// Name: FUN_00483e40
// Address: 00483e40
// Address Range: [[00483e40, 00483e50]]
// Convention: unknown
// Signature: void FUN_00483e40(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00483e40(int param_1,uint param_2)

{
  DAT_00713a74 = param_2;
  *(uint *)(param_1 + 4) = param_2;
  return;
}
