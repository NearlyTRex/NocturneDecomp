// Name: core_teleport.cpp_staticInit_FUN_005da6e0
// Address: 005da6e0
// Address Range: [[005da6e0, 005da726]]
// Convention: __cdecl
// Signature: CDemonActorType * core_teleport.cpp_staticInit_FUN_005da6e0(void)
// Globals:
//   TerminatedCString s_CTeleportDest_00654c13
//   TerminatedCString s_CTeleport_00654c21
//   int g_CTeleportDestClassVersion = 0x1
//   int g_CTeleportClassVersion = 0x1
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CTeleportDestClassInfo
//   CDemonActorType g_CTeleportClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_teleport_cpp_staticInit_FUN_005da6e0(void)

{
  CDemonActorType *pCVar1;
  
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CTeleportDestClassInfo,"CTeleportDest",core_teleport_cpp_FUN_005da730,
             &g_CTeleportDestClassVersion,1,&g_CDemonActorClassInfo);
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTeleportClassInfo,"CTeleport",core_teleport_cpp_FUN_005da9a0,
                      &g_CTeleportClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 005da6e0: PUSH 0x821ff8
//   Label: core_teleport.cpp_staticInit_FUN_005da6e0
//   XREF to: 00821ff8 (DATA)
// 005da6e5: PUSH 0x1
// 005da6e7: PUSH 0x684294
//   XREF to: 00684294 (DATA)
// 005da6ec: PUSH 0x5da730
//   XREF to: 005da730 (DATA)
// 005da6f1: PUSH 0x654c13
//   XREF to: 00654c13 (DATA)
// 005da6f6: PUSH 0x3f6cc90
//   XREF to: 03f6cc90 (DATA)
// 005da6fb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005da700: ADD ESP,0x18
// 005da703: PUSH 0x821ff8
//   XREF to: 00821ff8 (DATA)
// 005da708: PUSH 0x1
// 005da70a: PUSH 0x684298
//   XREF to: 00684298 (DATA)
// 005da70f: PUSH 0x5da9a0
//   XREF to: 005da9a0 (DATA)
// 005da714: PUSH 0x654c21
//   XREF to: 00654c21 (DATA)
// 005da719: PUSH 0x3f6cccc
//   XREF to: 03f6cccc (DATA)
// 005da71e: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005da723: ADD ESP,0x18
// 005da726: RET
