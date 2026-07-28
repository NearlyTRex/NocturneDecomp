// Name: core_crate.cpp_CCrate_canPickup_FUN_0043c940
// Address: 0043c940
// Address Range: [[0043c940, 0043c95b]]
// Convention: unknown
// Signature: undefined4 core_crate_cpp_CCrate_canPickup_FUN_0043c940(undefined4 param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_crate_cpp_CCrate_canPickup_FUN_0043c940(uint param_1,CDemonActor *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 4;
  }
  return uVar2;
}
