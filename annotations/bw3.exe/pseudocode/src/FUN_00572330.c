// Name: FUN_00572330
// Address: 00572330
// Address Range: [[00572330, 00572340]]
// Convention: unknown
// Signature: void FUN_00572330(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_00572330(uint *param_1,uint *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}
