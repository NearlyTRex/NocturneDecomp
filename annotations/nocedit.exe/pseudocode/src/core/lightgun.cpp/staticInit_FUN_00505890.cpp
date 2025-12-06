// Name: core_lightgun.cpp_staticInit_FUN_00505890
// Address: 00505890
// Address Range: [[00505890, 005058b3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_lightgun.cpp_staticInit_FUN_00505890(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_lightgun_cpp_staticInit_FUN_00505890(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CLightGunClassInfo,"CLightGun",core_lightgun_cpp_FUN_005058c0,
                      &g_CLightGunClassVersion,1,&g_CWeaponClassInfo);
  return pCVar1;
}
