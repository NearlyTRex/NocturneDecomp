// Name: core_tvbat.cpp_staticInit_FUN_005e3e50
// Address: 005e3e50
// Address Range: [[005e3e50, 005e3e73]]
// Convention: __cdecl
// Signature: CDemonActorType * core_tvbat.cpp_staticInit_FUN_005e3e50(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_tvbat_cpp_staticInit_FUN_005e3e50(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTVBatClassInfo,"CTVBat",core_tvbat_cpp_FUN_005e3e80,
                      &g_CTVBatClassVersion,5,&g_CEnemyClassInfo);
  return pCVar1;
}
