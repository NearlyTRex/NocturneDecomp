// Name: FUN_004c93f0
// Address: 004c93f0
// Address Range: [[004c93f0, 004c943a]]
// Convention: unknown
// Signature: void FUN_004c93f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c93f0(void)

{
  byte *puVar1;
  byte *puVar2;
  
  _DAT_01cb82f0 = 0;
  _DAT_01cbcaf4 = 0;
  _DAT_01cbcaf8 = 0;
  _DAT_01cdde3c = 0;
  _DAT_01cdde40 = 0;
  puVar2 = (byte *)0x1cb82f4;
  do {
    puVar1 = puVar2 + 0x48;
    *(uint *)(puVar2 + 0x24) = 0;
    puVar2 = puVar1;
  } while (puVar1 != &DAT_01cbcaf4);
  _DAT_01cde348 = 0;
  _DAT_01cde344 = 0;
  return;
}
