// Name: FUN_004afdb0
// Address: 004afdb0
// Address Range: [[004afdb0, 004afdfa]]
// Convention: unknown
// Signature: void FUN_004afdb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004afdb0(void)

{
  byte *puVar1;
  byte *puVar2;
  
  _DAT_01c78ce8 = 0;
  _DAT_01c7ccec = 0;
  _DAT_01c7ccf0 = 0;
  _DAT_01c9e034 = 0;
  _DAT_01c9e038 = 0;
  puVar2 = (byte *)0x1c78cec;
  do {
    puVar1 = puVar2 + 0x40;
    *(uint *)(puVar2 + 0x18) = 0;
    puVar2 = puVar1;
  } while (puVar1 != &DAT_01c7ccec);
  _DAT_01c9e540 = 0;
  _DAT_01c9e53c = 0;
  return;
}
