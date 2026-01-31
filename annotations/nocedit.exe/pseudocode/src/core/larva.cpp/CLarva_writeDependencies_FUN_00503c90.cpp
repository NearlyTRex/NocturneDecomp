// Name: core_larva.cpp_CLarva_writeDependencies_FUN_00503c90
// Address: 00503c90
// Address Range: [[00503c90, 00503cbb]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_writeDependencies_FUN_00503c90(CLarva *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_larva_cpp_CLarva_writeDependencies_FUN_00503c90(CLarva *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260(&(this_ptr->base).base.model,file_handle);
  return;
}
