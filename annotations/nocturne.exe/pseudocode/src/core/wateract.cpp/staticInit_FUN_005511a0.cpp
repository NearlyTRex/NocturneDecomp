// Name: core_wateract.cpp_staticInit_FUN_005511a0
// Address: 005511a0
// Address Range: [[005511a0, 005511eb]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_staticInit_FUN_005511a0(void)

#include "nocturne.h"

void __cdecl core_wateract_cpp_staticInit_FUN_005511a0(void)

{
  __arrinit
            (g_WaterActorCollisionPositions,100,&g_CVectorTypeInfo_005993b0);
  __arrinit
            (g_WaterActorCollisionInfos,100,&g_SCollisionInfoTypeInfo_0059bd70);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CWaterActorClassInfo,"CWaterActor",
             core_wateract_cpp_factoryFuncWaterActor_FUN_005511f0,&g_CWaterActorVersion,6,
             &g_CDemonActorClassInfo);
  return;
}
