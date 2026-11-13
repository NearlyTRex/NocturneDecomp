// Name: core_pendulum.cpp_staticInit_FUN_00514c70
// Address: 00514c70
// Address Range: [[00514c70, 00514c93]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_staticInit_FUN_00514c70(void)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_staticInit_FUN_00514c70(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CPendulumClassInfo,"CPendulum",
             core_pendulum_cpp_factoryFuncPendulum_FUN_00514ca0,&g_CPendulumClassVersion,8,
             &g_CDemonActorClassInfo);
  return;
}
