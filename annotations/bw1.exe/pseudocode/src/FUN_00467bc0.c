// Name: FUN_00467bc0
// Address: 00467bc0
// Address Range: [[00467bc0, 00467bfc]]
// Convention: unknown
// Signature: void FUN_00467bc0(int param_1)

#include "nocturne.h"

void FUN_00467bc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x120)) {
    iVar2 = param_1 + 0x124;
    do {
      iVar1 = iVar1 + 1;
      FUN_00484f00(DAT_00612560,iVar2);
      iVar2 = iVar2 + 0x48;
    } while (iVar1 < *(int *)(param_1 + 0x120));
  }
  return;
}
