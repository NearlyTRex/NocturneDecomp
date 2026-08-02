// Name: crt_unknown.c_FUN_00568658
// Address: 00568658
// Address Range: [[00568658, 0056867d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00568658(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00568658(void)

{
  uint *puVar1;
  
  while (_DAT_02de4e24 != (uint *)0x0) {
    puVar1 = (uint *)*_DAT_02de4e24;
    FUN_005638d0(_DAT_02de4e24);
    _DAT_02de4e24 = puVar1;
  }
  return;
}
