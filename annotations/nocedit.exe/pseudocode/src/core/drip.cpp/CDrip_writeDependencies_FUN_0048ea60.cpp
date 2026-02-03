// Name: core_drip.cpp_CDrip_writeDependencies_FUN_0048ea60
// Address: 0048ea60
// Address Range: [[0048ea60, 0048ea8b]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_writeDependencies_FUN_0048ea60(CDrip *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_drip_cpp_CDrip_writeDependencies_FUN_0048ea60(CDrip *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(&this_ptr->base,file_handle);
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
