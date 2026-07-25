// Name: FUN_004f4050
// Address: 004f4050
// Address Range: [[004f4050, 004f416a]]
// Convention: unknown
// Signature: void FUN_004f4050(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_004f4050(int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int local_24;
  int local_20;
  int local_1c;
  
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    local_1c = 0;
    if (DAT_005b7624 == 0x10) {
      param_2 = param_2 * 2;
    }
    pcVar6 = (code *)FUN_0042d130(param_2);
    local_20 = param_3 << 2;
    local_24 = 0;
    puVar9 = (ushort *)(*(int *)(param_1 + 0x14) + **(int **)(param_1 + 0x20));
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x20) + local_24 + 4);
      iVar5 = *(int *)(param_1 + 0x14);
      iVar8 = param_2 + *(int *)(&DAT_01bd2fa0 + local_20);
      while (puVar9 < (ushort *)(iVar5 + iVar4)) {
        puVar1 = puVar9 + 1;
        puVar2 = puVar9 + 2;
        uVar3 = *puVar9;
        puVar9 = (ushort *)((int)puVar2 + (*puVar1 + 3 & 0xfffffffc));
        iVar7 = iVar8 + (uint)uVar3;
        if (DAT_005b7624 == 0x10) {
          iVar7 = iVar7 + (uint)uVar3;
        }
        (*pcVar6)(iVar7,puVar2,(uint)*puVar1,param_2,param_3);
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 4;
      param_3 = param_3 + 1;
      local_24 = local_24 + 4;
    } while (local_1c < *(int *)(param_1 + 0x1c));
  }
  return;
}
