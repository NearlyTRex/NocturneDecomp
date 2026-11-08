// Name: FUN_004ce560
// Address: 004ce560
// Address Range: [[004ce560, 004ce5aa]]
// Convention: unknown
// Signature: void FUN_004ce560(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce560(void)

{
  byte *puVar1;
  byte *puVar2;
  
  _DAT_01d22eb0 = 0;
  _DAT_01d276b4 = 0;
  _DAT_01d276b8 = 0;
  _DAT_01d4a93c = 0;
  _DAT_01d4a940 = 0;
  puVar2 = (byte *)0x1d22eb4;
  do {
    puVar1 = puVar2 + 0x48;
    *(uint *)(puVar2 + 0x24) = 0;
    puVar2 = puVar1;
  } while (puVar1 != &DAT_01d276b4);
  _DAT_01d4aec8 = 0;
  _DAT_01d4aec4 = 0;
  return;
}
