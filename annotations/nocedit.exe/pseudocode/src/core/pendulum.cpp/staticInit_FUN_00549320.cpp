// Name: core_pendulum.cpp_staticInit_FUN_00549320
// Address: 00549320
// Address Range: [[00549320, 00549343]]
// Convention: __cdecl
// Signature: CDemonActorType * core_pendulum.cpp_staticInit_FUN_00549320(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_pendulum_cpp_staticInit_FUN_00549320(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CPendulumClassInfo,"CPendulum",core_pendulum_cpp_FUN_00549350,
                      &g_CPendulumClassVersion,8,&g_CDemonActorClassInfo);
  return pCVar1;
}
