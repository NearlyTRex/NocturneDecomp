// Name: FUN_005c1cb0
// Address: 005c1cb0
// Address Range: [[005c1cb0, 005c1cd4]]
// Convention: unknown
// Signature: void FUN_005c1cb0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005c1cb0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_005c08d0(param_1 * param_2);
  if (iVar1 != 0) {
    FUN_005bfb70(iVar1,0,param_1 * param_2);
  }
  return;
}
