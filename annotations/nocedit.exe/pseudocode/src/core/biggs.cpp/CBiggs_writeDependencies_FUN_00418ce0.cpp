// Name: core_biggs.cpp_CBiggs_writeDependencies_FUN_00418ce0
// Address: 00418ce0
// Address Range: [[00418ce0, 00418d0b]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_writeDependencies_FUN_00418ce0(CBiggs *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_biggs_cpp_CBiggs_writeDependencies_FUN_00418ce0(CBiggs *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260(&(this_ptr->base).base.model,file_handle);
  return;
}
