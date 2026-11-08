// Name: FUN_005c9110
// Address: 005c9110
// Address Range: [[005c9110, 005c913b]]
// Convention: unknown
// Signature: undefined4 FUN_005c9110(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005c9110(byte *param_1)

{
  if ((_DAT_02c9f6e0 != 0) && ((*(byte *)(*param_1 + 0x2c9f6f1) & 1) != 0)) {
    return 2;
  }
  return 1;
}
