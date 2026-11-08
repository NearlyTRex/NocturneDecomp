// Name: FUN_0040dcf0
// Address: 0040dcf0
// Address Range: [[0040dcf0, 0040dd14]]
// Convention: unknown
// Signature: void FUN_0040dcf0(undefined4 *param_1)

#include "nocturne.h"

void FUN_0040dcf0(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  iVar1 = param_1[3];
  iVar2 = param_1[4];
  puVar4 = (uint *)*param_1;
  puVar5 = (uint *)param_1[1];
  for (uVar3 = (uint)(iVar1 * iVar2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = iVar1 * iVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(byte *)puVar5 = *(byte *)puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  return;
}
