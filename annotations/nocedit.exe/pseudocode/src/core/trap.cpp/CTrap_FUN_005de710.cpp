// Name: core_trap.cpp_CTrap_FUN_005de710
// Address: 005de710
// Address Range: [[005de710, 005de71f] [005de723, 005de73e]]
// Convention: __cdecl
// Signature: int __cdecl core_trap_cpp_CTrap_FUN_005de710(CTrap *this_ptr)

#include "nocturne.h"

int __cdecl core_trap_cpp_CTrap_FUN_005de710(CTrap *this_ptr)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  if ((this_ptr->wolf_in_trap == 0) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero"), iVar1 != 0)
     ) {
    return 2;
  }
  return 0;
}
