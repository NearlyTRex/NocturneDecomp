// Name: FUN_0051b540
// Address: 0051b540
// Address Range: [[0051b540, 0051b5fe]]
// Convention: unknown
// Signature: int FUN_0051b540(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_0051b540(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  byte *pbVar2;
  int iVar3;
  ushort *puVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  float local_1a4 [100];
  ushort *local_14;
  
  iVar6 = 0;
  do {
    iVar3 = iVar6 + 4;
    *(uint *)((int)local_1a4 + iVar6) = 0;
    iVar6 = iVar3;
  } while (iVar3 != 400);
  param_1 = param_2 * 4 + param_1;
  puVar4 = (ushort *)(*(int *)(param_1 + 0x7c) + param_3 * 0x12);
  local_14 = puVar4 + 3;
  do {
    pbVar9 = (byte *)(*(int *)(param_1 + 0x40) + (uint)*puVar4 * 0x34);
    pbVar5 = pbVar9;
    pbVar7 = pbVar9;
    for (iVar6 = 0; iVar6 < (int)(uint)*pbVar9; iVar6 = iVar6 + 1) {
      pfVar1 = (float *)(pbVar7 + 4);
      pbVar2 = pbVar5 + 1;
      pbVar7 = pbVar7 + 4;
      pbVar5 = pbVar5 + 1;
      local_1a4[*pbVar2] = *pfVar1 + local_1a4[*pbVar2];
    }
    puVar4 = puVar4 + 1;
  } while (puVar4 != local_14);
  iVar8 = 1;
  iVar3 = 4;
  iVar6 = 0;
  do {
    if (local_1a4[iVar6] < *(float *)((int)local_1a4 + iVar3)) {
      iVar6 = iVar8;
    }
    iVar8 = iVar8 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar8 < 100);
  return iVar6;
}
