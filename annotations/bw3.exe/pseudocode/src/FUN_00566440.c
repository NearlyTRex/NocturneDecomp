// Name: FUN_00566440
// Address: 00566440
// Address Range: [[00566440, 00566452]]
// Convention: unknown
// Signature: undefined4 FUN_00566440(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00566440(void)

{
  uint uVar1;
  
  if (_DAT_02cf6078 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6078)();
  return uVar1;
}
