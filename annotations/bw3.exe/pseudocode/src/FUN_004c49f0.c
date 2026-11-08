// Name: FUN_004c49f0
// Address: 004c49f0
// Address Range: [[004c49f0, 004c4a0f]]
// Convention: unknown
// Signature: void FUN_004c49f0(void)

#include "nocturne.h"

void FUN_004c49f0(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x1d22b4c;
  do {
    FUN_0040d400(puVar1);
    puVar1 = puVar1 + 0x14;
  } while (puVar1 != &DAT_01d22bec);
  return;
}
