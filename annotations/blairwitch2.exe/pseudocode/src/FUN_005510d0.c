// Name: FUN_005510d0
// Address: 005510d0
// Address Range: [[005510d0, 005510fc]]
// Convention: unknown
// Signature: void FUN_005510d0(void)

#include "nocturne.h"

void FUN_005510d0(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x263cf1c;
  FUN_005532f0();
  do {
    FUN_0054f700(puVar1);
    puVar1 = puVar1 + 0x11c;
  } while (puVar1 != &DAT_0264161c);
  FUN_00551440();
  return;
}
