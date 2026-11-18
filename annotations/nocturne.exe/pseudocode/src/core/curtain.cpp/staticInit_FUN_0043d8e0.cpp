// Name: core_curtain.cpp_staticInit_FUN_0043d8e0
// Address: 0043d8e0
// Address Range: [[0043d8e0, 0043d92b]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_staticInit_FUN_0043d8e0(void)

#include "nocturne.h"

void __cdecl core_curtain_cpp_staticInit_FUN_0043d8e0(void)

{
  __arrinit(g_CurtainCollisionPositions,100,&g_CVectorTypeInfo_005993b0);
  __arrinit
            (g_CurtainCollisionInfos,100,&g_SCollisionInfoTypeInfo_0059bd70);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CCurtainClassInfo,"CCurtain",
             core_curtain_cpp_factoryFuncCurtain_FUN_0043d930,&g_CCurtainClassVersion,6,
             &g_CDemonActorClassInfo);
  return;
}
