// Name: FUN_005cb060
// Address: 005cb060
// Address Range: [[005cb060, 005cb099]]
// Convention: unknown
// Signature: int FUN_005cb060(undefined4 param_1)

#include "nocturne.h"

int FUN_005cb060(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005ccfc0(param_1);
  iVar1 = (iVar1 + 1) * 2;
  iVar2 = FUN_005c08d0(iVar1);
  if (iVar2 != 0) {
    FUN_005ccff0(iVar2,param_1,iVar1);
  }
  return iVar2;
}
