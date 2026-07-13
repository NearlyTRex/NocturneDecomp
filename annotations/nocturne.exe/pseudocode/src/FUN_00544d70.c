// Name: FUN_00544d70
// Address: 00544d70
// Address Range: [[00544d70, 00544da1]]
// Convention: unknown
// Signature: void FUN_00544d70(int *param_1)

#include "nocturne.h"

void FUN_00544d70(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *param_1) {
    piVar2 = param_1 + 1;
    do {
      iVar1 = iVar1 + 1;
      FUN_00461eb0(DAT_005ae704,piVar2);
      piVar2 = piVar2 + 6;
    } while (iVar1 < *param_1);
  }
  return;
}
