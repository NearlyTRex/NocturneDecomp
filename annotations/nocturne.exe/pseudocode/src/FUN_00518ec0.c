// Name: FUN_00518ec0
// Address: 00518ec0
// Address Range: [[00518ec0, 00518f55]]
// Convention: unknown
// Signature: void FUN_00518ec0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00518ec0(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  for (iVar4 = 0; iVar3 = param_1 + param_2 * 4, iVar4 < *(int *)(iVar3 + 0x54); iVar4 = iVar4 + 1)
  {
    iVar2 = *(int *)(iVar3 + 0x7c);
    FUN_004610a0(DAT_005ae704,*(ushort *)(iVar5 + iVar2),*(ushort *)(iVar5 + 2 + iVar2));
    FUN_004610a0(DAT_005ae704,*(ushort *)(iVar5 + 2 + iVar2),*(ushort *)(iVar5 + 4 + iVar2))
    ;
    puVar1 = (ushort *)(iVar5 + iVar2);
    iVar3 = iVar5 + 4;
    iVar5 = iVar5 + 0x12;
    FUN_004610a0(DAT_005ae704,*(ushort *)(iVar3 + iVar2),*puVar1);
  }
  FUN_00461050(DAT_005ae704,1);
  return;
}
