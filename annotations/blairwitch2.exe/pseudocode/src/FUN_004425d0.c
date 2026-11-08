// Name: FUN_004425d0
// Address: 004425d0
// Address Range: [[004425d0, 00442702]]
// Convention: unknown
// Signature: void FUN_004425d0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004425d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2 * 0x12c00;
  for (iVar5 = 1; iVar4 = iVar4 + 0x140, iVar5 < *(int *)(param_1 + 0x154) + -1; iVar5 = iVar5 + 1)
  {
    iVar3 = 1;
    iVar2 = iVar5 * 0x140;
    iVar1 = iVar4;
    while( true ) {
      if (*(int *)(param_1 + 0x150) + -1 <= iVar3) break;
      iVar3 = iVar3 + 1;
      *(byte *)(iVar1 + 0x1339921) = (&DAT_01326d21)[iVar2];
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    }
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    iVar5 = param_2 * 0x12c00;
    do {
      *(byte *)(iVar5 + 0x1339920) = (&DAT_01326d20)[iVar4 * 0x140];
      *(byte *)(*(int *)(param_1 + 0x150) + 0x133991f + iVar5) =
           *(byte *)(*(int *)(param_1 + 0x150) + 0x1326d1f + iVar4 * 0x140);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x140;
    } while (iVar4 < *(int *)(param_1 + 0x154));
  }
  iVar5 = 1;
  iVar4 = param_2 * 0x12c00;
  while (iVar5 < *(int *)(param_1 + 0x150) + -1) {
    *(byte *)(iVar4 + 0x1339921) = (&DAT_01326d20)[iVar5];
    iVar2 = (*(int *)(param_1 + 0x154) + -1) * 0x140;
    iVar1 = iVar2 + iVar5;
    iVar5 = iVar5 + 1;
    *(byte *)(iVar2 + param_2 * 0x12c00 + 0x133991f + iVar5) = (&DAT_01326d20)[iVar1];
    iVar4 = iVar4 + 1;
  }
  return;
}
