// Name: FUN_004a5ad0
// Address: 004a5ad0
// Address Range: [[004a5ad0, 004a5b0a]]
// Convention: unknown
// Signature: void FUN_004a5ad0(int param_1)

#include "nocturne.h"

void FUN_004a5ad0(int param_1)

{
  byte *puVar1;
  
  puVar1 = &DAT_005fde88 + param_1 * 0xc0;
  do {
    FUN_0046e5e0(DAT_005f2afc,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != (byte *)(param_1 * 0xc0 + 0x5fdf48));
  return;
}
