// Name: core_grave.cpp_staticInit_FUN_004cf260
// Address: 004cf260
// Address Range: [[004cf260, 004cf283]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_staticInit_FUN_004cf260(void)

#include "nocturne.h"

void __cdecl core_grave_cpp_staticInit_FUN_004cf260(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CGraveClassInfo,"CGrave",core_grave_cpp_factoryFuncGrave_FUN_004cf290,
             &g_CGraveClassVersion,4,&g_CDemonActorClassInfo);
  return;
}
