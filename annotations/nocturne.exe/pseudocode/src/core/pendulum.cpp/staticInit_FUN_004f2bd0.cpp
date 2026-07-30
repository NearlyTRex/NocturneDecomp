// Name: core_pendulum.cpp_staticInit_FUN_004f2bd0
// Address: 004f2bd0
// Address Range: [[004f2bd0, 004f2bf3]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_staticInit_FUN_004f2bd0(void)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_staticInit_FUN_004f2bd0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CPendulumActorType_01e42858,"CPendulum",
             core_pendulum_cpp_factoryFunc_FUN_004f2c00,&INT_005be164,8,
             &g_CDemonActorActorType_00763e48);
  return;
}
