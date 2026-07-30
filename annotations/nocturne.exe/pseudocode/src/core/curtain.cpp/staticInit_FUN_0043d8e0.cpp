// Name: core_curtain.cpp_staticInit_FUN_0043d8e0
// Address: 0043d8e0
// Address Range: [[0043d8e0, 0043d92b]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_staticInit_FUN_0043d8e0(void)

#include "nocturne.h"

void __cdecl core_curtain_cpp_staticInit_FUN_0043d8e0(void)

{
  __arrinit(&DAT_0077bdbc,100,&g_CVectorTypeInfo_005993b0);
  __arrinit(&DAT_0077c26c,100,&g_SCollisionInfoTypeInfo_0059bd70);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CCurtainActorType_0077d20c,"CCurtain",
             core_curtain_cpp_factoryFunc_FUN_0043d930,&INT_005ad3f0,6,
             &g_CDemonActorActorType_00763e48);
  return;
}
