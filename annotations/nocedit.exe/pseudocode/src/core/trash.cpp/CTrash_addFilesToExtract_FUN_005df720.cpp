// Name: core_trash.cpp_CTrash_addFilesToExtract_FUN_005df720
// Address: 005df720
// Address Range: [[005df720, 005df74b]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_addFilesToExtract_FUN_005df720(CTrash *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_trash_cpp_CTrash_addFilesToExtract_FUN_005df720(CTrash *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(&this_ptr->base,file_handle);
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
