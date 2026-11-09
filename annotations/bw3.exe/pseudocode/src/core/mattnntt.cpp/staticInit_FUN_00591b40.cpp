// Name: core_mattnntt.cpp_staticInit_FUN_00591b40
// Address: 00591b40
// Address Range: [[00591b40, 00591b63]]
// Convention: unknown
// Signature: void core_mattnntt_cpp_staticInit_FUN_00591b40(void)

#include "nocturne.h"

void core_mattnntt_cpp_staticInit_FUN_00591b40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CMattanntoteClassInfo,"CMattanntote",
             core_mattnntt_cpp_factoryFuncMattanntote_FUN_00591b70,&g_CMattanntoteClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
