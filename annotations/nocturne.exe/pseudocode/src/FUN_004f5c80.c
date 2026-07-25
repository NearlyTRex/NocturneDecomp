// Name: FUN_004f5c80
// Address: 004f5c80
// Address Range: [[004f5c80, 004f5ce4]]
// Convention: unknown
// Signature: void FUN_004f5c80(int *param_1,int param_2)

#include "nocturne.h"

void FUN_004f5c80(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1[1] + 0x14 + param_2 * 0x24) == 0) {
    iVar2 = 0;
    if (0 < *param_1) {
      iVar1 = 0;
      do {
        iVar2 = iVar2 + 1;
        FUN_004f3f80(param_1[1] + iVar1);
        iVar1 = iVar1 + 0x24;
      } while (iVar2 < *param_1);
    }
    FUN_004f5a50(param_1,1,param_2);
  }
  return;
}
