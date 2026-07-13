// Name: FUN_004f4a50
// Address: 004f4a50
// Address Range: [[004f4a50, 004f4aaa]]
// Convention: unknown
// Signature: void FUN_004f4a50(int param_1,int param_2)

#include "nocturne.h"

void FUN_004f4a50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = (*(int **)(param_1 + 0x20))[*(int *)(param_1 + 0x1c)];
  pbVar6 = (byte *)(**(int **)(param_1 + 0x20) + iVar1);
  while (pbVar6 < (byte *)(iVar2 + iVar1)) {
    uVar5 = (uint)*(ushort *)(pbVar6 + 2);
    pbVar3 = pbVar6 + 4;
    pbVar6 = pbVar3 + (uVar5 + 3 & 0xfffffffc);
    iVar4 = 0;
    if (uVar5 != 0) {
      do {
        iVar4 = iVar4 + 1;
        *pbVar3 = *(byte *)((uint)*pbVar3 + param_2);
        pbVar3 = pbVar3 + 1;
      } while (iVar4 < (int)uVar5);
    }
  }
  return;
}
