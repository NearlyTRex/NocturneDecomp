// Name: core_passngr.cpp_staticInit_FUN_0050a3f0
// Address: 0050a3f0
// Address Range: [[0050a3f0, 0050a413]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_staticInit_FUN_0050a3f0(void)

#include "nocturne.h"

void __cdecl core_passngr_cpp_staticInit_FUN_0050a3f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CPassengerClassInfo,"CPassenger",
             core_passngr_cpp_factoryFuncPassenger_FUN_0050a420,&g_CPassengerClassVersion,6,
             &g_CNPCClassInfo);
  return;
}
