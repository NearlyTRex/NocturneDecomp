// Name: FUN_00484310
// Address: 00484310
// Address Range: [[00484310, 00484349]]
// Convention: unknown
// Signature: void FUN_00484310(undefined4 *param_1)

#include "nocturne.h"

void FUN_00484310(uint *param_1)

{
  uint uVar1;
  
  param_1[1] = 1;
  *param_1 = 0;
  param_1[2] = 1;
  param_1[8] = 0;
  param_1[3] = 1;
  param_1[4] = 0;
  uVar1 = param_1[8];
  param_1[7] = uVar1;
  param_1[6] = uVar1;
  param_1[5] = uVar1;
  return;
}
