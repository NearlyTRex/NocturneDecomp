// Name: FUN_005c030f
// Address: 005c030f
// Address Range: [[005c030f, 005c0335]]
// Convention: unknown
// Signature: undefined4 * FUN_005c030f(int param_1,undefined4 param_2)

#include "nocturne.h"

uint * FUN_005c030f(int param_1,uint param_2)

{
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  FUN_005c1066(param_1,*(uint *)(param_1 + -4),param_2);
  return (uint *)(param_1 + -4);
}
