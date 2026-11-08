// Name: FUN_004764c0
// Address: 004764c0
// Address Range: [[004764c0, 00476505]]
// Convention: unknown
// Signature: void FUN_004764c0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004764c0(int param_1,int param_2,uint param_3)

{
  if (param_2 == *(int *)(param_1 + 0x20004)) {
    *(uint *)(param_1 + 0x20004) = 0;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,0);
  }
  FUN_00431490(param_1,param_2,param_3);
  return;
}
