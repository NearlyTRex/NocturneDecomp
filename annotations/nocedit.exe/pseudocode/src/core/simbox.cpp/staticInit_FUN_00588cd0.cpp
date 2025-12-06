// Name: core_simbox.cpp_staticInit_FUN_00588cd0
// Address: 00588cd0
// Address Range: [[00588cd0, 00588cf3]]
// Convention: __cdecl
// Signature: void core_simbox.cpp_staticInit_FUN_00588cd0(void)

#include "nocturne.h"

void __cdecl core_simbox_cpp_staticInit_FUN_00588cd0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CSimBoxClassInfo,"CSimBox",core_simbox_cpp_CSimBox_FUN_00588d00,
             &g_CSimBoxClassVersion,3,&g_CDemonActorClassInfo);
  return;
}
