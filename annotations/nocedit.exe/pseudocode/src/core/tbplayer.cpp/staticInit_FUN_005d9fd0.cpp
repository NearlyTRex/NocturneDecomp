// Name: core_tbplayer.cpp_staticInit_FUN_005d9fd0
// Address: 005d9fd0
// Address Range: [[005d9fd0, 005da016]]
// Convention: __cdecl
// Signature: CDemonActorType * core_tbplayer.cpp_staticInit_FUN_005d9fd0(void)
// Globals:
//   TerminatedCString s_CBassPlayer_00654b85
//   TerminatedCString s_CDrummer_00654b91
//   int g_CBassPlayerClassVersion = 0x1
//   int g_CDrummerClassVersion = 0x1
//   CDemonActorType g_CNPCClassInfo
//   CDemonActorType g_CBassPlayerClassInfo
//   CDemonActorType g_CDrummerClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_tbplayer_cpp_staticInit_FUN_005d9fd0(void)

{
  CDemonActorType *pCVar1;
  
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBassPlayerClassInfo,"CBassPlayer",core_tbplayer_cpp_FUN_005da020,
             &g_CBassPlayerClassVersion,1,&g_CNPCClassInfo);
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CDrummerClassInfo,"CDrummer",core_tbplayer_cpp_FUN_005da280,
                      &g_CDrummerClassVersion,1,&g_CNPCClassInfo);
  return pCVar1;
}


// Assembly code:
// 005d9fd0: PUSH 0x2fd8ce0
//   Label: core_tbplayer.cpp_staticInit_FUN_005d9fd0
//   XREF to: 02fd8ce0 (DATA)
// 005d9fd5: PUSH 0x1
// 005d9fd7: PUSH 0x684268
//   XREF to: 00684268 (DATA)
// 005d9fdc: PUSH 0x5da020
//   XREF to: 005da020 (DATA)
// 005d9fe1: PUSH 0x654b85
//   XREF to: 00654b85 (DATA)
// 005d9fe6: PUSH 0x3f6cc18
//   XREF to: 03f6cc18 (DATA)
// 005d9feb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005d9ff0: ADD ESP,0x18
// 005d9ff3: PUSH 0x2fd8ce0
//   XREF to: 02fd8ce0 (DATA)
// 005d9ff8: PUSH 0x1
// 005d9ffa: PUSH 0x68426c
//   XREF to: 0068426c (DATA)
// 005d9fff: PUSH 0x5da280
//   XREF to: 005da280 (DATA)
// 005da004: PUSH 0x654b91
//   XREF to: 00654b91 (DATA)
// 005da009: PUSH 0x3f6cc54
//   XREF to: 03f6cc54 (DATA)
// 005da00e: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005da013: ADD ESP,0x18
// 005da016: RET
