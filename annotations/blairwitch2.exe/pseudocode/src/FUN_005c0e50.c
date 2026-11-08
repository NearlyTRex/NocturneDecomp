// Name: FUN_005c0e50
// Address: 005c0e50
// Address Range: [[005c0e50, 005c0e7b]]
// Convention: unknown
// Signature: undefined4 FUN_005c0e50(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005c0e50(byte *param_1)

{
  if ((_DAT_026807f0 != 0) && ((*(byte *)(*param_1 + 0x2680801) & 1) != 0)) {
    return 2;
  }
  return 1;
}
