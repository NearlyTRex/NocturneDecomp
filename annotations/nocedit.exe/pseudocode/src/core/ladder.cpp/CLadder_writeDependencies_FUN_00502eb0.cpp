// Name: core_ladder.cpp_CLadder_writeDependencies_FUN_00502eb0
// Address: 00502eb0
// Address Range: [[00502eb0, 00502ec7]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_writeDependencies_FUN_00502eb0(CLadder *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_ladder_cpp_CLadder_writeDependencies_FUN_00502eb0(CLadder *this_ptr,_FILE *file_handle)

{
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
