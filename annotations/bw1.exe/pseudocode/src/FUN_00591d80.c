// Name: FUN_00591d80
// Address: 00591d80
// Address Range: [[00591d80, 00591dd6]]
// Convention: unknown
// Signature: void FUN_00591d80(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00591d80(int param_1,int param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x25b0 + param_2 * 0x78) == *(int *)(param_1 + 0x20004)) {
    *(uint *)(param_1 + 0x20004) = 0;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,0);
  }
  FUN_00432820(param_1,param_2,param_3);
  return;
}
