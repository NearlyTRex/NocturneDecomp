// Name: core_bat.cpp_staticInit_FUN_00411910
// Address: 00411910
// Address Range: [[00411910, 00411933]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_staticInit_FUN_00411910(void)

#include "nocturne.h"

void __cdecl core_bat_cpp_staticInit_FUN_00411910(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBatClassInfo,"CBat",core_bat_cpp_factoryFuncBat_FUN_004119e0,
             &g_CBatClassVersion,4,&g_CDemonActorClassInfo);
  return;
}
