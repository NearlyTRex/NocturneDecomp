// Name: core_cow.cpp_staticInit_FUN_00438430
// Address: 00438430
// Address Range: [[00438430, 00438453]]
// Convention: unknown
// Signature: void core_cow_cpp_staticInit_FUN_00438430(void)

#include "nocturne.h"

void core_cow_cpp_staticInit_FUN_00438430(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CConveyorClassInfo,"CConveyor",
             core_cow_cpp_factoryFuncConveyor_FUN_00438460,&g_CConveyorClassVersion,2,
             &g_CPlatformClassInfo);
  return;
}
