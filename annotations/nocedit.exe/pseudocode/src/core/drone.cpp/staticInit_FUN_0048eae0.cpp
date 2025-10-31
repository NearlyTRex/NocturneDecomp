// Name: core_drone.cpp_staticInit_FUN_0048eae0
// Address: 0048eae0
// Address Range: [[0048eae0, 0048eb03]]
// Convention: __cdecl
// Signature: CDemonActorType * core_drone.cpp_staticInit_FUN_0048eae0(void)
// Globals:
//   TerminatedCString s_CDrone_00622354
//   undefined4 g_CDroneClassVersion
//   CDemonActorType g_CDroneClassInfo
//   CDemonActorType g_CEnemyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_drone_cpp_staticInit_FUN_0048eae0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CDroneClassInfo,"CDrone",core_drone_cpp_FUN_0048eb10,
                      &g_CDroneClassVersion,2,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 0048eae0: PUSH 0x2cf2bb8
//   Label: core_drone.cpp_staticInit_FUN_0048eae0
//   XREF to: 02cf2bb8 (DATA)
// 0048eae5: PUSH 0x2
// 0048eae7: PUSH 0x672348
//   XREF to: 00672348 (DATA)
// 0048eaec: PUSH 0x48eb10
//   XREF to: 0048eb10 (DATA)
// 0048eaf1: PUSH 0x622354
//   XREF to: 00622354 (DATA)
// 0048eaf6: PUSH 0x2c9b2ec
//   XREF to: 02c9b2ec (DATA)
// 0048eafb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0048eb00: ADD ESP,0x18
// 0048eb03: RET
