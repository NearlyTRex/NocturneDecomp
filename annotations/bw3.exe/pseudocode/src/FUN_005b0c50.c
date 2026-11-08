// Name: FUN_005b0c50
// Address: 005b0c50
// Address Range: [[005b0c50, 005b0c88]]
// Convention: unknown
// Signature: void FUN_005b0c50(byte *param_1,byte *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b0c50(byte *param_1,byte *param_2)

{
  if ((_DAT_02d25930 != 0) && ((*(byte *)(*param_2 + 0x2d25941) & 1) != 0)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return;
  }
  *param_1 = *param_2;
  return;
}
