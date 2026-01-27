// Name: core_bat.cpp_staticInit_FUN_004146c0
// Address: 004146c0
// Address Range: [[004146c0, 004146e3]]
// Convention: __cdecl
// Signature: void core_bat.cpp_staticInit_FUN_004146c0(void)

#include "nocturne.h"

void __cdecl core_bat_cpp_staticInit_FUN_004146c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBatClassInfo,"CBat",core_bat_cpp_factoryFunc_FUN_00414790,
             &g_CBatClassVersion,4,&g_CDemonActorClassInfo);
  return;
}
