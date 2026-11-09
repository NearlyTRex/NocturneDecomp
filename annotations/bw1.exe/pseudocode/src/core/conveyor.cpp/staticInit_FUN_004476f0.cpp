// Name: core_conveyor.cpp_staticInit_FUN_004476f0
// Address: 004476f0
// Address Range: [[004476f0, 00447713]]
// Convention: unknown
// Signature: void core_conveyor_cpp_staticInit_FUN_004476f0(void)

#include "nocturne.h"

void core_conveyor_cpp_staticInit_FUN_004476f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CConveyorClassInfo,"CConveyor",
             core_conveyor_cpp_factoryFuncConveyor_FUN_00447720,&g_CConveyorClassVersion,2,
             &g_CPlatformClassInfo);
  return;
}
