// Name: FUN_00415730
// Address: 00415730
// Address Range: [[00415730, 0041573e]]
// Convention: unknown
// Signature: void FUN_00415730(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00415730(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xf2c) = param_2;
  return;
}
