// Name: FUN_00574a10
// Address: 00574a10
// Address Range: [[00574a10, 00574a52]]
// Convention: unknown
// Signature: undefined4 FUN_00574a10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_00574a10(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x18))(param_1);
  iVar1 = FUN_004659c0(param_2,param_3,param_4);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return 1;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return 0;
}
