// Name: FUN_0056da50
// Address: 0056da50
// Address Range: [[0056da50, 0056da7b]]
// Convention: unknown
// Signature: undefined4 FUN_0056da50(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056da50(byte *param_1)

{
  if ((_DAT_02de5c30 != 0) && ((*(byte *)(*param_1 + 0x2de5c41) & 1) != 0)) {
    return 2;
  }
  return 1;
}
