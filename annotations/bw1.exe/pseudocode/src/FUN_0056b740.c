// Name: FUN_0056b740
// Address: 0056b740
// Address Range: [[0056b740, 0056b77d]]
// Convention: unknown
// Signature: void FUN_0056b740(void)

#include "nocturne.h"

void FUN_0056b740(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x27903bc;
  FUN_0056b610();
  do {
    FUN_00562f70(puVar1,1);
    puVar1 = puVar1 + 0x1ec9c;
  } while (puVar1 != &DAT_02c5fc1c);
  FUN_005bfb70(&DAT_02c5fc1c,0,0xa0);
  return;
}
