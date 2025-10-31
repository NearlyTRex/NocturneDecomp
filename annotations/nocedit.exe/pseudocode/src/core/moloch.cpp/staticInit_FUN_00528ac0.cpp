// Name: core_moloch.cpp_staticInit_FUN_00528ac0
// Address: 00528ac0
// Address Range: [[00528ac0, 00528ae3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_moloch.cpp_staticInit_FUN_00528ac0(void)
// Globals:
//   TerminatedCString s_CMoloch_00639d2d
//   int g_CMolochClassVersion = 0x1
//   CDemonActorType g_CHeroClassInfo
//   CDemonActorType g_CMolochClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_moloch_cpp_staticInit_FUN_00528ac0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CMolochClassInfo,"CMoloch",core_moloch_cpp_FUN_00528af0,
                      &g_CMolochClassVersion,1,&g_CHeroClassInfo);
  return pCVar1;
}


// Assembly code:
// 00528ac0: PUSH 0x2db87d4
//   Label: core_moloch.cpp_staticInit_FUN_00528ac0
//   XREF to: 02db87d4 (DATA)
// 00528ac5: PUSH 0x1
// 00528ac7: PUSH 0x67d704
//   XREF to: 0067d704 (DATA)
// 00528acc: PUSH 0x528af0
//   XREF to: 00528af0 (DATA)
// 00528ad1: PUSH 0x639d2d
//   XREF to: 00639d2d (DATA)
// 00528ad6: PUSH 0x2f37f34
//   XREF to: 02f37f34 (DATA)
// 00528adb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00528ae0: ADD ESP,0x18
// 00528ae3: RET
