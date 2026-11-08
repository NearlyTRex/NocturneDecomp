// Name: FUN_005a4b20
// Address: 005a4b20
// Address Range: [[005a4b20, 005a4b44]]
// Convention: unknown
// Signature: void FUN_005a4b20(int param_1,int param_2)

#include "nocturne.h"

void FUN_005a4b20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_005a3650(param_1 * param_2);
  if (iVar1 != 0) {
    FUN_005a28f0(iVar1,0,param_1 * param_2);
  }
  return;
}
