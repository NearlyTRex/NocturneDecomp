// Name: core_actor.cpp_isOfClass_FUN_0040d7e0
// Address: 0040d7e0
// Address Range: [[0040d7e0, 0040d807]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_isOfClass_FUN_0040d7e0(CDemonActor *actor_ptr,char *class_name)

#include "nocturne.h"

int __cdecl core_actor_cpp_isOfClass_FUN_0040d7e0(CDemonActor *actor_ptr,char *class_name)

{
  CDemonActorType *type_ptr;
  int iVar1;
  
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  type_ptr = (*((actor_ptr->vtable)._ub)->getActorType)(actor_ptr);
  iVar1 = core_actor_cpp_matchesClassName_FUN_0040d840(type_ptr,class_name);
  return iVar1;
}
