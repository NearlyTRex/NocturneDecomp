// Name: core_actor.cpp_isOfClass_FUN_0040d7e0
// Address: 0040d7e0
// Address Range: [[0040d7e0, 0040d807]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_isOfClass_FUN_0040d7e0(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_isOfClass_FUN_0040d7e0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xc4))(param_1,param_2);
  core_actor_cpp_matchesClassName_FUN_0040d840(uVar1);
  return;
}
