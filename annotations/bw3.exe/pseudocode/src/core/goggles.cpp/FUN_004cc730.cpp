// Name: core_goggles.cpp_FUN_004cc730
// Address: 004cc730
// Address Range: [[004cc730, 004cc74f]]
// Convention: unknown
// Signature: undefined4 core_goggles_cpp_FUN_004cc730(undefined4 param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_goggles_cpp_FUN_004cc730(uint param_1,CDemonActor *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_FUN_0040c790(param_2,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}
