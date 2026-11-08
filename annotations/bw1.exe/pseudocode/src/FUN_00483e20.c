// Name: FUN_00483e20
// Address: 00483e20
// Address Range: [[00483e20, 00483e30]]
// Convention: unknown
// Signature: void FUN_00483e20(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00483e20(int param_1,uint param_2)

{
  DAT_0061b4c0 = param_2;
  *(uint *)(param_1 + 0x10) = param_2;
  return;
}
