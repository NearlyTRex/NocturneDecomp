// Name: core_actor.cpp_isOfClass_FUN_0040c6d0
// Address: 0040c6d0
// Address Range: [[0040c6d0, 0040c6f7]]
// Convention: __cdecl
// Signature: int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)

#include "nocturne.h"

int __cdecl core_actor_cpp_isOfClass_FUN_0040c6d0(CDemonActor *actor_ptr,char *class_name)

{
  CDemonActorType *type_ptr;
  int iVar1;
  char *unaff_retaddr;
  
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  type_ptr = (*((actor_ptr->vtable)._ub)->getActorType)(actor_ptr);
  iVar1 = core_actor_cpp_matchesClassName_FUN_0040c740(type_ptr,unaff_retaddr);
  return iVar1;
}
