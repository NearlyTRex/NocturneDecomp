// Name: FUN_005c5c70
// Address: 005c5c70
// Address Range: [[005c5c70, 005c5ccb]]
// Convention: unknown
// Signature: int FUN_005c5c70(byte *param_1,byte *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005c5c70(byte *param_1,byte *param_2)

{
  if (*param_1 != *param_2) {
    return (uint)*param_1 - (uint)*param_2;
  }
  if ((_DAT_026807f0 != 0) && ((*(byte *)(*param_1 + 0x2680801) & 1) != 0)) {
    if (param_1[1] != param_2[1]) {
      return (uint)param_1[1] - (uint)param_2[1];
    }
  }
  return 0;
}
