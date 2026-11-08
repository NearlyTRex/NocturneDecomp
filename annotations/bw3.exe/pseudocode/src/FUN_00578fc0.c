// Name: FUN_00578fc0
// Address: 00578fc0
// Address Range: [[00578fc0, 00578fe2]]
// Convention: unknown
// Signature: void FUN_00578fc0(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_00578fc0(uint param_1,int param_2)

{
  FUN_004096c0(param_1,param_2);
  *(uint *)(param_2 + 0x50) = 0x3e99999a;
  *(uint *)(param_2 + 0x48) = 0x3f4ccccd;
  return;
}
