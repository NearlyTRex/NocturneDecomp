// Name: core_crossbow.cpp_staticInit_FUN_00448c00
// Address: 00448c00
// Address Range: [[00448c00, 00448c23]]
// Convention: __cdecl
// Signature: CDemonActorType * core_crossbow.cpp_staticInit_FUN_00448c00(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_crossbow_cpp_staticInit_FUN_00448c00(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CCrossbowClassInfo,"CCrossbow",core_crossbow_cpp_FUN_00448c30,
                      &g_CCrossbowClassVersion,1,&g_CWeaponClassInfo);
  return pCVar1;
}
