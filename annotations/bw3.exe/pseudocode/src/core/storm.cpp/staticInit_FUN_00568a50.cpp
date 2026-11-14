// Name: core_storm.cpp_staticInit_FUN_00568a50
// Address: 00568a50
// Address Range: [[00568a50, 00568a73]]
// Convention: __cdecl
// Signature: void __cdecl core_storm_cpp_staticInit_FUN_00568a50(void)

#include "nocturne.h"

void __cdecl core_storm_cpp_staticInit_FUN_00568a50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CStormClassInfo,"CStorm",core_storm_cpp_factoryFuncStorm_FUN_00568a80,
             &g_CStormClassVersion,1,&g_CWeaponClassInfo);
  return;
}
