// Name: FUN_00447b30
// Address: 00447b30
// Address Range: [[00447b30, 00447baf]]
// Convention: unknown
// Signature: void FUN_00447b30(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00447b30(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x140)) {
    do {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x13c)) {
        do {
          *(uint *)
           (*(int *)(param_1 + 0x158) + (*(int *)(param_1 + 0x13c) * iVar4 + iVar1) * 4) = param_2;
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x13c));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x140));
  }
  iVar1 = 0x140;
  iVar4 = 0;
  do {
    iVar3 = iVar4 * 0x140;
    do {
      iVar2 = iVar3 + 1;
      *(byte *)(iVar3 + 0x12e1778) = 0;
      (&DAT_012ceb78)[iVar3] = 0;
      iVar3 = iVar2;
    } while (iVar2 != iVar1);
    iVar4 = iVar4 + 1;
    iVar1 = iVar1 + 0x140;
  } while (iVar4 < 0xf0);
  return;
}
