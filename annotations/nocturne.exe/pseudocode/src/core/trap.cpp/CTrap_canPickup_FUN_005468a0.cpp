// Name: core_trap.cpp_CTrap_canPickup_FUN_005468a0
// Address: 005468a0
// Address Range: [[005468a0, 005468af] [005468b3, 005468ce]]
// Convention: unknown
// Signature: undefined4 core_trap_cpp_CTrap_canPickup_FUN_005468a0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint core_trap_cpp_CTrap_canPickup_FUN_005468a0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x2d0) == 0) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHero"), iVar1 != 0)) {
    return 2;
  }
  return 0;
}
