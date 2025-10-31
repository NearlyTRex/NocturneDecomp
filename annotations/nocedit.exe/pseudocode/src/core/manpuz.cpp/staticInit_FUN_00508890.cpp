// Name: core_manpuz.cpp_staticInit_FUN_00508890
// Address: 00508890
// Address Range: [[00508890, 005088d6]]
// Convention: __cdecl
// Signature: CDemonActorType * core_manpuz.cpp_staticInit_FUN_00508890(void)
// Globals:
//   TerminatedCString s_CMansionPuzzleCircle_0063566d
//   TerminatedCString s_CMirrorHack_00635682
//   int g_CMansionPuzzleCircleClassVersion = 0x3
//   int g_CMirrorHackClassVersion = 0x1
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CMansionPuzzleCircleClassInfo
//   CDemonActorType g_CMirrorHackClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_manpuz_cpp_staticInit_FUN_00508890(void)

{
  CDemonActorType *pCVar1;
  
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CMansionPuzzleCircleClassInfo,"CMansionPuzzleCircle",
             core_manpuz_cpp_FUN_005088e0,&g_CMansionPuzzleCircleClassVersion,3,
             &g_CDemonActorClassInfo);
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CMirrorHackClassInfo,"CMirrorHack",core_manpuz_cpp_FUN_0050b0d0,
                      &g_CMirrorHackClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 00508890: PUSH 0x821ff8
//   Label: core_manpuz.cpp_staticInit_FUN_00508890
//   XREF to: 00821ff8 (DATA)
// 00508895: PUSH 0x3
// 00508897: PUSH 0x67d0d4
//   XREF to: 0067d0d4 (DATA)
// 0050889c: PUSH 0x5088e0
//   XREF to: 005088e0 (DATA)
// 005088a1: PUSH 0x63566d
//   XREF to: 0063566d (DATA)
// 005088a6: PUSH 0x2f0caa4
//   XREF to: 02f0caa4 (DATA)
// 005088ab: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005088b0: ADD ESP,0x18
// 005088b3: PUSH 0x821ff8
//   XREF to: 00821ff8 (DATA)
// 005088b8: PUSH 0x1
// 005088ba: PUSH 0x67d0d8
//   XREF to: 0067d0d8 (DATA)
// 005088bf: PUSH 0x50b0d0
//   XREF to: 0050b0d0 (DATA)
// 005088c4: PUSH 0x635682
//   XREF to: 00635682 (DATA)
// 005088c9: PUSH 0x2f0cae0
//   XREF to: 02f0cae0 (DATA)
// 005088ce: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005088d3: ADD ESP,0x18
// 005088d6: RET
