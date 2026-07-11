// Name: FUN_00473c50
// Address: 00473c50
// Address Range: [[00473c50, 00473caa]]
// Convention: unknown
// Signature: void FUN_00473c50(int *param_1)

#include "nocturne.h"

void FUN_00473c50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[2] != 0) {
    iVar1 = 0;
    if (0 < *param_1) {
      iVar2 = 0;
      do {
        if (*(int *)(param_1[2] + iVar2) != 0) {
          FUN_005638d0(*(int *)(param_1[2] + iVar2));
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar1 < *param_1);
    }
    FUN_005638d0(param_1[2]);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}
