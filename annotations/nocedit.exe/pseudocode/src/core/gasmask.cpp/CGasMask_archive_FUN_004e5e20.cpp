// Name: core_gasmask.cpp_CGasMask_archive_FUN_004e5e20
// Address: 004e5e20
// Address Range: [[004e5e20, 004e5e44]]
// Convention: __cdecl
// Signature: void __cdecl core_gasmask_cpp_CGasMask_archive_FUN_004e5e20(CGasMask *this_ptr)

#include "nocturne.h"

void __cdecl core_gasmask_cpp_CGasMask_archive_FUN_004e5e20(CGasMask *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)&this_ptr->model_name,"modelName");
  return;
}
