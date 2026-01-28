// Name: core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
// Address: 00408b90
// Address Range: [[00408b90, 00408ba4]]
// Convention: __cdecl
// Signature: char * __cdecl core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor *this_ptr)

#include "nocturne.h"

char * __cdecl core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor *this_ptr)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = (*((this_ptr->vtable)._ub)->getActorType)(this_ptr);
  return pCVar1->class_name;
}
