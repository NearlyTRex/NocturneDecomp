// Name: crt_unknown.c_FUN_005c2654
// Address: 005c2654
// Address Range: [[005c2654, 005c2679]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c2654(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005c2654(uint *param_1,uint param_2,uint param_3)

{
  if (param_1 == (uint *)0x0) {
    return;
  }
  *param_1 = param_2;
  FUN_005c2622(param_1 + 1,param_2,param_3);
  return;
}
