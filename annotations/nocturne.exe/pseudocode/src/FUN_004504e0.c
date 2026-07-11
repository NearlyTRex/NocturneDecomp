// Name: FUN_004504e0
// Address: 004504e0
// Address Range: [[004504e0, 0045051a]]
// Convention: unknown
// Signature: void FUN_004504e0(void)

#include "nocturne.h"

void FUN_004504e0(void)

{
  byte *puVar1;
  
  puVar1 = &DAT_005ae488;
  FUN_00461eb0(DAT_005ae704,&DAT_005ae470);
  do {
    FUN_00461eb0(DAT_005ae704,puVar1);
    puVar1 = puVar1 + 0x30;
  } while (puVar1 != &DAT_005ae638);
  return;
}
