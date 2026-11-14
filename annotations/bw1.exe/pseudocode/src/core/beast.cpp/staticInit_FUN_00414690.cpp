// Name: core_beast.cpp_staticInit_FUN_00414690
// Address: 00414690
// Address Range: [[00414690, 004146b3]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_staticInit_FUN_00414690(void)

#include "nocturne.h"

void __cdecl core_beast_cpp_staticInit_FUN_00414690(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBeastClassInfo,"CBeast",core_beast_cpp_factoryFuncBeast_FUN_004146c0,
             &g_CBeastClassVersion,1,&g_CEnemyClassInfo);
  return;
}
