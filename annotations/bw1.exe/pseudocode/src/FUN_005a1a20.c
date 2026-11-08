// Name: FUN_005a1a20
// Address: 005a1a20
// Address Range: [[005a1a20, 005a1a62]]
// Convention: unknown
// Signature: undefined4 FUN_005a1a20(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_005a1a20(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x18))(param_1);
  iVar1 = FUN_00479180(param_2,param_3,param_4);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return 1;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return 0;
}
