// Name: FUN_005ab7c0
// Address: 005ab7c0
// Address Range: [[005ab7c0, 005ab7e2]]
// Convention: unknown
// Signature: void FUN_005ab7c0(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_005ab7c0(uint param_1,int param_2)

{
  FUN_00409680(param_1,param_2);
  *(uint *)(param_2 + 0x50) = 0x3e99999a;
  *(uint *)(param_2 + 0x48) = 0x3f4ccccd;
  return;
}
