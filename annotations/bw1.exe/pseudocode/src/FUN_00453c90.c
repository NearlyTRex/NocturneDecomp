// Name: FUN_00453c90
// Address: 00453c90
// Address Range: [[00453c90, 00453dbe]]
// Convention: unknown
// Signature: void FUN_00453c90(int param_1,int param_2)

#include "nocturne.h"

void FUN_00453c90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2 * 0x12c00;
  for (iVar5 = 1; iVar4 = iVar4 + 0x140, iVar5 < *(int *)(param_1 + 0x154) + -1; iVar5 = iVar5 + 1)
  {
    iVar2 = 1;
    iVar1 = iVar5 * 0x140;
    iVar3 = iVar4;
    while( true ) {
      if (*(int *)(param_1 + 0x150) + -1 <= iVar2) break;
      iVar2 = iVar2 + 1;
      *(byte *)(iVar3 + 0x1354e21) = (&DAT_01342221)[iVar1];
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 1;
    }
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    iVar5 = param_2 * 0x12c00;
    do {
      *(byte *)(iVar5 + 0x1354e20) = (&DAT_01342220)[iVar4 * 0x140];
      *(byte *)(iVar5 + 0x1354e1f + *(int *)(param_1 + 0x150)) =
           *(byte *)(*(int *)(param_1 + 0x150) + 0x134221f + iVar4 * 0x140);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x140;
    } while (iVar4 < *(int *)(param_1 + 0x154));
  }
  iVar4 = param_2 * 0x12c00;
  for (iVar5 = 1; iVar5 < *(int *)(param_1 + 0x150) + -1; iVar5 = iVar5 + 1) {
    *(byte *)(iVar4 + 0x1354e21) = (&DAT_01342220)[iVar5];
    iVar3 = (*(int *)(param_1 + 0x154) + -1) * 0x140;
    *(byte *)(iVar3 + param_2 * 0x12c00 + iVar5 + 0x1354e20) = (&DAT_01342220)[iVar3 + iVar5];
    iVar4 = iVar4 + 1;
  }
  return;
}
