// Name: core_vessel.cpp_staticInit_FUN_005e8df0
// Address: 005e8df0
// Address Range: [[005e8df0, 005e8e13]]
// Convention: __cdecl
// Signature: CDemonActorType * core_vessel.cpp_staticInit_FUN_005e8df0(void)
// Globals:
//   TerminatedCString s_CCryptVessel_00656fe1
//   int g_CCryptVesselClassVersion = 0x4
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CCryptVesselClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_vessel_cpp_staticInit_FUN_005e8df0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CCryptVesselClassInfo,"CCryptVessel",core_vessel_cpp_FUN_005e8e20,
                      &g_CCryptVesselClassVersion,4,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 005e8df0: PUSH 0x821ff8
//   Label: core_vessel.cpp_staticInit_FUN_005e8df0
//   XREF to: 00821ff8 (DATA)
// 005e8df5: PUSH 0x4
// 005e8df7: PUSH 0x6844c8
//   XREF to: 006844c8 (DATA)
// 005e8dfc: PUSH 0x5e8e20
//   XREF to: 005e8e20 (DATA)
// 005e8e01: PUSH 0x656fe1
//   XREF to: 00656fe1 (DATA)
// 005e8e06: PUSH 0x3f875a0
//   XREF to: 03f875a0 (DATA)
// 005e8e0b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005e8e10: ADD ESP,0x18
// 005e8e13: RET
