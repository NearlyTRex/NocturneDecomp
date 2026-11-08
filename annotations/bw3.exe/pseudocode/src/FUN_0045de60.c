// Name: FUN_0045de60
// Address: 0045de60
// Address Range: [[0045de60, 0045de9a]]
// Convention: unknown
// Signature: void FUN_0045de60(void)

#include "nocturne.h"

void FUN_0045de60(void)

{
  byte *puVar1;
  
  puVar1 = &DAT_005f2870;
  FUN_0046e5e0(DAT_005f2afc,&DAT_005f2840);
  do {
    FUN_0046e5e0(DAT_005f2afc,puVar1);
    puVar1 = puVar1 + 0x30;
  } while (puVar1 != &DAT_005f2a20);
  return;
}
