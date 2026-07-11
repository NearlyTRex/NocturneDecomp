// Name: FUN_0051d970
// Address: 0051d970
// Address Range: [[0051d970, 0051d9c4]]
// Convention: unknown
// Signature: void FUN_0051d970(int param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0051d970(int param_1,float param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0051e0a0(param_1);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x28558)) {
    do {
      iVar2 = FUN_00517b10(iVar1,iVar3,param_3);
      if (-1 < iVar2) {
        *(float *)(param_1 + 0xcf0) = *(float *)(param_1 + 0xcf0) * param_2;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 4;
    } while (iVar3 < *(int *)(iVar1 + 0x28558));
  }
  return;
}
