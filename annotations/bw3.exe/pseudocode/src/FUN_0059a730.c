// Name: FUN_0059a730
// Address: 0059a730
// Address Range: [[0059a730, 0059a759]]
// Convention: unknown
// Signature: void FUN_0059a730(int param_1,int param_2)

#include "nocturne.h"

void FUN_0059a730(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x34164) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x24fc) = 1;
    }
    FUN_00509530(param_1,param_2);
  }
  return;
}
