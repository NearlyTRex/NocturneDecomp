// Name: FUN_00577260
// Address: 00577260
// Address Range: [[00577260, 00577286]]
// Convention: unknown
// Signature: void FUN_00577260(void)

#include "nocturne.h"

void FUN_00577260(void)

{
  byte *puVar1;
  
  puVar1 = &DAT_00606cac;
  do {
    FUN_0046e5e0(DAT_005f2afc,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != &DAT_00606e2c);
  return;
}
