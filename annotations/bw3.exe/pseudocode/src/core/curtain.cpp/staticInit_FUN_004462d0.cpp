// Name: core_curtain.cpp_staticInit_FUN_004462d0
// Address: 004462d0
// Address Range: [[004462d0, 0044631b]]
// Convention: unknown
// Signature: void core_curtain_cpp_staticInit_FUN_004462d0(void)

#include "nocturne.h"

void core_curtain_cpp_staticInit_FUN_004462d0(void)

{
  __arrinit((void *)0x7f8fd0,100,&g_CVectorTypeInfo);
  __arrinit((void *)0x7f9480,100,&g_SCollisionInfoTypeInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CCurtainClassInfo,"CCurtain",
             core_curtain_cpp_factoryFuncCurtain_FUN_00446320,&g_CCurtainClassVersion,6,
             &g_CDemonActorClassInfo);
  return;
}
