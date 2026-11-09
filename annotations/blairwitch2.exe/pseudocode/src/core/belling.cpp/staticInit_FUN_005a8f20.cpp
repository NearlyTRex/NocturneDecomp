// Name: core_belling.cpp_staticInit_FUN_005a8f20
// Address: 005a8f20
// Address Range: [[005a8f20, 005a8f43]]
// Convention: unknown
// Signature: void core_belling_cpp_staticInit_FUN_005a8f20(void)

#include "nocturne.h"

void core_belling_cpp_staticInit_FUN_005a8f20(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBellingClassInfo,"CBelling",
             core_belling_cpp_factoryFuncBelling_FUN_005a8f50,&g_CBellingClassVersion,1,
             &g_CBasicNPCClassInfo);
  return;
}
