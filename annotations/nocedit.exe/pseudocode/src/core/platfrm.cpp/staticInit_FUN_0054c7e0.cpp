// Name: core_platfrm.cpp_staticInit_FUN_0054c7e0
// Address: 0054c7e0
// Address Range: [[0054c7e0, 0054c803]]
// Convention: __cdecl
// Signature: CDemonActorType * core_platfrm.cpp_staticInit_FUN_0054c7e0(void)
// Globals:
//   TerminatedCString s_CPlatform_0063f756
//   undefined4 g_CPlatformClassVersion
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CPlatformClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_platfrm_cpp_staticInit_FUN_0054c7e0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CPlatformClassInfo,"CPlatform",core_platfrm_cpp_FUN_0054c810,
                      &g_CPlatformClassVersion,0xb,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 0054c7e0: PUSH 0x821ff8
//   Label: core_platfrm.cpp_staticInit_FUN_0054c7e0
//   XREF to: 00821ff8 (DATA)
// 0054c7e5: PUSH 0xb
// 0054c7e7: PUSH 0x680cbc
//   XREF to: 00680cbc (DATA)
// 0054c7ec: PUSH 0x54c810
//   XREF to: 0054c810 (DATA)
// 0054c7f1: PUSH 0x63f756
//   XREF to: 0063f756 (DATA)
// 0054c7f6: PUSH 0x30d5054
//   XREF to: 030d5054 (DATA)
// 0054c7fb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0054c800: ADD ESP,0x18
// 0054c803: RET
