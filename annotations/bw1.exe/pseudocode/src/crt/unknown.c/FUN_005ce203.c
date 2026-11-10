// Name: crt_unknown.c_FUN_005ce203
// Address: 005ce203
// Address Range: [[005ce203, 005ce268]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_005ce203(int *param_1)

#include "nocturne.h"

uint FUN_005ce203(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005c8f5f(param_1,1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
  if (*(byte **)(iVar1 + 0x14) < *(byte **)(iVar1 + 0x10)) {
    uVar2 = (uint)**(byte **)(iVar1 + 0x14);
  }
  else {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x10))(iVar1);
  }
  if (uVar2 != 0xffffffff) {
    return uVar2;
  }
  FUN_005c8e45((int)param_1 + *(int *)(*param_1 + 4),4);
  return 0xffffffff;
}
