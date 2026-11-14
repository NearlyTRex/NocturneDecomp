// Name: core_bat.cpp_staticInit_FUN_00410ed0
// Address: 00410ed0
// Address Range: [[00410ed0, 00410ef3]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_staticInit_FUN_00410ed0(void)

#include "nocturne.h"

void __cdecl core_bat_cpp_staticInit_FUN_00410ed0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBatClassInfo,(char *)0x5cb656,core_bat_cpp_factoryFuncBat_FUN_00410fa0,
             &g_CBatClassVersion,4,&g_CDemonActorClassInfo);
  return;
}
