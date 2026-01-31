// Name: core_beast.cpp_CBeast_writeDependencies_FUN_00418460
// Address: 00418460
// Address Range: [[00418460, 0041848b]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_writeDependencies_FUN_00418460(CBeast *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_beast_cpp_CBeast_writeDependencies_FUN_00418460(CBeast *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260(&(this_ptr->base).base.model,file_handle);
  return;
}
