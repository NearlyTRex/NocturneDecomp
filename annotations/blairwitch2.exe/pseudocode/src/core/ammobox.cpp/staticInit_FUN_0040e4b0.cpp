// Name: core_ammobox.cpp_staticInit_FUN_0040e4b0
// Address: 0040e4b0
// Address Range: [[0040e4b0, 0040e4d3]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_staticInit_FUN_0040e4b0(void)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_staticInit_FUN_0040e4b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CAmmoBoxClassInfo,"CAmmoBox",
             core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e4e0,&g_CAmmoBoxClassVersion,4,
             &g_CDemonActorClassInfo);
  return;
}
