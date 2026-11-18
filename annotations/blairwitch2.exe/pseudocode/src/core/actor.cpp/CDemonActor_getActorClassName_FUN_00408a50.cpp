// Name: core_actor.cpp_CDemonActor_getActorClassName_FUN_00408a50
// Address: 00408a50
// Address Range: [[00408a50, 00408a7b]]
// Convention: __cdecl
// Signature: char * __cdecl core_actor_cpp_CDemonActor_getActorClassName_FUN_00408a50(CDemonActor *this_ptr)

#include "nocturne.h"

char * __cdecl core_actor_cpp_CDemonActor_getActorClassName_FUN_00408a50(CDemonActor *this_ptr)

{
  CDemonActorType *pCVar1;
  
  engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s::getClassName()\n");
  pCVar1 = (*((this_ptr->vtable)._ub)->getActorType)(this_ptr);
  return pCVar1->class_name;
}
