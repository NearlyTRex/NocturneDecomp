// Name: core_wateract.cpp_staticInit_FUN_00586920
// Address: 00586920
// Address Range: [[00586920, 0058696b]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_staticInit_FUN_00586920(void)

#include "nocturne.h"

void __cdecl core_wateract_cpp_staticInit_FUN_00586920(void)

{
  __arrinit((void *)0x265b7f8,100,&g_CVectorTypeInfo);
  __arrinit((void *)0x265bca8,100,&g_SCollisionInfoTypeInfo);
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CWaterActorClassInfo,"@CWaterActor" + 1,
             core_wateract_cpp_factoryFuncWaterActor_FUN_00586970,&g_CWaterActorClassVersion,6,
             &g_CDemonActorClassInfo);
  return;
}
