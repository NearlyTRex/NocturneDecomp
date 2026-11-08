// Name: FUN_005a308f
// Address: 005a308f
// Address Range: [[005a308f, 005a30b5]]
// Convention: unknown
// Signature: undefined4 * FUN_005a308f(int param_1,undefined4 param_2)

#include "nocturne.h"

uint * FUN_005a308f(int param_1,uint param_2)

{
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  FUN_005a3de6(param_1,*(uint *)(param_1 + -4),param_2);
  return (uint *)(param_1 + -4);
}
