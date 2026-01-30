// Name: core_stone.cpp_FUN_005bad40
// Address: 005bad40
// Address Range: [[005bad40, 005bad64]]
// Convention: __cdecl
// Signature: void __cdecl core_stone_cpp_FUN_005bad40(void)

#include "nocturne.h"

void __cdecl core_stone_cpp_FUN_005bad40(void)

{
  CBoxActor *in_stack_00000004;
  
  core_boxactor_cpp_CBoxActor_serialize_FUN_00422060(in_stack_00000004);
  core_actor_cpp_serializeActor_FUN_0040b870(&in_stack_00000004[1].base,"destActor");
  return;
}
