// Name: core_dog1.cpp_FUN_005abe90
// Address: 005abe90
// Address Range: [[005abe90, 005abf9d]]
// Convention: unknown
// Signature: void core_dog1_cpp_FUN_005abe90(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void core_dog1_cpp_FUN_005abe90(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(param_1 + 0x10af8,"MeleeAttack");
  }
  else {
    unkafter_basicene_cpp_FUN_0059e8c0(param_1,param_2,param_3);
    if ((param_3 == 1) &&
       (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"MeleeAttack"),
       iVar1 != 0)) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x180))(param_1,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(param_1 + 0x10af8,"ChaseFood");
  }
  else if ((param_3 == 1) &&
          (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"ChaseFood"),
          iVar1 != 0)) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x184))(param_1,param_2);
    return;
  }
  if (param_3 == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(param_1 + 0x10af8,"LeapAttack");
    return;
  }
  if ((param_3 == 1) &&
     (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"LeapAttack"), iVar1 != 0
     )) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x188))(param_1,param_2);
    return;
  }
  return;
}
