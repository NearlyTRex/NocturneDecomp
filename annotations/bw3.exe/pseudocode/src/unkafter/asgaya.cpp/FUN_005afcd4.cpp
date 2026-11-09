// Name: unkafter_asgaya.cpp_FUN_005afcd4
// Address: 005afcd4
// Address Range: [[005afcd4, 005afd06]]
// Convention: unknown
// Signature: void unkafter_asgaya_cpp_FUN_005afcd4(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_asgaya_cpp_FUN_005afcd4(void)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = _DAT_02d261f0;
  while (puVar2 != (uint *)0x0) {
    puVar1 = (uint *)*puVar2;
    if (puVar2[3] != 0) {
      FUN_005a3770(puVar2[2]);
    }
    FUN_005a3770(puVar2);
    puVar2 = puVar1;
  }
  return;
}
