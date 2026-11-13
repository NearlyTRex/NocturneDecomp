// Name: core_simbox.cpp_staticInit_FUN_00562540
// Address: 00562540
// Address Range: [[00562540, 00562563]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_staticInit_FUN_00562540(void)

#include "nocturne.h"

void __cdecl core_simbox_cpp_staticInit_FUN_00562540(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CSimBoxClassInfo,"CSimBox",core_simbox_cpp_factoryFuncSimBox_FUN_00562570,
             &g_CSimBoxClassVersion,3,&g_CDemonActorClassInfo);
  return;
}
