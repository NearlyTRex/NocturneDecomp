// Name: crt_unknown.c_FUN_005a5544
// Address: 005a5544
// Address Range: [[005a5544, 005a5569]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a5544(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005a5544(uint *param_1,uint param_2,uint param_3)

{
  if (param_1 == (uint *)0x0) {
    return;
  }
  *param_1 = param_2;
  FUN_005a5512(param_1 + 1,param_2,param_3);
  return;
}
