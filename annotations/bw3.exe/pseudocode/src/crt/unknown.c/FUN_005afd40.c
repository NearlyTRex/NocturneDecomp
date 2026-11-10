// Name: crt_unknown.c_FUN_005afd40
// Address: 005afd40
// Address Range: [[005afd40, 005afd44]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005afd40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005afd40(void)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = _DAT_02d261f0;
  while (puVar2 != (uint *)0x0) {
    puVar1 = (uint *)*puVar2;
    if (puVar2[3] != 0) {
      FUN_005a3770(puVar2[2]);
    }
    FUN_005a3770(puVar2);
    puVar2 = puVar1;
  }
  return;
}
