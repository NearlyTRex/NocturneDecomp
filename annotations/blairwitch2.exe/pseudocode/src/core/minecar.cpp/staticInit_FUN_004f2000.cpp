// Name: core_minecar.cpp_staticInit_FUN_004f2000
// Address: 004f2000
// Address Range: [[004f2000, 004f2023]]
// Convention: unknown
// Signature: void core_minecar_cpp_staticInit_FUN_004f2000(void)

#include "nocturne.h"

void core_minecar_cpp_staticInit_FUN_004f2000(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CMineCarClassInfo,"CMineCar",
             core_minecar_cpp_factoryFuncMineCar_FUN_004f2030,&g_CMineCarClassVersion,1,
             &g_CPlatformClassInfo);
  return;
}
