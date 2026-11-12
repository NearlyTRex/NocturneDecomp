// Name: core_bwsearch.cpp_staticInit_FUN_005a8c90
// Address: 005a8c90
// Address Range: [[005a8c90, 005a8cb3]]
// Convention: unknown
// Signature: void core_bwsearch_cpp_staticInit_FUN_005a8c90(void)

#include "nocturne.h"

void core_bwsearch_cpp_staticInit_FUN_005a8c90(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CSearchPartyClassInfo,"GCSearchParty" + 1,
             core_bwsearch_cpp_factoryFuncSearchParty_FUN_005a8cc0,&g_CSearchPartyClassVersion,1,
             &g_CBasicNPCClassInfo);
  return;
}
