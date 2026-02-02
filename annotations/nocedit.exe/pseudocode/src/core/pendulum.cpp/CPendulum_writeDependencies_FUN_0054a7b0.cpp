// Name: core_pendulum.cpp_CPendulum_writeDependencies_FUN_0054a7b0
// Address: 0054a7b0
// Address Range: [[0054a7b0, 0054a7c7]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_writeDependencies_FUN_0054a7b0(CPendulum *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_pendulum_cpp_CPendulum_writeDependencies_FUN_0054a7b0(CPendulum *this_ptr,_FILE *file_handle)

{
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
