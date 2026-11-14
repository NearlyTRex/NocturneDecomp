// Name: core_simbox.cpp_staticInit_FUN_0053ff50
// Address: 0053ff50
// Address Range: [[0053ff50, 0053ff73]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_staticInit_FUN_0053ff50(void)

#include "nocturne.h"

void __cdecl core_simbox_cpp_staticInit_FUN_0053ff50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CSimBoxClassInfo,"CSimBox",core_simbox_cpp_factoryFuncSimBox_FUN_0053ff80,
             &g_CSimBoxClassVersion,3,&g_CDemonActorClassInfo);
  return;
}
