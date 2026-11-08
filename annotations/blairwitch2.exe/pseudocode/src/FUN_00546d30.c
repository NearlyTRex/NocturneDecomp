// Name: FUN_00546d30
// Address: 00546d30
// Address Range: [[00546d30, 00546d9e]]
// Convention: unknown
// Signature: void FUN_00546d30(int param_1,float *param_2)

#include "nocturne.h"

void FUN_00546d30(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00547890(param_1);
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(iVar1 + 0x1d1f8)) {
    do {
      *(float *)(iVar2 + 0xe8c) = *param_2 + *(float *)(iVar2 + 0xe8c);
      *(float *)(iVar2 + 0xe9c) = param_2[1] + *(float *)(iVar2 + 0xe9c);
      iVar3 = iVar3 + 1;
      *(float *)(iVar2 + 0xeac) = param_2[2] + *(float *)(iVar2 + 0xeac);
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < *(int *)(iVar1 + 0x1d1f8));
  }
  *(uint *)(param_1 + 0x2230) = 0xffffffff;
  return;
}
