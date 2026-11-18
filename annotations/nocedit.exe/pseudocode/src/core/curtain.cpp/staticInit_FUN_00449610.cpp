// Name: core_curtain.cpp_staticInit_FUN_00449610
// Address: 00449610
// Address Range: [[00449610, 0044965b]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_staticInit_FUN_00449610(void)

#include "nocturne.h"

void __cdecl core_curtain_cpp_staticInit_FUN_00449610(void)

{
  __arrinit(g_CurtainCollisionPositions,100,&g_CVectorTypeInfo);
  __arrinit(g_CurtainCollisionInfos,100,&g_SCollisionInfoTypeInfo);
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CCurtainClassInfo,"CCurtain",
             core_curtain_cpp_factoryFuncCurtain_FUN_00449660,&g_CCurtainClassVersion,6,
             &g_CDemonActorClassInfo);
  return;
}
