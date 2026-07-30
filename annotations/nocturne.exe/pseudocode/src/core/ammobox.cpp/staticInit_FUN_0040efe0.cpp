// Name: core_ammobox.cpp_staticInit_FUN_0040efe0
// Address: 0040efe0
// Address Range: [[0040efe0, 0040f003]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_staticInit_FUN_0040efe0(void)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_staticInit_FUN_0040efe0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CAmmoBoxActorType_007641f8,"CAmmoBox",
             core_ammobox_cpp_factoryFunc_FUN_0040f010,&g_INT_005aceb4,4,
             &g_CDemonActorActorType_00763e48);
  return;
}
