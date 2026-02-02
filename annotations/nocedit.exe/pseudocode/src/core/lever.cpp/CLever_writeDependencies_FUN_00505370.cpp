// Name: core_lever.cpp_CLever_writeDependencies_FUN_00505370
// Address: 00505370
// Address Range: [[00505370, 00505387]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_writeDependencies_FUN_00505370(CLever *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_lever_cpp_CLever_writeDependencies_FUN_00505370(CLever *this_ptr,_FILE *file_handle)

{
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
