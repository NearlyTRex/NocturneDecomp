// Name: core_grave.cpp_CGrave_setup_FUN_004cf350
// Address: 004cf350
// Address Range: [[004cf350, 004cf36f]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_setup_FUN_004cf350(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_setup_FUN_004cf350(CGrave *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  return;
}
