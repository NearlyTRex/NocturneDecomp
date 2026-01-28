// Name: core_lever.cpp_staticInit_FUN_00504760
// Address: 00504760
// Address Range: [[00504760, 00504783]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_staticInit_FUN_00504760(void)

#include "nocturne.h"

void __cdecl core_lever_cpp_staticInit_FUN_00504760(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CLeverClassInfo,"CLever",core_lever_cpp_factoryFunc_FUN_00504790,
             &g_CLeverClassVersion,8,&g_CDemonActorClassInfo);
  return;
}
