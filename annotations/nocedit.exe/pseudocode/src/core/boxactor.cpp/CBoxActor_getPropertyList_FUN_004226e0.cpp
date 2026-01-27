// Name: core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0
// Address: 004226e0
// Address Range: [[004226e0, 004228d1]]
// Convention: __cdecl
// Signature: void core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0(CBoxActor * this_ptr, CActorPropertyList * property_list)

#include "nocturne.h"

void __cdecl
core_boxactor_cpp_CBoxActor_getPropertyList_FUN_004226e0
          (CBoxActor *this_ptr,CActorPropertyList *property_list)

{
  CKeyFramedModel *pCVar1;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(property_list);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (1 < pCVar1->frame_count) {
    core_actor_cpp_CActorPropertyList_FUN_0040e1a0(property_list);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e260(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  if (this_ptr->can_be_pushed != 0) {
    core_actor_cpp_CActorPropertyList_FUN_0040e350(property_list);
    core_actor_cpp_CActorPropertyList_FUN_0040e2d0(property_list);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e300(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(property_list);
  if ((this_ptr->pickup_type != 0) && (this_ptr->pickup_type != 1)) {
    core_actor_cpp_CActorPropertyList_FUN_0040e6a0(property_list);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  return;
}
