// Name: FUN_0044e920
// Address: 0044e920
// Address Range: [[0044e920, 0044e96d]]
// Convention: unknown
// Signature: void FUN_0044e920(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e920(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  _DAT_01ab99f0 = _DAT_01ab99f0 + -1;
  if (_DAT_01ab99f0 != 0) {
    return;
  }
  _DAT_01ab99f0 = 0;
  puVar3 = (uint *)&DAT_01ab99f4;
  puVar4 = (uint *)&DAT_01bd2fa0;
  for (uVar1 = *(uint *)(param_1 + 0x1cc4) & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(byte *)puVar4 = *(byte *)puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  FUN_00461070(DAT_005ae704,0);
  return;
}
