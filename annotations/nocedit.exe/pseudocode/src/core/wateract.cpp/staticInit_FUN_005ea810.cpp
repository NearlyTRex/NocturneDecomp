// Name: core_wateract.cpp_staticInit_FUN_005ea810
// Address: 005ea810
// Address Range: [[005ea810, 005ea85b]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_staticInit_FUN_005ea810(void)

#include "nocturne.h"

void __cdecl core_wateract_cpp_staticInit_FUN_005ea810(void)

{
  __arrinit(DAT_03f8f638,100,&g_CVectorTypeInfo);
  __arrinit(DAT_03f8fae8,100,&g_SCollisionInfoTypeInfo);
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CWaterActorClassInfo,"CWaterActor",
             core_wateract_cpp_factoryFunc_FUN_005ea860,&g_CWaterActorVersion,6,
             &g_CDemonActorClassInfo);
  return;
}
