// Name: crt_unknown.c_FUN_005a9950
// Address: 005a9950
// Address Range: [[005a9950, 005a9986]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a9950(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a9950(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)&DAT_02d252a0;
  do {
    puVar2 = puVar1;
    puVar1 = (uint *)*puVar2;
    if (puVar1 == (uint *)0x0) {
      return;
    }
  } while (param_1 != puVar1[1]);
  *(byte *)(param_1 + 0xc) = *(byte *)(puVar1[1] + 0xc) | 3;
  *puVar2 = *puVar1;
  *puVar1 = _DAT_02d252a4;
  _DAT_02d252a4 = puVar1;
  return;
}
