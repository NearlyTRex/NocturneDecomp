// Name: FUN_0040eadd
// Address: 0040eadd
// Address Range: [[0040eadd, 0040eb04]]
// Convention: unknown
// Signature: void FUN_0040eadd(void)

#include "nocturne.h"

void FUN_0040eadd(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *unaff_retaddr;
  
  iVar1 = unaff_retaddr[3];
  iVar2 = unaff_retaddr[4];
  puVar4 = (uint *)*unaff_retaddr;
  puVar5 = (uint *)unaff_retaddr[1];
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
