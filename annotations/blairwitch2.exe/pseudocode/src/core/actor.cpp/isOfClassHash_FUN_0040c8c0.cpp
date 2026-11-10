// Name: core_actor.cpp_isOfClassHash_FUN_0040c8c0
// Address: 0040c8c0
// Address Range: [[0040c8c0, 0040c8e7]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_isOfClassHash_FUN_0040c8c0(int param_1,uint param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_isOfClassHash_FUN_0040c8c0(int param_1,uint param_2)

{
  CDemonActorType *type_ptr;
  
  if (param_1 == 0) {
    return;
  }
  type_ptr = (CDemonActorType *)(**(code **)(*(int *)(param_1 + 0x2b0) + 0xd4))(param_1);
  core_actor_cpp_checkNameHash_FUN_0040c870(type_ptr,param_2);
  return;
}
