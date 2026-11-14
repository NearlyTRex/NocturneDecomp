// Name: core_wateract.cpp_staticInit_FUN_005aa550
// Address: 005aa550
// Address Range: [[005aa550, 005aa59b]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_staticInit_FUN_005aa550(void)

#include "nocturne.h"

void __cdecl core_wateract_cpp_staticInit_FUN_005aa550(void)

{
  __arrinit((void *)0x2c93018,100,&g_CVectorTypeInfo);
  __arrinit((void *)0x2c934c8,100,&g_SCollisionInfoTypeInfo);
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CWaterActorClassInfo,"@CWaterActor" + 1,
             core_wateract_cpp_factoryFuncWaterActor_FUN_005aa5a0,&g_CWaterActorClassVersion,6,
             &g_CDemonActorClassInfo);
  return;
}
