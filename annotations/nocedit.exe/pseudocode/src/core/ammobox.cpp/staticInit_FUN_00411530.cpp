// Name: core_ammobox.cpp_staticInit_FUN_00411530
// Address: 00411530
// Address Range: [[00411530, 00411553]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_staticInit_FUN_00411530(void)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_staticInit_FUN_00411530(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CAmmoBoxClassInfo,"CAmmoBox",
             core_ammobox_cpp_factoryFuncAmmoBox_FUN_00411560,&g_CAmmoBoxClassVersion,4,
             &g_CDemonActorClassInfo);
  return;
}
