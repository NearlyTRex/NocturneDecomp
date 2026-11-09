// Name: core_trap.cpp_FUN_005764d0
// Address: 005764d0
// Address Range: [[005764d0, 005764df] [005764e3, 005764fe]]
// Convention: unknown
// Signature: undefined4 core_trap_cpp_FUN_005764d0(int param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_trap_cpp_FUN_005764d0(int param_1,CDemonActor *param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x434) == 0) &&
     (iVar1 = core_actor_cpp_FUN_0040c840(param_2,"CHero"), iVar1 != 0)) {
    return 2;
  }
  return 0;
}
