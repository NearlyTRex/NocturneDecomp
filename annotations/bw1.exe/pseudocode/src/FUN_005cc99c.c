// Name: FUN_005cc99c
// Address: 005cc99c
// Address Range: [[005cc99c, 005cc9ec]]
// Convention: unknown
// Signature: void FUN_005cc99c(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cc99c(void)

{
  FUN_005cde20();
  if (_DAT_02c9f6d4 != 0) {
    FUN_005c09f0(_DAT_02c9f6d4);
    _DAT_02c9f6d4 = 0;
  }
  if (_DAT_02c9ff90 != 0) {
    FUN_005c09f0(_DAT_02c9ff90);
    _DAT_02c9ff90 = 0;
  }
  if (_DAT_006265d9 != (LPCH)0x0) {
    FreeEnvironmentStringsA(_DAT_006265d9);
  }
  return;
}
