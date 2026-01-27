// Name: core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
// Address: 0040d290
// Address Range: [[0040d290, 0040d328]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290
          (CDemonActor *this_ptr,CActorPropertyList *property_list)

{
  int iVar1;
  
  property_list->unk = (int)this_ptr;
  core_actor_cpp_CActorPropertyList_FUN_0040e290(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e260(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e260(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  if (this_ptr->create_event[0] != '\0') {
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(this_ptr->create_event,"none");
    if (iVar1 != 0) {
      core_actor_cpp_CActorPropertyList_FUN_0040e1a0(property_list);
      return;
    }
  }
  return;
}
