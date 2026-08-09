// Name: core_conveyor.cpp_staticInit_FUN_0043aff0
// Address: 0043aff0
// Address Range: [[0043aff0, 0043b013]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_staticInit_FUN_0043aff0(void)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_staticInit_FUN_0043aff0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CConveyorActorType_0077bcc8,"CConveyor",
             core_conveyor_cpp_factoryFuncConveyor_FUN_0043b020,&g_INT_005ad380,2,
             &g_CPlatformActorType_01e42894);
  return;
}
