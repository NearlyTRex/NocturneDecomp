// Name: core_larva.cpp_staticInit_FUN_00502f20
// Address: 00502f20
// Address Range: [[00502f20, 00502f43]]
// Convention: __cdecl
// Signature: CDemonActorType * core_larva.cpp_staticInit_FUN_00502f20(void)
// Globals:
//   TerminatedCString s_CLarva_00630ec3
//   undefined4 g_CLarvaClassVersion
//   CDemonActorType g_CEnemyClassInfo
//   CDemonActorType g_CLarvaClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_larva_cpp_staticInit_FUN_00502f20(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CLarvaClassInfo,"CLarva",core_larva_cpp_FUN_00502f50,
                      &g_CLarvaClassVersion,2,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 00502f20: PUSH 0x2cf2bb8
//   Label: core_larva.cpp_staticInit_FUN_00502f20
//   XREF to: 02cf2bb8 (DATA)
// 00502f25: PUSH 0x2
// 00502f27: PUSH 0x67cf5c
//   XREF to: 0067cf5c (DATA)
// 00502f2c: PUSH 0x502f50
//   XREF to: 00502f50 (DATA)
// 00502f31: PUSH 0x630ec3
//   XREF to: 00630ec3 (DATA)
// 00502f36: PUSH 0x2dcd814
//   XREF to: 02dcd814 (DATA)
// 00502f3b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00502f40: ADD ESP,0x18
// 00502f43: RET
