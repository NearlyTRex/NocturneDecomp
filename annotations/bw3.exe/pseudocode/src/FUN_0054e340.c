// Name: FUN_0054e340
// Address: 0054e340
// Address Range: [[0054e340, 0054e394]]
// Convention: unknown
// Signature: void FUN_0054e340(int param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0054e340(int param_1,float param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0054eac0(param_1);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x1de78)) {
    do {
      iVar2 = FUN_005481d0(iVar1,iVar3,param_3);
      if (-1 < iVar2) {
        *(float *)(param_1 + 0xcf0) = *(float *)(param_1 + 0xcf0) * param_2;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 4;
    } while (iVar3 < *(int *)(iVar1 + 0x1de78));
  }
  return;
}
