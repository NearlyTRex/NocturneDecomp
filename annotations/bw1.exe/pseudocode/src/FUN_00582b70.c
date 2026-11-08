// Name: FUN_00582b70
// Address: 00582b70
// Address Range: [[00582b70, 00582b82]]
// Convention: unknown
// Signature: undefined4 FUN_00582b70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00582b70(void)

{
  uint uVar1;
  
  if (_DAT_02c8341c == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_02c8341c)();
  return uVar1;
}
