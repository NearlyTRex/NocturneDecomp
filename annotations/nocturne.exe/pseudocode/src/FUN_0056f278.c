// Name: FUN_0056f278
// Address: 0056f278
// Address Range: [[0056f278, 0056f2a0]]
// Convention: unknown
// Signature: void FUN_0056f278(int param_1,uint param_2)

#include "nocturne.h"

void FUN_0056f278(int param_1,uint param_2)

{
  if (param_2 != 0) {
    *(uint *)(PTR_DAT_005c1fe4 + param_1 * 4) = param_2 | 0x4000;
    return;
  }
  *(uint *)(PTR_DAT_005c1fe4 + param_1 * 4) = 0;
  return;
}
