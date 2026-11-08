// Name: FUN_00556c60
// Address: 00556c60
// Address Range: [[00556c60, 00556c8c]]
// Convention: unknown
// Signature: void FUN_00556c60(void)

#include "nocturne.h"

void FUN_00556c60(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x2ce721c;
  FUN_00558e90();
  do {
    FUN_00555270(puVar1);
    puVar1 = puVar1 + 0x11c;
  } while (puVar1 != &DAT_02ceb91c);
  FUN_00556fd0();
  return;
}
