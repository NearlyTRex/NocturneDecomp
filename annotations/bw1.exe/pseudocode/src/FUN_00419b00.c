// Name: FUN_00419b00
// Address: 00419b00
// Address Range: [[00419b00, 00419b0e]]
// Convention: unknown
// Signature: void FUN_00419b00(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00419b00(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xf2c) = param_2;
  return;
}
