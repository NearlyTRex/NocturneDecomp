// Name: unkafter_asgaya.cpp_FUN_005ae95c
// Address: 005ae95c
// Address Range: [[005ae95c, 005ae98d]]
// Convention: unknown
// Signature: void unkafter_asgaya_cpp_FUN_005ae95c(int param_1)

#include "nocturne.h"

void unkafter_asgaya_cpp_FUN_005ae95c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = unkafter_asgaya_cpp_FUN_005ae8fc(param_1);
  if (iVar3 == 0) {
    iVar3 = iVar2;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
      iVar3 = DAT_006075c4;
    }
    DAT_006075c4 = iVar3;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = iVar1;
    }
  }
  return;
}
