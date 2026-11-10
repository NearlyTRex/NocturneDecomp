// Name: core_gasmask.cpp_CGasMask_setup_FUN_004ddb10
// Address: 004ddb10
// Address Range: [[004ddb10, 004ddb2f]]
// Convention: __cdecl
// Signature: void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004ddb10(CGasMask *this_ptr)

#include "nocturne.h"

void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004ddb10(CGasMask *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  return;
}
