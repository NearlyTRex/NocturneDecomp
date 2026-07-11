// Name: FUN_005272b0
// Address: 005272b0
// Address Range: [[005272b0, 005272dc]]
// Convention: unknown
// Signature: void FUN_005272b0(void)

#include "nocturne.h"

void FUN_005272b0(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x2dbd374;
  FUN_00528800();
  do {
    FUN_00525570(puVar1);
    puVar1 = puVar1 + 0x120;
  } while (puVar1 != &DAT_02dc1b74);
  FUN_00528890();
  return;
}
