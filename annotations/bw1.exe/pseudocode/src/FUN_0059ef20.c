// Name: FUN_0059ef20
// Address: 0059ef20
// Address Range: [[0059ef20, 0059efad]]
// Convention: unknown
// Signature: void FUN_0059ef20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059ef20(void)

{
  FUN_005b3a90("killSockets\n");
  if (_DAT_02c8ae58 != 0) {
    FUN_005b3750(_DAT_02c8ae58);
    while (_DAT_02c8ae5c != 0) {
      FUN_0059de90(_DAT_02c8ae5c);
    }
    FUN_005b37b0(_DAT_02c8ae58);
  }
  while (_DAT_02c8ae64 != 0) {
    FUN_005b3860(0,0);
  }
  Ordinal_116();
  return;
}
