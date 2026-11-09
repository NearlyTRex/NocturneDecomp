// Name: core_ammobox.cpp_staticInit_FUN_0040e050
// Address: 0040e050
// Address Range: [[0040e050, 0040e073]]
// Convention: unknown
// Signature: void core_ammobox_cpp_staticInit_FUN_0040e050(void)

#include "nocturne.h"

void core_ammobox_cpp_staticInit_FUN_0040e050(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CAmmoBoxClassInfo,"CAmmoBox",
             core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e080,&g_CAmmoBoxClassVersion,4,
             &g_CDemonActorClassInfo);
  return;
}
