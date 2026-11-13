// Name: core_curtain.cpp_staticInit_FUN_0044a190
// Address: 0044a190
// Address Range: [[0044a190, 0044a1db]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_staticInit_FUN_0044a190(void)

#include "nocturne.h"

void __cdecl core_curtain_cpp_staticInit_FUN_0044a190(void)

{
  __arrinit((void *)0x7dc71c,100,&g_CVectorTypeInfo);
  __arrinit((void *)0x7dcbcc,100,&g_SCollisionInfoTypeInfo);
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CCurtainClassInfo,"&@CCurtain" + 2,
             core_curtain_cpp_factoryFuncCurtain_FUN_0044a1e0,&g_CCurtainClassVersion,6,
             &g_CDemonActorClassInfo);
  return;
}
