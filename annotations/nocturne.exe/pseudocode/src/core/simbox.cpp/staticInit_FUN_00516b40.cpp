// Name: core_simbox.cpp_staticInit_FUN_00516b40
// Address: 00516b40
// Address Range: [[00516b40, 00516b63]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_staticInit_FUN_00516b40(void)

#include "nocturne.h"

void __cdecl core_simbox_cpp_staticInit_FUN_00516b40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CSimBoxClassInfo,"CSimBox",core_simbox_cpp_factoryFuncSimBox_FUN_00516b70,
             &g_CSimBoxClassVersion,3,&g_CDemonActorClassInfo);
  return;
}
