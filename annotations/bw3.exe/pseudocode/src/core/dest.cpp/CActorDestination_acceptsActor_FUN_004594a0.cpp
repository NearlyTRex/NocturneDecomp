// Name: core_dest.cpp_CActorDestination_acceptsActor_FUN_004594a0
// Address: 004594a0
// Address Range: [[004594a0, 004594f2]]
// Convention: __cdecl
// Signature: int __cdecl core_dest_cpp_CActorDestination_acceptsActor_FUN_004594a0(CActorDestination *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_dest_cpp_CActorDestination_acceptsActor_FUN_004594a0(CActorDestination *this_ptr,CDemonActor *actor)

{
  int iVar1;
  
  if (*(int *)&this_ptr->field_0x184 == 0) {
    if (this_ptr->field_0x15c == '\0') {
      if (actor == *(CDemonActor **)&this_ptr->field_0x158) {
        return 1;
      }
    }
    else {
      iVar1 = core_actor_cpp_FUN_0040c790(actor,&this_ptr->field_0x15c);
      if (iVar1 != 0) {
        *(CDemonActor **)&this_ptr->field_0x158 = actor;
        return 1;
      }
    }
  }
  return 0;
}
