// Name: core_emitter.cpp_CEmitter_writeDependencies_FUN_004a9390
// Address: 004a9390
// Address Range: [[004a9390, 004a93b1]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_writeDependencies_FUN_004a9390(CEmitter *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_emitter_cpp_CEmitter_writeDependencies_FUN_004a9390(CEmitter *this_ptr,_FILE *file_handle)

{
  if (this_ptr->emitter_type != 4) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
