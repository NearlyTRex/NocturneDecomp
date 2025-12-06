// Name: core_teleport.cpp_CTeleport_FUN_005daba0
// Address: 005daba0
// Address Range: [[005daba0, 005dabd9]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleport_FUN_005daba0(CTeleport * this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_FUN_005daba0(CTeleport *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  CActorPropertyList *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_0000000c);
  return;
}
