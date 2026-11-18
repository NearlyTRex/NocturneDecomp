// Name: core_pendulum.cpp_staticInit_FUN_004f2bd0
// Address: 004f2bd0
// Address Range: [[004f2bd0, 004f2bf3]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_staticInit_FUN_004f2bd0(void)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_staticInit_FUN_004f2bd0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CPendulumClassInfo,"CPendulum",
             core_pendulum_cpp_factoryFuncPendulum_FUN_004f2c00,&g_CPendulumClassVersion,8,
             &g_CDemonActorClassInfo);
  return;
}
