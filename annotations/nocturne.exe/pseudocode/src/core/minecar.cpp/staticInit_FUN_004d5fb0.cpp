// Name: core_minecar.cpp_staticInit_FUN_004d5fb0
// Address: 004d5fb0
// Address Range: [[004d5fb0, 004d5fd3]]
// Convention: __cdecl
// Signature: void __cdecl core_minecar_cpp_staticInit_FUN_004d5fb0(void)

#include "nocturne.h"

void __cdecl core_minecar_cpp_staticInit_FUN_004d5fb0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CMineCarActorType_01cc90e4,"CMineCar",
             core_minecar_cpp_factoryFunc_FUN_004d5fe0,&INT_005baf5c,1,
             &g_CPlatformActorType_01e42894);
  return;
}
