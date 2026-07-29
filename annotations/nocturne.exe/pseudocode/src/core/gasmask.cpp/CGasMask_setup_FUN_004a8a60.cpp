// Name: core_gasmask.cpp_CGasMask_setup_FUN_004a8a60
// Address: 004a8a60
// Address Range: [[004a8a60, 004a8a7f]]
// Convention: __cdecl
// Signature: void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004a8a60(CGasMask *this_ptr)

#include "nocturne.h"

void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004a8a60(CGasMask *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  return;
}
