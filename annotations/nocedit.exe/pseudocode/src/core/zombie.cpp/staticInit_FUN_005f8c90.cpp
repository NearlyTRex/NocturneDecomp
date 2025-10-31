// Name: core_zombie.cpp_staticInit_FUN_005f8c90
// Address: 005f8c90
// Address Range: [[005f8c90, 005f8cb3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_zombie.cpp_staticInit_FUN_005f8c90(void)
// Globals:
//   TerminatedCString s_CZombie_00658425
//   int g_CZombieClassVersion = 0xb
//   CDemonActorType g_CEnemyClassInfo
//   CDemonActorType g_CZombieClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_zombie_cpp_staticInit_FUN_005f8c90(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CZombieClassInfo,"CZombie",core_zombie_cpp_FUN_005f8fa0,
                      &g_CZombieClassVersion,0xb,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 005f8c90: PUSH 0x2cf2bb8
//   Label: core_zombie.cpp_staticInit_FUN_005f8c90
//   XREF to: 02cf2bb8 (DATA)
// 005f8c95: PUSH 0xb
// 005f8c97: PUSH 0x6849b0
//   XREF to: 006849b0 (DATA)
// 005f8c9c: PUSH 0x5f8fa0
//   XREF to: 005f8fa0 (DATA)
// 005f8ca1: PUSH 0x658425
//   XREF to: 00658425 (DATA)
// 005f8ca6: PUSH 0x3f9ad20
//   XREF to: 03f9ad20 (DATA)
// 005f8cab: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005f8cb0: ADD ESP,0x18
// 005f8cb3: RET
