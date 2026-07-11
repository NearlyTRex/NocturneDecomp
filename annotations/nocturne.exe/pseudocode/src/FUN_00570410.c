// Name: FUN_00570410
// Address: 00570410
// Address Range: [[00570410, 0057042c]]
// Convention: unknown
// Signature: void FUN_00570410(int param_1)

#include "nocturne.h"

void FUN_00570410(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0x20);
  while (puVar2 != (uint *)0x0) {
    puVar1 = (uint *)*puVar2;
    FUN_00571ef0(puVar2);
    puVar2 = puVar1;
  }
  return;
}
