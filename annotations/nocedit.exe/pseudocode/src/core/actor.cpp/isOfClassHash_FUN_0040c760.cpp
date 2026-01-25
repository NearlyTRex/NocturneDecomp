// Name: core_actor.cpp_isOfClassHash_FUN_0040c760
// Address: 0040c760
// Address Range: [[0040c760, 0040c787]]
// Convention: __cdecl
// Signature: int core_actor.cpp_isOfClassHash_FUN_0040c760(CDemonActor * actor_ptr, uint class_name_hash)

#include "nocturne.h"

int __cdecl core_actor_cpp_isOfClassHash_FUN_0040c760(CDemonActor *actor_ptr,uint class_name_hash)

{
  CDemonActorType *type_ptr;
  int iVar1;
  uint unaff_retaddr;
  
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  type_ptr = (*((actor_ptr->vtable)._ub)->getActorType)(actor_ptr);
  iVar1 = core_actor_cpp_checkNameHash_FUN_0040c700(type_ptr,unaff_retaddr);
  return iVar1;
}
