// Name: core_gasmask.cpp_staticInit_FUN_004e5c90
// Address: 004e5c90
// Address Range: [[004e5c90, 004e5cb3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_gasmask.cpp_staticInit_FUN_004e5c90(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_gasmask_cpp_staticInit_FUN_004e5c90(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CGasMaskClassInfo,"CGasMask",core_gasmask_cpp_FUN_004e5cc0,
                      &g_CGasMaskClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}
