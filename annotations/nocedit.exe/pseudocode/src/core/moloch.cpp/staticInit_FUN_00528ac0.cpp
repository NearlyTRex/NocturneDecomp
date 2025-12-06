// Name: core_moloch.cpp_staticInit_FUN_00528ac0
// Address: 00528ac0
// Address Range: [[00528ac0, 00528ae3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_moloch.cpp_staticInit_FUN_00528ac0(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_moloch_cpp_staticInit_FUN_00528ac0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CMolochClassInfo,"CMoloch",core_moloch_cpp_FUN_00528af0,
                      &g_CMolochClassVersion,1,&g_CHeroClassInfo);
  return pCVar1;
}
