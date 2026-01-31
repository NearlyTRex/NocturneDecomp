// Name: core_bat.cpp_CBat_writeDependencies_FUN_00414ec0
// Address: 00414ec0
// Address Range: [[00414ec0, 00414efb]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_writeDependencies_FUN_00414ec0(CBat *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_writeDependencies_FUN_00414ec0(CBat *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(&this_ptr->base,file_handle);
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            (&this_ptr->model,file_handle);
  _fprintf(file_handle,"data\\%s\n",this_ptr->course_filename);
  return;
}
