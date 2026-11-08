// Name: FUN_00585de0
// Address: 00585de0
// Address Range: [[00585de0, 00585e06]]
// Convention: unknown
// Signature: void FUN_00585de0(void)

#include "nocturne.h"

void FUN_00585de0(void)

{
  byte *puVar1;
  
  puVar1 = &DAT_0061e52c;
  do {
    FUN_0046ca00(DAT_0060b280,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != &DAT_0061e6ac);
  return;
}
