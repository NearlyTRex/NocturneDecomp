// Name: core_moloch.cpp_staticInit_FUN_00520290
// Address: 00520290
// Address Range: [[00520290, 005202b3]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_staticInit_FUN_00520290(void)

#include "nocturne.h"

void __cdecl core_moloch_cpp_staticInit_FUN_00520290(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CMolochClassInfo,"CMoloch",core_moloch_cpp_factoryFuncMoloch_FUN_005202c0,
             &g_CMolochClassVersion,1,&g_CHeroClassInfo);
  return;
}
