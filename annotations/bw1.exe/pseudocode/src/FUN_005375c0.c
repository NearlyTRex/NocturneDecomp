// Name: FUN_005375c0
// Address: 005375c0
// Address Range: [[005375c0, 005375dc]]
// Convention: unknown
// Signature: void FUN_005375c0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005375c0(int param_1,uint param_2)

{
  FUN_005c20d0(param_1,param_2,0x13);
  *(byte *)(param_1 + 0x13) = 0;
  return;
}
