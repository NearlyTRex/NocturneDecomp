// Name: FUN_00568620
// Address: 00568620
// Address Range: [[00568620, 00568656]]
// Convention: unknown
// Signature: void FUN_00568620(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00568620(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)&DAT_02de4e20;
  do {
    puVar2 = puVar1;
    puVar1 = (uint *)*puVar2;
    if (puVar1 == (uint *)0x0) {
      return;
    }
  } while (param_1 != puVar1[1]);
  *(byte *)(param_1 + 0xc) = *(byte *)(puVar1[1] + 0xc) | 3;
  *puVar2 = *puVar1;
  *puVar1 = _DAT_02de4e24;
  _DAT_02de4e24 = puVar1;
  return;
}
