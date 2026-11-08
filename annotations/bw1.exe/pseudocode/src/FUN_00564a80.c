// Name: FUN_00564a80
// Address: 00564a80
// Address Range: [[00564a80, 00564b15]]
// Convention: unknown
// Signature: void FUN_00564a80(int param_1,int param_2)

#include "nocturne.h"

void FUN_00564a80(int param_1,int param_2)

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
    FUN_00483e70(DAT_00612560,*(ushort *)(iVar5 + iVar2),*(ushort *)(iVar5 + 2 + iVar2));
    FUN_00483e70(DAT_00612560,*(ushort *)(iVar5 + 2 + iVar2),*(ushort *)(iVar5 + 4 + iVar2))
    ;
    puVar1 = (ushort *)(iVar5 + iVar2);
    iVar3 = iVar5 + 4;
    iVar5 = iVar5 + 0x12;
    FUN_00483e70(DAT_00612560,*(ushort *)(iVar3 + iVar2),*puVar1);
  }
  FUN_00483e20(DAT_00612560,1);
  return;
}
