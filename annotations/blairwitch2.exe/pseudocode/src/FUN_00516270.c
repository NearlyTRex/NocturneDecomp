// Name: FUN_00516270
// Address: 00516270
// Address Range: [[00516270, 0051628c]]
// Convention: unknown
// Signature: void FUN_00516270(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00516270(int param_1,uint param_2)

{
  FUN_005b9cf0(param_1,param_2,0x13);
  *(byte *)(param_1 + 0x13) = 0;
  return;
}
