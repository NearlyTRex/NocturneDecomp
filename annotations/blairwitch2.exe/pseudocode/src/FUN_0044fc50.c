// Name: FUN_0044fc50
// Address: 0044fc50
// Address Range: [[0044fc50, 0044fc7a]]
// Convention: unknown
// Signature: void FUN_0044fc50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044fc50(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x1b13a20;
  do {
    FUN_0044e590(puVar1);
    puVar1 = puVar1 + 0x398;
  } while (puVar1 != &DAT_01b4d220);
  _DAT_01b13a1c = 0;
  return;
}
