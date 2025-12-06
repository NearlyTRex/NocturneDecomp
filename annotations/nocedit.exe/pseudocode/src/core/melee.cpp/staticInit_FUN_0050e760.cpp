// Name: core_melee.cpp_staticInit_FUN_0050e760
// Address: 0050e760
// Address Range: [[0050e760, 0050e783]]
// Convention: __cdecl
// Signature: CDemonActorType * core_melee.cpp_staticInit_FUN_0050e760(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_melee_cpp_staticInit_FUN_0050e760(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CMeleeClassInfo,"CMelee",core_melee_cpp_FUN_0050e790,
                      &g_CMeleeClassVersion,7,&g_CWeaponClassInfo);
  return pCVar1;
}
