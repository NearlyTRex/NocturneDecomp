// Name: core_gasmask.cpp_CGasMask_setup_FUN_004e5d50
// Address: 004e5d50
// Address Range: [[004e5d50, 004e5d6f]]
// Convention: __cdecl
// Signature: void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004e5d50(CGasMask *this_ptr)

#include "nocturne.h"

void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004e5d50(CGasMask *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  return;
}
