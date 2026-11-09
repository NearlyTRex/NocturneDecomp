// Name: core_steuben.cpp_staticInit_FUN_005a5ae0
// Address: 005a5ae0
// Address Range: [[005a5ae0, 005a5b03]]
// Convention: unknown
// Signature: void core_steuben_cpp_staticInit_FUN_005a5ae0(void)

#include "nocturne.h"

void core_steuben_cpp_staticInit_FUN_005a5ae0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CSteubenClassInfo,"$@CSteuben" + 2,
             core_steuben_cpp_factoryFuncSteuben_FUN_005a5b10,&g_CSteubenClassVersion,1,
             &g_CBasicNPCClassInfo);
  return;
}
