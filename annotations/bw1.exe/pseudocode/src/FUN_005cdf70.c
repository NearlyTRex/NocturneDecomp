// Name: FUN_005cdf70
// Address: 005cdf70
// Address Range: [[005cdf70, 005cdfcb]]
// Convention: unknown
// Signature: int FUN_005cdf70(byte *param_1,byte *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005cdf70(byte *param_1,byte *param_2)

{
  if (*param_1 != *param_2) {
    return (uint)*param_1 - (uint)*param_2;
  }
  if ((_DAT_02c9f6e0 != 0) && ((*(byte *)(*param_1 + 0x2c9f6f1) & 1) != 0)) {
    if (param_1[1] != param_2[1]) {
      return (uint)param_1[1] - (uint)param_2[1];
    }
  }
  return 0;
}
