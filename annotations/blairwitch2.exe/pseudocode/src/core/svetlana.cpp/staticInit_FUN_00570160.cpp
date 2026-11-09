// Name: core_svetlana.cpp_staticInit_FUN_00570160
// Address: 00570160
// Address Range: [[00570160, 00570183]]
// Convention: unknown
// Signature: void core_svetlana_cpp_staticInit_FUN_00570160(void)

#include "nocturne.h"

void core_svetlana_cpp_staticInit_FUN_00570160(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CSvetlanaClassInfo,"CSvetlana",
             core_svetlana_cpp_factoryFuncSvetlana_FUN_00570190,&g_CSvetlanaClassVersion,1,
             &g_CHeroClassInfo);
  return;
}
