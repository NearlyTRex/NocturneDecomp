// Name: core_gasmask.cpp_CGasMask_setup_FUN_004c1390
// Address: 004c1390
// Address Range: [[004c1390, 004c13af]]
// Convention: __cdecl
// Signature: void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004c1390(CGasMask *this_ptr)

#include "nocturne.h"

void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004c1390(CGasMask *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  return;
}
