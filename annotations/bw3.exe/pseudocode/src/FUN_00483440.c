// Name: FUN_00483440
// Address: 00483440
// Address Range: [[00483440, 0048344b]]
// Convention: unknown
// Signature: void FUN_00483440(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00483440(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x54) = param_2;
  return;
}
