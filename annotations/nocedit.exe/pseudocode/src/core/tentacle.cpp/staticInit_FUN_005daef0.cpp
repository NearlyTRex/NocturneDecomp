// Name: core_tentacle.cpp_staticInit_FUN_005daef0
// Address: 005daef0
// Address Range: [[005daef0, 005daf13]]
// Convention: __cdecl
// Signature: CDemonActorType * core_tentacle.cpp_staticInit_FUN_005daef0(void)
// Globals:
//   TerminatedCString s_CTentacle_00654d94
//   undefined4 g_CTentacleClassVersion
//   CDemonActorType g_CEnemyClassInfo
//   CDemonActorType g_CTentacleClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_tentacle_cpp_staticInit_FUN_005daef0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTentacleClassInfo,"CTentacle",core_tentacle_cpp_FUN_005daf20,
                      &g_CTentacleClassVersion,2,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 005daef0: PUSH 0x2cf2bb8
//   Label: core_tentacle.cpp_staticInit_FUN_005daef0
//   XREF to: 02cf2bb8 (DATA)
// 005daef5: PUSH 0x2
// 005daef7: PUSH 0x6842c8
//   XREF to: 006842c8 (DATA)
// 005daefc: PUSH 0x5daf20
//   XREF to: 005daf20 (DATA)
// 005daf01: PUSH 0x654d94
//   XREF to: 00654d94 (DATA)
// 005daf06: PUSH 0x3f6cd18
//   XREF to: 03f6cd18 (DATA)
// 005daf0b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005daf10: ADD ESP,0x18
// 005daf13: RET
