// Name: FUN_0042d860
// Address: 0042d860
// Address Range: [[0042d860, 0042d891]]
// Convention: unknown
// Signature: void FUN_0042d860(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_0042d860(int param_1,int param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 0xcd88) = param_4;
  *(uint *)(param_1 + 0xcd84) = 0;
  if (param_2 == 0) {
    *(uint *)(param_1 + 0xcd78) = param_3;
    return;
  }
  *(uint *)(param_1 + 0xcd7c) = param_3;
  return;
}
