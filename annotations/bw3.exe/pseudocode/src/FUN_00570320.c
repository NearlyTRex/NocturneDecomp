// Name: FUN_00570320
// Address: 00570320
// Address Range: [[00570320, 00570344]]
// Convention: unknown
// Signature: void FUN_00570320(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00570320(uint *param_1,uint param_2)

{
  param_1[0x202] = 0;
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[0x203] = param_1 + 2;
  return;
}
