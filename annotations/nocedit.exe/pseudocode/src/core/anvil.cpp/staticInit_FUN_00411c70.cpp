// Name: core_anvil.cpp_staticInit_FUN_00411c70
// Address: 00411c70
// Address Range: [[00411c70, 00411c93]]
// Convention: __cdecl
// Signature: CDemonActorType * core_anvil.cpp_staticInit_FUN_00411c70(void)
// Globals:
//   TerminatedCString s_CAnvil_00614cf3
//   int g_CAnvilClassVersion = 0x1
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CAnvilClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_anvil_cpp_staticInit_FUN_00411c70(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CAnvilClassInfo,"CAnvil",core_anvil_cpp_constructor_FUN_00411ca0,
                      &g_CAnvilClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 00411c70: PUSH 0x821ff8
//   Label: core_anvil.cpp_staticInit_FUN_00411c70
//   XREF to: 00821ff8 (DATA)
// 00411c75: PUSH 0x1
// 00411c77: PUSH 0x66e3e8
//   XREF to: 0066e3e8 (DATA)
// 00411c7c: PUSH 0x411ca0
//   XREF to: 00411ca0 (DATA)
// 00411c81: PUSH 0x614cf3
//   XREF to: 00614cf3 (DATA)
// 00411c86: PUSH 0x8223e4
//   XREF to: 008223e4 (DATA)
// 00411c8b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00411c90: ADD ESP,0x18
// 00411c93: RET
