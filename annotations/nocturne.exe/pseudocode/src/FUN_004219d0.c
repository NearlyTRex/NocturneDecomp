// Name: FUN_004219d0
// Address: 004219d0
// Address Range: [[004219d0, 004219e9]]
// Convention: unknown
// Signature: void FUN_004219d0(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_004219d0(uint param_1,int param_2)

{
  *(uint *)(param_2 + 4) = 0;
  FUN_00479f70(param_1,param_2);
  return;
}
