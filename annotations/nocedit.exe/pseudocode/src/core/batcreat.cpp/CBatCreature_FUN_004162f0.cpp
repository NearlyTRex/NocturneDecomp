// Name: core_batcreat.cpp_CBatCreature_FUN_004162f0
// Address: 004162f0
// Address Range: [[004162f0, 0041631b]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_FUN_004162f0(CBatCreature *this_ptr)

#include "nocturne.h"

void __cdecl core_batcreat_cpp_CBatCreature_FUN_004162f0(CBatCreature *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0
            ((CDemonActor *)this_ptr,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}
