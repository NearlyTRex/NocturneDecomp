// Name: core_moloch.cpp_staticInit_FUN_00528ac0
// Address: 00528ac0
// Address Range: [[00528ac0, 00528ae3]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_staticInit_FUN_00528ac0(void)

#include "nocturne.h"

void __cdecl core_moloch_cpp_staticInit_FUN_00528ac0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CMolochClassInfo,"CMoloch",core_moloch_cpp_factoryFuncMoloch_FUN_00528af0,
             &g_CMolochClassVersion,1,&g_CHeroClassInfo);
  return;
}
