// Name: FUN_005ccecc
// Address: 005ccecc
// Address Range: [[005ccecc, 005ccf1f]]
// Convention: unknown
// Signature: void FUN_005ccecc(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ccecc(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  (*(code *)PTR_FUN_00626628)();
  puVar1 = (uint *)&DAT_02c9ffa0;
  puVar2 = _DAT_02c9ffa0;
  do {
    if (puVar2 == (uint *)0x0) {
LAB_005ccf16:
      (*(code *)PTR_FUN_0062662c)();
      return;
    }
    if (param_1 == puVar2[1]) {
      if (puVar2[3] != 0) {
        FUN_005c09f0(puVar2[2]);
      }
      *puVar1 = *puVar2;
      FUN_005c09f0(puVar2);
      goto LAB_005ccf16;
    }
    puVar1 = puVar2;
    puVar2 = (uint *)*puVar2;
  } while( true );
}
