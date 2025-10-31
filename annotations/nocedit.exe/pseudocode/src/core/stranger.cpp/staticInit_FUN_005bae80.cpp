// Name: core_stranger.cpp_staticInit_FUN_005bae80
// Address: 005bae80
// Address Range: [[005bae80, 005baedf]]
// Convention: __cdecl
// Signature: CDemonActorType * core_stranger.cpp_staticInit_FUN_005bae80(void)
// Globals:
//   TerminatedCString s_CStranger_0065318c
//   int g_CStrangerClassVersion = 0x9
//   CDemonActorType g_CHeroClassInfo
//   undefined4 DAT_03f6bab0
//   undefined4 DAT_03f6bab4
//   undefined4 DAT_03f6bab8
//   undefined4 DAT_03f6babc
//   undefined4 DAT_03f6bac0
//   undefined4 DAT_03f6bac4
//   CDemonActorType g_CStrangerClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_stranger_cpp_staticInit_FUN_005bae80(void)

{
  CDemonActorType *pCVar1;
  
  _DAT_03f6bab0 = 0x3f05e354;
  _DAT_03f6bab4 = 0x3d656042;
  _DAT_03f6bab8 = 0x3e010625;
  _DAT_03f6babc = 0xbf05e354;
  _DAT_03f6bac0 = 0x3d656042;
  _DAT_03f6bac4 = 0x3e010625;
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CStrangerClassInfo,"CStranger",core_stranger_cpp_FUN_005bb0e0,
                      &g_CStrangerClassVersion,9,&g_CHeroClassInfo);
  return pCVar1;
}


// Assembly code:
// 005bae80: PUSH EBX
//   Label: core_stranger.cpp_staticInit_FUN_005bae80
// 005bae81: PUSH ESI
// 005bae82: PUSH 0x2db87d4
//   XREF to: 02db87d4 (DATA)
// 005bae87: PUSH 0x9
// 005bae89: MOV EDX,0x3f05e354
// 005bae8e: MOV ECX,0x3d656042
// 005bae93: PUSH 0x6841bc
//   XREF to: 006841bc (DATA)
// 005bae98: MOV EBX,0x3e010625
// 005bae9d: MOV ESI,0xbf05e354
// 005baea2: PUSH 0x5bb0e0
//   XREF to: 005bb0e0 (DATA)
// 005baea7: MOV dword ptr [0x03f6bab0],EDX
//   XREF to: 03f6bab0 (WRITE)
// 005baead: MOV dword ptr [0x03f6bab4],ECX
//   XREF to: 03f6bab4 (WRITE)
// 005baeb3: PUSH 0x65318c
//   XREF to: 0065318c (DATA)
// 005baeb8: MOV dword ptr [0x03f6bab8],EBX
//   XREF to: 03f6bab8 (WRITE)
// 005baebe: MOV dword ptr [0x03f6babc],ESI
//   XREF to: 03f6babc (WRITE)
// 005baec4: PUSH 0x3f6bb28
//   XREF to: 03f6bb28 (DATA)
// 005baec9: MOV dword ptr [0x03f6bac0],ECX
//   XREF to: 03f6bac0 (WRITE)
// 005baecf: MOV dword ptr [0x03f6bac4],EBX
//   XREF to: 03f6bac4 (WRITE)
// 005baed5: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005baeda: ADD ESP,0x18
// 005baedd: POP ESI
// 005baede: POP EBX
// 005baedf: RET
