// Name: core_crossbow.cpp_staticInit_FUN_00439d00
// Address: 00439d00
// Address Range: [[00439d00, 00439d23]]
// Convention: unknown
// Signature: void core_crossbow_cpp_staticInit_FUN_00439d00(void)

#include "nocturne.h"

void core_crossbow_cpp_staticInit_FUN_00439d00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CCrateClassInfo,"CCrate",core_crossbow_cpp_factoryFuncCrate_FUN_00439d30,
             &g_CCrateClassVersion,2,&g_CDemonActorClassInfo);
  return;
}
