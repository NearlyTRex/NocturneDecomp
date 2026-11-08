// Name: FUN_0056f130
// Address: 0056f130
// Address Range: [[0056f130, 0056f186]]
// Convention: unknown
// Signature: void FUN_0056f130(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0056f130(int param_1,int param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x2620 + param_2 * 0x78) == *(int *)(param_1 + 0x25698)) {
    *(uint *)(param_1 + 0x25698) = 0;
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,0);
  }
  FUN_00428d60(param_1,param_2,param_3);
  return;
}
