// Name: core_bat.cpp_CBat_FUN_00414ec0
// Address: 00414ec0
// Address Range: [[00414ec0, 00414efb]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_FUN_00414ec0(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_00414ec0(CBat *this_ptr)

{
  _FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(&this_ptr->base,in_stack_00000008);
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            (&this_ptr->model,in_stack_00000008);
  _fprintf(in_stack_00000008,"data\\%s\n",this_ptr->course_filename);
  return;
}
