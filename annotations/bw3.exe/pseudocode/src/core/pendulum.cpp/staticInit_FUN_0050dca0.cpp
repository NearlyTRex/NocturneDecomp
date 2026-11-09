// Name: core_pendulum.cpp_staticInit_FUN_0050dca0
// Address: 0050dca0
// Address Range: [[0050dca0, 0050dcc3]]
// Convention: unknown
// Signature: void core_pendulum_cpp_staticInit_FUN_0050dca0(void)

#include "nocturne.h"

void core_pendulum_cpp_staticInit_FUN_0050dca0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CPendulumClassInfo,"CPendulum",
             core_pendulum_cpp_factoryFuncPendulum_FUN_0050dcd0,&g_CPendulumClassVersion,8,
             &g_CDemonActorClassInfo);
  return;
}
