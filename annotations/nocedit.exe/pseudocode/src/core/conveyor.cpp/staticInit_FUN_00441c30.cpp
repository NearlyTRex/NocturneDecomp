// Name: core_conveyor.cpp_staticInit_FUN_00441c30
// Address: 00441c30
// Address Range: [[00441c30, 00441c53]]
// Convention: __cdecl
// Signature: void core_conveyor.cpp_staticInit_FUN_00441c30(void)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_staticInit_FUN_00441c30(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CConveyorClassInfo,"CConveyor",core_conveyor_cpp_factoryFunc_FUN_00441c60,
             &g_CConveyorClassVersion,2,&g_CPlatformClassInfo);
  return;
}
