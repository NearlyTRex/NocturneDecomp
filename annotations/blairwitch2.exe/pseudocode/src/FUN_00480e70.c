// Name: FUN_00480e70
// Address: 00480e70
// Address Range: [[00480e70, 00480e88]]
// Convention: unknown
// Signature: void FUN_00480e70(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00480e70(uint *param_1,uint param_2)

{
  (**(code **)(param_1[3] + 0xc))(param_1,*param_1,param_2);
  return;
}
