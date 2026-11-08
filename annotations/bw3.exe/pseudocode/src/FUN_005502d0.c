// Name: FUN_005502d0
// Address: 005502d0
// Address Range: [[005502d0, 0055030d]]
// Convention: unknown
// Signature: void FUN_005502d0(void)

#include "nocturne.h"

void FUN_005502d0(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x280305c;
  FUN_005501a0();
  do {
    FUN_00547b90(puVar1,1);
    puVar1 = puVar1 + 0x1ec9c;
  } while (puVar1 != &DAT_02cd28bc);
  FUN_005a28f0(&DAT_02cd28bc,0,0xa0);
  return;
}
