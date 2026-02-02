// Name: core_zombie.cpp_CZombie_FUN_005fcc20
// Address: 005fcc20
// Address Range: [[005fcc20, 005fcc4b]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_FUN_005fcc20(CZombie *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_FUN_005fcc20(CZombie *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_writeDependencies_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
