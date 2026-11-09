// Name: unkafter_morph.cpp_FUN_005c4c44
// Address: 005c4c44
// Address Range: [[005c4c44, 005c4c76]]
// Convention: unknown
// Signature: void unkafter_morph_cpp_FUN_005c4c44(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_morph_cpp_FUN_005c4c44(void)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = _DAT_026810b0;
  while (puVar2 != (uint *)0x0) {
    puVar1 = (uint *)*puVar2;
    if (puVar2[3] != 0) {
      FUN_005b86a0(puVar2[2]);
    }
    FUN_005b86a0(puVar2);
    puVar2 = puVar1;
  }
  return;
}
