// Name: core_lever.cpp_staticInit_FUN_00504760
// Address: 00504760
// Address Range: [[00504760, 00504783]]
// Convention: __cdecl
// Signature: CDemonActorType * core_lever.cpp_staticInit_FUN_00504760(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_lever_cpp_staticInit_FUN_00504760(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CLeverClassInfo,"CLever",core_lever_cpp_FUN_00504790,
                      &g_CLeverClassVersion,8,&g_CDemonActorClassInfo);
  return pCVar1;
}
