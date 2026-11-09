// Name: core_confedrt.cpp_FUN_005a0b20
// Address: 005a0b20
// Address Range: [[005a0b20, 005a0bc3]]
// Convention: unknown
// Signature: void core_confedrt_cpp_FUN_005a0b20(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void core_confedrt_cpp_FUN_005a0b20(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(param_1 + 0x10af8,"RangeAttack");
  }
  else {
    unkafter_basicene_cpp_FUN_0059e8c0(param_1,param_2,param_3);
    if ((param_3 == 1) &&
       (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"RangeAttack"),
       iVar1 != 0)) {
      core_confedrt_cpp_FUN_005a1030(param_1,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(param_1 + 0x10af8,"MeleeAttack");
    return;
  }
  if ((param_3 == 1) &&
     (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"MeleeAttack"),
     iVar1 != 0)) {
    core_confedrt_cpp_FUN_005a1180(param_1,param_2);
    return;
  }
  return;
}
