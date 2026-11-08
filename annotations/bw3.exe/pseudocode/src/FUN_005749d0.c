// Name: FUN_005749d0
// Address: 005749d0
// Address Range: [[005749d0, 00574a0a]]
// Convention: unknown
// Signature: undefined4 FUN_005749d0(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_005749d0(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x18))(param_1);
  iVar1 = FUN_005a43ec(param_2,param_3);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return 1;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return 0;
}
