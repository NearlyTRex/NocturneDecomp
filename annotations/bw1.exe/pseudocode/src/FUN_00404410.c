// Name: FUN_00404410
// Address: 00404410
// Address Range: [[00404410, 0040443e]]
// Convention: unknown
// Signature: void FUN_00404410(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404410(void)

{
  if (-1 < DAT_00713a5c) {
    _DAT_01c4f020 = *(uint *)(&DAT_00610600 + DAT_00713a5c * 4);
    return;
  }
  _DAT_01c4f020 = -DAT_00713a5c;
  return;
}
