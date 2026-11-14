// Name: crt_unknown.c_FUN_005cbaec
// Address: 005cbaec
// Address Range: [[005cbaec, 005cbb1d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005cbaec(int param_1)

#include "nocturne.h"

void FUN_005cbaec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = FUN_005cba8c(param_1);
  if (iVar3 == 0) {
    iVar3 = iVar2;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
      iVar3 = DAT_00626220;
    }
    DAT_00626220 = iVar3;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = iVar1;
    }
  }
  return;
}
