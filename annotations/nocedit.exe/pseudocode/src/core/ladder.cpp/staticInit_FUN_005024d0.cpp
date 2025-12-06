// Name: core_ladder.cpp_staticInit_FUN_005024d0
// Address: 005024d0
// Address Range: [[005024d0, 005024f3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_ladder.cpp_staticInit_FUN_005024d0(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_ladder_cpp_staticInit_FUN_005024d0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CLadderClassInfo,"CLadder",core_ladder_cpp_FUN_00502500,
                      &g_CLadderClassVersion,2,&g_CDemonActorClassInfo);
  return pCVar1;
}
