// Name: FUN_005a9a10
// Address: 005a9a10
// Address Range: [[005a9a10, 005a9a36]]
// Convention: unknown
// Signature: void FUN_005a9a10(void)

#include "nocturne.h"

void FUN_005a9a10(void)

{
  byte *puVar1;
  
  puVar1 = &DAT_00625c9c;
  do {
    FUN_00484f00(DAT_00612560,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != &DAT_00625e1c);
  return;
}
