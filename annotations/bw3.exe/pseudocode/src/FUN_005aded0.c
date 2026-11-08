// Name: FUN_005aded0
// Address: 005aded0
// Address Range: [[005aded0, 005adf09]]
// Convention: unknown
// Signature: int FUN_005aded0(undefined4 param_1)

#include "nocturne.h"

int FUN_005aded0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005afd50(param_1);
  iVar1 = (iVar1 + 1) * 2;
  iVar2 = FUN_005a3650(iVar1);
  if (iVar2 != 0) {
    FUN_005afd80(iVar2,param_1,iVar1);
  }
  return iVar2;
}
