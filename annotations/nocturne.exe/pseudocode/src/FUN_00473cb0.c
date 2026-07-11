// Name: FUN_00473cb0
// Address: 00473cb0
// Address Range: [[00473cb0, 00473cc8]]
// Convention: unknown
// Signature: void FUN_00473cb0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00473cb0(uint *param_1,uint param_2)

{
  (**(code **)(param_1[3] + 0xc))(param_1,*param_1,param_2);
  return;
}
