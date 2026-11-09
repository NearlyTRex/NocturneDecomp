// Name: core_spawner.cpp_staticInit_FUN_00563840
// Address: 00563840
// Address Range: [[00563840, 00563863]]
// Convention: unknown
// Signature: void core_spawner_cpp_staticInit_FUN_00563840(void)

#include "nocturne.h"

void core_spawner_cpp_staticInit_FUN_00563840(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CSpawnerClassInfo,"CSpawner",
             core_spawner_cpp_factoryFuncSpawner_FUN_00563870,&g_CSpawnerClassVersion,5,
             &g_CDemonActorClassInfo);
  return;
}
