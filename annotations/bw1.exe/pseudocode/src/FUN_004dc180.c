// Name: FUN_004dc180
// Address: 004dc180
// Address Range: [[004dc180, 004dc19f]]
// Convention: unknown
// Signature: void FUN_004dc180(void)

#include "nocturne.h"

void FUN_004dc180(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x1cd0b44;
  do {
    FUN_0040d1c0(puVar1);
    puVar1 = puVar1 + 0x14;
  } while (puVar1 != &DAT_01cd0be4);
  return;
}
