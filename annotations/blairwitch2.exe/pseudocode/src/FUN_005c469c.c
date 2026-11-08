// Name: FUN_005c469c
// Address: 005c469c
// Address Range: [[005c469c, 005c46ec]]
// Convention: unknown
// Signature: void FUN_005c469c(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c469c(void)

{
  FUN_005c5b20();
  if (_DAT_026807e4 != 0) {
    FUN_005b86a0(_DAT_026807e4);
    _DAT_026807e4 = 0;
  }
  if (_DAT_026810a0 != 0) {
    FUN_005b86a0(_DAT_026810a0);
    _DAT_026810a0 = 0;
  }
  if (_DAT_0061f281 != (LPCH)0x0) {
    FreeEnvironmentStringsA(_DAT_0061f281);
  }
  return;
}
