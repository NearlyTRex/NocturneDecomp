// Name: FUN_005661f4
// Address: 005661f4
// Address Range: [[005661f4, 00566219]]
// Convention: unknown
// Signature: void FUN_005661f4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005661f4(uint *param_1,uint param_2,uint param_3)

{
  if (param_1 == (uint *)0x0) {
    return;
  }
  *param_1 = param_2;
  FUN_005661c2(param_1 + 1,param_2,param_3);
  return;
}
