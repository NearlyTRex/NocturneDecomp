// Name: core_beast.cpp_staticInit_FUN_004149a0
// Address: 004149a0
// Address Range: [[004149a0, 004149c3]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_staticInit_FUN_004149a0(void)

#include "nocturne.h"

void __cdecl core_beast_cpp_staticInit_FUN_004149a0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBeastClassInfo,"CBeast",core_beast_cpp_factoryFuncBeast_FUN_004149d0,
             &g_CBeastClassVersion,1,&g_CEnemyClassInfo);
  return;
}
