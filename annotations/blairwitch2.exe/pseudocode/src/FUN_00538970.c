// Name: FUN_00538970
// Address: 00538970
// Address Range: [[00538970, 005389a1]]
// Convention: unknown
// Signature: void FUN_00538970(int *param_1)

#include "nocturne.h"

void FUN_00538970(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      *(int *)(&DAT_01c2b64c + iVar2) = *param_1 * iVar1 * 4 + param_1[9];
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < param_1[1]);
  }
  return;
}
