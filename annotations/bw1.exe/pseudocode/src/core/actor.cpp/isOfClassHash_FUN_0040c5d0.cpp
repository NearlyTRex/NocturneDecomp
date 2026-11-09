// Name: core_actor.cpp_isOfClassHash_FUN_0040c5d0
// Address: 0040c5d0
// Address Range: [[0040c5d0, 0040c5f7]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_isOfClassHash_FUN_0040c5d0(int param_1,uint param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_isOfClassHash_FUN_0040c5d0(int param_1,uint param_2)

{
  CDemonActorType *type_ptr;
  
  if (param_1 == 0) {
    return;
  }
  type_ptr = (CDemonActorType *)(**(code **)(*(int *)(param_1 + 0x154) + 0xcc))(param_1);
  core_actor_cpp_FUN_0040c580(type_ptr,param_2);
  return;
}
