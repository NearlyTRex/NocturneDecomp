// Name: FUN_00581f20
// Address: 00581f20
// Address Range: [[00581f20, 00581f3f]]
// Convention: unknown
// Signature: undefined4 FUN_00581f20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00581f20(void)

{
  if (_DAT_02c834ac == 0) {
    return 1;
  }
  (*_DAT_02c8338c)();
  FUN_00580740();
  return 1;
}
