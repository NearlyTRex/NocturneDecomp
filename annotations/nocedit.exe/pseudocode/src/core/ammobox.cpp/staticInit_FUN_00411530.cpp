// Name: core_ammobox.cpp_staticInit_FUN_00411530
// Address: 00411530
// Address Range: [[00411530, 00411553]]
// Convention: __cdecl
// Signature: CDemonActorType * core_ammobox.cpp_staticInit_FUN_00411530(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_ammobox_cpp_staticInit_FUN_00411530(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CAmmoBoxClassInfo,"CAmmoBox",
                      core_ammobox_cpp_constructor_FUN_00411560,&g_CAmmoBoxClassVersion,4,
                      &g_CDemonActorClassInfo);
  return pCVar1;
}
