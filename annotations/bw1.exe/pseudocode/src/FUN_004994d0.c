// Name: FUN_004994d0
// Address: 004994d0
// Address Range: [[004994d0, 004994e8]]
// Convention: unknown
// Signature: void FUN_004994d0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004994d0(uint *param_1,uint param_2)

{
  (**(code **)(param_1[3] + 0xc))(param_1,*param_1,param_2);
  return;
}
