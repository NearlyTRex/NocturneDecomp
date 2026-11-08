// Name: FUN_00526ff0
// Address: 00526ff0
// Address Range: [[00526ff0, 00527046]]
// Convention: unknown
// Signature: void FUN_00526ff0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00526ff0(int param_1,int param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x25b0 + param_2 * 0x78) == *(int *)(param_1 + 0x20c24)) {
    *(uint *)(param_1 + 0x20c24) = 0;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,0);
  }
  FUN_00431c40(param_1,param_2,param_3);
  return;
}
