// Name: core_goggles.cpp_FUN_004e3ba0
// Address: 004e3ba0
// Address Range: [[004e3ba0, 004e3bbf]]
// Convention: unknown
// Signature: undefined4 core_goggles_cpp_FUN_004e3ba0(undefined4 param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_goggles_cpp_FUN_004e3ba0(uint param_1,CDemonActor *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_FUN_0040c550(param_2,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}
