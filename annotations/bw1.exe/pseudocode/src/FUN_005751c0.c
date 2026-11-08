// Name: FUN_005751c0
// Address: 005751c0
// Address Range: [[005751c0, 005751f3]]
// Convention: unknown
// Signature: void FUN_005751c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_005751c0(uint *param_1,uint *param_2,uint *param_3)

{
  if (param_1 != (uint *)0x0) {
    *param_1 = DAT_006232e8;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = DAT_006232ec;
  }
  if (param_3 == (uint *)0x0) {
    return;
  }
  *param_3 = DAT_006232f0;
  return;
}
