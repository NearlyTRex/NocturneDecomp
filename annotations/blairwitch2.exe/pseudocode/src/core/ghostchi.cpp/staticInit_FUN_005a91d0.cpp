// Name: core_ghostchi.cpp_staticInit_FUN_005a91d0
// Address: 005a91d0
// Address Range: [[005a91d0, 005a91f3]]
// Convention: __cdecl
// Signature: void __cdecl core_ghostchi_cpp_staticInit_FUN_005a91d0(void)

#include "nocturne.h"

void __cdecl core_ghostchi_cpp_staticInit_FUN_005a91d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CGhostChildClassInfo,"CGhostChild",
             core_ghostchi_cpp_factoryFuncGhostChild_FUN_005a9200,&g_CGhostChildClassVersion,1,
             &g_CBasicEnemyClassInfo);
  return;
}
