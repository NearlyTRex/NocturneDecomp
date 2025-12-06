// Name: core_svetlana.cpp_staticInit_FUN_005d87e0
// Address: 005d87e0
// Address Range: [[005d87e0, 005d8803]]
// Convention: __cdecl
// Signature: CDemonActorType * core_svetlana.cpp_staticInit_FUN_005d87e0(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_svetlana_cpp_staticInit_FUN_005d87e0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CSvetlanaClassInfo,"CSvetlana",core_svetlana_cpp_FUN_005d8810,
                      &g_CSvetlanaClassVersion,1,&g_CHeroClassInfo);
  return pCVar1;
}
