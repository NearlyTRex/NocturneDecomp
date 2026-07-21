// Name: FUN_0056e990
// Address: 0056e990
// Address Range: [[0056e990, 0056e9c9]]
// Convention: unknown
// Signature: int FUN_0056e990(undefined4 param_1)

#include "nocturne.h"

int FUN_0056e990(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005713e0(param_1);
  iVar1 = (iVar1 + 1) * 2;
  iVar2 = malloc(iVar1);
  if (iVar2 != 0) {
    FUN_00571410(iVar2,param_1,iVar1);
  }
  return iVar2;
}
