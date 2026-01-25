// Name: core_npc.cpp_staticInit_FUN_00544770
// Address: 00544770
// Address Range: [[00544770, 00544793]]
// Convention: __cdecl
// Signature: CDemonActorType * core_npc.cpp_staticInit_FUN_00544770(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_npc_cpp_staticInit_FUN_00544770(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CNPCClassInfo,"CNPC",core_npc_cpp_CNPC_FUN_005447a0,
                      &g_CNPCClassVersion,4,&g_CCharacterClassInfo);
  return pCVar1;
}
