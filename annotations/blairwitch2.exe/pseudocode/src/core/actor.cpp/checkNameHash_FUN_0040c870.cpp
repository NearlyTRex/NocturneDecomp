// Name: core_actor.cpp_checkNameHash_FUN_0040c870
// Address: 0040c870
// Address Range: [[0040c870, 0040c88f]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_checkNameHash_FUN_0040c870(CDemonActorType *type_ptr,uint name_hash)

#include "nocturne.h"

int __cdecl core_actor_cpp_checkNameHash_FUN_0040c870(CDemonActorType *type_ptr,uint name_hash)

{
  while( true ) {
    if (type_ptr == (CDemonActorType *)0x0) {
      return 0;
    }
    if (name_hash == type_ptr->name_hash) break;
    type_ptr = type_ptr->parent_type;
  }
  return 1;
}
