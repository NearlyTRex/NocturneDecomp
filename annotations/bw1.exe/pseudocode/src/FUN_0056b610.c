// Name: FUN_0056b610
// Address: 0056b610
// Address Range: [[0056b610, 0056b646]]
// Convention: unknown
// Signature: void FUN_0056b610(void)

#include "nocturne.h"

void FUN_0056b610(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x26b82bc;
  do {
    FUN_005637d0(puVar1);
    puVar1 = puVar1 + 0x3600;
  } while (puVar1 != &DAT_027902bc);
  FUN_005bfb70(&DAT_027902bc,0,0x100);
  return;
}
