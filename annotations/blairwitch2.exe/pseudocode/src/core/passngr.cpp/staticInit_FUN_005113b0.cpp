// Name: core_passngr.cpp_staticInit_FUN_005113b0
// Address: 005113b0
// Address Range: [[005113b0, 005113d3]]
// Convention: unknown
// Signature: void core_passngr_cpp_staticInit_FUN_005113b0(void)

#include "nocturne.h"

void core_passngr_cpp_staticInit_FUN_005113b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CPassengerClassInfo,"CPassenger",
             core_passngr_cpp_factoryFuncPassenger_FUN_005113e0,&g_CPassengerClassVersion,6,
             &g_CNPCClassInfo);
  return;
}
