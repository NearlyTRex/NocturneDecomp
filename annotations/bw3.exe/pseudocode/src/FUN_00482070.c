// Name: FUN_00482070
// Address: 00482070
// Address Range: [[00482070, 00482088]]
// Convention: unknown
// Signature: void FUN_00482070(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00482070(uint *param_1,uint param_2)

{
  (**(code **)(param_1[3] + 0xc))(param_1,*param_1,param_2);
  return;
}
