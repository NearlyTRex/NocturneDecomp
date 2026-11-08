// Name: FUN_005c0878
// Address: 005c0878
// Address Range: [[005c0878, 005c08a0]]
// Convention: unknown
// Signature: void FUN_005c0878(int param_1,uint param_2)

#include "nocturne.h"

void FUN_005c0878(int param_1,uint param_2)

{
  if (param_2 != 0) {
    *(uint *)(PTR_DAT_0061f4d4 + param_1 * 4) = param_2 | 0x4000;
    return;
  }
  *(uint *)(PTR_DAT_0061f4d4 + param_1 * 4) = 0;
  return;
}
