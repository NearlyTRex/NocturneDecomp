// Name: FUN_005b6fc0
// Address: 005b6fc0
// Address Range: [[005b6fc0, 005b6ff9]]
// Convention: unknown
// Signature: void FUN_005b6fc0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_005b6fc0(int param_1,int param_2,uint param_3,uint param_4)

{
  param_1 = param_1 + param_2 * 0x608;
  FUN_005b6030(param_1);
  FUN_005b63b0(param_1,param_3,param_4);
  return;
}
