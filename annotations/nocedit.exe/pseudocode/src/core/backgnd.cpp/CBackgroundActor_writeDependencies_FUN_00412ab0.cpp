// Name: core_backgnd.cpp_CBackgroundActor_writeDependencies_FUN_00412ab0
// Address: 00412ab0
// Address Range: [[00412ab0, 00412ac7]]
// Convention: __cdecl
// Signature: void __cdecl core_backgnd_cpp_CBackgroundActor_writeDependencies_FUN_00412ab0 (CBackgroundActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_backgnd_cpp_CBackgroundActor_writeDependencies_FUN_00412ab0
          (CBackgroundActor *this_ptr,_FILE *file_handle)

{
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
