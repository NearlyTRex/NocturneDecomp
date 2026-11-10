// Name: core_dest.cpp_CActorDestination_setup_FUN_00447100
// Address: 00447100
// Address Range: [[00447100, 0044713e]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_setup_FUN_00447100(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_setup_FUN_00447100(CActorDestination *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  iVar2 = 0x01D182F0;
  *(uint *)&(this_ptr->base).field_0xf8 = 0;
  uVar1 = *(uint *)(iVar2 + 0x1008);
  this_ptr->triggered = 0;
  this_ptr->needs_actor_search = 1;
  *(uint *)&(this_ptr->base).field_0xfc = uVar1;
  return;
}
