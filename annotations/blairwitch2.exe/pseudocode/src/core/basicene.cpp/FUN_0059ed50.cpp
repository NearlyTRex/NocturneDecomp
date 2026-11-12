// Name: core_basicene.cpp_FUN_0059ed50
// Address: 0059ed50
// Address Range: [[0059ed50, 0059edf8]]
// Convention: unknown
// Signature: void core_basicene_cpp_FUN_0059ed50(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_basicene_cpp_FUN_0059ed50(int param_1,uint param_2)

{
  int iVar1;
  
  core_basicene_cpp_FUN_0059ec10(param_1,param_2);
  if ((*(int *)(param_1 + 0x113b4) == 0) && (*(int *)(param_1 + 0x10a78) != 0)) {
    core_basicene_cpp_FUN_005a01a0(param_1,*(uint *)(param_1 + 0x113c4),0x3f800000,0x40000000)
    ;
    core_basicene_cpp_FUN_0059f570(param_1);
    *(uint *)(param_1 + 0x113b4) = 1;
    return;
  }
  iVar1 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
  if ((*(int *)(iVar1 + 0x24) == *(int *)(param_1 + 0x11384)) && (*(int *)(param_1 + 0x113b4) != 0))
  {
    core_basicene_cpp_FUN_005a01a0(param_1,*(uint *)(param_1 + 0x113c4),0,0x41200000);
    core_basicene_cpp_FUN_0059f570(param_1);
    *(uint *)(param_1 + 0x113b4) = 0;
    return;
  }
  return;
}
