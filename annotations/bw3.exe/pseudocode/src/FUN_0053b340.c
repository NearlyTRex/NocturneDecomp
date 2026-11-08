// Name: FUN_0053b340
// Address: 0053b340
// Address Range: [[0053b340, 0053b356]]
// Convention: unknown
// Signature: void FUN_0053b340(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0053b340(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_2 * 0x1a4 + param_1 + 0x1a4) = param_3;
  return;
}
