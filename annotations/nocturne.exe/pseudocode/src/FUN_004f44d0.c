// Name: FUN_004f44d0
// Address: 004f44d0
// Address Range: [[004f44d0, 004f45d1]]
// Convention: unknown
// Signature: void FUN_004f44d0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_004f44d0(int param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int local_20;
  int local_1c;
  code *local_18;
  
  if (((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x14) != 0)) && (param_2 != 0)) {
    local_1c = 0;
    if (param_4 == 8) {
      local_18 = (code *)FUN_0042d150();
    }
    if (param_4 == 0x10) {
      local_18 = (code *)FUN_0042d170();
    }
    local_20 = 0;
    puVar7 = (ushort *)(*(int *)(param_1 + 0x14) + **(int **)(param_1 + 0x20));
    do {
      iVar4 = *(int *)(param_1 + 0x14);
      iVar5 = *(int *)(*(int *)(param_1 + 0x20) + local_20 + 4);
      while (puVar7 < (ushort *)(iVar5 + iVar4)) {
        puVar1 = puVar7 + 1;
        puVar2 = puVar7 + 2;
        uVar3 = *puVar7;
        puVar7 = (ushort *)((int)puVar2 + (*puVar1 + 3 & 0xfffffffc));
        iVar6 = param_2 + (uint)uVar3;
        if (param_4 == 0x10) {
          iVar6 = iVar6 + (uint)uVar3;
        }
        (*local_18)(iVar6,puVar2,(uint)*puVar1);
      }
      local_20 = local_20 + 4;
      local_1c = local_1c + 1;
      param_2 = param_2 + param_3;
    } while (local_1c < *(int *)(param_1 + 0x1c));
  }
  return;
}
