// Name: core_gasmask.cpp_CGasMask_getPropertyList_FUN_004e5eb0
// Address: 004e5eb0
// Address Range: [[004e5eb0, 004e5ee2]]
// Convention: __cdecl
// Signature: void __cdecl core_gasmask_cpp_CGasMask_getPropertyList_FUN_004e5eb0 (CGasMask *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_gasmask_cpp_CGasMask_getPropertyList_FUN_004e5eb0
          (CGasMask *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  return;
}
