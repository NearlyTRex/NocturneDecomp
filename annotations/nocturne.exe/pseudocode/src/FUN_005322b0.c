// Name: FUN_005322b0
// Address: 005322b0
// Address Range: [[005322b0, 005322cf]]
// Convention: unknown
// Signature: undefined4 FUN_005322b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005322b0(void)

{
  if (_DAT_02dc9e04 == 0) {
    return 1;
  }
  (*_DAT_02dc9d78)();
  FUN_00530d40();
  return 1;
}
