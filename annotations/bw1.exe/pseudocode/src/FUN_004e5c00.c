// Name: FUN_004e5c00
// Address: 004e5c00
// Address Range: [[004e5c00, 004e5c4a]]
// Convention: unknown
// Signature: void FUN_004e5c00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5c00(void)

{
  byte *puVar1;
  byte *puVar2;
  
  _DAT_01cd0ea8 = 0;
  _DAT_01cd56ac = 0;
  _DAT_01cd56b0 = 0;
  _DAT_01cf69f4 = 0;
  _DAT_01cf69f8 = 0;
  puVar2 = (byte *)0x1cd0eac;
  do {
    puVar1 = puVar2 + 0x48;
    *(uint *)(puVar2 + 0x24) = 0;
    puVar2 = puVar1;
  } while (puVar1 != &DAT_01cd56ac);
  _DAT_01cf6f00 = 0;
  _DAT_01cf6efc = 0;
  return;
}
