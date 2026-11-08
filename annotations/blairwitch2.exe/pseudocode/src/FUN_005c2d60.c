// Name: FUN_005c2d60
// Address: 005c2d60
// Address Range: [[005c2d60, 005c2d99]]
// Convention: unknown
// Signature: int FUN_005c2d60(undefined4 param_1)

#include "nocturne.h"

int FUN_005c2d60(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005c4cc0(param_1);
  iVar1 = (iVar1 + 1) * 2;
  iVar2 = FUN_005b8580(iVar1);
  if (iVar2 != 0) {
    FUN_005c4cf0(iVar2,param_1,iVar1);
  }
  return iVar2;
}
