// Name: core_wateract.cpp_staticInit_FUN_00577cf0
// Address: 00577cf0
// Address Range: [[00577cf0, 00577d5e]]
// Convention: unknown
// Signature: void core_wateract_cpp_staticInit_FUN_00577cf0(void)

#include "nocturne.h"

void core_wateract_cpp_staticInit_FUN_00577cf0(void)

{
  __arrinit((void *)0x2d059b8,100,&g_CVectorTypeInfo);
  __arrinit((void *)0x2d05e68,100,&g_SCollisionInfoTypeInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CWaterActorClassInfo,"@CWaterActor" + 1,
             core_wateract_cpp_factoryFuncWaterActor_FUN_00577d60,&g_CWaterActorClassVersion,7,
             &g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x2d09d24,"CLava",core_wateract_cpp_FUN_00578ff0,
             (int *)0x607188,1,&g_CWaterActorClassInfo);
  return;
}
