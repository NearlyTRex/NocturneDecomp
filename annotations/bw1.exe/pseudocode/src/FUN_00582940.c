// Name: FUN_00582940
// Address: 00582940
// Address Range: [[00582940, 00582952]]
// Convention: unknown
// Signature: undefined4 FUN_00582940(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00582940(void)

{
  uint uVar1;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02c833f4)();
  return uVar1;
}
