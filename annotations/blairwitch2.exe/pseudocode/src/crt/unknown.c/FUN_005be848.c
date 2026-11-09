// Name: crt_unknown.c_FUN_005be848
// Address: 005be848
// Address Range: [[005be848, 005be86d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005be848(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005be848(void)

{
  uint *puVar1;
  
  while (_DAT_02680164 != (uint *)0x0) {
    puVar1 = (uint *)*_DAT_02680164;
    FUN_005b86a0(_DAT_02680164);
    _DAT_02680164 = puVar1;
  }
  return;
}
