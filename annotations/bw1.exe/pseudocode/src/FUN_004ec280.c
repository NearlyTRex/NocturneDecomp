// Name: FUN_004ec280
// Address: 004ec280
// Address Range: [[004ec280, 004ec2b4]]
// Convention: unknown
// Signature: void FUN_004ec280(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004ec280(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x1ff78) == 0) {
    return;
  }
  FUN_004325b0(param_1,param_2,*(int *)(param_1 + 0x1ff78),0x3dcccccd,0);
  *(uint *)(param_1 + 0x1ff78) = 0;
  return;
}
