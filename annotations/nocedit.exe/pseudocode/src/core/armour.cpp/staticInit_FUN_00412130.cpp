// Name: core_armour.cpp_staticInit_FUN_00412130
// Address: 00412130
// Address Range: [[00412130, 00412153]]
// Convention: __cdecl
// Signature: CDemonActorType * core_armour.cpp_staticInit_FUN_00412130(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_armour_cpp_staticInit_FUN_00412130(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CArmourClassInfo,"CArmour",
                      core_armour_cpp_constructor_FUN_00412160,&g_CArmourClassVersion,1,
                      &g_CEnemyClassInfo);
  return pCVar1;
}
