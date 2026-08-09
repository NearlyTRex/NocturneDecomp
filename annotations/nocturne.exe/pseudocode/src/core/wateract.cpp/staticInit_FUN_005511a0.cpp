// Name: core_wateract.cpp_staticInit_FUN_005511a0
// Address: 005511a0
// Address Range: [[005511a0, 005511eb]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_staticInit_FUN_005511a0(void)

#include "nocturne.h"

void __cdecl core_wateract_cpp_staticInit_FUN_005511a0(void)

{
  __arrinit(g_CVector3f_ARRAY_02dd9268,100,&g_CVectorTypeInfo_005993b0);
  __arrinit
            (g_SCollisionInfo_ARRAY_02dd9718,100,&g_SCollisionInfoTypeInfo_0059bd70);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CWaterActorActorType_02ddd598,"CWaterActor",
             core_wateract_cpp_factoryFuncWaterActor_FUN_005511f0,&g_INT_005c154c,6,
             &g_CDemonActorActorType_00763e48);
  return;
}
