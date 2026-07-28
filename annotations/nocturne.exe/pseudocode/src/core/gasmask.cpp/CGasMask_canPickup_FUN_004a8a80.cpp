// Name: core_gasmask.cpp_CGasMask_canPickup_FUN_004a8a80
// Address: 004a8a80
// Address Range: [[004a8a80, 004a8a9f]]
// Convention: unknown
// Signature: undefined4 core_gasmask_cpp_CGasMask_canPickup_FUN_004a8a80(undefined4 param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_gasmask_cpp_CGasMask_canPickup_FUN_004a8a80(uint param_1,CDemonActor *param_2)

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
