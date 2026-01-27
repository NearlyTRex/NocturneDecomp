// Name: core_scat.cpp_staticInit_FUN_00556e00
// Address: 00556e00
// Address Range: [[00556e00, 00556e23]]
// Convention: __cdecl
// Signature: void core_scat.cpp_staticInit_FUN_00556e00(void)

#include "nocturne.h"

void __cdecl core_scat_cpp_staticInit_FUN_00556e00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CScatClassInfo,"CScat",core_scat_cpp_factoryFunc_FUN_00556e90,
             &g_CScatClassVersion,1,&g_CHeroClassInfo);
  return;
}
