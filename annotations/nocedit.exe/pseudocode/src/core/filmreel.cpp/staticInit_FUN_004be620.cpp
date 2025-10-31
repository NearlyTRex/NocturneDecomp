// Name: core_filmreel.cpp_staticInit_FUN_004be620
// Address: 004be620
// Address Range: [[004be620, 004be666]]
// Convention: __cdecl
// Signature: CDemonActorType * core_filmreel.cpp_staticInit_FUN_004be620(void)
// Globals:
//   TerminatedCString s_CFilmReel_00629a95
//   TerminatedCString s_CFilmProjector_00629a9f
//   int g_CFilmReelClassVersion = 0x2
//   int g_CFilmProjectorClassVersion = 0x2
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CActorDestinationClassInfo
//   CDemonActorType g_CFilmReelClassInfo
//   CDemonActorType g_CFilmProjectorClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_filmreel_cpp_staticInit_FUN_004be620(void)

{
  CDemonActorType *pCVar1;
  
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CFilmReelClassInfo,"CFilmReel",core_filmreel_cpp_FUN_004be670,
             &g_CFilmReelClassVersion,2,&g_CDemonActorClassInfo);
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CFilmProjectorClassInfo,"CFilmProjector",
                      core_filmreel_cpp_FUN_004bea00,&g_CFilmProjectorClassVersion,2,
                      &g_CActorDestinationClassInfo);
  return pCVar1;
}


// Assembly code:
// 004be620: PUSH 0x821ff8
//   Label: core_filmreel.cpp_staticInit_FUN_004be620
//   XREF to: 00821ff8 (DATA)
// 004be625: PUSH 0x2
// 004be627: PUSH 0x67a2f8
//   XREF to: 0067a2f8 (DATA)
// 004be62c: PUSH 0x4be670
//   XREF to: 004be670 (DATA)
// 004be631: PUSH 0x629a95
//   XREF to: 00629a95 (DATA)
// 004be636: PUSH 0x2d12d38
//   XREF to: 02d12d38 (DATA)
// 004be63b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004be640: ADD ESP,0x18
// 004be643: PUSH 0x20a483c
//   XREF to: 020a483c (DATA)
// 004be648: PUSH 0x2
// 004be64a: PUSH 0x67a2fc
//   XREF to: 0067a2fc (DATA)
// 004be64f: PUSH 0x4bea00
//   XREF to: 004bea00 (DATA)
// 004be654: PUSH 0x629a9f
//   XREF to: 00629a9f (DATA)
// 004be659: PUSH 0x2d12d74
//   XREF to: 02d12d74 (DATA)
// 004be65e: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004be663: ADD ESP,0x18
// 004be666: RET
