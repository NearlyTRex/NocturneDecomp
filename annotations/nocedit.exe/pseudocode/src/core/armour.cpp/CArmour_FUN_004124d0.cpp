// Name: core_armour.cpp_CArmour_FUN_004124d0
// Address: 004124d0
// Address Range: [[004124d0, 004124fb]]
// Convention: __cdecl
// Signature: void core_armour.cpp_CArmour_FUN_004124d0(CArmour * this_ptr)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_FUN_004124d0(CArmour *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0
            ((CDemonActor *)this_ptr,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}
