// Name: core_enemy.cpp_staticInit_FUN_004a94d0
// Address: 004a94d0
// Address Range: [[004a94d0, 004a94f0]]
// Convention: __cdecl
// Signature: CDemonActorType * core_enemy.cpp_staticInit_FUN_004a94d0(void)
// Globals:
//   TerminatedCString s_CEnemy_00624302
//   int g_CEnemyClassVersion = 0xa
//   CDemonActorType g_CCharacterClassInfo
//   CDemonActorType g_CEnemyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_enemy_cpp_staticInit_FUN_004a94d0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CEnemyClassInfo,"CEnemy",(void *)0x0,&g_CEnemyClassVersion,10,
                      &g_CCharacterClassInfo);
  return pCVar1;
}


// Assembly code:
// 004a94d0: PUSH 0x823c14
//   Label: core_enemy.cpp_staticInit_FUN_004a94d0
//   XREF to: 00823c14 (DATA)
// 004a94d5: PUSH 0xa
// 004a94d7: PUSH 0x67937c
//   XREF to: 0067937c (DATA)
// 004a94dc: PUSH 0x0
// 004a94de: PUSH 0x624302
//   XREF to: 00624302 (DATA)
// 004a94e3: PUSH 0x2cf2bb8
//   XREF to: 02cf2bb8 (DATA)
// 004a94e8: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004a94ed: ADD ESP,0x18
// 004a94f0: RET
