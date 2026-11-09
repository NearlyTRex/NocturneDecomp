// Name: core_passngr.cpp_staticInit_FUN_00532710
// Address: 00532710
// Address Range: [[00532710, 00532733]]
// Convention: unknown
// Signature: void core_passngr_cpp_staticInit_FUN_00532710(void)

#include "nocturne.h"

void core_passngr_cpp_staticInit_FUN_00532710(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CPassengerClassInfo,"CPassenger",
             core_passngr_cpp_factoryFuncPassenger_FUN_00532740,&g_CPassengerClassVersion,6,
             &g_CNPCClassInfo);
  return;
}
