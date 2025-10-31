// Name: core_trash.cpp_staticInit_FUN_005deb00
// Address: 005deb00
// Address Range: [[005deb00, 005deb23]]
// Convention: __cdecl
// Signature: CDemonActorType * core_trash.cpp_staticInit_FUN_005deb00(void)
// Globals:
//   TerminatedCString s_CTrash_00655566
//   int g_CTrashClassVersion = 0x1
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CTrashClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_trash_cpp_staticInit_FUN_005deb00(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTrashClassInfo,"CTrash",core_trash_cpp_FUN_005deb30,
                      &g_CTrashClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 005deb00: PUSH 0x821ff8
//   Label: core_trash.cpp_staticInit_FUN_005deb00
//   XREF to: 00821ff8 (DATA)
// 005deb05: PUSH 0x1
// 005deb07: PUSH 0x684338
//   XREF to: 00684338 (DATA)
// 005deb0c: PUSH 0x5deb30
//   XREF to: 005deb30 (DATA)
// 005deb11: PUSH 0x655566
//   XREF to: 00655566 (DATA)
// 005deb16: PUSH 0x3f8741c
//   XREF to: 03f8741c (DATA)
// 005deb1b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005deb20: ADD ESP,0x18
// 005deb23: RET
