// Name: core_gasmask.cpp_CGasMask_setup_FUN_004c6690
// Address: 004c6690
// Address Range: [[004c6690, 004c66af]]
// Convention: __cdecl
// Signature: void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004c6690(CGasMask *this_ptr)

#include "nocturne.h"

void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004c6690(CGasMask *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  return;
}
