// Name: crt_unknown.c_FUN_0056ddf0
// Address: 0056ddf0
// Address Range: [[0056ddf0, 0056de8b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056ddf0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056ddf0(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  byte *puVar4;
  
  DAT_005c18d5 = DAT_005c18d5 & 0xf8 | 4;
  puVar4 = &DAT_005c1894;
  iVar2 = _DAT_005c18a0;
  while (iVar2 != 0) {
    puVar3 = InternalHeapAlloc(0x1d);
    if ((puVar3 == (uint *)0x0) &&
       (puVar3 = malloc(0x1d), puVar3 == (uint *)0x0)) {
      HandleRuntimeError("Not enough memory to allocate file structures\r\n",1);
    }
    puVar3[1] = puVar4;
    *puVar3 = _DAT_02de4e20;
    *(uint **)(puVar4 + 8) = puVar3;
    puVar3[2] = 0;
    *(byte *)(*(int *)(puVar4 + 8) + 0x14) = 0;
    *(uint *)(*(int *)(puVar4 + 8) + 0xc) = 0;
    piVar1 = (int *)(puVar4 + 0x26);
    puVar4 = puVar4 + 0x1a;
    _DAT_02de4e20 = puVar3;
    iVar2 = *piVar1;
  }
  _DAT_02de4e24 = 0;
  return;
}
