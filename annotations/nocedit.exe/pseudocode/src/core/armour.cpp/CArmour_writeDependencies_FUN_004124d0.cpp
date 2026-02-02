// Name: core_armour.cpp_CArmour_writeDependencies_FUN_004124d0
// Address: 004124d0
// Address Range: [[004124d0, 004124fb]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_writeDependencies_FUN_004124d0(CArmour *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_armour_cpp_CArmour_writeDependencies_FUN_004124d0(CArmour *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_writeDependencies_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
