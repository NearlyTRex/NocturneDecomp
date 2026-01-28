// Name: core_teleport.cpp_CTeleport_FUN_005dab70
// Address: 005dab70
// Address Range: [[005dab70, 005dab9c]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_FUN_005dab70(CTeleport *this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_FUN_005dab70(CTeleport *this_ptr)

{
  CDemonActor *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000(&this_ptr->base,in_stack_00000008);
  if (*(CDemonActor **)(this_ptr->unk + 0xc) != in_stack_00000008) {
    return;
  }
  this_ptr->unk[0xc] = '\0';
  this_ptr->unk[0xd] = '\0';
  this_ptr->unk[0xe] = '\0';
  this_ptr->unk[0xf] = '\0';
  return;
}
