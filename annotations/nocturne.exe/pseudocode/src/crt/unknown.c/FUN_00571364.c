// Name: crt_unknown.c_FUN_00571364
// Address: 00571364
// Address Range: [[00571364, 00571396]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00571364(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00571364(void)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = _DAT_02de5d70;
  while (puVar2 != (uint *)0x0) {
    puVar1 = (uint *)*puVar2;
    if (puVar2[3] != 0) {
      FUN_005638d0(puVar2[2]);
    }
    FUN_005638d0(puVar2);
    puVar2 = puVar1;
  }
  return;
}
