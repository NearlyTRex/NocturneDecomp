// Name: core_boxactor.cpp_CBoxActor_canPickup_FUN_0041f0b0
// Address: 0041f0b0
// Address Range: [[0041f0b0, 0041f0de]]
// Convention: unknown
// Signature: undefined4 core_boxactor_cpp_CBoxActor_canPickup_FUN_0041f0b0(int param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_boxactor_cpp_CBoxActor_canPickup_FUN_0041f0b0(int param_1,CDemonActor *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x30c) != 3) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHero");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(uint *)(param_1 + 0x30c);
}
