// Name: core_sentinel.cpp_staticInit_FUN_00567d40
// Address: 00567d40
// Address Range: [[00567d40, 00567d63]]
// Convention: __cdecl
// Signature: CDemonActorType * core_sentinel.cpp_staticInit_FUN_00567d40(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_sentinel_cpp_staticInit_FUN_00567d40(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CSentinelClassInfo,"CSentinel",core_sentinel_cpp_FUN_00567d70,
                      &g_CSentinelClassVersion,2,&g_CEnemyClassInfo);
  return pCVar1;
}
