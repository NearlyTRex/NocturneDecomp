// Name: core_batman.cpp_staticInit_FUN_004163e0
// Address: 004163e0
// Address Range: [[004163e0, 00416403]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_staticInit_FUN_004163e0(void)

#include "nocturne.h"

void __cdecl core_batman_cpp_staticInit_FUN_004163e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBatmanClassInfo,"CBatman",core_batman_cpp_factoryFunc_FUN_00416410,
             &g_CBatmanClassVersion,3,&g_CEnemyClassInfo);
  return;
}
