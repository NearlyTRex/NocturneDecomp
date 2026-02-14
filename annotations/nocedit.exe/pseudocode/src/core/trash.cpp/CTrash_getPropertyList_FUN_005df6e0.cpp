// Name: core_trash.cpp_CTrash_getPropertyList_FUN_005df6e0
// Address: 005df6e0
// Address Range: [[005df6e0, 005df712]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_getPropertyList_FUN_005df6e0(CTrash *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_getPropertyList_FUN_005df6e0(CTrash *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  return;
}
