// Name: core_frankgen.cpp_staticInit_FUN_004d16b0
// Address: 004d16b0
// Address Range: [[004d16b0, 004d16d3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_frankgen.cpp_staticInit_FUN_004d16b0(void)
// Globals:
//   TerminatedCString s_CFrankenstienMachine_0062a8c5
//   int g_CFrankenstienMachineClassVersion = 0x1
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CFrankenstienMachineClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_frankgen_cpp_staticInit_FUN_004d16b0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CFrankenstienMachineClassInfo,"CFrankenstienMachine",
                      core_frankgen_cpp_FUN_004d16e0,&g_CFrankenstienMachineClassVersion,1,
                      &g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 004d16b0: PUSH 0x821ff8
//   Label: core_frankgen.cpp_staticInit_FUN_004d16b0
//   XREF to: 00821ff8 (DATA)
// 004d16b5: PUSH 0x1
// 004d16b7: PUSH 0x67b584
//   XREF to: 0067b584 (DATA)
// 004d16bc: PUSH 0x4d16e0
//   XREF to: 004d16e0 (DATA)
// 004d16c1: PUSH 0x62a8c5
//   XREF to: 0062a8c5 (DATA)
// 004d16c6: PUSH 0x2d7b7b4
//   XREF to: 02d7b7b4 (DATA)
// 004d16cb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004d16d0: ADD ESP,0x18
// 004d16d3: RET
