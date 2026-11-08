// Name: FUN_00527050
// Address: 00527050
// Address Range: [[00527050, 00527095]]
// Convention: unknown
// Signature: void FUN_00527050(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00527050(int param_1,int param_2,uint param_3)

{
  if (param_2 == *(int *)(param_1 + 0x20c24)) {
    *(uint *)(param_1 + 0x20c24) = 0;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,0);
  }
  FUN_00430810(param_1,param_2,param_3);
  return;
}
