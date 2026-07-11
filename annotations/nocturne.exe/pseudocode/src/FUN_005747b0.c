// Name: FUN_005747b0
// Address: 005747b0
// Address Range: [[005747b0, 005747e8]]
// Convention: unknown
// Signature: byte FUN_005747b0(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_005747b0(uint param_1)

{
  if (_DAT_02de5c30 != 0) {
    if (0x00000001 == 0x3a4) {
      return (&DAT_005c2201)[param_1 & 0xff] & 8;
    }
    if (param_1 != 0) {
      return 1;
    }
  }
  return 0;
}
