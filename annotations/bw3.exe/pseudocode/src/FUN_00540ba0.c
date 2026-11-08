// Name: FUN_00540ba0
// Address: 00540ba0
// Address Range: [[00540ba0, 00540bb8]]
// Convention: unknown
// Signature: void FUN_00540ba0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00540ba0(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x15aec8) = param_2;
  *(uint *)(param_1 + 0x15aecc) = param_3;
  return;
}
