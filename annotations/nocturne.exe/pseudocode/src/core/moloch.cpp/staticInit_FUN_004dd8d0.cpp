// Name: core_moloch.cpp_staticInit_FUN_004dd8d0
// Address: 004dd8d0
// Address Range: [[004dd8d0, 004dd8f3]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_staticInit_FUN_004dd8d0(void)

#include "nocturne.h"

void __cdecl core_moloch_cpp_staticInit_FUN_004dd8d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CMolochActorType_01ccdc14,"CMoloch",core_moloch_cpp_FUN_004dd900,
             &INT_005bb144,1,&g_CHeroActorType_01cae0ec);
  return;
}
