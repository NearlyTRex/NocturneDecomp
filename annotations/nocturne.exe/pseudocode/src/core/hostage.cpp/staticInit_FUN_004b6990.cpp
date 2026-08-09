// Name: core_hostage.cpp_staticInit_FUN_004b6990
// Address: 004b6990
// Address Range: [[004b6990, 004b69b3]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_staticInit_FUN_004b6990(void)

#include "nocturne.h"

void __cdecl core_hostage_cpp_staticInit_FUN_004b6990(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CHostageActorType_01cae1a4,"CHostage",
             core_hostage_cpp_factoryFuncHostage_FUN_004b69c0,&g_INT_005ba980,0xc,
             &g_CNPCActorType_01d46820);
  return;
}
