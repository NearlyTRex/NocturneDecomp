// Name: crt_unknown.c_FUN_005c9fa0
// Address: 005c9fa0
// Address Range: [[005c9fa0, 005ca03b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c9fa0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c9fa0(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  byte *puVar4;
  
  DAT_00626315 = DAT_00626315 & 0xf8 | 4;
  puVar4 = &DAT_006262d4;
  iVar2 = _DAT_006262e0;
  while (iVar2 != 0) {
    puVar3 = InternalHeapAlloc(0x1d);
    if ((puVar3 == (uint *)0x0) &&
       (puVar3 = FUN_005c08d0(0x1d), puVar3 == (uint *)0x0)) {
      FUN_005c9f70("Not enough memory to allocate file structures\r\n",1);
    }
    puVar3[1] = puVar4;
    *puVar3 = _DAT_02c9f050;
    *(uint **)(puVar4 + 8) = puVar3;
    puVar3[2] = 0;
    *(byte *)(*(int *)(puVar4 + 8) + 0x14) = 0;
    *(uint *)(*(int *)(puVar4 + 8) + 0xc) = 0;
    piVar1 = (int *)(puVar4 + 0x26);
    puVar4 = puVar4 + 0x1a;
    _DAT_02c9f050 = puVar3;
    iVar2 = *piVar1;
  }
  _DAT_02c9f054 = 0;
  return;
}
