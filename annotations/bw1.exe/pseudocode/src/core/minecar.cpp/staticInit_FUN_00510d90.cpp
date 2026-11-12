// Name: core_minecar.cpp_staticInit_FUN_00510d90
// Address: 00510d90
// Address Range: [[00510d90, 00510db3]]
// Convention: unknown
// Signature: void core_minecar_cpp_staticInit_FUN_00510d90(void)

#include "nocturne.h"

void core_minecar_cpp_staticInit_FUN_00510d90(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CMineCarClassInfo,"CMineCar",
             core_minecar_cpp_factoryFuncMineCar_FUN_00510dc0,&g_CMineCarClassVersion,1,
             &g_CPlatformClassInfo);
  return;
}
