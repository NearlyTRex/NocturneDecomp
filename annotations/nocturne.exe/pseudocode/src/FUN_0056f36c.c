// Name: FUN_0056f36c
// Address: 0056f36c
// Address Range: [[0056f36c, 0056f39d]]
// Convention: unknown
// Signature: void FUN_0056f36c(int param_1)

#include "nocturne.h"

void FUN_0056f36c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = FUN_0056f30c(param_1);
  if (iVar3 == 0) {
    iVar3 = iVar2;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
      iVar3 = DAT_005c1680;
    }
    DAT_005c1680 = iVar3;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = iVar1;
    }
  }
  return;
}
