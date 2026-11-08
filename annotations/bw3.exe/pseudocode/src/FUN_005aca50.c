// Name: FUN_005aca50
// Address: 005aca50
// Address Range: [[005aca50, 005aca7b]]
// Convention: unknown
// Signature: undefined4 FUN_005aca50(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005aca50(byte *param_1)

{
  if ((_DAT_02d25930 != 0) && ((*(byte *)(*param_1 + 0x2d25941) & 1) != 0)) {
    return 2;
  }
  return 1;
}
