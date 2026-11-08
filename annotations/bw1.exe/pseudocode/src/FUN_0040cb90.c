// Name: FUN_0040cb90
// Address: 0040cb90
// Address Range: [[0040cb90, 0040cbab]]
// Convention: unknown
// Signature: uint FUN_0040cb90(void)

#include "nocturne.h"

uint FUN_0040cb90(void)

{
  DAT_007c3368 = DAT_007c3368 * 0x2ff0bd + 1 & 0xffffff;
  return DAT_007c3368;
}
