// Name: FUN_005af64c
// Address: 005af64c
// Address Range: [[005af64c, 005af69c]]
// Convention: unknown
// Signature: void FUN_005af64c(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005af64c(void)

{
  FUN_005b0bb0();
  if (_DAT_02d25924 != 0) {
    FUN_005a3770(_DAT_02d25924);
    _DAT_02d25924 = 0;
  }
  if (_DAT_02d261e0 != 0) {
    FUN_005a3770(_DAT_02d261e0);
    _DAT_02d261e0 = 0;
  }
  if (_DAT_0060797d != (LPCH)0x0) {
    FreeEnvironmentStringsA(_DAT_0060797d);
  }
  return;
}
