// Name: unkafter_2d.cpp_FUN_005b0f93
// Address: 005b0f93
// Address Range: [[005b0f93, 005b0ff8]]
// Convention: unknown
// Signature: uint unkafter_2d_cpp_FUN_005b0f93(int *param_1)

#include "nocturne.h"

uint unkafter_2d_cpp_FUN_005b0f93(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005abd9f(param_1,1);
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
  FUN_005abc85((int)param_1 + *(int *)(*param_1 + 4),4);
  return 0xffffffff;
}
