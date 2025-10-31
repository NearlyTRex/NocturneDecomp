// Name: core_marquee.cpp_staticInit_FUN_0050baf0
// Address: 0050baf0
// Address Range: [[0050baf0, 0050bb13]]
// Convention: __cdecl
// Signature: CDemonActorType * core_marquee.cpp_staticInit_FUN_0050baf0(void)
// Globals:
//   TerminatedCString s_CMarquee_0063599a
//   int g_CMarqueeClassVersion = 0x1
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CMarqueeClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_marquee_cpp_staticInit_FUN_0050baf0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CMarqueeClassInfo,"CMarquee",core_marquee_cpp_FUN_0050bb20,
                      &g_CMarqueeClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 0050baf0: PUSH 0x821ff8
//   Label: core_marquee.cpp_staticInit_FUN_0050baf0
//   XREF to: 00821ff8 (DATA)
// 0050baf5: PUSH 0x1
// 0050baf7: PUSH 0x67d14c
//   XREF to: 0067d14c (DATA)
// 0050bafc: PUSH 0x50bb20
//   XREF to: 0050bb20 (DATA)
// 0050bb01: PUSH 0x63599a
//   XREF to: 0063599a (DATA)
// 0050bb06: PUSH 0x2f0cb20
//   XREF to: 02f0cb20 (DATA)
// 0050bb0b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0050bb10: ADD ESP,0x18
// 0050bb13: RET
