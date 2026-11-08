// Name: FUN_005c5e20
// Address: 005c5e20
// Address Range: [[005c5e20, 005c5e41]]
// Convention: unknown
// Signature: undefined * FUN_005c5e20(uint param_1)

#include "nocturne.h"

byte * FUN_005c5e20(uint param_1)

{
  if (3 < param_1) {
    return (byte *)0x0;
  }
  return &DAT_0061ef54 + param_1 * 0x1a;
}
