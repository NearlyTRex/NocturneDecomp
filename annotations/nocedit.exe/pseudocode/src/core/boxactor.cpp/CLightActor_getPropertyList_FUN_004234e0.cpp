// Name: core_boxactor.cpp_CLightActor_getPropertyList_FUN_004234e0
// Address: 004234e0
// Address Range: [[004234e0, 0042358b]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_getPropertyList_FUN_004234e0 (CLightActor *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_boxactor_cpp_CLightActor_getPropertyList_FUN_004234e0
          (CLightActor *this_ptr,CActorPropertyList *property_list)

{
  core_boxactor_cpp_CBoxActor_getPropertyList_FUN_004226e0(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(property_list);
  if (*(int *)this_ptr->unk == 0) {
    core_actor_cpp_CActorPropertyList_FUN_0040e260(property_list);
    core_actor_cpp_CActorPropertyList_FUN_0040e260(property_list);
    core_actor_cpp_CActorPropertyList_FUN_0040e670(property_list);
    core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  return;
}
