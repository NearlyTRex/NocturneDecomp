// Name: core_scat.cpp_staticInit_FUN_004fbb40
// Address: 004fbb40
// Address Range: [[004fbb40, 004fbb63]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_staticInit_FUN_004fbb40(void)

#include "nocturne.h"

void __cdecl core_scat_cpp_staticInit_FUN_004fbb40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CScatActorType_01e533d0,"CScat",core_scat_cpp_factoryFunc_FUN_004fbbd0,
             &INT_005be1e8,1,&g_CHeroActorType_01cae0ec);
  return;
}
