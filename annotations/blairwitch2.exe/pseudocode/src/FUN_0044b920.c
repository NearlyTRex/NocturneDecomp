// Name: FUN_0044b920
// Address: 0044b920
// Address Range: [[0044b920, 0044b95a]]
// Convention: unknown
// Signature: void FUN_0044b920(void)

#include "nocturne.h"

void FUN_0044b920(void)

{
  byte *puVar1;
  
  puVar1 = &DAT_0060aff8;
  FUN_0046ca00(DAT_0060b280,&DAT_0060afe0);
  do {
    FUN_0046ca00(DAT_0060b280,puVar1);
    puVar1 = puVar1 + 0x30;
  } while (puVar1 != &DAT_0060b1a8);
  return;
}
