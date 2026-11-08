// Name: FUN_00482500
// Address: 00482500
// Address Range: [[00482500, 0048253e]]
// Convention: unknown
// Signature: int FUN_00482500(int *param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00482500(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *param_1) {
    do {
      uVar1 = FUN_00482440(param_1,iVar3,param_2);
      iVar2 = FUN_005a3260(uVar1);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *param_1);
  }
  return -1;
}
