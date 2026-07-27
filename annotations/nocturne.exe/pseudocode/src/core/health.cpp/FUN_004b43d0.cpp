// Name: core_health.cpp_FUN_004b43d0
// Address: 004b43d0
// Address Range: [[004b43d0, 004b43eb]]
// Convention: unknown
// Signature: undefined4 core_health_cpp_FUN_004b43d0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint core_health_cpp_FUN_004b43d0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}
