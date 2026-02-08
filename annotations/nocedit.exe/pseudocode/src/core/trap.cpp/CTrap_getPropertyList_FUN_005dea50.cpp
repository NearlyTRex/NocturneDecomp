// Name: core_trap.cpp_CTrap_getPropertyList_FUN_005dea50
// Address: 005dea50
// Address Range: [[005dea50, 005dea82]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_getPropertyList_FUN_005dea50(CTrap *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_trap_cpp_CTrap_getPropertyList_FUN_005dea50(CTrap *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  return;
}
