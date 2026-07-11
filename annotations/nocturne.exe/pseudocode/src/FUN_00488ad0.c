// Name: FUN_00488ad0
// Address: 00488ad0
// Address Range: [[00488ad0, 00488af6]]
// Convention: unknown
// Signature: void FUN_00488ad0(void)

#include "nocturne.h"

void FUN_00488ad0(void)

{
  byte *puVar1;
  
  puVar1 = &DAT_005b8b14;
  do {
    FUN_00461eb0(DAT_005ae704,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != &DAT_005b8ba4);
  return;
}
