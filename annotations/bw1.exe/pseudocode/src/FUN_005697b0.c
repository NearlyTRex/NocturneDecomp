// Name: FUN_005697b0
// Address: 005697b0
// Address Range: [[005697b0, 00569804]]
// Convention: unknown
// Signature: void FUN_005697b0(int param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005697b0(int param_1,float param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00569f30(param_1);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x1de78)) {
    do {
      iVar2 = FUN_00563630(iVar1,iVar3,param_3);
      if (-1 < iVar2) {
        *(float *)(param_1 + 0xcf0) = *(float *)(param_1 + 0xcf0) * param_2;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 4;
    } while (iVar3 < *(int *)(iVar1 + 0x1de78));
  }
  return;
}
