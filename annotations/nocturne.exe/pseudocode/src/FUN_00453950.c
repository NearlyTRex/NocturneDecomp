// Name: FUN_00453950
// Address: 00453950
// Address Range: [[00453950, 0045398c]]
// Convention: unknown
// Signature: void FUN_00453950(int param_1)

#include "nocturne.h"

void FUN_00453950(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x120)) {
    iVar2 = param_1 + 0x124;
    do {
      iVar1 = iVar1 + 1;
      FUN_00461eb0(DAT_005ae704,iVar2);
      iVar2 = iVar2 + 0x48;
    } while (iVar1 < *(int *)(param_1 + 0x120));
  }
  return;
}
