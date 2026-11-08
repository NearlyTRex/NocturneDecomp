// Name: FUN_004a24a0
// Address: 004a24a0
// Address Range: [[004a24a0, 004a255b]]
// Convention: unknown
// Signature: void FUN_004a24a0(void)

#include "nocturne.h"

void FUN_004a24a0(void)

{
  byte *puVar1;
  
  FUN_0046e5e0(DAT_005f2afc,&DAT_005fc964);
  FUN_0046e5e0(DAT_005f2afc,&DAT_005fc97c);
  FUN_0046e5e0(DAT_005f2afc,&DAT_005fc994);
  FUN_0046e5e0(DAT_005f2afc,&DAT_005fc9ac);
  puVar1 = &DAT_005fc5a4;
  FUN_0046e5e0(DAT_005f2afc,&DAT_005fc9c4);
  do {
    FUN_0046e5e0(DAT_005f2afc,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != &DAT_005fc964);
  FUN_00497a30();
  FUN_004992f0();
  FUN_0049a000();
  FUN_0049a170();
  FUN_0049e170();
  FUN_0049a630();
  FUN_0049f380(1);
  FUN_0049c680();
  return;
}
