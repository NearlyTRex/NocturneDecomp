// Name: FUN_00543840
// Address: 00543840
// Address Range: [[00543840, 00543857]]
// Convention: unknown
// Signature: void FUN_00543840(undefined4 param_1)

#include "nocturne.h"

void FUN_00543840(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_actor_cpp_CDemonActor_setup_FUN_00409fc0_005a2ee4;
  return;
}
