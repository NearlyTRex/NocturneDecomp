// Name: FUN_00481040
// Address: 00481040
// Address Range: [[00481040, 00481056]]
// Convention: unknown
// Signature: undefined4 FUN_00481040(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00481040(void)

{
  if (_DAT_01bc11ec != 0) {
    return *(uint *)(_DAT_01bc11ec + 0x41f0);
  }
  return 0xb;
}
