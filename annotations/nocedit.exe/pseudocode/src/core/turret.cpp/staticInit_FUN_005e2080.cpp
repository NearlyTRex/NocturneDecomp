// Name: core_turret.cpp_staticInit_FUN_005e2080
// Address: 005e2080
// Address Range: [[005e2080, 005e20a3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_turret.cpp_staticInit_FUN_005e2080(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_turret_cpp_staticInit_FUN_005e2080(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTurretClassInfo,"CTurret",core_turret_cpp_FUN_005e20b0,
                      &g_CTurretClassVersion,2,&g_CWeaponClassInfo);
  return pCVar1;
}
