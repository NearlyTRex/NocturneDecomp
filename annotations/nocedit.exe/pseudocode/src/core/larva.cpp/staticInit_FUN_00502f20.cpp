// Name: core_larva.cpp_staticInit_FUN_00502f20
// Address: 00502f20
// Address Range: [[00502f20, 00502f43]]
// Convention: __cdecl
// Signature: CDemonActorType * core_larva.cpp_staticInit_FUN_00502f20(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_larva_cpp_staticInit_FUN_00502f20(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CLarvaClassInfo,"CLarva",core_larva_cpp_FUN_00502f50,
                      &g_CLarvaClassVersion,2,&g_CEnemyClassInfo);
  return pCVar1;
}
