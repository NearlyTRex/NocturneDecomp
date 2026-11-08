// Name: FUN_004dc1a0
// Address: 004dc1a0
// Address Range: [[004dc1a0, 004dc1e5]]
// Convention: unknown
// Signature: void FUN_004dc1a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dc1a0(void)

{
  FUN_0040d4b0(_DAT_01cd0b40 * 0x14 + 0x1cd0b44,
               _DAT_01c4353c - *(int *)(&DAT_01cd0be4 + _DAT_01cd0b40 * 4),
               _DAT_01c43540 - *(int *)(&DAT_01cd0c04 + _DAT_01cd0b40 * 4),0xffff);
  return;
}
