// Name: core_actor.cpp_isOfClass_FUN_0040c550
// Address: 0040c550
// Address Range: [[0040c550, 0040c577]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_isOfClass_FUN_0040c550(CDemonActor *actor_ptr,char *class_name)

#include "nocturne.h"

int __cdecl core_actor_cpp_isOfClass_FUN_0040c550(CDemonActor *actor_ptr,char *class_name)

{
  CDemonActorType *pCVar1;
  int iVar2;
  
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  pCVar1 = (*((actor_ptr->vtable)._ub)->getActorType)(actor_ptr);
  iVar2 = core_actor_cpp_matchesClassName_FUN_0040c5b0(pCVar1);
  return iVar2;
}
