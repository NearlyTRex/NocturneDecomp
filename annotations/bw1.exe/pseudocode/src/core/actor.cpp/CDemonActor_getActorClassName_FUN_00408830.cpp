// Name: core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830
// Address: 00408830
// Address Range: [[00408830, 00408844]]
// Convention: __cdecl
// Signature: char * __cdecl core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(CDemonActor *this_ptr)

#include "nocturne.h"

char * __cdecl core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(CDemonActor *this_ptr)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = (*((this_ptr->vtable)._ub)->getActorType)(this_ptr);
  return pCVar1->class_name;
}
