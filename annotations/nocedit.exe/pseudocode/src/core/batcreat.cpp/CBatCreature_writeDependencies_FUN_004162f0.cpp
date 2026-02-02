// Name: core_batcreat.cpp_CBatCreature_writeDependencies_FUN_004162f0
// Address: 004162f0
// Address Range: [[004162f0, 0041631b]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_writeDependencies_FUN_004162f0 (CBatCreature *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_batcreat_cpp_CBatCreature_writeDependencies_FUN_004162f0
          (CBatCreature *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_writeDependencies_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
