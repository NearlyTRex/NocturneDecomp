// Name: FUN_004321f0
// Address: 004321f0
// Address Range: [[004321f0, 004321fe]]
// Convention: unknown
// Signature: void FUN_004321f0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004321f0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 10000) = param_2;
  return;
}
