// Name: core_actor.cpp_isOfClassHash_FUN_0040c5d0
// Address: 0040c5d0
// Address Range: [[0040c5d0, 0040c5f7]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_isOfClassHash_FUN_0040c5d0(CDemonActor *actor_ptr,uint class_name_hash)

#include "nocturne.h"

int __cdecl core_actor_cpp_isOfClassHash_FUN_0040c5d0(CDemonActor *actor_ptr,uint class_name_hash)

{
  CDemonActorType *type_ptr;
  int iVar1;
  
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  type_ptr = (*((actor_ptr->vtable)._ub)->getActorType)(actor_ptr);
  iVar1 = core_actor_cpp_checkNameHash_FUN_0040c580(type_ptr,class_name_hash);
  return iVar1;
}
