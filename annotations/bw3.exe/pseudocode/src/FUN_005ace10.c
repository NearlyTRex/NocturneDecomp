// Name: FUN_005ace10
// Address: 005ace10
// Address Range: [[005ace10, 005aceab]]
// Convention: unknown
// Signature: void FUN_005ace10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ace10(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  byte *puVar4;
  
  DAT_006076b9 = DAT_006076b9 & 0xf8 | 4;
  puVar4 = &DAT_00607678;
  iVar2 = _DAT_00607684;
  while (iVar2 != 0) {
    puVar3 = (uint *)FUN_005a3660(0x1d);
    if ((puVar3 == (uint *)0x0) &&
       (puVar3 = (uint *)FUN_005a3650(0x1d), puVar3 == (uint *)0x0)) {
      FUN_005acde0("Not enough memory to allocate file structures\r\n",1);
    }
    puVar3[1] = puVar4;
    *puVar3 = _DAT_02d252a0;
    *(uint **)(puVar4 + 8) = puVar3;
    puVar3[2] = 0;
    *(byte *)(*(int *)(puVar4 + 8) + 0x14) = 0;
    *(uint *)(*(int *)(puVar4 + 8) + 0xc) = 0;
    piVar1 = (int *)(puVar4 + 0x26);
    puVar4 = puVar4 + 0x1a;
    _DAT_02d252a0 = puVar3;
    iVar2 = *piVar1;
  }
  _DAT_02d252a4 = 0;
  return;
}
