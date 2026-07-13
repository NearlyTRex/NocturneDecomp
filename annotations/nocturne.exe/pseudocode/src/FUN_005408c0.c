// Name: FUN_005408c0
// Address: 005408c0
// Address Range: [[005408c0, 00540913]]
// Convention: unknown
// Signature: void FUN_005408c0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005408c0(int param_1,int param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x24ac + param_2 * 0x44) == *(int *)(param_1 + 0x1fa94)) {
    *(uint *)(param_1 + 0x1fa94) = 0;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,0);
  }
  FUN_00429170(param_1,param_2,param_3);
  return;
}
