// Name: FUN_00468830
// Address: 00468830
// Address Range: [[00468830, 0046885a]]
// Convention: unknown
// Signature: void FUN_00468830(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468830(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x1b2efe0;
  do {
    FUN_00467160(puVar1);
    puVar1 = puVar1 + 0x398;
  } while (puVar1 != &DAT_01b687e0);
  _DAT_01b2efdc = 0;
  return;
}
