// Name: core_hino.cpp_staticInit_FUN_0059b610
// Address: 0059b610
// Address Range: [[0059b610, 0059b633]]
// Convention: unknown
// Signature: void core_hino_cpp_staticInit_FUN_0059b610(void)

#include "nocturne.h"

void core_hino_cpp_staticInit_FUN_0059b610(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CHinoClassInfo,"CHino",core_hino_cpp_factoryFuncHino_FUN_0059b640,
             &g_CHinoClassVersion,1,&g_CEnemyClassInfo);
  return;
}
