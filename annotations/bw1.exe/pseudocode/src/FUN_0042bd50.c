// Name: FUN_0042bd50
// Address: 0042bd50
// Address Range: [[0042bd50, 0042bd80]]
// Convention: unknown
// Signature: undefined4 FUN_0042bd50(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0042bd50(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040c550(param_2,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = FUN_00431430(param_1,param_2);
  return uVar2;
}
