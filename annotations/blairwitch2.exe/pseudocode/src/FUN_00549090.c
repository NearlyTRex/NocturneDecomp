// Name: FUN_00549090
// Address: 00549090
// Address Range: [[00549090, 005490cd]]
// Convention: unknown
// Signature: void FUN_00549090(void)

#include "nocturne.h"

void FUN_00549090(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x21780f4;
  FUN_00548f80();
  do {
    FUN_00540980(puVar1,1);
    puVar1 = puVar1 + 0x1e01c;
  } while (puVar1 != &DAT_02628554);
  FUN_005b77c0(&DAT_02628554,0,0xa0);
  return;
}
