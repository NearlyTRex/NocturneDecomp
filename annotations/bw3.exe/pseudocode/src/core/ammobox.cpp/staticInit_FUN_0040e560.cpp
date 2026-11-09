// Name: core_ammobox.cpp_staticInit_FUN_0040e560
// Address: 0040e560
// Address Range: [[0040e560, 0040e583]]
// Convention: unknown
// Signature: void core_ammobox_cpp_staticInit_FUN_0040e560(void)

#include "nocturne.h"

void core_ammobox_cpp_staticInit_FUN_0040e560(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CAmmoBoxClassInfo,"CAmmoBox",
             core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e590,&g_CAmmoBoxClassVersion,4,
             &g_CDemonActorClassInfo);
  return;
}
