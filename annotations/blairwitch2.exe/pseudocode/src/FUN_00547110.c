// Name: FUN_00547110
// Address: 00547110
// Address Range: [[00547110, 00547164]]
// Convention: unknown
// Signature: void FUN_00547110(int param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00547110(int param_1,float param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00547890(param_1);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x1d1f8)) {
    do {
      iVar2 = FUN_00540fc0(iVar1,iVar3,param_3);
      if (-1 < iVar2) {
        *(float *)(param_1 + 0xcf0) = *(float *)(param_1 + 0xcf0) * param_2;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 4;
    } while (iVar3 < *(int *)(iVar1 + 0x1d1f8));
  }
  return;
}
