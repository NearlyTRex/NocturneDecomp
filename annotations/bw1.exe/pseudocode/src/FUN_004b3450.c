// Name: FUN_004b3450
// Address: 004b3450
// Address Range: [[004b3450, 004b3476]]
// Convention: unknown
// Signature: void FUN_004b3450(void)

#include "nocturne.h"

void FUN_004b3450(void)

{
  byte *puVar1;
  
  puVar1 = &DAT_0061caac;
  do {
    FUN_00484f00(DAT_00612560,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != &DAT_0061cb3c);
  return;
}
