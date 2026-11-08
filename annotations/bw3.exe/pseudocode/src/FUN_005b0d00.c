// Name: FUN_005b0d00
// Address: 005b0d00
// Address Range: [[005b0d00, 005b0d5b]]
// Convention: unknown
// Signature: int FUN_005b0d00(byte *param_1,byte *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005b0d00(byte *param_1,byte *param_2)

{
  if (*param_1 != *param_2) {
    return (uint)*param_1 - (uint)*param_2;
  }
  if ((_DAT_02d25930 != 0) && ((*(byte *)(*param_1 + 0x2d25941) & 1) != 0)) {
    if (param_1[1] != param_2[1]) {
      return (uint)param_1[1] - (uint)param_2[1];
    }
  }
  return 0;
}
