// Name: core_werewolf.cpp_factoryFuncWerewolf_FUN_005af2a0
// Address: 005af2a0
// Address Range: [[005af2a0, 005af2bb]]
// Convention: unknown
// Signature: void core_werewolf_cpp_factoryFuncWerewolf_FUN_005af2a0(void)

#include "nocturne.h"

void core_werewolf_cpp_factoryFuncWerewolf_FUN_005af2a0(void)

{
  CWerewolf *this_ptr;
  
  this_ptr = (CWerewolf *)operator_new(0xc2b0);
  if (this_ptr == (CWerewolf *)0x0) {
    return;
  }
  core_werewolf_cpp_CWerewolf_ctor_FUN_005af2d0(this_ptr);
  return;
}
