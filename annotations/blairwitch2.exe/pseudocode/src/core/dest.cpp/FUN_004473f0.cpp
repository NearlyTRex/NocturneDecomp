// Name: core_dest.cpp_FUN_004473f0
// Address: 004473f0
// Address Range: [[004473f0, 00447442]]
// Convention: __cdecl
// Signature: int __cdecl core_dest_cpp_FUN_004473f0(CActorDestination *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_dest_cpp_FUN_004473f0(CActorDestination *this_ptr,CDemonActor *actor)

{
  int iVar1;
  
  if (*(int *)&this_ptr->field_0x2e0 == 0) {
    if (this_ptr->field_0x2b8 == '\0') {
      if (actor == *(CDemonActor **)&this_ptr->field_0x2b4) {
        return 1;
      }
    }
    else {
      iVar1 = core_actor_cpp_FUN_0040c840(actor,&this_ptr->field_0x2b8);
      if (iVar1 != 0) {
        *(CDemonActor **)&this_ptr->field_0x2b4 = actor;
        return 1;
      }
    }
  }
  return 0;
}
