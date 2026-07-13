// Name: FUN_004cf180
// Address: 004cf180
// Address Range: [[004cf180, 004cf19c]]
// Convention: unknown
// Signature: void FUN_004cf180(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004cf180(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x588) = 0;
  FUN_00554560(param_1,param_2);
  return;
}
