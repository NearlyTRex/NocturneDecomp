// Name: crt_unknown.c_FUN_005c1c50
// Address: 005c1c50
// Address Range: [[005c1c50, 005c1ceb]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c1c50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c1c50(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  byte *puVar4;
  
  DAT_0061ef95 = DAT_0061ef95 & 0xf8 | 4;
  puVar4 = &DAT_0061ef54;
  iVar2 = _DAT_0061ef60;
  while (iVar2 != 0) {
    puVar3 = (uint *)FUN_005b8590(0x1d);
    if ((puVar3 == (uint *)0x0) &&
       (puVar3 = FUN_005b8580(0x1d), puVar3 == (uint *)0x0)) {
      FUN_005c1c20("Not enough memory to allocate file structures\r\n",1);
    }
    puVar3[1] = puVar4;
    *puVar3 = _DAT_02680160;
    *(uint **)(puVar4 + 8) = puVar3;
    puVar3[2] = 0;
    *(byte *)(*(int *)(puVar4 + 8) + 0x14) = 0;
    *(uint *)(*(int *)(puVar4 + 8) + 0xc) = 0;
    piVar1 = (int *)(puVar4 + 0x26);
    puVar4 = puVar4 + 0x1a;
    _DAT_02680160 = puVar3;
    iVar2 = *piVar1;
  }
  _DAT_02680164 = 0;
  return;
}
