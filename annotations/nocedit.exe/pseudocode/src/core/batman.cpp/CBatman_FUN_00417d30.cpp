// Name: core_batman.cpp_CBatman_FUN_00417d30
// Address: 00417d30
// Address Range: [[00417d30, 00417d5b]]
// Convention: __cdecl
// Signature: void core_batman.cpp_CBatman_FUN_00417d30(CBatman * this_ptr)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_FUN_00417d30(CBatman *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0
            ((CDemonActor *)this_ptr,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}
