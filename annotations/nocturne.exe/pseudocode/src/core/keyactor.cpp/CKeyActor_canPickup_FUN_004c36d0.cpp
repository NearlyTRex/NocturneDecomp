// Name: core_keyactor.cpp_CKeyActor_canPickup_FUN_004c36d0
// Address: 004c36d0
// Address Range: [[004c36d0, 004c36eb]]
// Convention: unknown
// Signature: undefined4 core_keyactor_cpp_CKeyActor_canPickup_FUN_004c36d0(undefined4 param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_keyactor_cpp_CKeyActor_canPickup_FUN_004c36d0(uint param_1,CDemonActor *param_2)

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
