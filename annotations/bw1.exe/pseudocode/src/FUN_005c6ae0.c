// Name: FUN_005c6ae0
// Address: 005c6ae0
// Address Range: [[005c6ae0, 005c6b16]]
// Convention: unknown
// Signature: void FUN_005c6ae0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6ae0(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)&DAT_02c9f050;
  do {
    puVar2 = puVar1;
    puVar1 = (uint *)*puVar2;
    if (puVar1 == (uint *)0x0) {
      return;
    }
  } while (param_1 != puVar1[1]);
  *(byte *)(param_1 + 0xc) = *(byte *)(puVar1[1] + 0xc) | 3;
  *puVar2 = *puVar1;
  *puVar1 = _DAT_02c9f054;
  _DAT_02c9f054 = puVar1;
  return;
}
