// Name: FUN_0049aab0
// Address: 0049aab0
// Address Range: [[0049aab0, 0049aad6]]
// Convention: unknown
// Signature: void FUN_0049aab0(void)

#include "nocturne.h"

void FUN_0049aab0(void)

{
  byte *puVar1;
  
  puVar1 = &DAT_006157cc;
  do {
    FUN_0046ca00(DAT_0060b280,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != &DAT_0061585c);
  return;
}
