// Name: core_wateract.cpp_staticInit_FUN_00577cf0
// Address: 00577cf0
// Address Range: [[00577cf0, 00577d5e]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_staticInit_FUN_00577cf0(void)

#include "nocturne.h"

void __cdecl core_wateract_cpp_staticInit_FUN_00577cf0(void)

{
  __arrinit((void *)0x2d059b8,100,&g_CVectorTypeInfo);
  __arrinit((void *)0x2d05e68,100,&g_SCollisionInfoTypeInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CWaterActorClassInfo,"CWaterActor",
             core_wateract_cpp_factoryFuncWaterActor_FUN_00577d60,&g_CWaterActorClassVersion,7,
             &g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDemonActorType_02d09d24,"CLava",
             core_wateract_cpp_factoryFuncLava_FUN_00578ff0,&g_INT_00607188,1,
             &g_CWaterActorClassInfo);
  return;
}
