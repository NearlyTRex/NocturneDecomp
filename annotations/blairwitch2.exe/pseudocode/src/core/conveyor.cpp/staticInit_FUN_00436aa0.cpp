// Name: core_conveyor.cpp_staticInit_FUN_00436aa0
// Address: 00436aa0
// Address Range: [[00436aa0, 00436ac3]]
// Convention: unknown
// Signature: void core_conveyor_cpp_staticInit_FUN_00436aa0(void)

#include "nocturne.h"

void core_conveyor_cpp_staticInit_FUN_00436aa0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CConstructClassInfo,"CConstruct",
             core_conveyor_cpp_factoryFuncConstruct_FUN_00436ad0,&g_CConstructClassVersion,3,
             &g_CEnemyClassInfo);
  return;
}
