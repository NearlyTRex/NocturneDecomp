// Name: FUN_0049e170
// Address: 0049e170
// Address Range: [[0049e170, 0049e196]]
// Convention: unknown
// Signature: void FUN_0049e170(void)

#include "nocturne.h"

void FUN_0049e170(void)

{
  byte *puVar1;
  
  puVar1 = &DAT_005fd60c;
  do {
    FUN_0046e5e0(DAT_005f2afc,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != &DAT_005fd7ec);
  return;
}
