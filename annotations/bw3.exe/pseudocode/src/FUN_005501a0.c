// Name: FUN_005501a0
// Address: 005501a0
// Address Range: [[005501a0, 005501d6]]
// Convention: unknown
// Signature: void FUN_005501a0(void)

#include "nocturne.h"

void FUN_005501a0(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x272af5c;
  do {
    FUN_00548370(puVar1);
    puVar1 = puVar1 + 0x3600;
  } while (puVar1 != &DAT_02802f5c);
  FUN_005a28f0(&DAT_02802f5c,0,0x100);
  return;
}
