// Name: core_npc.cpp_staticInit_FUN_004ee8f0
// Address: 004ee8f0
// Address Range: [[004ee8f0, 004ee913]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_staticInit_FUN_004ee8f0(void)

#include "nocturne.h"

void __cdecl core_npc_cpp_staticInit_FUN_004ee8f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CNPCActorType_01d46820,"CNPC",core_npc_cpp_factoryFunc_FUN_004ee920,
             &INT_005be074,4,&g_CCharacterActorType_00765a60);
  return;
}
