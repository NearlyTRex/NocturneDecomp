// Name: FUN_005b98d0
// Address: 005b98d0
// Address Range: [[005b98d0, 005b98f4]]
// Convention: unknown
// Signature: void FUN_005b98d0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005b98d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_005b8580(param_1 * param_2);
  if (iVar1 != 0) {
    FUN_005b77c0(iVar1,0,param_1 * param_2);
  }
  return;
}
