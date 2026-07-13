// Name: thunk_FUN_00571364
// Address: 005713d0
// Address Range: [[005713d0, 005713d4]]
// Convention: unknown
// Signature: void thunk_FUN_00571364(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00571364(void)

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
