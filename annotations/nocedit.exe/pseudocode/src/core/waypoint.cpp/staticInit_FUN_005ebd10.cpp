// Name: core_waypoint.cpp_staticInit_FUN_005ebd10
// Address: 005ebd10
// Address Range: [[005ebd10, 005ebd33]]
// Convention: __cdecl
// Signature: CDemonActorType * core_waypoint.cpp_staticInit_FUN_005ebd10(void)
// Globals:
//   TerminatedCString s_CWayPoint_006574f7
//   int g_CWayPointClassVersion = 0x2
//   CDemonActorType g_CTriggerClassInfo
//   CDemonActorType g_CWayPointClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_waypoint_cpp_staticInit_FUN_005ebd10(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CWayPointClassInfo,"CWayPoint",core_waypoint_cpp_FUN_005ebe30,
                      &g_CWayPointClassVersion,2,&g_CTriggerClassInfo);
  return pCVar1;
}


// Assembly code:
// 005ebd10: PUSH 0x3f87458
//   Label: core_waypoint.cpp_staticInit_FUN_005ebd10
//   XREF to: 03f87458 (DATA)
// 005ebd15: PUSH 0x2
// 005ebd17: PUSH 0x68489c
//   XREF to: 0068489c (DATA)
// 005ebd1c: PUSH 0x5ebe30
//   XREF to: 005ebe30 (DATA)
// 005ebd21: PUSH 0x6574f7
//   XREF to: 006574f7 (DATA)
// 005ebd26: PUSH 0x3f958e4
//   XREF to: 03f958e4 (DATA)
// 005ebd2b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005ebd30: ADD ESP,0x18
// 005ebd33: RET
