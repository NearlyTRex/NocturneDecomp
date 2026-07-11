// Name: FUN_00527230
// Address: 00527230
// Address Range: [[00527230, 00527257]]
// Convention: unknown
// Signature: undefined4 FUN_00527230(undefined4 param_1)

#include "nocturne.h"

uint FUN_00527230(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005234b0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00525570(iVar1);
  FUN_00528890();
  return 1;
}
