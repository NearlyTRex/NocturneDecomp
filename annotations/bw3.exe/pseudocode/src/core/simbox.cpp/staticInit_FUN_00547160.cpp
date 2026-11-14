// Name: core_simbox.cpp_staticInit_FUN_00547160
// Address: 00547160
// Address Range: [[00547160, 00547183]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_staticInit_FUN_00547160(void)

#include "nocturne.h"

void __cdecl core_simbox_cpp_staticInit_FUN_00547160(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CSimBoxClassInfo,"CSimBox",core_simbox_cpp_factoryFuncSimBox_FUN_00547190,
             &g_CSimBoxClassVersion,3,&g_CDemonActorClassInfo);
  return;
}
