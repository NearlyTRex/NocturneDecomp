// Name: FUN_0040dd30
// Address: 0040dd30
// Address Range: [[0040dd30, 0040dd4b]]
// Convention: unknown
// Signature: uint FUN_0040dd30(void)

#include "nocturne.h"

uint FUN_0040dd30(void)

{
  DAT_007641b8 = DAT_007641b8 * 0x2ff0bd + 1 & 0xffffff;
  return DAT_007641b8;
}
