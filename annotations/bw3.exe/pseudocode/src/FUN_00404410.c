// Name: FUN_00404410
// Address: 00404410
// Address Range: [[00404410, 0040443e]]
// Convention: unknown
// Signature: void FUN_00404410(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404410(void)

{
  if (-1 < DAT_007303dc) {
    _DAT_01c6b5c0 = *(uint *)(&DAT_005f08d0 + DAT_007303dc * 4);
    return;
  }
  _DAT_01c6b5c0 = -DAT_007303dc;
  return;
}
