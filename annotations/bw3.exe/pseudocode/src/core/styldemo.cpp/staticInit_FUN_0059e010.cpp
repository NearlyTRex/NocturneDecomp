// Name: core_styldemo.cpp_staticInit_FUN_0059e010
// Address: 0059e010
// Address Range: [[0059e010, 0059e033]]
// Convention: __cdecl
// Signature: void __cdecl core_styldemo_cpp_staticInit_FUN_0059e010(void)

#include "nocturne.h"

void __cdecl core_styldemo_cpp_staticInit_FUN_0059e010(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CStylerDemonClassInfo,"CStylerDemon",
             core_styldemo_cpp_factoryFuncStylerDemon_FUN_0059e040,&g_CStylerDemonClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
