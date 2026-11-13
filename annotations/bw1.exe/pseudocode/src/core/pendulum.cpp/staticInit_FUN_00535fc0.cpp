// Name: core_pendulum.cpp_staticInit_FUN_00535fc0
// Address: 00535fc0
// Address Range: [[00535fc0, 00535fe3]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_staticInit_FUN_00535fc0(void)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_staticInit_FUN_00535fc0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CPendulumClassInfo,"CPendulum",
             core_pendulum_cpp_factoryFuncPendulum_FUN_00535ff0,&g_CPendulumClassVersion,8,
             &g_CDemonActorClassInfo);
  return;
}
